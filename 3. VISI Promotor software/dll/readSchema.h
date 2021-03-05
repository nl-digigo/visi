//#include "read_spff.h"
#include	"readExternalSource.h"

#define		NONE							0
#define		SCHEMA							1
#define		ENTITY							2
#define		END_ENTITY						3
#define		TYPE							4
#define		END_TYPE						5
#define		SUBTYPE							6
#define		INVERSE							7
#define		DERIVE							8
#define		NO_KEYWORD_FOUND				9
#define		OF								10
#define		STRING							11
#define		ENUMERATION						12
#define		WHERE							13
#define		ABSTRACT						14
#define		ONEOF							15
#define		SUPERTYPE						16
#define		SET								17
#define		LIST							18
#define		BOOLEAN							19
#define		INTEGER							20
#define		DATE							21
#define		REAL							22
#define		_OPTIONAL						23
#define		FIXED							24
#define		UNIQUE							25
#define		SELECT							26
#define		FUNCTION						27
#define		END_FUNCTION					28
#define		NUMBER							29
#define		PROCEDURE						30
#define		END_PROCEDURE					31
#define		END_SCHEMA						32
#define		RULE							33
#define		END_RULE						34
#define		RULE_SCHEMA						35
#define		END_RULE_SCHEMA					36
#define		BEGIN_C							37
#define		END_C							38
#define		USE								39
#define		FROM							40
#define		BAG								41
#define		DECIMAL							42
#define		DATETIME						43
#define		TIME							44


#define		ERROR_OKE									0
#define		ERROR_UNEXPECTED_CHAR_IN_ROOT				1
#define		ERROR_UNEXPECTED_CHAR_IN_TYPE				2
#define		ERROR_UNEXPECTED_CHAR_IN_TYPE_LIST			3
#define		ERROR_UNEXPECTED_CHAR_IN_TYPE_END			4
#define		ERROR_UNEXPECTED_CHAR_IN_ENUMERATION		5
#define		ERROR_UNEXPECTED_CHAR_IN_ENUMERATION_LIST	6
#define		ERROR_UNEXPECTED_CHAR_IN_ENUMERATION_END	7
#define		ERROR_UNEXPECTED_CHAR_IN_ENTITY				8
#define		ERROR_UNEXPECTED_CHAR_IN_ENTITY_SUBTYPE		9
#define		ERROR_UNEXPECTED_CHAR_IN_ENTITY_ABSTRACT	10
#define		ERROR_UNEXPECTED_CHAR_IN_ENTITY_SUPERTYPE	11
#define		ERROR_UNEXPECTED_CHAR_IN_ENTITY_END			12
#define		ERROR_UNEXPECTED_CHAR_IN_ENTITY_NO_KEYWORD	13
#define		ERROR_UNEXPECTED_CHAR_IN_ENTITY_LIST_OR_SET	14
#define		ERROR_UNEXPECTED_CHAR_IN_ROOT_TYPE			15
#define		ERROR_UNEXPECTED_CHAR_IN_ROOT_LINE_COMMENT	16
#define		ERROR_UNEXPECTED_CHAR_IN_ROOT_COMMENT		17
#define		ERROR_UNEXPECTED_CHAR_IN_SCHEMA				18
#define		ERROR_UNEXPECTED_CHAR_IN_SCHEMA_TYPE_STRING	19
#define		ERROR_UNEXPECTED_CHAR_IN_SCHEMA_STRING		20
#define		ERROR_UNEXPECTED_CHAR_IN_SELECT				21
#define		ERROR_UNEXPECTED_CHAR_IN_FUNCTION			22
#define		ERROR_UNEXPECTED_CHAR_IN_PROCEDURE			23
#define		ERROR_UNEXPECTED_CHAR_IN_RULE				24
#define		ERROR_UNEXPECTED_CHAR_IN_RULE_SCHEMA		25
#define		ERROR_UNEXPECTED_CHAR_IN_BEGIN_C			26
#define		ERROR_UNEXPECTED_CHAR_IN_USE				27

#define		CASE_LOWER_CASE  case  'a': case  'b': case  'c': case  'd': case  'e': case  'f': case  'g': case  'h': case  'i': case  'j': case  'k': case  'l': case  'm': case  'n': case  'o': case  'p': case  'q': case  'r': case  's': case  't': case  'u': case  'v': case  'w': case  'x': case  'y': case  'z':
#define		CASE_UPPER_CASE  case  'A': case  'B': case  'C': case  'D': case  'E': case  'F': case  'G': case  'H': case  'I': case  'J': case  'K': case  'L': case  'M': case  'N': case  'O': case  'P': case  'Q': case  'R': case  'S': case  'T': case  'U': case  'V': case  'W': case  'X': case  'Y': case  'Z':
#define		CASE_SPECIAL_CASE  case  '_': case  '\\': case  '.': case  '-':
#define		CASE_NUMBER		 case  '0': case  '1': case  '2': case  '3': case  '4': case  '5': case  '6': case  '7': case  '8': case  '9':
#define		CASE_SPACE		 case  9:   case  10:  case  13:  case  ' ':
#define		CASE_ENTITY_CHAR case  '_': case  '-':

int		readSchema(int type, CString * info);
void	readSchemaWord(CString * info);
int		readSchemaType(CString * info);
int		readSchemaRoot(CString * info);
int		readSchemaAbstract(CString * info);
int		readSchemaSupertype(CString * info);

void	resetGlobalSchema(CString * info);
void	setFixedSchema(int type, CString * info);
void	setGlobalSchema(int type, CString * info);

STRUCT_CHARACTER_INDEX	* getFirstEntity(CString * info);
STRUCT_CHARACTER_INDEX	* getNextEntity(CString * info);

STRUCT_CHARACTER_INDEX	** checkAndInsertWord(int word_size, char * word, CString * info);
STRUCT_CHARACTER_INDEX	** checkAndInsertWord(int word_size, char * word, STRUCT_CHARACTER_NAME * reference, CString * info);
STRUCT_CHARACTER_NAME	** findWord(int word_size, char * word, CString * info);
void	newCharacterName(STRUCT_CHARACTER_NAME ** character_name, int word_size, char * word, STRUCT_CHARACTER_NAME * reference, CString * info);
void	addCharacterName(STRUCT_CHARACTER_NAME ** character_name, char * display_name, CString * info);
void	addCharacterNameSort(STRUCT_CHARACTER_NAME ** character_name, CString * info);
STRUCT_CHARACTER_NAME_SORTED	* findExactWord(char * text, int text_length, int output, bool filter, CString * info);
int		compareStrings(char * source, int source_length, char * target, int target_length, CString * info);
void	stringToString(int size, char * source, char * target, CString * info);

STRUCT_CHARACTER_ARGUMENT	* schemaAddArgument(int name_size, char * name, CString * info);
STRUCT_CHARACTER_ARGUMENT	* schemaAddArgument(int name_size, char * name, bool optional, int static_type, bool group, STRUCT_CHARACTER_NAME * reference, CString * info);
