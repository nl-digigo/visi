#include "stdafx.h"
#include "dll.h"
#include "readSchema.h"
#include "buildXSD.h"

extern	STRUCT_CHARACTER_NAME_SORTED	* first_character_name_sorted,
										* first_character_name_sorted_2,
										* first_character_name_sorted_5;
extern	STRUCT_XML_NAME_SORTED			* first_character_name_sorted_xml;
extern	char	* schema_name;
char	* nameSpaceName;

CString	annotation = "annotation",
		attribute = "attribute",
		choice = "choice",
		complexContent = "complexContent",
		complexType = "complexType",
		documentation = "documentation",
		element = "element",
		enumeration = "enumeration",
		extension = "extension",
		group = "group",
		restriction = "restriction",
		rootElementName = "MISSING ERROR IN PROMOTOR SOFTWARE",
		sequence = "sequence",
		simpleType = "simpleType";


int		tabs;

int		buildTabs(CString * XSD, CString * info)
{
	int		i = 0;

	ASSERT(tabs >= 0);

	while  (i < tabs) {
		(* XSD) += "\t";
		i++;
	}

	return	OK;
}

int		buildGeneratedXSD(CString	* XSD,
						  char		* str,
						  CString	* info)
{
	int		i = 0;

	while  (str[i]) {
		switch	(str[i]) {
			case  '&':
				switch	(str[i+1]) {
					case  'a':
						if	(str[i+2] == 'm') {
							if	(str[i+3] == 'p') {
								if	(str[i+4] == ';') {
									(* XSD) += "&";
									i += 4;
								} else {
									return	-99;
								}
							} else {
								return	-99;
							}
						} else {
							return	-99;
						}
						break;
					case  'l':
						if	(str[i+2] == 't') {
							if	(str[i+3] == ';') {
								buildTabs(XSD, info);
								(* XSD) += '<';
								i += 3;
							} else {
								return	-99;
							}
						} else {
							return	-99;
						}
						break;
					case  'g':
						if	(str[i+2] == 't') {
							if	(str[i+3] == ';') {
								(* XSD) += '>';
								(* XSD) += "\r\n";
								i += 3;
							} else {
								return	-99;
							}
						} else {
							return	-99;
						}
						break;
					case  'q':
						if	(str[i+2] == 'u') {
							if	(str[i+3] == 'o') {
								if	(str[i+4] == 't') {
									if	(str[i+5] == ';') {
										(* XSD) += "'";
										i += 5;
									} else {
										return	-99;
									}
								} else {
									return	-99;
								}
							} else {
								return	-99;
							}
						} else {
							return	-99;
						}
						break;
					default:
						ASSERT(1 == 0);
						return	-99;
						break;
				}
				break;
			case  'x':
				if	(str[i+1] == 's') {
					if	(str[i+2] == ':') {
						(* XSD) += "xsd:";
						i += 2;
					} else {
						(* XSD) += str[i];
						//return	-99;
					}
				} else {
					(* XSD) += str[i];
				}
				break;
			case  '/':
				(* XSD) += str[i];
				break;
			default:
				(* XSD) += str[i];
				break;
		}

		i++;
	}

//	buildTabs(XSD, info);


//	(* XSD) += (LPCTSTR) str;

	return	OK;
}

int		startXSDComponent(CString	* XSD,
						  CString	* component,
						  CString	* name,
						  CString	* ref,
						  CString	* type,
						  CString	* base,
						  CString	* use,
						  CString	* value,
						  CString	* minOccurs,
						  CString	* maxOccurs,
						  bool		finished,
						  bool		newLine,
						  CString	* info)
{
	buildTabs(XSD, info);

	(* XSD) += "<xsd:" + (* component);
	if	(name) {
		(* XSD) += " name=\"" + (* name) + "\"";
	}
	if	(ref) {
		(* XSD) += " ref=\"" + (* ref) + "\"";
	}
	if	(type) {
		(* XSD) += " type=\"" + (* type) + "\"";
	}
	if	(base) {
		(* XSD) += " base=\"" + (* base) + "\"";
	}
	if	(use) {
		(* XSD) += " use=\"" + (* use) + "\"";
	}
	if	(value) {
		(* XSD) += " value=\"" + (* value) + "\"";
	}
	if	(minOccurs) {
		(* XSD) += " minOccurs=\"" + (* minOccurs) + "\"";
	}
	if	(maxOccurs) {
		(* XSD) += " maxOccurs=\"" + (* maxOccurs) + "\"";
	}
	if	(finished) {
		(* XSD) += "/";
	} else {
		tabs++;
	}
	(* XSD) += ">";
	if	(newLine) {
		(* XSD) += "\r\n";
	}

	return	OK;
}

int		finishXSDComponent(CString	* XSD,
						   CString	* component,
						   bool		newLine,
						   CString * info)
{
	tabs--;

	if	(newLine) {
		buildTabs(XSD, info);
	}
	(* XSD) += "</xsd:";
	(* XSD) += (* component);
	(* XSD) += ">\r\n";

	return	OK;
}

int		buildXSDHeader(CString * XSD, CString * info, char * URI)
{
	//
	//		<?xml version="1.0" encoding="UTF-8"?>
	//
	(* XSD) = "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\r\n";

	//
	//		<!-- created with VISI DLL, EXP2XSD part, created by Peter Bonsma  -->
	//
	(* XSD) += "<!-- created with VISI DLL, EXP2XSD part, created by Peter Bonsma  -->\r\n";

	//
	//		<xsd:schema targetNamespace="http://www.visi.nl/schemas/20060807" xmlns:xsd="http://www.w3.org/2001/XMLSchema" xmlns:visi="http://www.visi.nl/schemas/20060807" elementFormDefault="qualified">
	//
	(* XSD) += "<xsd:schema targetNamespace=\"";
	if	(URI) {
		(* XSD) += URI;
	}
	(* XSD) += "\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\" xmlns:";
	(* XSD) += nameSpaceName;
	(* XSD) += "=\"";
	if	(URI) {
		(* XSD) += URI;
	}
	(* XSD) += "\" elementFormDefault=\"qualified\">\r\n";
	tabs++;

	return	OK;
}

int		buildXSDFooter(CString * XSD, CString * info)
{
	//
	//		</xsd:schema>
	//
	tabs--;
	(* XSD) += "</xsd:schema>\r\n";

	return	OK;
}

int		buildRootElementDeclarationKernal(CString * XSD, STRUCT_CHARACTER_NAME_SORTED * entity, CString * info)
{
	CString	maxOccurs = "unbounded",
			rootElement;

	rootElement = nameSpaceName;
	rootElement += ":";
	rootElement += entity->reference->display_name;
	startXSDComponent(XSD, &element, 0, &rootElement, 0, 0, 0, 0, 0, 0, true, true, info);

	return	OK;
}

int		buildRootElementDeclaration(CString * XSD, CString * info)
{
	CString	maxOccurs = "unbounded";

	(* XSD) += "\r\n";

	//
	//	<!-- root element declaration (for SCHEMA definitions) -->
	//
	buildTabs(XSD, info);
	(* XSD) += "<!-- root element declaration (for SCHEMA definitions) -->\r\n";

	startXSDComponent(XSD, &element, &rootElementName, 0, 0, 0, 0, 0, 0, 0, false, true, info);
	startXSDComponent(XSD, &complexType, 0, 0, 0, 0, 0, 0, 0, 0, false, true, info);
	startXSDComponent(XSD, &choice, 0, 0, 0, 0, 0, 0, 0, &maxOccurs, false, true, info);

	STRUCT_CHARACTER_NAME_SORTED * entity = first_character_name_sorted;
	if	(entity) {
		buildRootElementDeclarationKernal(XSD, entity, info);

		while  (entity != entity->next) {
			entity = entity->next;

			buildRootElementDeclarationKernal(XSD, entity, info);
		}
	}

	finishXSDComponent(XSD, &choice, true, info);
	finishXSDComponent(XSD, &complexType, true, info);
	finishXSDComponent(XSD, &element, true, info);

	return	OK;
}

int		buildElementDeclarationsKernal(CString * XSD, STRUCT_CHARACTER_NAME_SORTED * entity, CString * info)
{
	CString	elementDeclarationName,
			elementDeclarationType;

	elementDeclarationName = entity->reference->display_name;
	elementDeclarationType = nameSpaceName;
	elementDeclarationType += ":";
	elementDeclarationType += elementDeclarationName + "Type";

	if	(entity->reference->description) {
		startXSDComponent(XSD, &element, &elementDeclarationName, 0, &elementDeclarationType, 0, 0, 0, 0, 0, false, true, info);
		startXSDComponent(XSD, &annotation, 0, 0, 0, 0, 0, 0, 0, 0, false, true, info);
		startXSDComponent(XSD, &documentation, 0, 0, 0, 0, 0, 0, 0, 0, false, false, info);
		(* XSD) += entity->reference->description;
		finishXSDComponent(XSD, &documentation, false, info);
		finishXSDComponent(XSD, &annotation, true, info);
		finishXSDComponent(XSD, &element, true, info);
	} else {
		startXSDComponent(XSD, &element, &elementDeclarationName, 0, &elementDeclarationType, 0, 0, 0, 0, 0, true, true, info);
	}

	return	OK;
}

int		buildElementDeclarations(CString * XSD, CString * info)
{
	(* XSD) += "\r\n";

	//
	//		<!-- element declarations (for ENTITY definitions) -->
	//
	buildTabs(XSD, info);
	(* XSD) += "<!-- element declarations (for ENTITY definitions) -->\r\n";

	STRUCT_CHARACTER_NAME_SORTED	* entity = first_character_name_sorted;
	if	(entity) {
		buildElementDeclarationsKernal(XSD, entity, info);

		while  (entity != entity->next) {
			entity = entity->next;
			buildElementDeclarationsKernal(XSD, entity, info);
		}
	}

	return	OK;
}

int		buildElementReferenceDeclarationsKernal(CString * XSD, STRUCT_CHARACTER_NAME_SORTED * entity, CString * info)
{
	CString	elementReferenceDeclarationName,
			elementReferenceDeclarationType;

	elementReferenceDeclarationName = entity->reference->display_name;
	elementReferenceDeclarationType = nameSpaceName;
	elementReferenceDeclarationType += ":";
	elementReferenceDeclarationType += elementReferenceDeclarationName + "TypeRef";
	elementReferenceDeclarationName += "Ref";
	startXSDComponent(XSD, &element, &elementReferenceDeclarationName, 0, &elementReferenceDeclarationType, 0, 0, 0, 0, 0, true, true, info);

	return	OK;
}

int		buildElementReferenceDeclarations(CString * XSD, CString * info)
{
	(* XSD) += "\r\n";

	//
	//		<!-- element reference declarations (for ENTITY definitions) -->
	//
	buildTabs(XSD, info);
	(* XSD) += "<!-- element reference declarations (for ENTITY definitions) -->\r\n";

	STRUCT_CHARACTER_NAME_SORTED * entity = first_character_name_sorted;
	if	(entity) {
		buildElementReferenceDeclarationsKernal(XSD, entity, info);

		while  (entity != entity->next) {
			entity = entity->next;

			buildElementReferenceDeclarationsKernal(XSD, entity, info);
		}
	}

	return	OK;
}

int		buildComplexTypesForElementDeclarationsKernal(CString * XSD, STRUCT_CHARACTER_NAME_SORTED * entity, CString * info)
{
	CString	base = nameSpaceName,
			complexTypeName,
			elementName,
			elementRef,
			elementType,
			elementTmp,
			minOccurs,
			maxOccurs;

	base += ":elementType";
	complexTypeName = entity->reference->display_name;
	complexTypeName += "Type";

	startXSDComponent(XSD, &complexType, &complexTypeName, 0, 0, 0, 0, 0, 0, 0, false, true, info);
	startXSDComponent(XSD, &complexContent, 0, 0, 0, 0, 0, 0, 0, 0, false, true, info);
	startXSDComponent(XSD, &extension, 0, 0, 0, &base, 0, 0, 0, 0, false, true, info);
	startXSDComponent(XSD, &sequence, 0, 0, 0, 0, 0, 0, 0, 0, false, true, info);

	STRUCT_CHARACTER_ARGUMENT	* arg = entity->reference->arguments;
	while  (arg) {
		elementName = arg->argument_name;
		elementType = "xsd:";
		minOccurs = "0";
		maxOccurs = "unbounded";
		switch	(arg->static_type) {
			case  BOOLEAN:
				elementType += "boolean";
				break;
			case  DECIMAL:
				elementType += "decimal";
				break;
			case  DATE:
				elementType += "date";//"dateTime";
				break;
			case  DATETIME:
				elementType += "dateTime";//"dateTime";
				break;
			case  TIME:
				elementType += "time";//"dateTime";
				break;
			case  INTEGER:
				elementType += "integer";
				break;
			case  REAL:
				elementType += "float";
				break;
			case  STRING:
				elementType += "string";
				break;
			default:
//				(* info) += "Unknown datatype found\r\n";
				break;
		}

		if	(arg->content) {
			startXSDComponent(XSD, &element, &elementName, 0, 0, 0, 0, 0, 0, 0, false, true, info);
			startXSDComponent(XSD, &simpleType, 0, 0, 0, 0, 0, 0, 0, 0, false, true, info);
			startXSDComponent(XSD, &restriction, 0, 0, 0, &elementType, 0, 0, 0, 0, false, true, info);
			buildGeneratedXSD(XSD, arg->content, info);
			finishXSDComponent(XSD, &restriction, true, info);
			finishXSDComponent(XSD, &simpleType, true, info);
			finishXSDComponent(XSD, &element, true, info);
		} else {
			if	(arg->reference) {
				if	(arg->optional) {
					startXSDComponent(XSD, &element, &elementName, 0, 0, 0, 0, 0, &minOccurs, 0, false, true, info);
				} else {
					startXSDComponent(XSD, &element, &elementName, 0, 0, 0, 0, 0, 0, 0, false, true, info);
				}
				startXSDComponent(XSD, &complexType, 0, 0, 0, 0, 0, 0, 0, 0, false, true, info);
				if	(arg->reference->count == 1) {
					if	(arg->optional) {
						startXSDComponent(XSD, &choice, 0, 0, 0, 0, 0, 0, 0, &maxOccurs, false, true, info);
					} else {
						startXSDComponent(XSD, &choice, 0, 0, 0, 0, 0, 0, 0, 0, false, true, info);
					}
				} else {
					if	(arg->group) {
						startXSDComponent(XSD, &choice, 0, 0, 0, 0, 0, 0, &minOccurs, &maxOccurs, false, true, info);
					} else {
						if	(arg->set_or_list) {
							startXSDComponent(XSD, &choice, 0, 0, 0, 0, 0, 0, 0, &maxOccurs, false, true, info);
						} else {
							startXSDComponent(XSD, &choice, 0, 0, 0, 0, 0, 0, 0, 0, false, true, info);
						}
					}
				}
				elementRef = nameSpaceName;
				elementRef += ":";
				if	(arg->group) {
					if	(arg->reference->count == 1) {
						elementRef += arg->reference->single_instance_name;
						startXSDComponent(XSD, &element, 0, &elementRef, 0, 0, 0, 0, 0, 0, true, true, info);
						elementRef += "Ref";
						startXSDComponent(XSD, &element, 0, &elementRef, 0, 0, 0, 0, 0, 0, true, true, info);
					} else {
						elementRef += arg->reference->display_name;
						elementRef = elementRef.Left(elementRef.GetLength() - 8);
						elementRef += "TypeInstanceSet";
						startXSDComponent(XSD, &group, 0, &elementRef, 0, 0, 0, 0, 0, 0, true, true, info);
					}
				} else {
					elementRef += arg->reference->display_name;
					startXSDComponent(XSD, &element, 0, &elementRef, 0, 0, 0, 0, 0, 0, true, true, info);
					elementRef += "Ref";
					startXSDComponent(XSD, &element, 0, &elementRef, 0, 0, 0, 0, 0, 0, true, true, info);
				}
				finishXSDComponent(XSD, &choice, true, info);
				finishXSDComponent(XSD, &complexType, true, info);
				finishXSDComponent(XSD, &element, true, info);
			} else {
				if	(arg->optional) {
					startXSDComponent(XSD, &element, &elementName, 0, &elementType, 0, 0, 0, &minOccurs, 0, true, true, info);
				} else {
					startXSDComponent(XSD, &element, &elementName, 0, &elementType, 0, 0, 0, 0, 0, true, true, info);
				}
			}
		}

		arg = arg->next;
	}

	finishXSDComponent(XSD, &sequence, true, info);
	finishXSDComponent(XSD, &extension, true, info);
	finishXSDComponent(XSD, &complexContent, true, info);
	finishXSDComponent(XSD, &complexType, true, info);

	return	OK;
}

int		buildComplexTypesForElementDeclarations(CString * XSD, CString * info)
{
	(* XSD) += "\r\n";

	//
	//		<!-- complex types for element declarations (for ENTITY definitions) -->
	//
	buildTabs(XSD, info);
	(* XSD) += "<!-- complex types for element declarations (for ENTITY definitions) -->\r\n";

	STRUCT_CHARACTER_NAME_SORTED * entity = first_character_name_sorted;
	if	(entity) {
		buildComplexTypesForElementDeclarationsKernal(XSD, entity, info);

		while  (entity != entity->next) {
			entity = entity->next;

			buildComplexTypesForElementDeclarationsKernal(XSD, entity, info);
		}
	}

	return	OK;
}

int		buildComplexTypesForElementReferenceDeclarationsKernal(CString * XSD, STRUCT_CHARACTER_NAME_SORTED * entity, CString * info)
{
	CString	base = nameSpaceName,
			complexTypeName;

	base += ":elementTypeRef";
	complexTypeName = entity->reference->display_name;
	complexTypeName += "TypeRef";

	startXSDComponent(XSD, &complexType, &complexTypeName, 0, 0, 0, 0, 0, 0, 0, false, true, info);
	startXSDComponent(XSD, &complexContent, 0, 0, 0, 0, 0, 0, 0, 0, false, true, info);
	startXSDComponent(XSD, &extension, 0, 0, 0, &base, 0, 0, 0, 0, true, true, info);
	finishXSDComponent(XSD, &complexContent, true, info);
	finishXSDComponent(XSD, &complexType, true, info);

	return	OK;
}

int		buildComplexTypesForElementReferenceDeclarations(CString * XSD, CString * info)
{
	(* XSD) += "\r\n";

	//
	//		<!-- complex types for element reference declarations (for ENTITY definitions) -->
	//
	buildTabs(XSD, info);
	(* XSD) += "<!-- complex types for element reference declarations (for ENTITY definitions) -->\r\n";

	STRUCT_CHARACTER_NAME_SORTED * entity = first_character_name_sorted;
	if	(entity) {
		buildComplexTypesForElementReferenceDeclarationsKernal(XSD, entity, info);

		while  (entity != entity->next) {
			entity = entity->next;

			buildComplexTypesForElementReferenceDeclarationsKernal(XSD, entity, info);
		}
	}

	return	OK;
}

int		buildGroupDeclarationsKernal(CString * XSD, STRUCT_CHARACTER_NAME_SORTED * _5, CString * info)
{
	STRUCT_CHARACTER_NAME_SORTED	* entity = first_character_name_sorted;
	CString	groupName, refName;

	if	(_5->reference->count > 1) {
		groupName = _5->reference->display_name;
		groupName = groupName.Left(groupName.GetLength() - 8);
		groupName += "TypeInstanceSet";

		startXSDComponent(XSD, &group, &groupName, /*_5->reference->display_name,*/ 0, 0, 0, 0, 0, 0, 0, false, true, info);
		startXSDComponent(XSD, &choice, 0, 0, 0, 0, 0, 0, 0, 0, false, true, info);

		if	(entity) {
			if	(entity->reference->reference == _5->reference) {
				refName = nameSpaceName;
				refName += ":";
				refName += entity->reference->display_name;
				startXSDComponent(XSD, &element, 0, &refName, 0, 0, 0, 0, 0, 0, true, true, info);
				refName += "Ref";
				startXSDComponent(XSD, &element, 0, &refName, 0, 0, 0, 0, 0, 0, true, true, info);
			}

			while  (entity != entity->next) {
				entity = entity->next;

				if	(entity->reference->reference == _5->reference) {
					refName = nameSpaceName;
					refName += ":";
					refName += entity->reference->display_name;
					startXSDComponent(XSD, &element, 0, &refName, 0, 0, 0, 0, 0, 0, true, true, info);
					refName += "Ref";
					startXSDComponent(XSD, &element, 0, &refName, 0, 0, 0, 0, 0, 0, true, true, info);
				}
			}
		}
		finishXSDComponent(XSD, &choice, true, info);
		finishXSDComponent(XSD, &group, true, info);
	}
	
	return	OK;
}

int		buildGroupDeclarations(CString * XSD, CString * info)
{
	(* XSD) += "\r\n";

	//
	//		<!-- group declarations (for SELECT data type definitions) -->
	//
	buildTabs(XSD, info);
	(* XSD) += "<!-- group declarations (for SELECT data type definitions) -->\r\n";


	STRUCT_CHARACTER_NAME_SORTED	* _5 = first_character_name_sorted_5;

	if	(_5) {
		buildGroupDeclarationsKernal(XSD, _5, info);

		while  (_5 != _5->next) {
			_5 = _5->next;

			buildGroupDeclarationsKernal(XSD, _5, info);
		}
	}

	return	OK;
}

int		buildEnumerationTypeDeclarations(CString * XSD, CString * info)
{
	(* XSD) += "\r\n";

	//
	//		<!-- enumeration type declarations (for ENUMERATION data type definitions) -->
	//
	buildTabs(XSD, info);
	(* XSD) += "<!-- enumeration type declarations (for ENUMERATION data type definitions) -->\r\n";

	return	OK;
}

int		buildSimpleTypeDeclarations(CString * XSD, CString * info)
{
	(* XSD) += "\r\n";

	//
	//		<!-- simple type declarations (for TYPE defined data type definitions) -->
	//
	buildTabs(XSD, info);
	(* XSD) += "<!-- simple type declarations (for TYPE defined data type definitions) -->\r\n";

	return	OK;
}

int		buildStandardDeclarations(CString * XSD, CString * info)
{
	CString	attributeName	= "id",
			attributeType	= "xsd:ID",
			attributeUse	= "required",
			complexTypeName	= "elementType",
			enumerationValue,
			restrictionBase	= "xsd:string",
			simpleTypeName	= "logical";

	(* XSD) += "\r\n";

	//
	//		<!-- standard declarations, elementType, simpleType, logical (for each translation) -->
	//
	buildTabs(XSD, info);
	(* XSD) += "<!-- standard declarations, elementType, simpleType, logical (for each translation) -->\r\n";

	startXSDComponent(XSD, &complexType, &complexTypeName, 0, 0, 0, 0, 0, 0, 0, false, true, info);
	startXSDComponent(XSD, &attribute, &attributeName, 0, &attributeType, 0, &attributeUse, 0, 0, 0, true, true, info);
	finishXSDComponent(XSD, &complexType, true, info);

	complexTypeName += "Ref";
	attributeName += "ref";
	attributeType += "REF";

	startXSDComponent(XSD, &complexType, &complexTypeName, 0, 0, 0, 0, 0, 0, 0, false, true, info);
	startXSDComponent(XSD, &attribute, &attributeName, 0, &attributeType, 0, &attributeUse, 0, 0, 0, true, true, info);
	finishXSDComponent(XSD, &complexType, true, info);

	startXSDComponent(XSD, &simpleType, &simpleTypeName, 0, 0, 0, 0, 0, 0, 0, false, true, info);
	startXSDComponent(XSD, &restriction, 0, 0, 0, &restrictionBase, 0, 0, 0, 0, false, true, info);
	enumerationValue = "true";
	startXSDComponent(XSD, &enumeration, 0, 0, 0, 0, 0, &enumerationValue, 0, 0, true, true, info);
	enumerationValue = "false";
	startXSDComponent(XSD, &enumeration, 0, 0, 0, 0, 0, &enumerationValue, 0, 0, true, true, info);
	enumerationValue = "unknown";
	startXSDComponent(XSD, &enumeration, 0, 0, 0, 0, 0, &enumerationValue, 0, 0, true, true, info);
	finishXSDComponent(XSD, &restriction, true, info);
	finishXSDComponent(XSD, &simpleType, true, info);

	return	OK;
}

int		initializeSchema5ReferencesKernalGetCount(STRUCT_CHARACTER_NAME_SORTED * _5, CString * info)
{
	STRUCT_CHARACTER_NAME_SORTED	* entity = first_character_name_sorted;
	int		cnt = 0;

	if	(entity) {
		if	(entity->reference->reference == _5->reference) {
			_5->reference->single_instance_name = entity->reference->display_name;
			cnt++;
		}

		while  (entity != entity->next) {
			entity = entity->next;

			if	(entity->reference->reference == _5->reference) {
				_5->reference->single_instance_name = entity->reference->display_name;
				cnt++;
			}
		}
	}

	return	cnt;
}

int		initializeSchema5ReferencesKernal(STRUCT_CHARACTER_NAME_SORTED * _5, CString * info)
{
	//
	//	Check if this _5 is interesting
	//
	if	(CheckTemplateString_(_5->reference)) {
		STRUCT_CHARACTER_NAME_SORTED * entity = first_character_name_sorted;
		STRUCT_CHARACTER_ARGUMENT	* arg;

		if	(entity) {
			arg = entity->reference->arguments;
			while  (arg) {
				if	( (!arg->content)  &&
					  (arg->reference)  &&
					  (arg->group) ) {
					if	(arg->reference == _5->reference) {
						return	initializeSchema5ReferencesKernalGetCount(_5, info);
					}
				}

				arg = arg->next;
			}

			while  (entity != entity->next) {
				entity = entity->next;

				arg = entity->reference->arguments;
				while  (arg) {
					if	( (!arg->content)  &&
						  (arg->reference)  &&
						  (arg->group) ) {
						if	(arg->reference == _5->reference) {
							return	initializeSchema5ReferencesKernalGetCount(_5, info);
						}
					}

					arg = arg->next;
				}
			}
		}
	}

	return	0;
}

void	initializeSchema5References(CString * info)
{
	STRUCT_CHARACTER_NAME_SORTED	* _5 = first_character_name_sorted_5;

	if	(_5) {
		_5->reference->count = initializeSchema5ReferencesKernal(_5, info);

		while  (_5 != _5->next) {
			_5 = _5->next;

			_5->reference->count = initializeSchema5ReferencesKernal(_5, info);
		}
	}
}

bool	equals(char * txtI, char * txtII)
{
	if	(txtI  &&  txtII) {
		int i = 0;
		while  (txtI[i]) {
			if	(txtII[i] != txtI[i]) {
				return	false;
			}
			i++;
		}
		if	(txtII[i] == 0) {
			return	true;
		}
	}
	return	false;
}

int		buildXSD(CString * XSD, CString * info, char * nameSpace, char * URI)
{
	int		errorCode;

	rootElementName = schema_name;
	nameSpaceName = nameSpace;

	initializeSchema5References(info);	//	if schema 5 is not avaialble, just no references

	tabs = 0;

	if	(URI == 0  ||  URI[0] == 0) {
		STRUCT_XML_NAME_SORTED	* entity = first_character_name_sorted_xml;
		while  (entity) {
			STRUCT_XML_ELEMENT	* reference = entity->reference;
			if	(reference) {
				STRUCT_XML_ARGUMENT	* arguments = reference->arguments;
				while  (arguments) {
					STRUCT_CHARACTER_ARGUMENT	* schemaArgument = arguments->schemaArgument;
					if	(equals(schemaArgument->argument_name, "namespace")) {
						URI = arguments->content;
					}
					arguments = arguments->next;
				}
			}
			entity = entity->next;
			if	(entity == entity->next) {
				entity = NULL;
			}
		}
	}

	if	(errorCode = buildXSDHeader(XSD, info, URI)) {
		return	errorCode;
	}

	if	(errorCode = buildRootElementDeclaration(XSD, info)) {
		return	errorCode;
	}

	if	(errorCode = buildElementDeclarations(XSD, info)) {
		return	errorCode;
	}

	if	(errorCode = buildElementReferenceDeclarations(XSD, info)) {
		return	errorCode;
	}

	if	(errorCode = buildComplexTypesForElementDeclarations(XSD, info)) {
		return	errorCode;
	}

	if	(errorCode = buildComplexTypesForElementReferenceDeclarations(XSD, info)) {
		return	errorCode;
	}

	if	(errorCode = buildGroupDeclarations(XSD, info)) {
		return	errorCode;
	}

	if	(errorCode = buildEnumerationTypeDeclarations(XSD, info)) {
		return	errorCode;
	}

	if	(errorCode = buildSimpleTypeDeclarations(XSD, info)) {
		return	errorCode;
	}
	
	if	(errorCode = buildStandardDeclarations(XSD, info)) {
		return	errorCode;
	}

	if	(errorCode = buildXSDFooter(XSD, info)) {
		return	errorCode;
	}

	return	OK;
}

bool	CheckTemplateString_(STRUCT_CHARACTER_NAME * template_structure)
{
	char	* template_name = template_structure->display_name;
	int		template_name_size = template_structure->word_size - 8;

	if	( (template_name[template_name_size] == 'T')  &&
		  (template_name[template_name_size + 1] == 'e')  &&
		  (template_name[template_name_size + 2] == 'm')  &&
		  (template_name[template_name_size + 3] == 'p')  &&
		  (template_name[template_name_size + 4] == 'l')  &&
		  (template_name[template_name_size + 5] == 'a')  &&
		  (template_name[template_name_size + 6] == 't')  &&
		  (template_name[template_name_size + 7] == 'e') ) {
		return	true;
	} else {
		return	false;
	}
}

