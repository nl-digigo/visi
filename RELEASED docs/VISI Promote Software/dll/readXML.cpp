// LeftView.cpp : implementation of the CLeftView class
//

#include "stdafx.h"

#include "readXML.h"
#include "dll.h"

extern	STRUCT_XML_NAME_SORTED			* first_character_name_sorted_xml;
extern	STRUCT_CHARACTER_NAME_SORTED	* first_character_name_sorted_5;

extern	bool							eof;
extern	int								count_character_name_sorted_xml;
extern	char							retrieved_name[MAX_WORD_SIZE];
extern	char							uppercase_name[MAX_WORD_SIZE];
extern	int								name_size, line, column;

STRUCT_CHARACTER_INDEX					* xml_word_length_references[MAX_EXPRESS_WORD_SIZE+1];




bool	CompareTypeTemplateString(STRUCT_CHARACTER_NAME * type_structure, STRUCT_CHARACTER_NAME * template_structure);


int		readXML(int type, CString * info, CString * errorLine)
{
	char	buffer[64];
	int		root_index = 0, error_code = OK;

	//
	//	Get info from schema from _2
	//
	setGlobalSchema(SET__2, info);

	first_character_name_sorted_xml = NULL;
	count_character_name_sorted_xml = 0;

	if	(type != SET__7) {
		return	STREAM_PARSED_INCORRECTLY;
	}

//	while  (! eof) {
		if	(error_code = readXMLRoot(info)) {
			//
			//	Something went wrong, in the future a logfile generator should be implemented at this place.
			//

			switch  (error_code) {
/*				case  ERROR_UNEXPECTED_CHAR_IN_ROOT:
					error_code = error_code;
					break;
				case  ERROR_UNEXPECTED_CHAR_IN_TYPE:
					error_code = error_code;
					break;
				case  ERROR_UNEXPECTED_CHAR_IN_TYPE_LIST:
					error_code = error_code;
					break;
				case  ERROR_UNEXPECTED_CHAR_IN_TYPE_END:
					error_code = error_code;
					break;
				case  ERROR_UNEXPECTED_CHAR_IN_ENUMERATION:
					error_code = error_code;
					break;
				case  ERROR_UNEXPECTED_CHAR_IN_ENUMERATION_LIST:
					error_code = error_code;
					break;
				case  ERROR_UNEXPECTED_CHAR_IN_ENUMERATION_END:
					error_code = error_code;
					break;
				case  ERROR_UNEXPECTED_CHAR_IN_ENTITY:
					error_code = error_code;
					break;
				case  ERROR_UNEXPECTED_CHAR_IN_ENTITY_SUBTYPE:
					error_code = error_code;
					break;
				case  ERROR_UNEXPECTED_CHAR_IN_ENTITY_ABSTRACT:
					error_code = error_code;
					break;
				case  ERROR_UNEXPECTED_CHAR_IN_ENTITY_SUPERTYPE:
					error_code = error_code;
					break;
				case  ERROR_UNEXPECTED_CHAR_IN_ENTITY_END:
					error_code = error_code;
					break;
				case  ERROR_UNEXPECTED_CHAR_IN_ENTITY_NO_KEYWORD:
					error_code = error_code;
					break;
				case  ERROR_UNEXPECTED_CHAR_IN_ENTITY_LIST_OR_SET:
					error_code = error_code;
					break;
				case  ERROR_UNEXPECTED_CHAR_IN_ROOT_TYPE:
					error_code = error_code;
					break;
				case  ERROR_UNEXPECTED_CHAR_IN_ROOT_LINE_COMMENT:
					error_code = error_code;
					break;
				case  ERROR_UNEXPECTED_CHAR_IN_ROOT_COMMENT:
					error_code = error_code;
					break;
				case  ERROR_UNEXPECTED_CHAR_IN_SCHEMA:
					error_code = error_code;
					break;
				case  ERROR_UNEXPECTED_CHAR_IN_SCHEMA_TYPE_STRING:
					error_code = error_code;
					break;
				case  ERROR_UNEXPECTED_CHAR_IN_SCHEMA_STRING:
					error_code = error_code;
					break;
				case  ERROR_UNEXPECTED_CHAR_IN_SELECT:
					error_code = error_code;
					break;
				case  ERROR_UNEXPECTED_CHAR_IN_FUNCTION:
					error_code = error_code;
					break;
				case  ERROR_UNEXPECTED_CHAR_IN_PROCEDURE:
					error_code = error_code;
					break;
				case  ERROR_UNEXPECTED_CHAR_IN_RULE:
					error_code = error_code;
					break;
				case  ERROR_UNEXPECTED_CHAR_IN_RULE_SCHEMA:
					error_code = error_code;
					break;
				case  ERROR_UNEXPECTED_CHAR_IN_BEGIN_C:
					error_code = error_code;
					break;
				case  ERROR_UNEXPECTED_CHAR_IN_USE:
					error_code = error_code;
					break;*/
				default:
					error_code = error_code;
					break;
			}

			(* errorLine) = "found in XML: ";
			(* errorLine) += retrieved_name;
			(* errorLine) += " (regel: ";
			(* errorLine) += itoa(line, buffer, 10);
			(* errorLine) += " , kolom:";
			(* errorLine) += itoa(column, buffer, 10);
			(* errorLine) += ")";

//			undoGetByte();

			while  ((*getByte()) != ';') {
			}
		}
//	}

//	count_character_name_sorted_XML = count_character_name_sorted;
//	first_character_name_sorted_XML = first_character_name_sorted;

//	setFixedSchema(SET__9, info);
	
	if	(error_code == OK) {
		STRUCT_XML_NAME_SORTED	* xmlElement = first_character_name_sorted_xml;
		
		//
		//	START update 2012 06 05 => rename complex elements into upper case
		//
	
		STRUCT_CHARACTER_NAME_SORTED	* _5 = first_character_name_sorted_5;

		while  (_5) {
			STRUCT_CHARACTER_NAME	* _5Reference = _5->reference;
			bool	takeThis = false;
			//
			//	Check if this is a template in others
			//
			STRUCT_CHARACTER_NAME_SORTED	* others = first_character_name_sorted_5;
			while  (others) {
				STRUCT_CHARACTER_ARGUMENT	* arguments = others->reference->arguments;
				while  (arguments) {
					if	( (arguments->argument_name_size == 8)  &&
						  (arguments->argument_name[0] == 't')  &&
						  (arguments->argument_name[1] == 'e')  &&
						  (arguments->argument_name[2] == 'm')  &&
						  (arguments->argument_name[3] == 'p')  &&
						  (arguments->argument_name[4] == 'l')  &&
						  (arguments->argument_name[5] == 'a')  &&
						  (arguments->argument_name[6] == 't')  &&
						  (arguments->argument_name[7] == 'e') ) {
						if	(arguments->reference == _5Reference) {
							takeThis = true;
						}
					}
					arguments = arguments->next;
				}
				if	(others == others->next) {
					others = NULL;
				} else {
					others = others->next;
				}
			}

			if	(takeThis) {
				xmlElement = first_character_name_sorted_xml;
				while  (xmlElement) {
					if	(CompareTypeTemplateString(xmlElement->reference->schema, _5Reference)) {
						if	(xmlElement->reference->name[0] >= 'a'  &&  xmlElement->reference->name[0] <= 'z') {
							xmlElement->reference->name[0] += 'A' - 'a';
						}
						int c=0;
					}


					if	(xmlElement == xmlElement->next) {
						xmlElement = NULL;
					} else {
						xmlElement = xmlElement->next;
					}
				}
			}

			if	(_5 == _5->next) {
				_5 = NULL;
			} else {
				_5 = _5->next;
			}
		}

		xmlElement = first_character_name_sorted_xml;
		
		//
		//	END update 2012 06 05 => rename complex elements into upper case
		//

		while  (xmlElement) {
			if	(!xmlElement->reference) {
				return	XML_FILE_ELEMENT_MISSES_CONTENT;
			}

			if	(!xmlElement->reference->schema) {
				return	XML_FILE_ELEMENT_MISSES_SCHEMA_ENTITY;
			}

			if	(xmlElement->reference->defined == false) {
				return	XML_FILE_ELEMENT_MISSES_DEFINITION;
			}

			if	(xmlElement == xmlElement->next) {
				xmlElement = NULL;
			} else {
				xmlElement = xmlElement->next;
			}
		}
	} else {
		return	error_code;
	}

	return	OK;
}

int		readXMLArguments(STRUCT_CHARACTER_ARGUMENT * arguments, STRUCT_XML_ELEMENT * parent, CString * info)
{
	int	state = 1, word_size = 0, error;

	while  (state == 1) {
		switch  (*getByte()) {
			case  '<':
				if	(*getByte() == '/') {
					//
					//	Read word should be equal to containing element name
					//
					state = 0;
				} else {
					undoGetByte();
					if	(error = readXMLArgument(&arguments, parent, info)) {
						return	error;
					}
				}
				break;
			S
				break;
			default:
				return	XML_FILE_STRUCTURE_INCORRECT;
		}
	}

	return	OK;
}

bool	checkName(int word_size, char * word)
{

	if	(word_size == name_size) {
		int		i = 0;

		while  (i < name_size) {
			if	(word[i] != retrieved_name[i]) {
				return	false;
			}
			i++;
		}

		return	true;
	}

	return	false;
}

int		readXMLArgument(STRUCT_CHARACTER_ARGUMENT ** arguments, STRUCT_XML_ELEMENT * parent, CString * info)
{
	//
	//	First argument element already found. We are sure this argument element is existing.
	//
	STRUCT_XML_ARGUMENT 	* argument;
	int	state = 1, word_size = 0, id = 0, error;

	readXMLWord(info);

	if	(!(* arguments)) {
		return	XML_FILE_ARGUMENT_NOT_FOUND_IN_SCHEMA;
	}

	//
	//	Check name
	//
	while  (!checkName((* arguments)->argument_name_size, (* arguments)->argument_name)) {
		//
		//	Expected argument is not found in XML file
		//
		if	((* arguments)->optional) {
			(* arguments) = (* arguments)->next;
			if	(!(* arguments)) {
				return	XML_FILE_ARGUMENT_NOT_FOUND_IN_SCHEMA;
			}
		} else {
			return	XML_FILE_NON_OPTIONAL_ARGUMENT_MISSING;
		}
	}

	argument = addXMLArgument(parent, (* arguments));

	while  (state == 1) {
		switch  (*getByte()) {
			case  '>':
				state = 0;
				break;
			case  '/':
				if	(*getByte() == '>') {
					(* arguments) = (* arguments)->next;
					//
					//	Empty argument
					//
					return	OK;
				} else {
					return	XML_FILE_STRUCTURE_INCORRECT;
				}
				break;
			S
				break;
			default:
				return	XML_FILE_STRUCTURE_INCORRECT;
		}
	}

	//
	//	Get argument and argument closing tag
	//

	CString	content = "";

	if	((* arguments)->reference) {
		if	(error = readXMLElements((* arguments)->reference, argument, info)) {
			return	error;
		}
	} else {
		char	ch;
		while  ((ch = *getByte()) != '<') {
			content += ch;
			if	(!ch) {
				return	XML_FILE_STRUCTURE_INCORRECT;
			}
		}
	}

	int	i = content.GetLength()+1;
	argument->content = new char[i--];
	argument->content[i] = 0;
	while  (i) {
		i--;
		argument->content[i] = content[i];
	}


	if	(*getByte() == '/') {
		readXMLWord(info);
		if	(*getByte() == '>') {
			state = 0;
			if	(!checkName((* arguments)->argument_name_size, (* arguments)->argument_name)) {
				return	XML_FILE_STRUCTURE_INCORRECT;
			}
		} else {
			return	XML_FILE_STRUCTURE_INCORRECT;
		}
	} else {
		return	XML_FILE_STRUCTURE_INCORRECT;
	}

	(* arguments) = (* arguments)->next;

	return	OK;
}

int		readXMLElements(STRUCT_CHARACTER_NAME * expected_element, STRUCT_XML_ARGUMENT * parentArgument, CString * info)
{
	int	state = 1, word_size = 0, error;

	while  (state == 1) {
		switch  (*getByte()) {
			case  '<':
				if	(*getByte() == '/') {
					//
					//	Read word should be equal to schema name
					//
					undoGetByte();
					state = 0;
				} else {
					undoGetByte();
					if	(error = readXMLElement(expected_element, parentArgument, info)) {
						return	error;
					}
				}
				break;
			S
				break;
			default:
				return	XML_FILE_STRUCTURE_INCORRECT;
		}
	}

	return	OK;
}

int		readXMLElement(STRUCT_CHARACTER_NAME * expected_element, STRUCT_XML_ARGUMENT * parentArgument, CString * info)
{
	STRUCT_CHARACTER_NAME	** element_structure;
	STRUCT_XML_ELEMENT		* xml_element;
	//
	//	First element already found. We are sure this element is existing.
	//
	bool	referenceElement;
	int		state = 1, subState, id = 0, error;

	readXMLWord(info);
	
	//
	//	check if element is referenceElement
	//

	if	( (name_size > 3)  &&
		  (retrieved_name[name_size-3] == 'R')  &&
		  (retrieved_name[name_size-2] == 'e')  &&
		  (retrieved_name[name_size-1] == 'f') ) {
		referenceElement = true;
		name_size -= 3;
	} else {
		referenceElement = false;
	}

	//
	//	Found element, search for element in loaded schema
	//
	if	(!(element_structure = findWord(name_size, retrieved_name, info))) {
		return	XML_FILE_ELEMENT_NOT_FOUND_IN_SCHEMA;
	}

	if	(expected_element) {
		if	(expected_element != (* element_structure)) {
			return	XML_FILE_ELEMENT_NOT_FOUND_IN_SCHEMA;
		}
	}

	while  (state == 1) {
		switch  (*getByte()) {
			case  '>':
				if	(id) {
					//
					//	Start Tag parsed correctly
					//
					state = 0;
				} else {
					//
					//	id is missing
					//
					(* info) += "WARNING: We found an element without ID";
					return	XML_FILE_STRUCTURE_INCORRECT;
				}
				break;
			case  '/':
				if	(id) {
					if	(*getByte() == '>') {
						return	OK;
					} else {
						return	XML_FILE_STRUCTURE_INCORRECT;
					}
				} else {
					//
					//	found an empty Element without ID, but we can perfectly go on
					//
					(* info) += "WARNING: We found an empty element without ID";
					if	(*getByte() == '>') {
						return	OK;
					} else {
						return	XML_FILE_STRUCTURE_INCORRECT;
					}
				}
				break;
			case  'i':
				if	( (id)  ||
					  (*getByte() != 'd') ) {
					return	XML_FILE_STRUCTURE_INCORRECT;
				}

				if	(referenceElement) {
					if	( (*getByte() != 'r')  ||
						  (*getByte() != 'e')  ||
						  (*getByte() != 'f') ) {
						return	XML_FILE_STRUCTURE_INCORRECT;
					}
				}

				//
				//		<Element id
				//		<ElementRef idref
				//

				subState = 1;
				while  (subState) {
					switch	(*getByte()) {
						case  '=':
							subState = 0;
							break;
						S
							break;
						default:
							return	XML_FILE_STRUCTURE_INCORRECT;
					}
				}

				//
				//		<Element id=
				//		<ElementRef idref=
				//

				subState = 1;
				while  (subState) {
					switch	(*getByte()) {
						case  '"':
							subState = 0;
							break;
						S
							break;
						default:
							return	XML_FILE_STRUCTURE_INCORRECT;
					}
				}

				//
				//
				//		<Element id="
				//		<ElementRef idref="

				STRUCT_CHARACTER_INDEX	** entity_reference;
				readXMLWord(info);
				entity_reference = checkAndInsertXMLWord(name_size, retrieved_name, info);

				xml_element = *((STRUCT_XML_ELEMENT **) entity_reference);
				xml_element->schema = (* element_structure);
				if	(!referenceElement) {
					xml_element->defined = true;
				}

				if	(parentArgument) {
					addXMLArgumentReference(parentArgument, xml_element);
				}

				//
				//		<Element id="...
				//		<ElementRef idref="...
				//
				//	Add element to structure, if already existing we get the already created handle
				//

				if	(*getByte() != '"') {
					return	XML_FILE_STRUCTURE_INCORRECT;
				}
				id = 1;

				//
				//		<Element id="..."
				//		<ElementRef idref="..."
				//

				break;
			S
				break;
			default:
				return	XML_FILE_STRUCTURE_INCORRECT;
		}
	}

	if	(referenceElement) {
		//
		//		<ElementRef idref="...">
		//

		state = 1;
		while  (state) {
			switch  (*getByte()) {
				case  '<':
					state = 0;
					break;
				S
					break;
				default:
					return	XML_FILE_STRUCTURE_INCORRECT;
			}
		}

		//
		//		<ElementRef idref="...">
		//		<
		//

		if	(*getByte() != '/') {
			return	XML_FILE_STRUCTURE_INCORRECT;
		}

		//
		//		<ElementRef idref="...">
		//		</
		//

		readXMLWord(info);
		name_size -= 3;

		if	(!(element_structure = findWord(name_size, retrieved_name, info))) {
			return	XML_FILE_ELEMENT_NOT_FOUND_IN_SCHEMA;
		}
	} else {
		//
		//		<Element id="...">
		//

		if	(error = readXMLArguments((* element_structure)->arguments, xml_element, info)) {
			return	error;
		}

		//
		//		<Element id="...">
		//			<argument_1>...</argument_1>
		//			...
		//			<argument_n>...</argument_n>
		//		</
		//

		readXMLWord(info);

		if	(!(element_structure = findWord(name_size, retrieved_name, info))) {
			return	XML_FILE_ELEMENT_NOT_FOUND_IN_SCHEMA;
		}
	}

	//		<Element id="...">
	//			<argument_1>...</argument_1>
	//			...
	//			<argument_n>...</argument_n>
	//		</Element
	//

	if	(*getByte() == '>') {
		return	OK;
	} else {
		return	XML_FILE_STRUCTURE_INCORRECT;
	}
}

int		readXMLRoot(CString * info)
{
	int		state = 1, word_size = 0, error;
	char	ch;

	while  (state == 1) {
		switch  (*getByte()) {
			case  '<':
				if	(*getByte() == '?') {
					while  ((ch = *getByte()) != '>') {
						if	(!ch) {
							return	XML_FILE_VISI_CONTENT_NOT_FOUND;
						}
					}
					return	readXMLRoot(info);
				} else {
					undoGetByte();
					if	(*getByte() == '!') {
						while  ((ch = *getByte()) != '>') {
							if	(!ch) {
								return	XML_FILE_VISI_CONTENT_NOT_FOUND;
							}
						}
						return	readXMLRoot(info);
					} else {
						undoGetByte();
						readXMLWord(info);
						//
						//	Read word should be equal to schema name
						//
						state = 0;
					}
				}
				break;
			S
				break;
			default:
				break;
		}
	}

	while  ((ch = *getByte()) != '>') {
		if	(!ch) {
			return	XML_FILE_VISI_CONTENT_NOT_FOUND;
		}
	}

	if	(error = readXMLElements(NULL, NULL, info)) {
		return	error;
	} else {
		return	OK;
	}
}

void	readXMLWord(CString * info)
{
	int	state = 1, word_size = 0;

	while  (state == 1) {
		switch	(retrieved_name[word_size] = *getByte()) {
			CASE_LOWER_CASE
				uppercase_name[word_size++] = retrieved_name[word_size] + 'A' - 'a';
				break;
			CASE_NUMBER
			CASE_UPPER_CASE
			CASE_SPECIAL_CASE
				uppercase_name[word_size++] = retrieved_name[word_size];
				break;
			default:
				undoGetByte();
				state = 0;
				break;
		}
	}

	retrieved_name[word_size] = 0;
	uppercase_name[word_size] = 0;

	name_size = word_size;
}

STRUCT_CHARACTER_INDEX	** checkAndInsertXMLWord(int word_size, char * word, CString * info)
{
	//
	//	Check maximum word length
	//
	STRUCT_CHARACTER_INDEX	** character_index, ** character_index_referenced, * character_index_tmp;

	if	( (word_size > 0)  &&
		  (word_size < MAX_EXPRESS_WORD_SIZE) ) {
		//
		//	word_length_references
		//
		int		i;
		bool	new_word;

		character_index = &xml_word_length_references[word_size];

		if	(! * character_index) {
			//
			//	First word of this size.
			//
			newXMLCharacterName((STRUCT_XML_ELEMENT **) character_index, word_size, word, info);
		} else {
			//
			//	Found at least one other word.
			//
			bool	ready = false;

			while  (!ready) {
				if  ((* character_index)->index > -1) {
					character_index_referenced = &(* character_index)->reference[word[(* character_index)->index]];
					if	(* character_index_referenced) {
						//
						//	Next reference found.
						//
						character_index = character_index_referenced;
					} else {
						//
						//	New unique name. 
						//
						newXMLCharacterName((STRUCT_XML_ELEMENT **) character_index_referenced, word_size, word, info);
						character_index = character_index_referenced;
						ready = true;
					}
				} else {
					//
					//	Same name as current filtered name.
					//

					//
					//	old name can be found in:   (char *) express_word
					//	new name can be found in:   (char *) (* character_index)->name
					//
					//	Try to find first string that differs.
					i = 0;
					new_word = false;

					while	(i < word_size) {
						if	(word[i] != ((STRUCT_XML_ELEMENT *) (* character_index))->name[i]) {
							character_index_tmp = (* character_index);

							(* character_index) = new STRUCT_CHARACTER_INDEX;
							memset((* character_index), 0, sizeof(STRUCT_CHARACTER_INDEX));

							(* character_index)->index = i;
							(* character_index)->reference[((STRUCT_XML_ELEMENT *) character_index_tmp)->name[i]] = character_index_tmp;

							character_index = &(* character_index)->reference[word[i]];
							newXMLCharacterName((STRUCT_XML_ELEMENT **) character_index, word_size, word, info);

							i = word_size;
							new_word = true;
						}

						i++;
					}

					ready = true;
				}
			}
		}
	} else {
		//
		//	Error
		//
		(* info) += "Element has to short or to long name.";
		return	NULL;
	}

	return	character_index;
}

void	newXMLCharacterName(STRUCT_XML_ELEMENT ** character_name, int word_size, char * word, CString * info)
{
	//
	//	int									index;	// static -1, to discriminate from STRUCT_CHARACTER_INDEX
	//	int									word_size;
	//	char								* name;
	//
	//	STRUCT_CHARACTER_NAME				* schema;
	//	bool								defined;
	//
	//	STRUCT_XML_ARGUMENT					* arguments;
	//
	
	(* character_name) = new STRUCT_XML_ELEMENT;
	(* character_name)->index = -1;

	(* character_name)->word_size = word_size;
	(* character_name)->name = new char[word_size + 1];

	(* character_name)->name[word_size] = 0;
	while  (word_size) {
		(* character_name)->name[word_size] = word[--word_size];
	}

	(* character_name)->schema = NULL;
	(* character_name)->defined = false;

	(* character_name)->arguments = NULL;

	addXMLCharacterNameSort(character_name, info);
}

STRUCT_XML_ARGUMENT 	* addXMLArgument(STRUCT_XML_ELEMENT * element, STRUCT_CHARACTER_ARGUMENT * schemaArgument)
{
	STRUCT_XML_ARGUMENT		* argument;

	if	(element->arguments) {
		argument = element->arguments;
		while  (argument->next) {
			argument = argument->next;
		}
		argument->next = new STRUCT_XML_ARGUMENT;
		argument = argument->next;
	} else {
		element->arguments = new STRUCT_XML_ARGUMENT;
		argument = element->arguments;
	}

	argument->elementReference = 0;
	argument->schemaArgument = schemaArgument;
	argument->next = NULL;
	argument->content = NULL;

	return	argument;
}

void	addXMLArgumentReference(STRUCT_XML_ARGUMENT * argument, STRUCT_XML_ELEMENT * element)
{
	STRUCT_XML_ELEMENT_REFERENCE	* elementReference;

	if	(argument->elementReference) {
		elementReference = argument->elementReference;
		while  (elementReference->next) {
			elementReference = elementReference->next;
		}
		elementReference->next = new STRUCT_XML_ELEMENT_REFERENCE;
		elementReference = elementReference->next;
	} else {
		argument->elementReference = new STRUCT_XML_ELEMENT_REFERENCE;
		elementReference = argument->elementReference;
	}

	elementReference->reference = element;
	elementReference->next = NULL;
}

void	addXMLCharacterNameSort(STRUCT_XML_ELEMENT ** character_name, CString * info)
{
	STRUCT_XML_NAME_SORTED	* character_name_sorted_xml, * new_character_name_sorted_xml;
	int		step_size, i, richting, name_length;
	char	* name;

	name = (* character_name)->name;
	name_length = (* character_name)->word_size;

	count_character_name_sorted_xml++;
	
	if	(! first_character_name_sorted_xml) {
		first_character_name_sorted_xml = new STRUCT_XML_NAME_SORTED;
		first_character_name_sorted_xml->previous = first_character_name_sorted_xml;
		first_character_name_sorted_xml->next = first_character_name_sorted_xml;
		first_character_name_sorted_xml->reference = (* character_name);

		count_character_name_sorted_xml = 1;
	} else {
		character_name_sorted_xml = first_character_name_sorted_xml;
		step_size = (count_character_name_sorted_xml + 1)/2;
		richting = 1;

		while  (step_size > 1) {
			if	(richting == 1) {
				for (i=0; i<step_size; i++) {
					character_name_sorted_xml = character_name_sorted_xml->next;
				}
			} else {
				for (i=0; i<step_size; i++) {
					character_name_sorted_xml = character_name_sorted_xml->previous;
				}
			}

			richting = compareStrings(name, name_length, character_name_sorted_xml->reference->name, character_name_sorted_xml->reference->word_size, info);

			step_size = (step_size + 1)/2;
		}

		if	(richting == 1) {
			character_name_sorted_xml = character_name_sorted_xml->next;
		} else {
			character_name_sorted_xml = character_name_sorted_xml->previous;
		}

		richting = compareStrings(name, name_length, character_name_sorted_xml->reference->name, character_name_sorted_xml->reference->word_size, info);

		if	(richting == 1) {
			character_name_sorted_xml = character_name_sorted_xml->next;
		} else {
			character_name_sorted_xml = character_name_sorted_xml->previous;
		}

		richting = compareStrings(name, name_length, character_name_sorted_xml->reference->name, character_name_sorted_xml->reference->word_size, info);

		if	(richting == 1) {
			new_character_name_sorted_xml = new STRUCT_XML_NAME_SORTED;
			if	(character_name_sorted_xml->next == character_name_sorted_xml) {
				new_character_name_sorted_xml->next = new_character_name_sorted_xml;
			} else {
				character_name_sorted_xml->next->previous = new_character_name_sorted_xml;
				new_character_name_sorted_xml->next = character_name_sorted_xml->next;
			}
			new_character_name_sorted_xml->previous = character_name_sorted_xml;
			new_character_name_sorted_xml->reference = (* character_name);
			character_name_sorted_xml->next = new_character_name_sorted_xml;
		} else {
			new_character_name_sorted_xml = new STRUCT_XML_NAME_SORTED;
			if	(character_name_sorted_xml->previous == character_name_sorted_xml) {
				new_character_name_sorted_xml->previous = new_character_name_sorted_xml;
			} else {
				character_name_sorted_xml->previous->next = new_character_name_sorted_xml;
				new_character_name_sorted_xml->previous = character_name_sorted_xml->previous;
			}
			new_character_name_sorted_xml->next = character_name_sorted_xml;
			new_character_name_sorted_xml->reference = (* character_name);

			character_name_sorted_xml->previous = new_character_name_sorted_xml;
			first_character_name_sorted_xml = first_character_name_sorted_xml->previous;
		}
	}
}
