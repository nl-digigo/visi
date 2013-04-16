#include	"readXML.h"

int		promote(CString * info);
int		CreatePromotorArguments(STRUCT_CHARACTER_INDEX ** entity_reference, STRUCT_CHARACTER_NAME * reference, STRUCT_XML_NAME_SORTED * parentXmlElement, CString * info);
STRUCT_XML_NAME_SORTED	* GetXMLElement(STRUCT_CHARACTER_NAME * reference, CString * info);

bool	CompareTypeInstanceString(STRUCT_CHARACTER_NAME * type_structure, STRUCT_CHARACTER_NAME * instance_structure);
bool	CompareTypeTemplateString(STRUCT_CHARACTER_NAME * type_structure, STRUCT_CHARACTER_NAME * template_structure);
bool	CompareTypeVirtualString(STRUCT_CHARACTER_NAME * type_structure, STRUCT_CHARACTER_NAME * virtual_structure);
bool	CheckKeywordString(STRUCT_CHARACTER_NAME * structure);
bool	CheckTemplateString(STRUCT_CHARACTER_NAME * template_structure);
bool	CheckVirtualString(STRUCT_CHARACTER_NAME * virtual_structure);
bool	CheckInstanceString(STRUCT_CHARACTER_NAME * template_structure);
bool	CheckStringCaseInsensitive(char * checkName, char * name);
bool	CheckString(char * checkName, char * name);
bool	CheckString(char * checkName, char * name, int name_size);
