//#include "read_spff.h"
#include	"readSchema.h"

#define		CASE_LOWER_CASE  case  'a': case  'b': case  'c': case  'd': case  'e': case  'f': case  'g': case  'h': case  'i': case  'j': case  'k': case  'l': case  'm': case  'n': case  'o': case  'p': case  'q': case  'r': case  's': case  't': case  'u': case  'v': case  'w': case  'x': case  'y': case  'z':
#define		CASE_UPPER_CASE  case  'A': case  'B': case  'C': case  'D': case  'E': case  'F': case  'G': case  'H': case  'I': case  'J': case  'K': case  'L': case  'M': case  'N': case  'O': case  'P': case  'Q': case  'R': case  'S': case  'T': case  'U': case  'V': case  'W': case  'X': case  'Y': case  'Z':

//			BASECHAR		[#x41-#x5A] & [#x61-#x7A] & [#xC0-#xD6] & [#xD8-#xF6] & [#xF8-#xFF]
#define		BASECHAR					case  x41h: case  x42h: case  x43h: case  x44h: case  x45h: case  x46h: case  x47h: case  x48h: case  x49h: case  x4Ah: case  x4Bh: case  x4Ch: case  x4Dh: case  x4Eh: case  x4Fh:		\
							case  x50h: case  x51h: case  x52h: case  x53h: case  x54h: case  x55h: case  x56h: case  x57h: case  x58h: case  x59h: case  x5Ah:																	\
										case  x61h: case  x62h: case  x63h: case  x64h: case  x65h: case  x66h: case  x67h: case  x68h: case  x69h: case  x6Ah: case  x6Bh: case  x6Ch: case  x6Dh: case  x6Eh: case  x6Fh:		\
							case  x70h: case  x71h: case  x72h: case  x73h: case  x74h: case  x75h: case  x76h: case  x77h: case  x78h: case  x79h: case  x7Ah:																	\
							case  xC0h: case  xC1h: case  xC2h: case  xC3h: case  xC4h: case  xC5h: case  xC6h: case  xC7h: case  xC8h: case  xC9h: case  xCAh: case  xCBh: case  xCCh: case  xCDh: case  xCEh: case  xCFh:		\
							case  xD0h: case  xD1h: case  xD2h: case  xD3h: case  xD4h: case  xD5h: case  xD6h:				case  xD8h: case  xD9h: case  xDAh: case  xDBh: case  xDCh: case  xDDh: case  xDEh: case  xDFh:		\
							case  xE0h: case  xE1h: case  xE2h: case  xE3h: case  xE4h: case  xE5h: case  xE6h: case  xE7h: case  xE8h: case  xE9h: case  xEAh: case  xEBh: case  xECh: case  xEDh: case  xEEh: case  xEFh:		\
							case  xF0h: case  xF1h: case  xF2h: case  xF3h: case  xF4h: case  xF5h: case  xF6h:				case  xF8h: case  xF9h: case  xFAh: case  xFBh: case  xFCh: case  xFDh: case  xFEh: case  xFFh:


								
//#define		BASECHAR		[#x41-#x5A] & [#x61-#x7A] & [#xC0-#xD6] & [#xD8-#xF6] & [#xF8-#xFF]
#define		IDEOGRAPHIC		
#define		LETTER			BASECHAR  IDEOGRAPHIC
//			DIGIT			[#x30-#x39]
#define		DIGIT			case  x30h: case  x31h: case  x32h: case  x33h: case  x34h: case  x35h: case  x36h:	case  x37h: case  x38h: case  x39h:
#define		COMBININGCHAR
//			EXTENDER		#xB7
#define		EXTENDER		case  xB7h:
#define		S				case  0x09: case  0x0A: case  0x0D: case  ' ':



int		readXML(int type, CString * info, CString * errorLine);
int		readXMLRoot(CString * info);
int		readXMLArguments(STRUCT_CHARACTER_ARGUMENT * arguments, STRUCT_XML_ELEMENT * parent, CString * info);
int		readXMLArgument(STRUCT_CHARACTER_ARGUMENT ** arguments, STRUCT_XML_ELEMENT * parent, CString * info);
int		readXMLElements(STRUCT_CHARACTER_NAME * expected_element, STRUCT_XML_ARGUMENT * parentArgument, CString * info);
int		readXMLElement(STRUCT_CHARACTER_NAME * expected_element, STRUCT_XML_ARGUMENT * parentArgument, CString * info);
void	readXMLWord(CString * info);

STRUCT_CHARACTER_INDEX	** checkAndInsertXMLWord(int word_size, char * word, CString * info);
void	newXMLCharacterName(STRUCT_XML_ELEMENT ** character_name, int word_size, char * word, CString * info);
void	addXMLCharacterNameSort(STRUCT_XML_ELEMENT ** character_name, CString * info);
STRUCT_XML_ARGUMENT 	* addXMLArgument(STRUCT_XML_ELEMENT * element, STRUCT_CHARACTER_ARGUMENT * schemaArgument);
void	addXMLArgumentReference(STRUCT_XML_ARGUMENT * argument, STRUCT_XML_ELEMENT * element);
