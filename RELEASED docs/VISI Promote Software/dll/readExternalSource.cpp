#include "stdafx.h"
#include "dll.h"
#include "readSchema.h"

#include <afxsock.h>		// MFC socket extensions
#include <afxinet.h>

static	char	returned_when_eof = ';';
MEMORY_BUFFER	* startBuffer = NULL, * currentBuffer = NULL, * previousCurrentBuffer;

int				previousCurrentIndex, line, column;
bool			eof;
char			* lastRValue;

	
void	clearBuffer()
{
	while  (startBuffer) {
		MEMORY_BUFFER	* buffer = startBuffer;

		startBuffer = startBuffer->next;
		free(buffer);
	}

	currentBuffer = NULL;
	eof = true;
	line = 1;
	column = 1;
}


int		readString(int type, char* string, CString * info)
{
	//
	clearBuffer();

	switch  (type) {
		case  SET__2:
			(* info) += "String input for file _2, expected type EXPRESS Schema\r\n";
			break;
		case  SET__5:
			(* info) += "String input for file _5, expected type EXPRESS Schema\r\n";
			break;
		case  SET__7:
			(* info) += "String input for file _7, expected type XML file\r\n";
			break;
		case  SET__9:
			(* info) += "String input for file _9, expected type EXPRESS Schema\r\n";
			break;
		default:
			(* info) += "ERROR: String input unknown file type\r\n";
			break;
	}

	//
	MEMORY_BUFFER	* buff = new MEMORY_BUFFER();
	startBuffer = buff;
	currentBuffer = buff;
	buff->currentIndex = 0;
	int len = strlen(string);
	for (size_t j = 0;;)
	{
		//
		int left = len - j;
		buff->cnt = (left < MEMORY_BLOCK_SIZE) ? left : MEMORY_BLOCK_SIZE;
		strncpy(buff->buffer, string + j, buff->cnt); 
		j += buff->cnt;
		if (j >= len) break;

		//
		buff->next = new MEMORY_BUFFER();
		buff = buff->next;
	}
	buff->next = NULL;
	eof = false;
	(* info) += "String read finished succesfully\r\n";

	//
	return	OK;
}


int		readStream(int type, char * streamName, CString * info)
{
	clearBuffer();

	switch  (type) {
		case  SET__2:
			(* info) += "Stream input for file _2, expected type EXPRESS Schema\r\n";
			break;
		case  SET__5:
			(* info) += "Stream input for file _5, expected type EXPRESS Schema\r\n";
			break;
		case  SET__7:
			(* info) += "Stream input for file _7, expected type XML file\r\n";
			break;
		case  SET__9:
			(* info) += "Stream input for file _9, expected type EXPRESS Schema\r\n";
			break;
		default:
			(* info) += "ERROR: Stream input unknown file type\r\n";
			break;
	}

	if	( (!streamName)  ||
		  (streamName[0] == 0) ) {
		return	STREAM_NAME_EMPTY;
	}

	//
	//	When the filename starts with http:// or HTTP:\\ we assume an URL as input
	//
	if	( ( (streamName[0] == 'h')  ||  (streamName[0] == 'H') )  &&
		  ( (streamName[1] == 't')  ||  (streamName[1] == 'T') )  &&
		  ( (streamName[2] == 't')  ||  (streamName[2] == 'T') )  &&
		  ( (streamName[3] == 'p')  ||  (streamName[3] == 'P') )  &&
		  (streamName[4] == ':')  &&
		  ( (streamName[5] == '/')  ||  (streamName[5] == '\\') )  &&
		  ( (streamName[6] == '/')  ||  (streamName[6] == '\\') ) ) {
		int		i = 7;
		(* info) += "Recognized stream as URL\r\n";

		//
		//	We are getting external input from an URL
		//
		while  ( (streamName[i])  &&
		 		 (streamName[i] != '/')  && 
				 (streamName[i] != '\\') ) {
			i++;
		}

		if	(streamName[i]) {
			CInternetSession	* session = NULL;
			CHttpConnection		* pConnection = NULL;
			CHttpFile			* pURLFile;

			streamName[i] = 0;
			session = new CInternetSession();
			pConnection = session->GetHttpConnection(&streamName[7]);
			if	(pConnection == NULL)
			{
				//	Unable to open the connection to the server
				return	SERVER_CONNECTION_FAILED;
			}
			(* info) += "URL Connection opened\r\n";
			streamName[i] = '/';
			pURLFile = pConnection->OpenRequest("GET", &streamName[i]);
			pURLFile->SendRequest();
			pURLFile->SetReadBufferSize(MEMORY_BLOCK_SIZE);

			
			MEMORY_BUFFER	* buff = new MEMORY_BUFFER();
			startBuffer = buff;
			currentBuffer = buff;
			buff->currentIndex = 0;
			buff->cnt = (int) pURLFile->Read(&buff->buffer, MEMORY_BLOCK_SIZE);
			while  (buff->cnt == MEMORY_BLOCK_SIZE) {
				buff->next = new MEMORY_BUFFER();
				buff = buff->next;
				buff->cnt = (int) pURLFile->Read(&buff->buffer, MEMORY_BLOCK_SIZE);
			}
			buff->next = NULL;
			eof = false;
			(* info) += "URL data read finished succesfully\r\n";


			pURLFile->Close();
			delete	pURLFile;
			pConnection->Close();
			delete	pConnection;
			session->Close();
			delete	session;
			(* info) += "URL Connection closed\r\n";
		} else {
			return	URL_UNEXPECTED_FORMAT;
		}
	} else {
		FILE	* in_stream;
		(* info) += "Recognized stream as FILE (URL should start with 'http://')\r\n";

		//
		//	We are getting external input from a FILE
		//
		if	( (in_stream = fopen(streamName, "r")) == NULL ) {
			return	UNABLE_TO_OPEN_FILE;
		} else {
			(* info) += "FILE opened\r\n";


			MEMORY_BUFFER	* buff = new MEMORY_BUFFER();
			startBuffer = buff;
			currentBuffer = buff;
			buff->currentIndex = 0;
			buff->cnt = fread(&buff->buffer, sizeof( char ), MEMORY_BLOCK_SIZE, in_stream);
			while  (buff->cnt == MEMORY_BLOCK_SIZE) {
				buff->next = new MEMORY_BUFFER();
				buff = buff->next;
				buff->cnt = fread(&buff->buffer, sizeof( char ), MEMORY_BLOCK_SIZE, in_stream);
			}
			buff->next = NULL;
			eof = false;
			(* info) += "FILE data read finished succesfully\r\n";


			fclose(in_stream);
			(* info) += "FILE closed\r\n";
		}
	}

	return	OK;
}

char	* getByte()
{
	char	* rValue;

	previousCurrentBuffer = currentBuffer;
	previousCurrentIndex = currentBuffer->currentIndex;

	if	(currentBuffer) {
		if  (currentBuffer->currentIndex >= currentBuffer->cnt) {
			ASSERT(currentBuffer->currentIndex == currentBuffer->cnt);
			currentBuffer = currentBuffer->next;

			if	(currentBuffer) {
				currentBuffer->currentIndex = 0;
				if	(currentBuffer->cnt == 0) {
					//	EOF
					eof = true;
					return	&returned_when_eof;
				}
			} else {
				//	EOF
				eof = true;
				return	&returned_when_eof;
			}
		}

		rValue = &currentBuffer->buffer[currentBuffer->currentIndex++];
		if	((int) rValue[0] == 10) {
			line++;
			column = 1;
		} else {
			column++;
		}

		lastRValue = rValue;

		return	rValue;
	}

	//	EOF
	eof = true;
	return	&returned_when_eof;
}

void	undoGetByte()
{
	currentBuffer = previousCurrentBuffer;
	currentBuffer->currentIndex = previousCurrentIndex;
	column--;
}
