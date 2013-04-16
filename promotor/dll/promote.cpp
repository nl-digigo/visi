// LeftView.cpp : implementation of the CLeftView class
//

#include "stdafx.h"

#include "promote.h"
#include "dll.h"

extern	STRUCT_XML_NAME_SORTED			* first_character_name_sorted_xml;
extern	STRUCT_CHARACTER_NAME_SORTED	* first_character_name_sorted_5;
extern	STRUCT_CHARACTER_NAME			* entity;
extern	char	* schema_name,
				* schema_name_5;

int		promote(CString * info)
{
	STRUCT_CHARACTER_INDEX			** entity_reference;
	STRUCT_XML_NAME_SORTED			* xmlElement;
	STRUCT_CHARACTER_NAME_SORTED	* _5;
	STRUCT_CHARACTER_NAME			* _5Reference;
	int		error;

	resetGlobalSchema(info);
	
	_5 = first_character_name_sorted_5;

	while  (_5) {
		_5Reference = _5->reference;
		if	(CheckKeywordString(_5Reference)) {
			xmlElement = first_character_name_sorted_xml;
			
			while  (xmlElement) {
				if	(CheckTemplateString(_5->reference)) {
					if	(CompareTypeTemplateString(xmlElement->reference->schema, _5Reference)) {
						entity_reference = checkAndInsertWord(xmlElement->reference->word_size, xmlElement->reference->name, _5Reference, info);
						if	(error = CreatePromotorArguments(entity_reference, _5Reference, xmlElement, info)) {
							return	error;
						}
					}
				} else {
					if	(CompareTypeInstanceString(xmlElement->reference->schema, _5Reference)) {
						//
						//	We have to take the instance of this entity, instead of the entity itself
						//
						entity_reference = checkAndInsertWord(xmlElement->reference->word_size, xmlElement->reference->name, _5Reference, info);
						if	(error = CreatePromotorArguments(entity_reference, _5Reference, xmlElement, info)) {
							return	error;
						}
					}
				}

				if	(xmlElement == xmlElement->next) {
					xmlElement = NULL;
				} else {
					xmlElement = xmlElement->next;
				}
			}
		} else {
			//
			//	No keyword found
			//
			entity_reference = checkAndInsertWord(_5Reference->word_size, _5Reference->name, _5Reference, info);
			if	(error = CreatePromotorArguments(entity_reference, _5Reference, xmlElement, info)) {
				return	error;
			}
		}

		if	(_5 == _5->next) {
			_5 = NULL;
		} else {
			_5 = _5->next;
		}
	}

	schema_name = schema_name_5;
	setFixedSchema(SET__9, info);

	return	OK;
}

int		CreatePromotorArguments(STRUCT_CHARACTER_INDEX ** entity_reference, STRUCT_CHARACTER_NAME * reference, STRUCT_XML_NAME_SORTED * parentXmlElement, CString * info)
{
	STRUCT_XML_NAME_SORTED		* xmlElement;
	STRUCT_CHARACTER_ARGUMENT	* argument = reference->arguments;
	char	* name;
	int		name_size;
	entity = *((STRUCT_CHARACTER_NAME **) entity_reference);
	
	while  (argument) {
		if	(argument->reference) {
			if	(CheckInstanceString(argument->reference)) {
				if	(xmlElement = GetXMLElement(argument->reference, info)) {
					schemaAddArgument(argument->argument_name_size,
									  argument->argument_name,
									  argument->optional,
									  argument->static_type,
									  argument->group,
									  argument->reference,
									  info);
					argument->reference->name = xmlElement->reference->name;
					argument->reference->display_name = xmlElement->reference->name;
					argument->reference->word_size = xmlElement->reference->word_size;
				} else {
					return	PROMOTE_XML_NOT_EXACTLY_ONE_OBJECT;
				}
			} else {
				if  (CheckVirtualString(argument->reference)) {
                    //
                    //      Virtual always gets its parent as nested element also, otherwise no need for virtual
                    //
					name = argument->argument_name;
					name_size = argument->argument_name_size;
					if	( (name_size == 8)	&&
						  (name[0] == 't')	&&
						  (name[1] == 'e')  &&
						  (name[2] == 'm')  &&
						  (name[3] == 'p')  &&
						  (name[4] == 'l')  &&
						  (name[5] == 'a')  &&
						  (name[6] == 't')  &&
						  (name[7] == 'e')  ) {
						STRUCT_XML_ARGUMENT		* xmlArgument = parentXmlElement->reference->arguments;

						while  (xmlArgument) {
							if	(xmlArgument->schemaArgument->reference) {
								if	(CompareTypeTemplateString(xmlArgument->schemaArgument->reference, reference)) {
									//
									//	Found right argument, now we have to add references
									//
									STRUCT_XML_ELEMENT_REFERENCE	* elementReference = xmlArgument->elementReference;
									STRUCT_CHARACTER_INDEX			** entity_ref;

									while  (elementReference) {
										char	* ch = new char[elementReference->reference->word_size+1];
										int		i = elementReference->reference->word_size;

										ch[i] = 0;
										while  (i) {
											i--;
											ch[i] = elementReference->reference->name[i];
										}

										if	('A' <= ch[0]  &&  ch[0] <= 'Z') {
											ch[0] += 'a' - 'A';
										} else {
										    if	('a' <= ch[0]  &&  ch[0] <= 'z') {
                                                elementReference->reference->name[i] += 'A' - 'a';
                                            }
											//	ERROR EXPECTING UPPERCASE LETTER AS FIRST ELEMENT
										}

										entity_ref = checkAndInsertWord(elementReference->reference->word_size, elementReference->reference->name, info);

										STRUCT_CHARACTER_ARGUMENT	* arg;
										arg = schemaAddArgument(elementReference->reference->word_size,
																ch,
																true,
																NONE,
																false,
																*((STRUCT_CHARACTER_NAME **) entity_ref),
																info);

										arg->set_or_list = SET;

										elementReference = elementReference->next;
									}
								}
                            }

							xmlArgument = xmlArgument->next;
                        }
                    }
                }

				if	( (CheckTemplateString(argument->reference))  ||
					  (CheckVirtualString(argument->reference)) ) {
					name = argument->argument_name;
					name_size = argument->argument_name_size;
					if	( (name_size == 8)	&&
						  (name[0] == 't')	&&
						  (name[1] == 'e')  &&
						  (name[2] == 'm')  &&
						  (name[3] == 'p')  &&
						  (name[4] == 'l')  &&
						  (name[5] == 'a')  &&
						  (name[6] == 't')  &&
						  (name[7] == 'e')  ) {
						STRUCT_XML_ARGUMENT		* xmlArgument = parentXmlElement->reference->arguments;

						while  (xmlArgument) {
							if	(xmlArgument->schemaArgument->reference) {
								if	(CompareTypeTemplateString(xmlArgument->schemaArgument->reference, argument->reference)) {
									//
									//	Found right argument, now we have to add references
									//
									STRUCT_XML_ELEMENT_REFERENCE	* elementReference = xmlArgument->elementReference;
									STRUCT_CHARACTER_INDEX			** entity_ref;

									while  (elementReference) {
										char	* ch = new char[elementReference->reference->word_size+1];
										int		i = elementReference->reference->word_size;

										ch[i] = 0;
										while  (i) {
											i--;
											ch[i] = elementReference->reference->name[i];
										}

										if	('A' <= ch[0]  &&  ch[0] <= 'Z') {
											ch[0] += 'a' - 'A';
										} else {
										    if	('a' <= ch[0]  &&  ch[0] <= 'z') {
                                                elementReference->reference->name[i] += 'A' - 'a';
                                            }
											//	ERROR EXPECTING UPPERCASE LETTER AS FIRST ELEMENT
										}

										entity_ref = checkAndInsertWord(elementReference->reference->word_size, elementReference->reference->name, info);

										STRUCT_CHARACTER_ARGUMENT	* arg;
										arg = schemaAddArgument(elementReference->reference->word_size,
																ch,
																true,
																NONE,
																false,
																*((STRUCT_CHARACTER_NAME **) entity_ref),
																info);

										arg->set_or_list = SET;

										elementReference = elementReference->next;
									}
								} else {
									if	(CompareTypeVirtualString(xmlArgument->schemaArgument->reference, argument->reference)) {
										//
										//	Found right argument, now we have to add references
										//
										STRUCT_XML_ELEMENT_REFERENCE	* elementReference = xmlArgument->elementReference;

										while  (elementReference) {
											char	* ch = new char[elementReference->reference->word_size+1];
											int		i = elementReference->reference->word_size;

											ch[i] = 0;
											while  (i) {
												i--;
												ch[i] = elementReference->reference->name[i];
											}

											if	('A' <= ch[0]  &&  ch[0] <= 'Z') {
												ch[0] += 'a' - 'A';
											} else {
										    if	('a' <= ch[0]  &&  ch[0] <= 'z') {
                                                elementReference->reference->name[i] += 'A' - 'a';
                                            }
												//	ERROR EXPECTING UPPERCASE LETTER AS FIRST ELEMENT
											}

											STRUCT_XML_ARGUMENT	* xmlArg, * xmlSubArg;
											int		static_type = NULL;
											char	* set = NULL;

											xmlArg = elementReference->reference->arguments;
											while  (xmlArg) {
												if	(CheckString("userDefinedType", xmlArg->schemaArgument->argument_name, xmlArg->schemaArgument->argument_name_size)) {
													if	( (xmlArg->elementReference)  &&
														  (xmlArg->elementReference->reference) ) {
														xmlSubArg = xmlArg->elementReference->reference->arguments;

														while  (xmlSubArg) {
															if	(CheckString("baseType", xmlSubArg->schemaArgument->argument_name, xmlSubArg->schemaArgument->argument_name_size)) {
																if	(CheckStringCaseInsensitive("BOOL", xmlSubArg->content)) {
																	static_type = BOOLEAN;
																}
																if	(CheckStringCaseInsensitive("BOOLEAN", xmlSubArg->content)) {
																	static_type = BOOLEAN;
																}
																if	(CheckStringCaseInsensitive("DATE", xmlSubArg->content)) {
																	static_type = DATE;
																}
																if	(CheckStringCaseInsensitive("DATETIME", xmlSubArg->content)) {
																	static_type = DATETIME;
																}
																if	(CheckStringCaseInsensitive("TIME", xmlSubArg->content)) {
																	static_type = TIME;
																}
																if	(CheckStringCaseInsensitive("DECIMAL", xmlSubArg->content)) {
																	static_type = DECIMAL;
																}
																if	(CheckStringCaseInsensitive("INT", xmlSubArg->content)) {
																	static_type = INTEGER;
																}
																if	(CheckStringCaseInsensitive("INTEGER", xmlSubArg->content)) {
																	static_type = INTEGER;
																}
																if	(CheckStringCaseInsensitive("REAL", xmlSubArg->content)) {
																	static_type = REAL;
																}
																if	(CheckStringCaseInsensitive("STRING", xmlSubArg->content)) {
																	static_type = STRING;
																}
															}

															if	(CheckString("xsdRestriction", xmlSubArg->schemaArgument->argument_name, xmlSubArg->schemaArgument->argument_name_size)) {
																set = xmlSubArg->content;
															}

															xmlSubArg = xmlSubArg->next;
														}
													}
												}

												xmlArg = xmlArg->next;
											}

											STRUCT_CHARACTER_ARGUMENT	* arg;
											arg = schemaAddArgument(elementReference->reference->word_size,
																	ch,
																	false,
																	static_type,
																	false,
																	NULL,
																	info);

											arg->content = set;

											elementReference = elementReference->next;
										}
									}
								}
							}
							xmlArgument = xmlArgument->next;
						}

						xmlElement = first_character_name_sorted_xml;
						while  (xmlElement) {
//							if	(xmlElement->reference->parent == parentXmlElement->reference) {
//								schemaAddArgument(xmlElement->reference->word_size,
//												  xmlElement->reference->name,
//												  info);
//							}

							if	(xmlElement == xmlElement->next) {
								xmlElement = NULL;
							} else {
								xmlElement = xmlElement->next;
							}
						}
					} else {
						schemaAddArgument(argument->argument_name_size,
										  argument->argument_name,
										  argument->optional,
										  argument->static_type,
										  true,
										  argument->reference,
										  info);
					}
				} else {
					schemaAddArgument(argument->argument_name_size,
									  argument->argument_name,
									  argument->optional,
									  argument->static_type,
									  argument->group,
									  argument->reference,
									  info);
				}
			}
		} else {
			schemaAddArgument(argument->argument_name_size,
							  argument->argument_name,
							  argument->optional,
							  argument->static_type,
							  argument->group,
							  argument->reference,
							  info);
		}

		argument = argument->next;
	}

	return	OK;
}

STRUCT_XML_NAME_SORTED	* GetXMLElement(STRUCT_CHARACTER_NAME * reference, CString * info)
{
	STRUCT_XML_NAME_SORTED	* rValue, * xmlElement = first_character_name_sorted_xml;
	int		cnt = 0;
	
	while  (xmlElement) {
		if	(CompareTypeInstanceString(xmlElement->reference->schema, reference)) {
			cnt++;
			rValue = xmlElement;
		}

		if	(xmlElement == xmlElement->next) {
			xmlElement = NULL;
		} else {
			xmlElement = xmlElement->next;
		}
	}

	if	(cnt == 1) {
		return	rValue;
	} else {
		//
		//	XML file has not exactly one object as expected by _5.exp file
		//
		(* info) += "XML file has not exactly one object (";
		(* info) += reference->display_name;
		(* info) += ") as expected by _5.exp file\n\r";
		return	NULL;
	}
}

bool	CompareTypeInstanceString(STRUCT_CHARACTER_NAME * type_structure, STRUCT_CHARACTER_NAME * instance_structure)
{
	int		type_name_size = type_structure->word_size,
			instance_name_size = instance_structure->word_size - 8;

	if	( (type_name_size > 0)  &&
		  (instance_name_size > 0) &&
		  (type_name_size == instance_name_size) ) {
		int		i = 0;
		char	* type_name = type_structure->display_name,
				* instance_name = instance_structure->display_name;

		while  (i < type_name_size) {
			if	(type_name[i] != instance_name[i]) {
				return	false;
			}

			i++;
		}

		if	( (instance_name[instance_name_size] == 'I')	  &&
			  (instance_name[instance_name_size + 1] == 'n')  &&
			  (instance_name[instance_name_size + 2] == 's')  &&
			  (instance_name[instance_name_size + 3] == 't')  &&
			  (instance_name[instance_name_size + 4] == 'a')  &&
			  (instance_name[instance_name_size + 5] == 'n')  &&
			  (instance_name[instance_name_size + 6] == 'c')  &&
			  (instance_name[instance_name_size + 7] == 'e')  ) {
			return	true;
		}
	}

	return	false;
}

bool	CompareTypeTemplateString(STRUCT_CHARACTER_NAME * type_structure, STRUCT_CHARACTER_NAME * template_structure)
{
	int		type_name_size = type_structure->word_size - 4,
			template_name_size = template_structure->word_size - 8;

	if	( (type_name_size > 0)  &&
		  (template_name_size > 0) &&
		  (type_name_size == template_name_size) ) {
		int		i = 0;
		char	* type_name = type_structure->display_name,
				* template_name = template_structure->display_name;

		while  (i < type_name_size) {
			if	(type_name[i] != template_name[i]) {
				return	false;
			}

			i++;
		}

		if	( (type_name[type_name_size] == 'T')			  &&
			  (type_name[type_name_size + 1] == 'y')		  &&
			  (type_name[type_name_size + 2] == 'p')		  &&
			  (type_name[type_name_size + 3] == 'e')		  &&
			  (template_name[template_name_size] == 'T')	  &&
			  (template_name[template_name_size + 1] == 'e')  &&
			  (template_name[template_name_size + 2] == 'm')  &&
			  (template_name[template_name_size + 3] == 'p')  &&
			  (template_name[template_name_size + 4] == 'l')  &&
			  (template_name[template_name_size + 5] == 'a')  &&
			  (template_name[template_name_size + 6] == 't')  &&
			  (template_name[template_name_size + 7] == 'e')  ) {
			return	true;
		}
	}

	return	false;
}

bool	CompareTypeVirtualString(STRUCT_CHARACTER_NAME * type_structure, STRUCT_CHARACTER_NAME * virtual_structure)
{
	int		type_name_size = type_structure->word_size - 4,
			virtual_name_size = virtual_structure->word_size - 7;

	if	( (type_name_size > 0)  &&
		  (virtual_name_size > 0) &&
		  (type_name_size == virtual_name_size) ) {
		int		i = 0;
		char	* type_name = type_structure->display_name,
				* virtual_name = virtual_structure->display_name;

		while  (i < type_name_size) {
			if	(type_name[i] != virtual_name[i]) {
				return	false;
			}

			i++;
		}

		if	( (type_name[type_name_size] == 'T')			&&
			  (type_name[type_name_size + 1] == 'y')		&&
			  (type_name[type_name_size + 2] == 'p')		&&
			  (type_name[type_name_size + 3] == 'e')		&&
			  (virtual_name[virtual_name_size] == 'V')		&&
			  (virtual_name[virtual_name_size + 1] == 'i')  &&
			  (virtual_name[virtual_name_size + 2] == 'r')  &&
			  (virtual_name[virtual_name_size + 3] == 't')  &&
			  (virtual_name[virtual_name_size + 4] == 'u')  &&
			  (virtual_name[virtual_name_size + 5] == 'a')  &&
			  (virtual_name[virtual_name_size + 6] == 'l')  ) {
			return	true;
		}
	}

	return	false;
}


bool	CheckKeywordString(STRUCT_CHARACTER_NAME * structure)
{
	//
	//	Keywords to search for: Template - Instance - Virtual
	//
	char	* instance_name = structure->display_name,
			* template_name = structure->display_name,
			* virtual_name = structure->display_name;
	int		instance_name_size = structure->word_size - 8,
			template_name_size = structure->word_size - 8,
			virtual_name_size = structure->word_size - 7;

	if	( (instance_name[instance_name_size] == 'I')  &&
		  (instance_name[instance_name_size + 1] == 'n')  &&
		  (instance_name[instance_name_size + 2] == 's')  &&
		  (instance_name[instance_name_size + 3] == 't')  &&
		  (instance_name[instance_name_size + 4] == 'a')  &&
		  (instance_name[instance_name_size + 5] == 'n')  &&
		  (instance_name[instance_name_size + 6] == 'c')  &&
		  (instance_name[instance_name_size + 7] == 'e') ) {
		return	true;
	} else {
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
			if	( (virtual_name[virtual_name_size] == 'V')  &&
				  (virtual_name[virtual_name_size + 1] == 'i')  &&
				  (virtual_name[virtual_name_size + 2] == 'r')  &&
				  (virtual_name[virtual_name_size + 3] == 't')  &&
				  (virtual_name[virtual_name_size + 4] == 'u')  &&
				  (virtual_name[virtual_name_size + 5] == 'a')  &&
				  (virtual_name[virtual_name_size + 6] == 'l') ) {
				return	true;
			} else {
				return	false;
			}
		}
	}
}

bool	CheckTemplateString(STRUCT_CHARACTER_NAME * template_structure)
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

bool	CheckVirtualString(STRUCT_CHARACTER_NAME * virtual_structure)
{
	char	* virtual_name = virtual_structure->display_name;
	int		virtual_name_size = virtual_structure->word_size - 7;

	if	( (virtual_name[virtual_name_size] == 'V')  &&
		  (virtual_name[virtual_name_size + 1] == 'i')  &&
		  (virtual_name[virtual_name_size + 2] == 'r')  &&
		  (virtual_name[virtual_name_size + 3] == 't')  &&
		  (virtual_name[virtual_name_size + 4] == 'u')  &&
		  (virtual_name[virtual_name_size + 5] == 'a')  &&
		  (virtual_name[virtual_name_size + 6] == 'l') ) {
		return	true;
	} else {
		return	false;
	}
}

bool	CheckInstanceString(STRUCT_CHARACTER_NAME * instance_structure)
{
	char	* instance_name = instance_structure->display_name;
	int		instance_name_size = instance_structure->word_size - 8;

	if	( (instance_name[instance_name_size] == 'I')  &&
		  (instance_name[instance_name_size + 1] == 'n')  &&
		  (instance_name[instance_name_size + 2] == 's')  &&
		  (instance_name[instance_name_size + 3] == 't')  &&
		  (instance_name[instance_name_size + 4] == 'a')  &&
		  (instance_name[instance_name_size + 5] == 'n')  &&
		  (instance_name[instance_name_size + 6] == 'c')  &&
		  (instance_name[instance_name_size + 7] == 'e') ) {
		return	true;
	} else {
		return	false;
	}
}

bool	CheckStringCaseInsensitive(char * checkName, char * name)
{
	if	(name) {
		int		i = 0;
	
		while  (name[i]) {
			if	(checkName[i] >= 'a'  &&  checkName[i] <= 'z') {
				if	(name[i] >= 'a'  &&  name[i] <= 'z') {
					if	(checkName[i] - 'a' + 'A'  != name[i] - 'a' + 'A' ) {
						return	false;
					}
				} else {
					if	(checkName[i] - 'a' + 'A' != name[i]) {
						return	false;
					}
				}
			} else {
				if	(name[i] >= 'a'  &&  name[i] <= 'z') {
					if	(checkName[i] != name[i] - 'a' + 'A' ) {
						return	false;
					}
				} else {
					if	(checkName[i] != name[i]) {
						return	false;
					}
				}
			}

			i++;
		}

		if	(checkName[i] == 0) {
			return	true;
		}
	}

	return	false;
}

bool	CheckString(char * checkName, char * name)
{
	if	(name) {
		int		i = 0;
	
		while  (name[i]) {
			if	(checkName[i] != name[i]) {
				return	false;
			}
			i++;
		}

		if	(checkName[i] == 0) {
			return	true;
		}
	}

	return	false;
}

bool	CheckString(char * checkName, char * name, int name_size)
{
	int		i = 0;

	while  (i < name_size) {
		if	(checkName[i] != name[i]) {
			return	false;
		}
		i++;
	}

	if	(checkName[i] == 0) {
		return	true;
	} else {
		return	false;
	}
}
