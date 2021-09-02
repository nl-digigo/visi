// LeftView.cpp : implementation of the CLeftView class
//

#include "stdafx.h"

//#include "readExternalSource.h"
#include "readSchema.h"
#include "dll.h"

extern	bool	eof;

STRUCT_CHARACTER_INDEX			* word_length_references[MAX_EXPRESS_WORD_SIZE+1],
								* word_length_references_2[MAX_EXPRESS_WORD_SIZE+1],
								* word_length_references_5[MAX_EXPRESS_WORD_SIZE+1],
								* word_length_references_9[MAX_EXPRESS_WORD_SIZE+1];
STRUCT_CHARACTER_NAME_SORTED	* first_character_name_sorted,
								* first_character_name_sorted_2,
								* first_character_name_sorted_5,
								* first_character_name_sorted_9;
STRUCT_XML_NAME_SORTED			* first_character_name_sorted_xml;
STRUCT_CHARACTER_NAME			* entity,
								* entity_2,
								* entity_5,
								* entity_9;
char							* schema_name,
								* schema_name_2,
								* schema_name_5,
								* schema_name_9;

int		count_character_name_sorted,
		count_character_name_sorted_2,
		count_character_name_sorted_5,
		count_character_name_sorted_9,
		count_character_name_sorted_xml;

char	retrieved_name[MAX_WORD_SIZE];
char	uppercase_name[MAX_WORD_SIZE];
char	description[1024];
int		name_size;


int		readSchema(int type, CString * info)
{
	int		root_index = 0, error_code;

	resetGlobalSchema(info);

	switch	(type) {
		case  SET__2:
		case  SET__5:
		case  SET__9:
			break;
		default:
			return	STREAM_PARSED_INCORRECTLY;
	}

	while  (! eof) {
		if	(error_code = readSchemaRoot(info)) {
			//
			//	Something went wrong, in the future a logfile generator should be implemented at this place.
			//

			switch  (error_code) {
				case  ERROR_UNEXPECTED_CHAR_IN_ROOT:
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
					break;
				default:
					error_code = error_code;
					break;
			}

//			undoGetByte();

			while  ((*getByte()) != ';') {
			}
		}
	}

	setFixedSchema(type, info);

	return	OK;
}

void	resetGlobalSchema(CString * info)
{
	int		i = 0;

	while  (i < MAX_EXPRESS_WORD_SIZE+1) {
		word_length_references[i++] = NULL;
	}
	first_character_name_sorted = NULL;
	entity = NULL;
	count_character_name_sorted = 0;
}

void	setFixedSchema(int type, CString * info)
{
	int		i;

	switch	(type) {
		case  SET__2:
			i = 0;
			while  (i < MAX_EXPRESS_WORD_SIZE+1) {
				word_length_references_2[i++] = word_length_references[i];
			}
			first_character_name_sorted_2 = first_character_name_sorted;
			entity_2 = entity;
			count_character_name_sorted_2 = count_character_name_sorted;
			schema_name_2 = schema_name;
			break;
		case  SET__5:
			i = 0;
			while  (i < MAX_EXPRESS_WORD_SIZE+1) {
				word_length_references_5[i++] = word_length_references[i];
			}
			first_character_name_sorted_5 = first_character_name_sorted;
			entity_5 = entity;
			count_character_name_sorted_5 = count_character_name_sorted;
			schema_name_5 = schema_name;
			break;
		case  SET__9:
			i = 0;
			while  (i < MAX_EXPRESS_WORD_SIZE+1) {
				word_length_references_9[i++] = word_length_references[i];
			}
			first_character_name_sorted_9 = first_character_name_sorted;
			entity_9 = entity;
			count_character_name_sorted_9 = count_character_name_sorted;
			schema_name_9 = schema_name;
			break;
	}
}

void	setGlobalSchema(int type, CString * info)
{
	int		i;

	switch	(type) {
		case  SET__2:
			i = 0;
			while  (i < MAX_EXPRESS_WORD_SIZE+1) {
				word_length_references[i++] = word_length_references_2[i];
			}
			first_character_name_sorted = first_character_name_sorted_2;
			entity = entity_2;
			count_character_name_sorted = count_character_name_sorted_2;
			schema_name = schema_name_2;
			break;
		case  SET__5:
			i = 0;
			while  (i < MAX_EXPRESS_WORD_SIZE+1) {
				word_length_references[i++] = word_length_references_5[i];
			}
			first_character_name_sorted = first_character_name_sorted_5;
			entity = entity_5;
			count_character_name_sorted = count_character_name_sorted_5;
			schema_name = schema_name_5;
			break;
		case  SET__9:
			i = 0;
			while  (i < MAX_EXPRESS_WORD_SIZE+1) {
				word_length_references[i++] = word_length_references_9[i];
			}
			first_character_name_sorted = first_character_name_sorted_9;
			entity = entity_9;
			count_character_name_sorted = count_character_name_sorted_9;
			schema_name = schema_name_9;
			break;
	}
}

void	readSchemaWord(CString * info)
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

	name_size = word_size;
}

int		readSchemaRootWord(CString * info)
{
	readSchemaWord(info);

	//
	//	RootSet
	//		USE
	//		RULE
	//		TYPE
	//		ENTITY
	//		SCHEMA
	//		BEGIN_C
	//		FUNCTION
	//		PROCEDURE
	//		END_SCHEMA
	//		RULE_SCHEMA
	//

	switch  (name_size) {
		case  3:
			if	(uppercase_name[0] == 'U') {
				if	(uppercase_name[1] == 'S') {
					if	(uppercase_name[2] == 'E') {
						return	USE;
					}
				}
			}
			break;
		case  4:
			switch  (uppercase_name[0]) {
				case  'R':
					if	(uppercase_name[1] == 'U') {
						if	(uppercase_name[2] == 'L') {
							if	(uppercase_name[3] == 'E') {
								return	RULE;
							}
						}
					}
					break;
				case  'T':
					if	(uppercase_name[1] == 'Y') {
						if	(uppercase_name[2] == 'P') {
							if	(uppercase_name[3] == 'E') {
								return	TYPE;
							}
						}
					}
					break;
			}
			break;
		case  6:
			switch	(uppercase_name[0]) {
				case  'E':
					if	(uppercase_name[1] == 'N') {
						if	(uppercase_name[2] == 'T') {
							if	(uppercase_name[3] == 'I') {
								if	(uppercase_name[4] == 'T') {
									if	(uppercase_name[5] == 'Y') {
										return	ENTITY;
									}
								}
							}
						}
					}
					break;
				case  'S':
					if	(uppercase_name[1] == 'C') {
						if	(uppercase_name[2] == 'H') {
							if	(uppercase_name[3] == 'E') {
								if	(uppercase_name[4] == 'M') {
									if	(uppercase_name[5] == 'A') {
										return	SCHEMA;
									}
								}
							}
						}
					}
					break;
			}
			break;
		case  7:
			if	(uppercase_name[0] == 'B') {
				if	(uppercase_name[1] == 'E') {
					if	(uppercase_name[2] == 'G') {
						if	(uppercase_name[3] == 'I') {
							if	(uppercase_name[4] == 'N') {
								if	(uppercase_name[5] == '_') {
									if	(uppercase_name[6] == 'C') {
										return	BEGIN_C;
									}
								}
							}
						}
					}
				}
			}
			break;
		case  8:
			if	(uppercase_name[0] == 'F') {
				if	(uppercase_name[1] == 'U') {
					if	(uppercase_name[2] == 'N') {
						if	(uppercase_name[3] == 'C') {
							if	(uppercase_name[4] == 'T') {
								if	(uppercase_name[5] == 'I') {
									if	(uppercase_name[6] == 'O') {
										if	(uppercase_name[7] == 'N') {
											return	FUNCTION;
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		case  9:
			if	(uppercase_name[0] == 'P') {
				if	(uppercase_name[1] == 'R') {
					if	(uppercase_name[2] == 'O') {
						if	(uppercase_name[3] == 'C') {
							if	(uppercase_name[4] == 'E') {
								if	(uppercase_name[5] == 'D') {
									if	(uppercase_name[6] == 'U') {
										if	(uppercase_name[7] == 'R') {
											if	(uppercase_name[8] == 'E') {
												return	PROCEDURE;
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		case  10:
			if	(uppercase_name[0] == 'E') {
				if	(uppercase_name[1] == 'N') {
					if	(uppercase_name[2] == 'D') {
						if	(uppercase_name[3] == '_') {
							if	(uppercase_name[4] == 'S') {
								if	(uppercase_name[5] == 'C') {
									if	(uppercase_name[6] == 'H') {
										if	(uppercase_name[7] == 'E') {
											if	(uppercase_name[8] == 'M') {
												if	(uppercase_name[9] == 'A') {
													return	END_SCHEMA;
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		case  11:
			if	(uppercase_name[0] == 'R') {
				if	(uppercase_name[1] == 'U') {
					if	(uppercase_name[2] == 'L') {
						if	(uppercase_name[3] == 'E') {
							if	(uppercase_name[4] == '_') {
								if	(uppercase_name[5] == 'S') {
									if	(uppercase_name[6] == 'C') {
										if	(uppercase_name[7] == 'H') {
											if	(uppercase_name[8] == 'E') {
												if	(uppercase_name[9] == 'M') {
													if	(uppercase_name[10] == 'A') {
														return	RULE_SCHEMA;
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
	}

	//
	//	No keyword found.
	//

	//
	//	We expect no other than keywords
	//

	return	NO_KEYWORD_FOUND;
}

int		readSchemaTypeStart(CString * info)
{
	readSchemaWord(info);

	//
	//	TypeStartSet
	//		BOOL
	//		DATE
	//		DATETIME
	//		TIME
	//		LIST
	//		REAL
	//		NUMBER
	//		STRING
	//		SELECT
	//		BOOLEAN
	//		INTEGER
	//		ENUMERATION
	//

	switch  (name_size) {
		case  4:
			switch	(uppercase_name[0]) {
				case  'B':
					if	(uppercase_name[1] == 'O') {
						if	(uppercase_name[2] == 'O') {
							if	(uppercase_name[3] == 'L') {
								return	BOOLEAN;
							}
						}
					}
					break;
				case  'D':
					if	(uppercase_name[1] == 'A') {
						if	(uppercase_name[2] == 'T') {
							if	(uppercase_name[3] == 'E') {
								return	DATE;
							}
						}
					}
					break;
				case  'L':
					if	(uppercase_name[1] == 'I') {
						if	(uppercase_name[2] == 'S') {
							if	(uppercase_name[3] == 'T') {
								return	LIST;
							}
						}
					}
					break;
				case  'R':
					if	(uppercase_name[1] == 'E') {
						if	(uppercase_name[2] == 'A') {
							if	(uppercase_name[3] == 'L') {
								return	REAL;
							}
						}
					}
					break;
				case  'T':
					if	(uppercase_name[1] == 'I') {
						if	(uppercase_name[2] == 'M') {
							if	(uppercase_name[3] == 'E') {
								return	TIME;
							}
						}
					}
					break;
			}
			break;
		case  6:
			switch	(uppercase_name[0]) {
				case  'N':
					if	(uppercase_name[1] == 'U') {
						if	(uppercase_name[2] == 'M') {
							if	(uppercase_name[3] == 'B') {
								if	(uppercase_name[4] == 'E') {
									if	(uppercase_name[5] == 'R') {
										return	NUMBER;
									}
								}
							}
						}
					}
					break;
				case  'S':
					switch	(uppercase_name[1]) {
						case  'T':
							if	(uppercase_name[2] == 'R') {
								if	(uppercase_name[3] == 'I') {
									if	(uppercase_name[4] == 'N') {
										if	(uppercase_name[5] == 'G') {
											return	STRING;
										}
									}
								}
							}
							break;
						case  'E':
							if	(uppercase_name[2] == 'L') {
								if	(uppercase_name[3] == 'E') {
									if	(uppercase_name[4] == 'C') {
										if	(uppercase_name[5] == 'T') {
											return	SELECT;
										}
									}
								}
							}
							break;
					}
					break;
			}
			break;
		case  7:
			switch	(uppercase_name[0]) {
				case  'B':
					if	(uppercase_name[1] == 'O') {
						if	(uppercase_name[2] == 'O') {
							if	(uppercase_name[3] == 'L') {
								if	(uppercase_name[4] == 'E') {
									if	(uppercase_name[5] == 'A') {
										if	(uppercase_name[6] == 'N') {
											return	BOOLEAN;
										}
									}
								}
							}
						}
					}
					break;
				case  'I':
					if	(uppercase_name[1] == 'N') {
						if	(uppercase_name[2] == 'T') {
							if	(uppercase_name[3] == 'E') {
								if	(uppercase_name[4] == 'G') {
									if	(uppercase_name[5] == 'E') {
										if	(uppercase_name[6] == 'R') {
											return	INTEGER;
										}
									}
								}
							}
						}
					}
					break;
			}
			break;
		case  8:
			if	(uppercase_name[0] == 'D') {
				if	(uppercase_name[1] == 'A') {
					if	(uppercase_name[2] == 'T') {
						if	(uppercase_name[3] == 'E') {
							if	(uppercase_name[4] == 'T') {
								if	(uppercase_name[5] == 'I') {
									if	(uppercase_name[6] == 'M') {
										if	(uppercase_name[7] == 'E') {
											return	DATETIME;
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		case  11:
			if	(uppercase_name[0] == 'E') {
				if	(uppercase_name[1] == 'N') {
					if	(uppercase_name[2] == 'U') {
						if	(uppercase_name[3] == 'M') {
							if	(uppercase_name[4] == 'E') {
								if	(uppercase_name[5] == 'R') {
									if	(uppercase_name[6] == 'A') {
										if	(uppercase_name[7] == 'T') {
											if	(uppercase_name[8] == 'I') {
												if	(uppercase_name[9] == 'O') {
													if	(uppercase_name[10] == 'N') {
														return	ENUMERATION;
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
	}

	//
	//	No keyword found.
	//

	//
	//	We expect no other than keywords
	//

	return	NO_KEYWORD_FOUND;
}

int		readSchemaUseStart(CString * info)
{
	readSchemaWord(info);

	//
	//	RuleStartSet
	//		FROM
	//

	switch  (name_size) {
		case  4:
			if	(uppercase_name[0] == 'F') {
				if	(uppercase_name[1] == 'R') {
					if	(uppercase_name[2] == 'O') {
						if	(uppercase_name[3] == 'M') {
							return	FROM;
						}
					}
				}
			}
			break;
	}

	//
	//	No keyword found.
	//

	//
	//	We expect no other than keywords
	//

	return	NO_KEYWORD_FOUND;
}

int		readSchemaRuleStart(CString * info)
{
	readSchemaWord(info);

	//
	//	RuleStartSet
	//		END_RULE
	//

	switch  (name_size) {
		case  8:
			if	(uppercase_name[0] == 'E') {
				if	(uppercase_name[1] == 'N') {
					if	(uppercase_name[2] == 'D') {
						if	(uppercase_name[3] == '_') {
							if	(uppercase_name[4] == 'R') {
								if	(uppercase_name[5] == 'U') {
									if	(uppercase_name[6] == 'L') {
										if	(uppercase_name[7] == 'E') {
											return	END_RULE;
										}
									}
								}
							}
						}
					}
				}
			}
			break;
	}

	//
	//	No keyword found.
	//

	//
	//	We expect no other than keywords
	//

	return	NO_KEYWORD_FOUND;
}

int		readSchemaBeginCStart(CString * info)
{
	readSchemaWord(info);

	//
	//	RuleStartSet
	//		END_C
	//

	switch  (name_size) {
		case  5:
			if	(uppercase_name[0] == 'E') {
				if	(uppercase_name[1] == 'N') {
					if	(uppercase_name[2] == 'D') {
						if	(uppercase_name[3] == '_') {
							if	(uppercase_name[4] == 'C') {
								return	END_C;
							}
						}
					}
				}
			}
			break;
	}

	//
	//	No keyword found.
	//

	//
	//	We expect no other than keywords
	//

	return	NO_KEYWORD_FOUND;
}

int		readSchemaFunctionStart(CString * info)
{
	readSchemaWord(info);

	//
	//	FunctionStartSet
	//		END_FUNCTION
	//

	switch  (name_size) {
		case  12:
			if	(uppercase_name[0] == 'E') {
				if	(uppercase_name[1] == 'N') {
					if	(uppercase_name[2] == 'D') {
						if	(uppercase_name[3] == '_') {
							if	(uppercase_name[4] == 'F') {
								if	(uppercase_name[5] == 'U') {
									if	(uppercase_name[6] == 'N') {
										if	(uppercase_name[7] == 'C') {
											if	(uppercase_name[8] == 'T') {
												if	(uppercase_name[9] == 'I') {
													if	(uppercase_name[10] == 'O') {
														if	(uppercase_name[11] == 'N') {
															return	END_FUNCTION;
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
	}

	//
	//	No keyword found.
	//

	//
	//	We expect no other than keywords
	//

	return	NO_KEYWORD_FOUND;
}

int		readSchemaProcedureStart(CString * info)
{
	readSchemaWord(info);

	//
	//	ProcedureStartSet
	//		END_PROCEDURE
	//

	switch  (name_size) {
		case  13:
			if	(uppercase_name[0] == 'E') {
				if	(uppercase_name[1] == 'N') {
					if	(uppercase_name[2] == 'D') {
						if	(uppercase_name[3] == '_') {
							if	(uppercase_name[4] == 'P') {
								if	(uppercase_name[5] == 'R') {
									if	(uppercase_name[6] == 'O') {
										if	(uppercase_name[7] == 'C') {
											if	(uppercase_name[8] == 'E') {
												if	(uppercase_name[9] == 'D') {
													if	(uppercase_name[10] == 'U') {
														if	(uppercase_name[11] == 'R') {
															if	(uppercase_name[12] == 'E') {
																return	END_PROCEDURE;
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
	}

	//
	//	No keyword found.
	//

	//
	//	We expect no other than keywords
	//

	return	NO_KEYWORD_FOUND;
}

int		readSchemaAbstractStart(CString * info)
{
	readSchemaWord(info);

	//
	//	AbstractStartSet
	//		SUPERTYPE
	//

	switch  (name_size) {
		case  9:
			if	(uppercase_name[0] == 'S') {
				if	(uppercase_name[1] == 'U') {
					if	(uppercase_name[2] == 'P') {
						if	(uppercase_name[3] == 'E') {
							if	(uppercase_name[4] == 'R') {
								if	(uppercase_name[5] == 'T') {
									if	(uppercase_name[6] == 'Y') {
										if	(uppercase_name[7] == 'P') {
											if	(uppercase_name[8] == 'E') {
												return	SUPERTYPE;
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
	}

	//
	//	No keyword found.
	//

	//
	//	We expect no other than keywords
	//

	return	NO_KEYWORD_FOUND;
}

int		readSchemaEntityMain(CString * info)
{
	readSchemaWord(info);

	//
	//	TypeStartSet
	//		WHERE
	//		DERIVE
	//		UNIQUE
	//		INVERSE
	//		SUBTYPE
	//		ABSTRACT
	//		SUPERTYPE
	//		END_ENTITY
	//
	//		NO_KEYWORD_FOUND
	//

	switch  (name_size) {
		case  5:
			if	(uppercase_name[0] == 'W') {
				if	(uppercase_name[1] == 'H') {
					if	(uppercase_name[2] == 'E') {
						if	(uppercase_name[3] == 'R') {
							if	(uppercase_name[4] == 'E') {
								return	WHERE;
							}
						}
					}
				}
			}
			break;
		case  6:
			switch	(uppercase_name[0]) {
				case  'D':
					if	(uppercase_name[1] == 'E') {
						if	(uppercase_name[2] == 'R') {
							if	(uppercase_name[3] == 'I') {
								if	(uppercase_name[4] == 'V') {
									if	(uppercase_name[5] == 'E') {
										return	DERIVE;
									}
								}
							}
						}
					}
					break;
				case  'U':
					if	(uppercase_name[1] == 'N') {
						if	(uppercase_name[2] == 'I') {
							if	(uppercase_name[3] == 'Q') {
								if	(uppercase_name[4] == 'U') {
									if	(uppercase_name[5] == 'E') {
										return	UNIQUE;
									}
								}
							}
						}
					}
					break;
			}
			break;
		case  7:
			switch	(uppercase_name[0]) {
				case  'I':
					if	(uppercase_name[1] == 'N') {
						if	(uppercase_name[2] == 'V') {
							if	(uppercase_name[3] == 'E') {
								if	(uppercase_name[4] == 'R') {
									if	(uppercase_name[5] == 'S') {
										if	(uppercase_name[6] == 'E') {
											return	INVERSE;
										}
									}
								}
							}
						}
					}
					break;
				case  'S':
					if	(uppercase_name[1] == 'U') {
						if	(uppercase_name[2] == 'B') {
							if	(uppercase_name[3] == 'T') {
								if	(uppercase_name[4] == 'Y') {
									if	(uppercase_name[5] == 'P') {
										if	(uppercase_name[6] == 'E') {
											return	SUBTYPE;
										}
									}
								}
							}
						}
					}
					break;
			}
			break;
		case  8:
			if	(uppercase_name[0] == 'A') {
				if	(uppercase_name[1] == 'B') {
					if	(uppercase_name[2] == 'S') {
						if	(uppercase_name[3] == 'T') {
							if	(uppercase_name[4] == 'R') {
								if	(uppercase_name[5] == 'A') {
									if	(uppercase_name[6] == 'C') {
										if	(uppercase_name[7] == 'T') {
											return	ABSTRACT;
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		case  9:
			if	(uppercase_name[0] == 'S') {
				if	(uppercase_name[1] == 'U') {
					if	(uppercase_name[2] == 'P') {
						if	(uppercase_name[3] == 'E') {
							if	(uppercase_name[4] == 'R') {
								if	(uppercase_name[5] == 'T') {
									if	(uppercase_name[6] == 'Y') {
										if	(uppercase_name[7] == 'P') {
											if	(uppercase_name[8] == 'E') {
												return	SUPERTYPE;
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		case  10:
			if	(uppercase_name[0] == 'E') {
				if	(uppercase_name[1] == 'N') {
					if	(uppercase_name[2] == 'D') {
						if	(uppercase_name[3] == '_') {
							if	(uppercase_name[4] == 'E') {
								if	(uppercase_name[5] == 'N') {
									if	(uppercase_name[6] == 'T') {
										if	(uppercase_name[7] == 'I') {
											if	(uppercase_name[8] == 'T') {
												if	(uppercase_name[9] == 'Y') {
													return	END_ENTITY;
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
	}

	//
	//	No keyword found.
	//

	//
	//	We expect no other than keywords
	//

	return	NO_KEYWORD_FOUND;
}

int		readSchemaTypeEnd(CString * info)
{
	readSchemaWord(info);

	//
	//	TypeEndSet
	//		WHERE
	//		END_TYPE
	//

	switch  (name_size) {
		case  5:
			if	(uppercase_name[0] == 'W') {
				if	(uppercase_name[1] == 'H') {
					if	(uppercase_name[2] == 'E') {
						if	(uppercase_name[3] == 'R') {
							if	(uppercase_name[4] == 'E') {
								return	WHERE;
							}
						}
					}
				}
			}
			break;
		case  8:
			if	(uppercase_name[0] == 'E') {
				if	(uppercase_name[1] == 'N') {
					if	(uppercase_name[2] == 'D') {
						if	(uppercase_name[3] == '_') {
							if	(uppercase_name[4] == 'T') {
								if	(uppercase_name[5] == 'Y') {
									if	(uppercase_name[6] == 'P') {
										if	(uppercase_name[7] == 'E') {
											return	END_TYPE;
										}
									}
								}
							}
						}
					}
				}
			}
			break;
	}

	//
	//	No keyword found.
	//

	//
	//	We expect no other than keywords
	//

	return	NO_KEYWORD_FOUND;
}

int		readSchemaNoKeywordStart(CString * info)
{
	readSchemaWord(info);

	//
	//	TypeNoKeywordStartSet
	//		BAG
	//		SET
	//		BOOL
	//		DATE
	//		DATETIME
	//		TIME
	//		LIST
	//		REAL
	//		STRING
	//		UNIQUE
	//		BOOLEAN
	//		INTEGER
	//		OPTIONAL
	//

	switch  (name_size) {
		case  3:
			switch  (uppercase_name[0]) {
				case  'B':
					if	(uppercase_name[1] == 'A') {
						if	(uppercase_name[2] == 'G') {
							return	BAG;
						}
					}
					break;
				case  'S':
					if	(uppercase_name[1] == 'E') {
						if	(uppercase_name[2] == 'T') {
							return	SET;
						}
					}
					break;
			}
			break;
		case  4:
			switch	(uppercase_name[0]) {
				case  'B':
					if	(uppercase_name[1] == 'O') {
						if	(uppercase_name[2] == 'O') {
							if	(uppercase_name[3] == 'L') {
								return	BOOLEAN;
							}
						}
					}
					break;
				case  'D':
					if	(uppercase_name[1] == 'A') {
						if	(uppercase_name[2] == 'T') {
							if	(uppercase_name[3] == 'E') {
								return	DATE;
							}
						}
					}
					break;
				case  'L':
					if	(uppercase_name[1] == 'I') {
						if	(uppercase_name[2] == 'S') {
							if	(uppercase_name[3] == 'T') {
								return	LIST;
							}
						}
					}
					break;
				case  'R':
					if	(uppercase_name[1] == 'E') {
						if	(uppercase_name[2] == 'A') {
							if	(uppercase_name[3] == 'L') {
								return	REAL;
							}
						}
					}
					break;
				case  'T':
					if	(uppercase_name[1] == 'I') {
						if	(uppercase_name[2] == 'M') {
							if	(uppercase_name[3] == 'E') {
								return	TIME;
							}
						}
					}
					break;
			}
			break;
		case  6:
			switch	(uppercase_name[0]) {
				case  'S':
					if	(uppercase_name[1] == 'T') {
						if	(uppercase_name[2] == 'R') {
							if	(uppercase_name[3] == 'I') {
								if	(uppercase_name[4] == 'N') {
									if	(uppercase_name[5] == 'G') {
										return	STRING;
									}
								}
							}
						}
					}
					break;
				case  'U':
					if	(uppercase_name[1] == 'N') {
						if	(uppercase_name[2] == 'I') {
							if	(uppercase_name[3] == 'Q') {
								if	(uppercase_name[4] == 'U') {
									if	(uppercase_name[5] == 'E') {
										return	UNIQUE;
									}
								}
							}
						}
					}
					break;
			}
			break;
		case  7:
			switch	(uppercase_name[0]) {
				case  'B':
					if	(uppercase_name[1] == 'O') {
						if	(uppercase_name[2] == 'O') {
							if	(uppercase_name[3] == 'L') {
								if	(uppercase_name[4] == 'E') {
									if	(uppercase_name[5] == 'A') {
										if	(uppercase_name[6] == 'N') {
											return	BOOLEAN;
										}
									}
								}
							}
						}
					}
					break;
				case  'I':
					if	(uppercase_name[1] == 'N') {
						if	(uppercase_name[2] == 'T') {
							if	(uppercase_name[3] == 'E') {
								if	(uppercase_name[4] == 'G') {
									if	(uppercase_name[5] == 'E') {
										if	(uppercase_name[6] == 'R') {
											return	INTEGER;
										}
									}
								}
							}
						}
					}
					break;
			}
			break;
		case  8:
			switch	(uppercase_name[0]) {
				case  'D':
					if	(uppercase_name[1] == 'A') {
						if	(uppercase_name[2] == 'T') {
							if	(uppercase_name[3] == 'E') {
								if	(uppercase_name[4] == 'T') {
									if	(uppercase_name[5] == 'I') {
										if	(uppercase_name[6] == 'M') {
											if	(uppercase_name[7] == 'E') {
												return	DATETIME;
											}
										}
									}
								}
							}
						}
					}
					break;
				case  'O':
					if	(uppercase_name[1] == 'P') {
						if	(uppercase_name[2] == 'T') {
							if	(uppercase_name[3] == 'I') {
								if	(uppercase_name[4] == 'O') {
									if	(uppercase_name[5] == 'N') {
										if	(uppercase_name[6] == 'A') {
											if	(uppercase_name[7] == 'L') {
												return	_OPTIONAL;
											}
										}
									}
								}
							}
						}
					}
					break;
			}
			break;
	}

	//
	//	No keyword found.
	//

	//
	//	We expect no other than keywords
	//

	return	NO_KEYWORD_FOUND;
}

int		readSchemaListOrSetStart(CString * info)
{
	readSchemaWord(info);

	//
	//	EnumerationStartSet
	//		OF
	//

	switch  (name_size) {
		case  2:
			if	(uppercase_name[0] == 'O') {
				if	(uppercase_name[1] == 'F') {
					return	OF;
				}
			}
			break;
	}

	//
	//	No keyword found.
	//

	//
	//	We expect no other than keywords
	//

	return	NO_KEYWORD_FOUND;
}

int		readSchemaTypeStringStart(CString * info)
{
	readSchemaWord(info);

	//
	//	TypeStringStartSet
	//		FIXED
	//

	switch  (name_size) {
		case  5:
			if	(uppercase_name[0] == 'F') {
				if	(uppercase_name[1] == 'I') {
					if	(uppercase_name[2] == 'X') {
						if	(uppercase_name[3] == 'E') {
							if	(uppercase_name[4] == 'D') {
								return	FIXED;
							}
						}
					}
				}
			}
			break;
	}

	//
	//	No keyword found.
	//

	//
	//	We expect no other than keywords
	//

	return	NO_KEYWORD_FOUND;
}

int		readSchemaEnumerationStart(CString * info)
{
	readSchemaWord(info);

	//
	//	EnumerationStartSet
	//		OF
	//

	switch  (name_size) {
		case  2:
			if	(uppercase_name[0] == 'O') {
				if	(uppercase_name[1] == 'F') {
					return	OF;
				}
			}
			break;
	}

	//
	//	No keyword found.
	//

	//
	//	We expect no other than keywords
	//

	return	NO_KEYWORD_FOUND;
}

int		readSchemaSubtypeStart(CString * info)
{
	readSchemaWord(info);

	//
	//	SubtypeStartSet
	//		OF
	//

	switch  (name_size) {
		case  2:
			if	(uppercase_name[0] == 'O') {
				if	(uppercase_name[1] == 'F') {
					return	OF;
				}
			}
			break;
	}

	//
	//	No keyword found.
	//

	//
	//	We expect no other than keywords
	//

	return	NO_KEYWORD_FOUND;
}

int		readSchemaSupertypeStart(CString * info)
{
	readSchemaWord(info);

	//
	//	SupertypeStartSet
	//		OF
	//

	switch  (name_size) {
		case  2:
			if	(uppercase_name[0] == 'O') {
				if	(uppercase_name[1] == 'F') {
					return	OF;
				}
			}
			break;
	}

	//
	//	No keyword found.
	//

	//
	//	We expect no other than keywords
	//

	return	NO_KEYWORD_FOUND;
}

int		readSchemaSupertypeSecond(CString * info)
{
	readSchemaWord(info);

	//
	//	SupertypeSecondSet
	//		ONEOF
	//

	switch  (name_size) {
		case  5:
			if	(uppercase_name[0] == 'O') {
				if	(uppercase_name[1] == 'N') {
					if	(uppercase_name[2] == 'E') {
						if	(uppercase_name[3] == 'O') {
							if	(uppercase_name[4] == 'F') {
								return	ONEOF;
							}
						}
					}
				}
			}
			break;
	}

	//
	//	No keyword found.
	//

	//
	//	We expect no other than keywords
	//

	return	NO_KEYWORD_FOUND;
}


int		readSchemaRuleSchemaStart(CString * info)
{
	readSchemaWord(info);

	//
	//	RuleStartSet
	//		END_RULE_SCHEMA
	//

	switch  (name_size) {
		case  15:
			if	(uppercase_name[0] == 'E') {
				if	(uppercase_name[1] == 'N') {
					if	(uppercase_name[2] == 'D') {
						if	(uppercase_name[3] == '_') {
							if	(uppercase_name[4] == 'R') {
								if	(uppercase_name[5] == 'U') {
									if	(uppercase_name[6] == 'L') {
										if	(uppercase_name[7] == 'E') {
											if	(uppercase_name[8] == '_') {
												if	(uppercase_name[9] == 'S') {
													if	(uppercase_name[10] == 'C') {
														if	(uppercase_name[11] == 'H') {
															if	(uppercase_name[12] == 'E') {
																if	(uppercase_name[13] == 'M') {
																	if	(uppercase_name[14] == 'A') {
																		return	END_RULE_SCHEMA;
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
	}

	//
	//	No keyword found.
	//

	//
	//	We expect no other than keywords
	//

	return	NO_KEYWORD_FOUND;
}

int		readSchemaString(CString * info)
{
	//
	//	STRING
	//

	int		text_int;
	int		state = 1, number;

	while  (state == 1) {
		switch	(*getByte()) {
			case  10:
			case  13:
			case  ' ':
				//
				//
				//
				break;
			case  '(':
				state = 0;
				break;
			case  ';':
				return	0;
				break;
			default:
				return	ERROR_UNEXPECTED_CHAR_IN_SCHEMA_STRING;
				break;
		}
	}

	//
	//	STRING (
	//

	state = 1;

	while  (state == 1) {
		switch	(text_int = *getByte()) {
			CASE_SPACE
				//
				//
				//
				break;
			CASE_NUMBER
				number = text_int - '0';
				state = 0;
				break;
			default:
				return	ERROR_UNEXPECTED_CHAR_IN_SCHEMA_STRING;
				break;
		}
	}

	//
	//	STRING ( 1
	//

	state = 1;

	while  (state == 1) {
		switch	(text_int = *getByte()) {
			CASE_NUMBER
				number = 10 * number + text_int - '0';
				break;
			default:
				undoGetByte();
				state = 0;
				break;
		}
	}

	//
	//	STRING ( 123
	//

	state = 1;

	while  (state == 1) {
		switch	(*getByte()) {
			case  10:
			case  13:
			case  ' ':
				//
				//
				//
				break;
			case  ')':
				state = 0;
				break;
			default:
				return	ERROR_UNEXPECTED_CHAR_IN_SCHEMA_STRING;
				break;
		}
	}

	state = 1;

	while  (state == 1) {
		switch	(*getByte()) {
			CASE_SPACE
				//
				//
				//
				break;
			case  ';':
				//
				//
				//
				state = 0;
				break;
			default:
				return	ERROR_UNEXPECTED_CHAR_IN_SCHEMA_STRING;
				break;
		}
	}

	//
	//	STRING ( 123 );
	//

	return	0;
}

int		readSchemaTypeString(CString * info)
{
	//
	//	STRING
	//

	int		text_int;
	int		state = 1, number;

	while  (state == 1) {
		switch	(*getByte()) {
			CASE_SPACE
				//
				//
				//
				break;
			case  '(':
				state = 0;
				break;
			case  ';':
				return	0;
				break;
			default:
				undoGetByte();
				return	0;
				break;
		}
	}

	//
	//	STRING (
	//

	state = 1;

	while  (state == 1) {
		switch	(text_int = *getByte()) {
			CASE_SPACE
				//
				//
				//
				break;
			CASE_NUMBER
				number = text_int - '0';
				state = 0;
				break;
			default:
				return	ERROR_UNEXPECTED_CHAR_IN_SCHEMA_TYPE_STRING;
				break;
		}
	}

	//
	//	STRING ( 1
	//

	state = 1;

	while  (state == 1) {
		switch	(text_int = *getByte()) {
			CASE_NUMBER
				number = 10 * number + text_int - '0';
				state = 0;
				break;
			default:
				undoGetByte();
				state = 0;
				break;
		}
	}

	//
	//	STRING ( 123
	//

	state = 1;

	while  (state == 1) {
		switch	(*getByte()) {
			CASE_SPACE
				//
				//
				//
				break;
			case  ')':
				state = 0;
				break;
			default:
				return	ERROR_UNEXPECTED_CHAR_IN_SCHEMA_TYPE_STRING;
				break;
		}
	}

	//
	//	STRING ( 123 )
	//

	state = 1;

	while  (state == 1) {
		switch	(*getByte()) {
			CASE_SPACE
				//
				//
				//
				break;
			CASE_LOWER_CASE
			CASE_UPPER_CASE
			CASE_SPECIAL_CASE
				undoGetByte();

				switch  (readSchemaTypeStringStart(info)) {
					case  FIXED:
						break;
					default:
						return	ERROR_UNEXPECTED_CHAR_IN_SCHEMA_TYPE_STRING;
						break;
				}

				state = 0;
				break;
			default:
				return	ERROR_UNEXPECTED_CHAR_IN_SCHEMA_TYPE_STRING;
				break;
		}
	}

	//
	//	STRING ( 123 ) FIXED
	//

	state = 1;

	while  (state == 1) {
		switch	(*getByte()) {
			CASE_SPACE
				//
				//
				//
				break;
			case  ';':
				//
				//
				//
				state = 0;
				break;
			default:
				undoGetByte();
				state = 0;
				break;
		}
	}

	//
	//	STRING ( 123 ) FIXED;
	//

	return	0;
}

int		readSchemaSelect(CString * info)
{
	//
	//	SELECT
	//

	int	state = 1;

	while  (state == 1) {
		switch	(*getByte()) {
			CASE_SPACE
				//
				//
				//
				break;
			case  '(':
				state = 0;
				break;
			default:
				return	ERROR_UNEXPECTED_CHAR_IN_SELECT;
				break;
		}
	}

	//
	//	SELECT (
	//

	state = 1;

	while  (state == 1) {
		switch	(*getByte()) {
			CASE_SPACE
				//
				//
				//
				break;
			CASE_LOWER_CASE
			CASE_UPPER_CASE
			CASE_SPECIAL_CASE
				undoGetByte();

				readSchemaWord(info);

				//
				//	SELECT ( abcd
				//	SELECT ( abcd, efgh, ijkl
				//
				state = 2;
				while  (state == 2) {
					switch	(*getByte()) {
						CASE_SPACE
							//
							//
							//
							break;
						case  ',':
							//
							//	SELECT ( abcd,
							//	SELECT ( abcd, efgh, ijkl,
							//
							state = 1;
							break;
						case  ')':
							//
							//	SELECT ( abcd )
							//	SELECT ( abcd, efgh, ijkl )
							//
							state = 0;
							break;
						default:
							return	ERROR_UNEXPECTED_CHAR_IN_SELECT;
							break;
					}
				}
				
				break;
			default:
				return	ERROR_UNEXPECTED_CHAR_IN_SELECT;
				break;
		}
	}

	//
	//	SELECT ( abcd, efgh, ijkl )
	//

	state = 1;

	while  (state == 1) {
		switch	(*getByte()) {
			CASE_SPACE
				//
				//
				//
				break;
			case  ';':
				//
				//
				//
				state = 0;
				break;
			default:
				return	ERROR_UNEXPECTED_CHAR_IN_ENUMERATION_END;
				break;
		}
	}

	//
	//	SELECT ( abcd, efgh, ijkl );
	//
	
	return	0;
}

int		readSchemaEnumeration(CString * info)
{
	//
	//	ENUMERATION
	//

	int	state = 1;

	while  (state == 1) {
		switch	(*getByte()) {
			CASE_SPACE
				//
				//
				//
				break;
			CASE_LOWER_CASE
			CASE_UPPER_CASE
			CASE_SPECIAL_CASE
				undoGetByte();

				switch  (readSchemaEnumerationStart(info)) {
					case  OF:
						break;
					default:
						return	ERROR_UNEXPECTED_CHAR_IN_ENUMERATION;
						break;
				}

				state = 0;
				break;
			default:
				return	ERROR_UNEXPECTED_CHAR_IN_ENUMERATION;
				break;
		}
	}

	//
	//	ENUMERATION OF
	//

	state = 1;

	while  (state == 1) {
		switch	(*getByte()) {
			CASE_SPACE
				//
				//
				//
				break;
			case  '(':
				state = 0;
				break;
			default:
				return	ERROR_UNEXPECTED_CHAR_IN_ENUMERATION;
				break;
		}
	}

	//
	//	ENUMERATION OF (
	//
	state = 1;

	while  (state == 1) {
		switch	(*getByte()) {
			CASE_SPACE
				//
				//
				//
				break;
			CASE_LOWER_CASE
			CASE_UPPER_CASE
			CASE_SPECIAL_CASE
			CASE_NUMBER
				undoGetByte();

				readSchemaWord(info);

				//
				//	ENUMERATION OF ( abcd
				//	ENUMERATION OF ( abcd, efgh, ijkl
				//
				state = 2;
				while  (state == 2) {
					switch	(*getByte()) {
						CASE_SPACE
							//
							//
							//
							break;
						case  ',':
							//
							//	ENUMERATION OF ( abcd,
							//	ENUMERATION OF ( abcd, efgh, ijkl,
							//
							state = 1;
							break;
						case  ')':
							//
							//	ENUMERATION OF ( abcd )
							//	ENUMERATION OF ( abcd, efgh, ijkl )
							//
							state = 0;
							break;
						default:
							return	ERROR_UNEXPECTED_CHAR_IN_ENUMERATION_LIST;
							break;
					}
				}
				
				break;
			default:
				return	ERROR_UNEXPECTED_CHAR_IN_ENUMERATION_LIST;
				break;
		}
	}

	//
	//	ENUMERATION OF ( abcd, efgh, ijkl )
	//

	state = 1;

	while  (state == 1) {
		switch	(*getByte()) {
			CASE_SPACE
				//
				//
				//
				break;
			case  ';':
				//
				//
				//
				state = 0;
				break;
			default:
				return	ERROR_UNEXPECTED_CHAR_IN_ENUMERATION_END;
				break;
		}
	}

	//
	//	ENUMERATION OF ( abcd, efgh, ijkl );
	//
	
	return	0;
}

int		readSchemaSubtype(CString * info)
{
	int		state = 1;

	while  (state == 1) {
		switch	(*getByte()) {
			CASE_SPACE
				//
				//
				//
				break;
			CASE_LOWER_CASE
			CASE_UPPER_CASE
			CASE_SPECIAL_CASE
				undoGetByte();

				switch  (readSchemaSubtypeStart(info)) {
					case  OF:
						break;
					default:
						return	ERROR_UNEXPECTED_CHAR_IN_ENTITY_SUBTYPE;
						break;
				}

				state = 0;
				break;
			default:
				return	ERROR_UNEXPECTED_CHAR_IN_ENTITY_SUBTYPE;
				break;
		}
	}

	//
	//	SUBTYPE OF
	//

	state = 1;

	while  (state == 1) {
		switch	(*getByte()) {
			CASE_SPACE
				//
				//
				//
				break;
			case  '(':
				state = 0;
				break;
			default:
				return	ERROR_UNEXPECTED_CHAR_IN_ENTITY_SUBTYPE;
				break;
		}
	}

	//
	//	SUBTYPE OF (
	//

	state = 1;

	while  (state == 1) {
		switch	(*getByte()) {
			CASE_SPACE
				//
				//
				//
				break;
			CASE_LOWER_CASE
			CASE_UPPER_CASE
			CASE_SPECIAL_CASE
				undoGetByte();

				readSchemaWord(info);

				STRUCT_CHARACTER_INDEX	** entity_reference;
		
				entity_reference = checkAndInsertWord(name_size, retrieved_name, info);
				entity->parent = *((STRUCT_CHARACTER_NAME **) entity_reference);

				state = 0;
				break;
			default:
				return	ERROR_UNEXPECTED_CHAR_IN_ENTITY_SUBTYPE;
				break;
		}
	}

	//
	//	SUBTYPE OF (IfcWall
	//

	state = 1;

	while  (state == 1) {
		switch	(*getByte()) {
			CASE_SPACE
				//
				//
				//
				break;
			case  ')':
				state = 0;
				break;
			default:
				return	ERROR_UNEXPECTED_CHAR_IN_ENTITY_SUBTYPE;
				break;
		}
	}

	//
	//	SUBTYPE OF (IfcWall)
	//

	state = 1;

	while  (state == 1) {
		switch	(*getByte()) {
			CASE_SPACE
				//
				//
				//
				break;
			case  ';':
				state = 0;
				break;
			default:
				undoGetByte();
				state = 0;
				break;
		}
	}

	//
	//	SUBTYPE OF (IfcWall);
	//

	return	0;
}

int		readSchemaAbstract(CString * info)
{
	int		state = 1, error;

	while  (state == 1) {
		switch	(*getByte()) {
			CASE_SPACE
				//
				//
				//
				break;
			CASE_LOWER_CASE
			CASE_UPPER_CASE
			CASE_SPECIAL_CASE
				undoGetByte();

				//	AbstractStartSet
				//		SUPERTYPE

				switch  (readSchemaAbstractStart(info)) {
					case  SUPERTYPE:
						error = readSchemaSupertype(info);
						if	(error) {
							return	error;
						}
						break;
					default:
						return	ERROR_UNEXPECTED_CHAR_IN_ENTITY_ABSTRACT;
						break;
				}

				state = 0;
				break;
			default:
				return	ERROR_UNEXPECTED_CHAR_IN_ENTITY_ABSTRACT;
				break;
		}
	}

	return	0;
}

int		readSchemaSupertype(CString * info)
{
	int		state = 1;

	while  (state == 1) {
		switch	(*getByte()) {
			CASE_SPACE
				//
				//
				//
				break;
			CASE_LOWER_CASE
			CASE_UPPER_CASE
			CASE_SPECIAL_CASE
				undoGetByte();

				switch  (readSchemaSupertypeStart(info)) {
					case  OF:
						break;
					default:
						return	ERROR_UNEXPECTED_CHAR_IN_ENTITY_SUPERTYPE;
						break;
				}

				state = 0;
				break;
			default:
				return	ERROR_UNEXPECTED_CHAR_IN_ENTITY_SUPERTYPE;
				break;
		}
	}

	//
	//	SUPERTYPE OF
	//

	state = 1;

	while  (state == 1) {
		switch	(*getByte()) {
			CASE_SPACE
				//
				//
				//
				break;
			case  '(':
				state = 0;
				break;
			default:
				return	ERROR_UNEXPECTED_CHAR_IN_ENTITY_SUPERTYPE;
				break;
		}
	}

	//
	//	SUPERTYPE OF (
	//

	state = 1;

	while  (state == 1) {
		switch	(*getByte()) {
			CASE_SPACE
				//
				//
				//
				break;
			CASE_LOWER_CASE
			CASE_UPPER_CASE
			CASE_SPECIAL_CASE
				undoGetByte();

				switch  (readSchemaSupertypeSecond(info)) {
					case  ONEOF:
						break;
					default:
						//
						//	Just one element that this entity is supertype of
						//
						//
						//	SUPERTYPE OF ( abcd
						//

						state = 2;

						while  (state == 2) {
							switch	(*getByte()) {
								CASE_SPACE
									//
									//
									//
									break;
								case  ')':
									state = 1;
									break;
								default:
									return	ERROR_UNEXPECTED_CHAR_IN_ENTITY_SUPERTYPE;
									break;
							}
						}

						//
						//	SUPERTYPE OF ( abcd )
						//

						state = 2;

						while  (state == 2) {
							switch	(*getByte()) {
								CASE_SPACE
									//
									//
									//
									break;
								case  ';':
									state = 0;
									break;
								default:
									undoGetByte();
									state = 0;
									break;
							}
						}

						//
						//	SUPERTYPE OF ( abcd );
						//

						return	0;
						break;
				}

				state = 0;
				break;
			default:
				return	ERROR_UNEXPECTED_CHAR_IN_ENTITY_SUPERTYPE;
				break;
		}
	}

	//
	//	SUPERTYPE OF ( ONEOF
	//

	state = 1;

	while  (state == 1) {
		switch	(*getByte()) {
			CASE_SPACE
				//
				//
				//
				break;
			case  '(':
				state = 0;
				break;
			default:
				return	ERROR_UNEXPECTED_CHAR_IN_ENTITY_SUPERTYPE;
				break;
		}
	}

	//
	//	SUPERTYPE OF ( ONEOF (
	//

	state = 1;

	while  (state == 1) {
		switch	(*getByte()) {
			CASE_SPACE
				//
				//
				//
				break;
			CASE_LOWER_CASE
			CASE_UPPER_CASE
			CASE_SPECIAL_CASE
				undoGetByte();

				readSchemaWord(info);

				//
				//	SUPERTYPE OF ( ONEOF ( abcd
				//	SUPERTYPE OF ( ONEOF ( abcd, efgh, ijkl
				//
				state = 2;
				while  (state == 2) {
					switch	(*getByte()) {
						CASE_SPACE
							//
							//
							//
							break;
						case  ',':
							//
							//	SUPERTYPE OF ( ONEOF ( abcd,
							//	SUPERTYPE OF ( ONEOF ( abcd, efgh, ijkl,
							//
							state = 1;
							break;
						case  ')':
							//
							//	SUPERTYPE OF ( ONEOF ( abcd )
							//	SUPERTYPE OF ( ONEOF ( abcd, efgh, ijkl )
							//
							state = 0;
							break;
						default:
							return	ERROR_UNEXPECTED_CHAR_IN_ENTITY_SUPERTYPE;
							break;
					}
				}
				
				break;
			default:
				return	ERROR_UNEXPECTED_CHAR_IN_ENTITY_SUPERTYPE;
				break;
		}
	}

	//
	//	SUPERTYPE OF ( ONEOF ( abcd, efgh, ijkl )
	//

	state = 1;

	while  (state == 1) {
		switch	(*getByte()) {
			CASE_SPACE
				//
				//
				//
				break;
			case  ')':
				state = 0;
				break;
			default:
				return	ERROR_UNEXPECTED_CHAR_IN_ENTITY_SUPERTYPE;
				break;
		}
	}

	//
	//	SUPERTYPE OF ( ONEOF ( abcd, efgh, ijkl ) )
	//

	state = 1;

	while  (state == 1) {
		switch	(*getByte()) {
			CASE_SPACE
				//
				//
				//
				break;
			case  ';':
				state = 0;
				break;
			default:
				undoGetByte();
				state = 0;
				break;
		}
	}

	//
	//	SUPERTYPE OF ( ONEOF ( abcd, efgh, ijkl ) );
	//

	return	0;
}

int		readSchemaListOrSet(int * min, int * max, CString * info)
{
	//
	//	BAG
	//	SET
	//	LIST
	//

	int		state = 1;

	while  (state == 1) {
		switch	(*getByte()) {
			CASE_SPACE
				//
				//
				//
				break;
			case  '[':
				state = 0;
				break;
			CASE_LOWER_CASE
			CASE_UPPER_CASE
			CASE_SPECIAL_CASE
				undoGetByte();

				switch  (readSchemaListOrSetStart(info)) {
					case  OF:
						break;
					default:
						return	ERROR_UNEXPECTED_CHAR_IN_ENTITY_LIST_OR_SET;
						break;
				}


				//
				//	BAG  OF
				//	SET  OF
				//	LIST OF
				//

				return	0;
				break;
			default:
				return	ERROR_UNEXPECTED_CHAR_IN_ENTITY_LIST_OR_SET;
				break;
		}
	}

	//
	//	BAG  [
	//	SET  [
	//	LIST [
	//

	state = 1;

	while  (state == 1) {
		switch	(*getByte()) {
			CASE_SPACE
				//
				//
				//
				break;
			case  '0':
				state = 0;
				(* min) = 0;
				break;
			case  '1':
				state = 0;
				(* min) = 1;
				break;
			case  '2':
				state = 0;
				(* min) = 2;
				break;
			case  '3':
				state = 0;
				(* min) = 3;
				break;
			case  '4':
				state = 0;
				(* min) = 4;
				break;
			case  '5':
				state = 0;
				(* min) = 5;
				break;
			case  '6':
				state = 0;
				(* min) = 6;
				break;
			case  '7':
				state = 0;
				(* min) = 7;
				break;
			case  '8':
				state = 0;
				(* min) = 8;
				break;
			case  '9':
				state = 0;
				(* min) = 9;
				break;
			case  '?':
				state = 0;
				(* min) = -1;
				break;
			default:
				return	ERROR_UNEXPECTED_CHAR_IN_ENTITY_LIST_OR_SET;
				break;
		}
	}

	//
	//	BAG  [0
	//	SET  [0
	//	LIST [0
	//

	state = 1;

	while  (state == 1) {
		switch	(*getByte()) {
			CASE_SPACE
				//
				//
				//
				break;
			case  ':':
				state = 0;
				break;
			default:
				return	ERROR_UNEXPECTED_CHAR_IN_ENTITY_LIST_OR_SET;
				break;
		}
	}

	//
	//	BAG  [0:
	//	SET  [0:
	//	LIST [0:
	//

	state = 1;

	while  (state == 1) {
		switch	(*getByte()) {
			CASE_SPACE
				//
				//
				//
				break;
			case  '0':
				state = 0;
				(* max) = 0;
				break;
			case  '1':
				state = 0;
				(* max) = 1;
				break;
			case  '2':
				state = 0;
				(* max) = 2;
				break;
			case  '3':
				state = 0;
				(* max) = 3;
				break;
			case  '4':
				state = 0;
				(* max) = 4;
				break;
			case  '5':
				state = 0;
				(* max) = 5;
				break;
			case  '6':
				state = 0;
				(* max) = 6;
				break;
			case  '7':
				state = 0;
				(* max) = 7;
				break;
			case  '8':
				state = 0;
				(* max) = 8;
				break;
			case  '9':
				state = 0;
				(* max) = 9;
				break;
			case  '?':
				state = 0;
				(* max) = -1;
				break;
			CASE_LOWER_CASE
			CASE_UPPER_CASE
			CASE_SPECIAL_CASE
				readSchemaWord(info);
				state = 0;
				break;
			default:
				return	ERROR_UNEXPECTED_CHAR_IN_ENTITY_LIST_OR_SET;
				break;
		}
	}

	//
	//	BAG  [0:?
	//	SET  [0:?
	//	LIST [0:?
	//

	state = 1;

	while  (state == 1) {
		switch	(*getByte()) {
			CASE_SPACE
				//
				//
				//
				break;
			case  ']':
				state = 0;
				break;
			default:
				return	ERROR_UNEXPECTED_CHAR_IN_ENTITY_LIST_OR_SET;
				break;
		}
	}

	//
	//	BAG  [0:?]
	//	SET  [0:?]
	//	LIST [0:?]
	//

	state = 1;

	while  (state == 1) {
		switch	(*getByte()) {
			CASE_SPACE
				//
				//
				//
				break;
			CASE_LOWER_CASE
			CASE_UPPER_CASE
			CASE_SPECIAL_CASE
				undoGetByte();

				switch  (readSchemaListOrSetStart(info)) {
					case  OF:
						break;
					default:
						return	ERROR_UNEXPECTED_CHAR_IN_ENTITY_LIST_OR_SET;
						break;
				}

				state = 0;
				break;
			default:
				return	ERROR_UNEXPECTED_CHAR_IN_ENTITY_LIST_OR_SET;
				break;
		}
	}

	//
	//	BAG  [0:?] OF
	//	SET  [0:?] OF
	//	LIST [0:?] OF
	//

	return	0;
}

STRUCT_CHARACTER_ARGUMENT	* schemaAddArgument(int name_size, char * name, CString * info)
{
	return	schemaAddArgument(name_size, name, false, NONE, false, NULL, info);
}

STRUCT_CHARACTER_ARGUMENT	* schemaAddArgument(int name_size, char * name, bool optional, int static_type, bool group, STRUCT_CHARACTER_NAME * reference, CString * info)
{
	STRUCT_CHARACTER_ARGUMENT	* argument;
	char	* text;

	if	(entity->arguments) {
		argument = entity->arguments;

		while  (argument->next) {
			argument = argument->next;
		}

		argument->next = new STRUCT_CHARACTER_ARGUMENT;
		argument = argument->next;
	} else {
		entity->arguments = new STRUCT_CHARACTER_ARGUMENT;
		argument = entity->arguments;
	}

	text = new char[name_size + 1];
	text[name_size] = 0;
	stringToString(name_size, name, text, info);

	argument->argument_name = text;
	argument->argument_name_size = name_size;
	argument->min = -1;
	argument->max = -1;
	argument->group = group;
	argument->optional = optional;
	argument->unique = false;
	argument->set_or_list = NONE;
	argument->reference = reference;
	argument->static_type = static_type;
	argument->next = NULL;
	argument->dll_ref = NULL;
	argument->content = NULL;

	return	argument;
}

STRUCT_CHARACTER_ARGUMENT	* schemaAddInverseArgument(int name_size, char * name, CString * info)
{
	STRUCT_CHARACTER_INVERSE_ARGUMENT	* i_argument;
	char	* text;

	if	(entity->inverse_arguments) {
		i_argument = entity->inverse_arguments;

		while  (i_argument->next) {
			i_argument = i_argument->next;
		}

		i_argument->next = new STRUCT_CHARACTER_INVERSE_ARGUMENT;
		i_argument = i_argument->next;
	} else {
		entity->inverse_arguments = new STRUCT_CHARACTER_INVERSE_ARGUMENT;
		i_argument = entity->inverse_arguments;
	}

	text = new char[name_size];
	stringToString(name_size, name, text, info);

	i_argument->argument_name = text;
	i_argument->argument_name_size = name_size;
	i_argument->min = -1;
	i_argument->max = -1;
	i_argument->optional = false;
	i_argument->unique = false;
	i_argument->set_or_list = NONE;
	i_argument->reference = NULL;
	i_argument->static_type = NONE;
	i_argument->next = NULL;
	i_argument->refering_argument = NULL;
	i_argument->refering_argument_name_size = 0;
	i_argument->refering_argument_name = NULL;
	i_argument->dll_ref = NULL;
	i_argument->content = NULL;

	return	(STRUCT_CHARACTER_ARGUMENT *) i_argument;
}

int		readSchemaEntityNoKeyword(int current_situation, CString * info)
{
	STRUCT_CHARACTER_ARGUMENT	* argument;
	int		state = 1, error, static_type = 0;
	bool	optional_set = false;
	bool	unique_set = false;

/*	while  (state == 1) {
		switch	(*getByte()) {
			case  10:
			case  13:
			case  ' ':
				//
				//
				//
				break;
			CASE_LOWER_CASE
			CASE_UPPER_CASE
			CASE_SPECIAL_CASE
				undoGetByte();


				state = 0;
				break;
			default:
				return	ERROR_UNEXPECTED_CHAR_IN_ENTITY_NO_KEYWORD;
				break;
		}
	}
*/
	//
	//		property
	//
	
	state = 1;

	while  (state == 1) {
		switch	(*getByte()) {
			CASE_SPACE
				//
				//
				//
				break;
			case  ':':
				state = 0;
				break;
			default:
				return	ERROR_UNEXPECTED_CHAR_IN_ENTITY_NO_KEYWORD;
				break;
		}
	}
	
	//
	//		property :
	//

	switch	(current_situation) {
		case  WHERE:
		case  DERIVE:
		case  UNIQUE:
			state = 1;

			while  (state == 1) {
				switch	(*getByte()) {
					case  ';':
						//
						//
						//
						state = 0;
						break;
					default:
						if	(eof) {
							return	ERROR_UNEXPECTED_CHAR_IN_ENTITY_NO_KEYWORD;
						}
						break;
				}
			}
			return	0;
			break;
		case  INVERSE:
			argument = schemaAddInverseArgument(name_size, retrieved_name, info);
			break;
		default:
			argument = schemaAddArgument(name_size, retrieved_name, info);
			break;
	}

	//
	//	Normal arguments should be searched here (just one instance of an argument)
	//

	state = 1;

	while  (state == 1) {
		switch	(*getByte()) {
			CASE_SPACE
				//
				//
				//
				break;
			CASE_LOWER_CASE
			CASE_UPPER_CASE
			CASE_SPECIAL_CASE
				undoGetByte();

				//
				//	TypeNoKeywordStartSet
				//		BAG
				//		SET
				//		DATE
				//		DATETIME
				//		TIME
				//		LIST
				//		REAL
				//		STRING
				//		UNIQUE
				//		BOOLEAN
				//		INTEGER
				//		OPTIONAL
				//
				
				state = 0;

				switch  (readSchemaNoKeywordStart(info)) {
					case  BAG:
						error = readSchemaListOrSet(&argument->min, &argument->max, info);
						if	(error) {
							return	error;
						}
						argument->set_or_list = BAG;
						state = 1;
						break;
					case  SET:
						error = readSchemaListOrSet(&argument->min, &argument->max, info);
						if	(error) {
							return	error;
						}
						argument->set_or_list = SET;
						state = 1;
						break;
					case  DATE:
						static_type = DATE;
						argument->static_type = DATE;
						break;
					case  DATETIME:
						static_type = DATETIME;
						argument->static_type = DATETIME;
						break;
					case  TIME:
						static_type = TIME;
						argument->static_type = TIME;
						break;
					case  LIST:
						error = readSchemaListOrSet(&argument->min, &argument->max, info);
						if	(error) {
							return	error;
						}
						argument->set_or_list = LIST;
						state = 1;
						break;
					case  REAL:
						static_type = REAL;
						argument->static_type = REAL;
						break;
					case  STRING:
						static_type = STRING;
						argument->static_type = STRING;
						break;
					case  UNIQUE:
						state = 1;
						unique_set = true;
						argument->unique = true;
						break;
					case  BOOLEAN:
						static_type = BOOLEAN;
						argument->static_type = BOOLEAN;
						break;
					case  INTEGER:
						static_type = INTEGER;
						argument->static_type = INTEGER;
						break;
					case  _OPTIONAL:
						state = 1;
						optional_set = true;
						argument->optional = true;
						break;
					case  NO_KEYWORD_FOUND:
						STRUCT_CHARACTER_INDEX	** entity_reference;
				
						entity_reference = checkAndInsertWord(name_size, retrieved_name, info);
						argument->reference = *((STRUCT_CHARACTER_NAME **) entity_reference);
						break;
					default:
						return	ERROR_UNEXPECTED_CHAR_IN_ENTITY_NO_KEYWORD;
//						undoGetByte();
						break;
				}

				break;
			default:
				return	ERROR_UNEXPECTED_CHAR_IN_ENTITY_NO_KEYWORD;
				break;
		}
	}

	if	(current_situation == INVERSE) {
		//
		//	In the inverse situation we need some extra information and we need to check wether everthing is a sexpected
		//
		ASSERT(argument->reference != 0); 

		state = 1;

		while  (state == 1) {
			switch	(*getByte()) {
				CASE_SPACE
					//
					//
					//
					break;
				case  'F':
					if	(*getByte() == 'O') {
						if	(*getByte() == 'R') {
							state = 0;
						} else {
							return	ERROR_UNEXPECTED_CHAR_IN_ENTITY_NO_KEYWORD;
						}
					} else {
						return	ERROR_UNEXPECTED_CHAR_IN_ENTITY_NO_KEYWORD;
					}
					break;
				default:
					return	ERROR_UNEXPECTED_CHAR_IN_ENTITY_NO_KEYWORD;
			}
		}

		state = 1;

		while  (state == 1) {
			switch	(*getByte()) {
				CASE_SPACE
					//
					//
					//
					break;
				CASE_LOWER_CASE
				CASE_UPPER_CASE
				CASE_SPECIAL_CASE
					undoGetByte();

					//
					//	TypeNoKeywordStartSet
					//
					
					state = 0;

					switch  (readSchemaNoKeywordStart(info)) {
						case  NO_KEYWORD_FOUND:
//							STRUCT_CHARACTER_INDEX	** entity_reference;
					
							((STRUCT_CHARACTER_INVERSE_ARGUMENT *) argument)->refering_argument_name_size = name_size;
							((STRUCT_CHARACTER_INVERSE_ARGUMENT *) argument)->refering_argument_name = new char[name_size];
							memcpy(((STRUCT_CHARACTER_INVERSE_ARGUMENT *) argument)->refering_argument_name, retrieved_name, name_size);
							break;
						default:
							return	ERROR_UNEXPECTED_CHAR_IN_ENTITY_NO_KEYWORD;
							break;
					}

					break;
				default:
					return	ERROR_UNEXPECTED_CHAR_IN_ENTITY_NO_KEYWORD;
					break;
			}
		}
	}

	//
	//	We found a static type or have to search for a reference.
	//

	if	(static_type == 0) {
		state = 1;
/*
		while  (state == 1) {
			switch	(*getByte()) {
				case  10:
				case  13:
				case  ' ':
					//
					//
					//
					break;
				CASE_LOWER_CASE
				CASE_UPPER_CASE
				CASE_SPECIAL_CASE
					undoGetByte();

					ReadSchemaWord();

					state = 0;
					break;
				default:
					return	ERROR_UNEXPECTED_CHAR_IN_ENTITY_NO_KEYWORD;
					break;
			}
		}
		*/
	} else {
		switch  (static_type) {
			case  STRING:
				error = readSchemaString(info);
				
				if	(error) {
					return  error;
				}

				undoGetByte();
				break;
		}
	}

	//
	//		property : IfcWallType
	//		property : REAL
	//

	state = 1;

	while  (state == 1) {
		switch	(*getByte()) {
			CASE_SPACE
				//
				//
				//
				break;
			case  ';':
				state = 0;
				break;
			default:
				return	ERROR_UNEXPECTED_CHAR_IN_ENTITY_NO_KEYWORD;
				break;
		}
	}

	//
	//		property : IfcWallType;
	//		property : REAL;
	//

	return	0;
}

int		readSchemaEntity(CString * info)
{
	int		state = 1, error;
	int		current_situation = NONE;

	while  (state == 1) {
		switch	(*getByte()) {
			CASE_SPACE
				//
				//
				//
				break;
			CASE_LOWER_CASE
			CASE_UPPER_CASE
			CASE_SPECIAL_CASE
				undoGetByte();

				state = 0;
				break;
			default:
				return	ERROR_UNEXPECTED_CHAR_IN_ENTITY;
				break;
		}
	}

	readSchemaWord(info);

	STRUCT_CHARACTER_INDEX	** entity_reference;
		
	entity_reference = checkAndInsertWord(name_size, retrieved_name, info);
	entity = *((STRUCT_CHARACTER_NAME **) entity_reference);

	entity->description = NULL;
	entity->parent = NULL;
	entity->arguments = NULL;
//	checkAndInsertWord(name_size, uppercase_name);

	//
	//	ENTITY   IfcWall
	//

	state = 1;

	while  (state == 1) {
		switch	(*getByte()) {
			CASE_SPACE
				//
				//
				//
				break;
			case  ';':
				state = 0;
				break;
			default:
				undoGetByte();
				state = 0;
				break;
		}
	}

	//
	//	ENTITY   IfcWall;
	//

	int		i;
	state = 1;

	while  (state == 1) {
		switch	(*getByte()) {
			CASE_SPACE
				//
				//
				//
				break;
			CASE_LOWER_CASE
			CASE_UPPER_CASE
//			CASE_SPECIAL_CASE
				undoGetByte();

				//	TypeStartSet
				//		WHERE
				//		DERIVE
				//		UNIQUE
				//		INVERSE
				//		SUBTYPE
				//		ABSTRACT
				//		SUPERTYPE
				//		END_ENTITY
				//
				//		NO_KEYWORD_FOUND
				switch  (readSchemaEntityMain(info)) {
					case  WHERE:
						current_situation = WHERE;
						break;
					case  DERIVE:
						current_situation = DERIVE;
						break;
					case  UNIQUE:
						current_situation = UNIQUE;
						break;
					case  INVERSE:
						current_situation = INVERSE;
						break;
					case  SUBTYPE:
						error = readSchemaSubtype(info);
						if	(error) {
							return	error;
						} else {
							//
							//	We found the subtype of the current type and should pass this into the system;
							//

							checkAndInsertWord(name_size, retrieved_name, info);
						}
						current_situation = NONE;
						break;
					case  ABSTRACT:
						error = readSchemaAbstract(info);
						if	(error) {
							return	error;
						}
						current_situation = NONE;
						break;
					case  SUPERTYPE:
						error = readSchemaSupertype(info);
						if	(error) {
							return	error;
						}
						current_situation = NONE;
						break;
					case  END_ENTITY:
						current_situation = NONE;
						state = 0;
						break;
					case  NO_KEYWORD_FOUND:
						error = readSchemaEntityNoKeyword(current_situation, info);
						if	(error) {
							return	error;
						}
						break;
					default:
						return	ERROR_UNEXPECTED_CHAR_IN_ENTITY;
						break;
				}

				break;
			case  '-':
				//
				//	Check if we have a -- ... \n
				//
				if	(*getByte() != '-') {
					return	ERROR_UNEXPECTED_CHAR_IN_ENTITY;
				} else {
					//
					//	Found the beginning of a text field
					//
					state = 2;
					i = 0;
					while  ( (! eof)  &&
							 (state == 2) ) {
						switch	(*getByte()) {
							case  10:
								if	(i) {
									entity->description = new char[i+1];
									entity->description[i] = 0;
									while  (i > 0) {
										i--;
										entity->description[i] = description[i];
									}
								}
								state = 1;
								break;
							case  '\t':
							case  ' ':
								if	(i) {
									undoGetByte();
									description[i] = *getByte();
									i++;
								}
								break;
							default:
								undoGetByte();
								description[i] = *getByte();
								i++;
								break;
						}
					}

					if	(eof) {
						return	ERROR_UNEXPECTED_CHAR_IN_ENTITY;
					}
				}
				break;
			case  '(':
				//
				//	Check if we have a (* ... *)
				//
				if	(*getByte() != '*') {
					return	ERROR_UNEXPECTED_CHAR_IN_ENTITY;
				} else {
					//
					//	Found the beginning of a text field
					//
					state = 2;
					while  ( (! eof)  &&
							 (state == 2) ) {
						if	(*getByte() == '*') {
							if	(*getByte() == ')') {
								state = 1;
							} else {
								undoGetByte();
							}
						}
					}

					if	(eof) {
						return	ERROR_UNEXPECTED_CHAR_IN_ENTITY;
					}
				}
				break;
			default:
				return	ERROR_UNEXPECTED_CHAR_IN_ENTITY;
				break;
		}
	}

	//
	//	ENTITY   IfcWall
	//		SUBTYPE OF (IfcProperty);
    //			Descriptor       : STRING;
    //			ObjectReference  : IfcGloballyUniqueId;
	//	END_ENTITY
	//

	state = 1;

	while  (state == 1) {
		switch	(*getByte()) {
			CASE_SPACE
				//
				//
				//
				break;
			case  ';':
				//
				//
				//
				state = 0;
				break;
			default:
				return	ERROR_UNEXPECTED_CHAR_IN_ENTITY_END;
				break;
		}
	}
	
	return	0;
}


int		readSchemaUse(CString * info)
{
	//
	//	USE
	//

	int	state = 1;

	while  (state == 1) {
		switch	(*getByte()) {
			CASE_SPACE
				//
				//
				//
				break;
			CASE_LOWER_CASE
			CASE_UPPER_CASE
			CASE_SPECIAL_CASE
				undoGetByte();

				//	RuleStartSet
				//		FROM

				switch  (readSchemaUseStart(info)) {
					case  FROM:
						state = 0;
						break;
					default:
						return	ERROR_UNEXPECTED_CHAR_IN_USE;
						break;
				}
				break;
			default:
				return	ERROR_UNEXPECTED_CHAR_IN_USE;
				break;
		}
	}

	//
	//	USE FROM
	//

	state = 1;

	while  (state == 1) {
		switch	(*getByte()) {
			CASE_SPACE
				//
				//
				//
				break;
			CASE_LOWER_CASE
			CASE_UPPER_CASE
			CASE_SPECIAL_CASE
				readSchemaWord(info);

				state = 0;
				break;
			default:
				return	ERROR_UNEXPECTED_CHAR_IN_USE;
				break;
		}
	}

	//
	//	USE FROM ...
	//

	state = 1;

	while  (state == 1) {
		switch	(*getByte()) {
			CASE_SPACE
				//
				//
				//
				break;
			case  ';':
				state = 0;
				break;
			default:
				undoGetByte();
				state = 0;
				break;
		}
	}

	//
	//	USE FROM ...;
	//

	return	0;
}

int		readSchemaRule(CString * info)
{
	//
	//	RULE
	//

	int	state = 1;

	while  (state == 1) {
		switch	(*getByte()) {
			CASE_LOWER_CASE
			CASE_UPPER_CASE
			CASE_SPECIAL_CASE
				undoGetByte();

				//	RuleStartSet
				//		END_RULE

				switch  (readSchemaRuleStart(info)) {
					case  END_RULE:
						state = 0;
						break;
					default:
						break;
				}
				break;
			default:
				if	(eof) {
					return	ERROR_UNEXPECTED_CHAR_IN_RULE;
				}
				break;
		}
	}

	//
	//	RULE ...
	//	END_RULE
	//

	state = 1;

	while  (state == 1) {
		switch	(*getByte()) {
			CASE_SPACE
				//
				//
				//
				break;
			case  ';':
				state = 0;
				break;
			default:
				undoGetByte();
				state = 0;
				break;
		}
	}

	//
	//	RULE ...
	//	END_RULE;
	//

	return	0;
}

int		readSchemaType(CString * info)
{
	int	min, max;
	int	state = 1, error, static_type = NONE;
	int	debug_type, current_situation = NONE;

	while  (state == 1) {
		switch	(*getByte()) {
			CASE_SPACE
				//
				//
				//
				break;
			CASE_LOWER_CASE
			CASE_UPPER_CASE
			CASE_SPECIAL_CASE
				undoGetByte();

				state = 0;
				break;
			default:
				return	ERROR_UNEXPECTED_CHAR_IN_TYPE;
				break;
		}
	}

	readSchemaWord(info);

	checkAndInsertWord(name_size, retrieved_name, info);

	//
	//	TYPE   IfcWallType
	//

	state = 1;

	while  (state == 1) {
		switch	(*getByte()) {
			CASE_SPACE
				//
				//
				//
				break;
			case  '=':
				state = 0;
				break;
			default:
				return	ERROR_UNEXPECTED_CHAR_IN_TYPE;
				break;
		}
	}

	//
	//	TYPE   IfcWallType =
	//

	state = 1;

	while  (state == 1) {
		switch	(*getByte()) {
			CASE_SPACE
				//
				//
				//
				break;
			CASE_LOWER_CASE
			CASE_UPPER_CASE
			CASE_SPECIAL_CASE
				undoGetByte();

				//	TypeStartSet
				//		DATE
				//		DATETIME
				//		TIME
				//		LIST
				//		REAL
				//		NUMBER
				//		STRING
				//		SELECT
				//		BOOLEAN
				//		INTEGER
				//		ENUMERATION

				switch  (readSchemaTypeStart(info)) {
					case  DATE:
						debug_type = DATE;
						static_type = DATE;
						state = 0;
						break;
					case  DATETIME:
						debug_type = DATETIME;
						static_type = DATETIME;
						state = 0;
						break;
					case  TIME:
						debug_type = TIME;
						static_type = TIME;
						state = 0;
						break;
					case  LIST:
						debug_type = LIST;
						error = readSchemaListOrSet(&min, &max, info);
						if	(error) {
							return	error;
						}
						break;
					case  REAL:
						debug_type = REAL;
						static_type = REAL;
						state = 0;
						break;
					case  NUMBER:
						debug_type = NUMBER;
						static_type = NUMBER;
						state = 0;
						break;
					case  STRING:
						debug_type = STRING;
						error = readSchemaTypeString(info);
						if	(error) {
							return	error;
						}
						state = 0;
						break;
					case  SELECT:
						debug_type = SELECT;
						error = readSchemaSelect(info);
						if	(error) {
							return	error;
						}
						state = 0;
						break;
					case  BOOLEAN:
						debug_type = BOOLEAN;
						static_type = BOOLEAN;
						state = 0;
						break;
					case  INTEGER:
						debug_type = INTEGER;
						static_type = INTEGER;
						state = 0;
						break;
					case  ENUMERATION:
						debug_type = ENUMERATION;
						error = readSchemaEnumeration(info);
						if	(error) {
							return	error;
						}
						state = 0;
						break;
					default:
						debug_type = NONE;
						//
						//	Reference to other type
						//
						state = 2;

						while  (state == 2) {
							switch	(*getByte()) {
								CASE_SPACE
									//
									//
									//
									break;
								case  ';':
									state = 1;	
									break;
								default:
									return	ERROR_UNEXPECTED_CHAR_IN_TYPE;
									break;
							}
						}
						state = 0;
						break;
				}

				break;
			default:
				return	ERROR_UNEXPECTED_CHAR_IN_TYPE;
				break;
		}
	}

	switch	(static_type) {
		case  DATE:
		case  DATETIME:
		case  TIME:
		case  REAL:
		case  NUMBER:
		case  BOOLEAN:
		case  INTEGER:
			state = 1;

			while  (state == 1) {
				switch	(*getByte()) {
					CASE_SPACE
						//
						//
						//
						break;
					case  ';':
						state = 0;	
						break;
					default:
						return	ERROR_UNEXPECTED_CHAR_IN_TYPE;
						break;
				}
			}

			break;
	}

	//
	//	TYPE   IfcWallType = .....;
	//

	state = 1;

	while  (state == 1) {
		switch	(*getByte()) {
			CASE_SPACE
				//
				//
				//
				break;
			CASE_LOWER_CASE
			CASE_UPPER_CASE
			CASE_SPECIAL_CASE
				undoGetByte();

				//	TypeEndSet
				//		WHERE
				//		END_TYPE

				switch  (readSchemaTypeEnd(info)) {
					case  WHERE:
						current_situation = WHERE;
						break;
					case  END_TYPE:
						state = 0;
						break;
					case  NO_KEYWORD_FOUND:
						error = readSchemaEntityNoKeyword(current_situation, info);
						if	(error) {
							return	error;
						}
						break;
					default:
						return	ERROR_UNEXPECTED_CHAR_IN_TYPE;
						break;
				}
				break;
			default:
				return	ERROR_UNEXPECTED_CHAR_IN_TYPE;
				break;
		}
	}

	//
	//	TYPE   IfcWallType = .....;
	//	END_TYPE
	//

	state = 1;

	while  (state == 1) {
		switch	(*getByte()) {
			CASE_SPACE
				//
				//
				//
				break;
			case  ';':
				//
				//
				//
				state = 0;
				break;
			default:
				return	ERROR_UNEXPECTED_CHAR_IN_TYPE_END;
				break;
		}
	}

	//
	//	TYPE   IfcWallType = .....;
	//	END_TYPE;
	//
	
	return	0;
}

int		readSchemaSchema(CString * info)
{
	//
	//	SCHEMA
	//

	int	state = 1, i = 0;

	while  (state == 1) {
		switch	(*getByte()) {
			CASE_SPACE
				//
				//
				//
				break;
			CASE_LOWER_CASE
			CASE_UPPER_CASE
			CASE_SPECIAL_CASE
				undoGetByte();

				state = 0;
				break;
			default:
				return	ERROR_UNEXPECTED_CHAR_IN_SCHEMA;
				break;
		}
	}

	readSchemaWord(info);

	//
	//	SCHEMA   Ifc151
	//

	schema_name = new char[name_size + 1];
	while  (i < name_size) {
		schema_name[i++] = retrieved_name[i];
	}
	schema_name[i] = 0;

	state = 1;

	while  (state == 1) {
		switch	(*getByte()) {
			CASE_SPACE
				//
				//
				//
				break;
			case  ';':
				state = 0;
				break;
			default:
				undoGetByte();
				state = 0;
				break;
		}
	}

	//
	//	SCHEMA   Ifc151;
	//

	return	0;
}

int		readSchemaBeginC(CString * info)
{
	//
	//	BEGIN_C
	//

	int	state = 1;

	switch	(*getByte()) {
		case  '+':
			switch	(*getByte()) {
				case  '+':
					break;
				default:
					return	ERROR_UNEXPECTED_CHAR_IN_BEGIN_C;
					break;
			}
			break;
		default:
			return	ERROR_UNEXPECTED_CHAR_IN_BEGIN_C;
			break;
	}

	//
	//	BEGIN_C++
	//

	state = 1;

	while  (state == 1) {
		switch	(*getByte()) {
			CASE_LOWER_CASE
			CASE_UPPER_CASE
			CASE_SPECIAL_CASE
				undoGetByte();

				//	BeginCStartSet
				//		END_C

				switch  (readSchemaBeginCStart(info)) {
					case  END_C:
						state = 0;
						break;
					default:
						break;
				}
				break;
			default:
				if	(eof) {
					return	ERROR_UNEXPECTED_CHAR_IN_BEGIN_C;
				}
				break;
		}
	}

	//
	//	BEGIN_C++ ...
	//	END_C
	//

	switch	(*getByte()) {
		case  '+':
			switch	(*getByte()) {
				case  '+':
					break;
				default:
					return	ERROR_UNEXPECTED_CHAR_IN_BEGIN_C;
					break;
			}
			break;
		default:
			return	ERROR_UNEXPECTED_CHAR_IN_BEGIN_C;
			break;
	}

	//
	//	BEGIN_C++ ...
	//	END_C++
	//

	state = 1;

	while  (state == 1) {
		switch	(*getByte()) {
			CASE_SPACE
				//
				//
				//
				break;
			case  ';':
				state = 0;
				break;
			default:
				undoGetByte();
				state = 0;
				break;
		}
	}

	//
	//	BEGIN_C++ ...
	//	END_C++;
	//

	return	0;
}

int		readSchemaFunction(CString * info)
{
	//
	//	FUNCTION
	//

	int	state = 1;

	while  (state == 1) {
		switch	(*getByte()) {
			CASE_LOWER_CASE
			CASE_UPPER_CASE
			CASE_SPECIAL_CASE
				undoGetByte();

				//	FunctionStartSet
				//		END_FUNCTION

				switch  (readSchemaFunctionStart(info)) {
					case  END_FUNCTION:
						state = 0;
						break;
					default:
						break;
				}
				break;
			default:
				if	(eof) {
					return	ERROR_UNEXPECTED_CHAR_IN_FUNCTION;
				}
				break;
		}
	}

	//
	//	FUNCTION ...
	//	END_FUNCTION
	//

	state = 1;

	while  (state == 1) {
		switch	(*getByte()) {
			CASE_SPACE
				//
				//
				//
				break;
			case  ';':
				state = 0;
				break;
			default:
				return	ERROR_UNEXPECTED_CHAR_IN_FUNCTION;
				break;
		}
	}

	//
	//	FUNCTION ...
	//	END_FUNCTION;
	//

	return	0;
}

int		readSchemaProcedure(CString * info)
{
	//
	//	PROCEDURE
	//

	int	state = 1;

	while  (state == 1) {
		switch	(*getByte()) {
			CASE_LOWER_CASE
			CASE_UPPER_CASE
			CASE_SPECIAL_CASE
				undoGetByte();

				//	ProcedureStartSet
				//		END_PROCEDURE

				switch  (readSchemaProcedureStart(info)) {
					case  END_PROCEDURE:
						state = 0;
						break;
					default:
						break;
				}
				break;
			default:
				if	(eof) {
					return	ERROR_UNEXPECTED_CHAR_IN_PROCEDURE;
				}
				break;
		}
	}

	//
	//	PROCEDURE ...
	//	END_PROCEDURE
	//

	state = 1;

	while  (state == 1) {
		switch	(*getByte()) {
			CASE_SPACE
				//
				//
				//
				break;
			case  ';':
				state = 0;
				break;
			default:
				return	ERROR_UNEXPECTED_CHAR_IN_PROCEDURE;
				break;
		}
	}

	//
	//	PROCEDURE ...
	//	END_PROCEDURE;
	//

	return	0;
}


int		readSchemaEndSchema(CString * info)
{
	//
	//	END_SCHEMA
	//

	int	state = 1;

	while  (state == 1) {
		switch	(*getByte()) {
			CASE_SPACE
				//
				//
				//
				break;
			case  ';':
				state = 0;
				break;
			default:
				undoGetByte();
				state = 0;
				break;
		}
	}

	//
	//	END_SCHEMA;
	//

	return	0;
}

int		readSchemaRuleSchema(CString * info)
{
	//
	//	RULE_SCHEMA
	//

	int	state = 1;

	while  (state == 1) {
		switch	(*getByte()) {
			CASE_LOWER_CASE
			CASE_UPPER_CASE
			CASE_SPECIAL_CASE
				undoGetByte();

				//	RuleSchemaStartSet
				//		END_RULE_SCHEMA

				switch  (readSchemaRuleSchemaStart(info)) {
					case  END_RULE_SCHEMA:
						state = 0;
						break;
					default:
						break;
				}
				break;
			default:
				if	(eof) {
					return	ERROR_UNEXPECTED_CHAR_IN_RULE_SCHEMA;
				}
				break;
		}
	}

	//
	//	RULE_SCHEMA ...
	//	END_RULE_SCHEMA
	//

	state = 1;

	while  (state == 1) {
		switch	(*getByte()) {
			CASE_SPACE
				//
				//
				//
				break;
			case  ';':
				state = 0;
				break;
			default:
				undoGetByte();
				state = 0;
				break;
		}
	}

	//
	//	RULE_SCHEMA ...
	//	END_RULE_SCHEMA;
	//

	return	0;
}

int		readSchemaRoot(CString * info)
{
	int	state = 1;

	while  (state == 1) {
		switch	(*getByte()) {
			CASE_SPACE
				//
				//	Line started with space(s)
				//
				break;
			CASE_LOWER_CASE
			CASE_UPPER_CASE
//			CASE_SPECIAL_CASE
				undoGetByte();

				//	RootSet
				//		USE
				//		RULE
				//		TYPE
				//		ENTITY
				//		SCHEMA
				//		BEGIN_C
				//		FUNCTION
				//		PROCEDURE
				//		END_SCHEMA
				//		RULE_SCHEMA

				switch  (readSchemaRootWord(info)) {
					case  USE:
						return	readSchemaUse(info);
						break;
					case  RULE:
						return	readSchemaRule(info);
						break;
					case  TYPE:
						return	readSchemaType(info);
						break;
					case  ENTITY:
						return	readSchemaEntity(info);
						break;
					case  SCHEMA:
						return	readSchemaSchema(info);
						break;
					case  BEGIN_C:
						return	readSchemaBeginC(info);
						break;
					case  FUNCTION:
						return	readSchemaFunction(info);
						break;
					case  PROCEDURE:
						return	readSchemaProcedure(info);
						break;
					case  END_SCHEMA:
						return	readSchemaEndSchema(info);
						break;
					case  RULE_SCHEMA:
						return	readSchemaRuleSchema(info);
						break;
					default:
						return	ERROR_UNEXPECTED_CHAR_IN_ROOT_TYPE;
						break;
				}

				state = 0;
				break;
			case  '-':
				//
				//	Check if we have a -- ... \n
				//
				if	(*getByte() != '-') {
					return	ERROR_UNEXPECTED_CHAR_IN_ROOT_LINE_COMMENT;
				} else {
					//
					//	Found the beginning of a text field
					//
					state = 2;
					while  ( (! eof)  &&
							 (state == 2) ) {
						if	(*getByte() == 10) {
							state = 1;
						}
					}

					if	(eof) {
						return	ERROR_OKE;
					}
				}
				break;
			case  '(':
				//
				//	Check if we have a (* ... *)
				//
				if	(*getByte() != '*') {
					return	ERROR_UNEXPECTED_CHAR_IN_ROOT_COMMENT;
				} else {
					//
					//	Found the beginning of a text field
					//
					state = 2;
					while  ( (! eof)  &&
							 (state == 2) ) {
						if	(*getByte() == '*') {
							if	(*getByte() == ')') {
								state = 1;
							} else {
								undoGetByte();
							}
						}
					}

					if	(eof) {
						return	ERROR_OKE;
					}
				}
				break;
			default:
				if	(eof) {
					return	ERROR_OKE;
				}

				return	ERROR_UNEXPECTED_CHAR_IN_ROOT_COMMENT;
				break;
		}
	}

	return	ERROR_OKE;
}

STRUCT_CHARACTER_INDEX	* getFirstEntity(CString * info)
{
	return	NULL;
}

STRUCT_CHARACTER_INDEX	* getNextEntity(CString * info)
{
	return	NULL;
}

STRUCT_CHARACTER_INDEX	** checkAndInsertWord(int word_size, char * word, CString * info)
{
	return	checkAndInsertWord(word_size, word, NULL, info);
}

STRUCT_CHARACTER_INDEX	** checkAndInsertWord(int word_size, char * word, STRUCT_CHARACTER_NAME * reference, CString * info)
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

		character_index = &word_length_references[word_size];

		if	(! * character_index) {
			//
			//	First word of this size.
			//
			newCharacterName((STRUCT_CHARACTER_NAME **) character_index, word_size, word, reference, info);
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
						newCharacterName((STRUCT_CHARACTER_NAME **) character_index_referenced, word_size, word, reference, info);
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
						if	(word[i] != ((STRUCT_CHARACTER_NAME *) (* character_index))->name[i]) {
							character_index_tmp = (* character_index);

///							(* character_index) = (STRUCT_CHARACTER_INDEX *) AllocCleanMemory(sizeof(STRUCT_CHARACTER_INDEX));
							(* character_index) = new STRUCT_CHARACTER_INDEX;
							memset((* character_index), 0, sizeof(STRUCT_CHARACTER_INDEX));

							(* character_index)->index = i;
							(* character_index)->reference[((STRUCT_CHARACTER_NAME *) character_index_tmp)->name[i]] = character_index_tmp;

							character_index = &(* character_index)->reference[word[i]];
							newCharacterName((STRUCT_CHARACTER_NAME **) character_index, word_size, word, reference, info);

							i = word_size;
							new_word = true;
						}

						i++;
					}

					ready = true;

					//
					//	Nothing changed, add the counter.
					if	(! new_word) {
						addCharacterName((STRUCT_CHARACTER_NAME **) character_index, word, info);
					}
				}
			}
		}
	} else {
		//
		//	Error
		//
//		return	-1;
	}

	return	character_index;
}

STRUCT_CHARACTER_NAME	** findWord(int word_size, char * word, CString * info)
{
	//
	//	Check maximum word length
	//
	STRUCT_CHARACTER_INDEX	** character_index, ** character_index_referenced;//, * character_index_tmp;

	if	( (word_size > 0)  &&
		  (word_size < MAX_EXPRESS_WORD_SIZE) ) {
		//
		//	word_length_references
		//
		int		i;
//		bool	new_word;

		character_index = &word_length_references[word_size];

		if	(! * character_index) {
			//
			//	First word of this size.
			//
			return	NULL;
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
						return	NULL;
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
//					new_word = false;

					while	(i < word_size) {
						if	(word[i] != ((STRUCT_CHARACTER_NAME *) (* character_index))->name[i]) {
							return	NULL;
						}

						i++;
					}

					ready = true;

					//
					//	Nothing changed, add the counter.
//					if	(! new_word) {
//						addCharacterName((STRUCT_CHARACTER_NAME **) character_index, display_word, info);
//					}
				}
			}
		}
	} else {
		//
		//	Error
		//
		return	NULL;
	}

	return	(STRUCT_CHARACTER_NAME **) character_index;
}

void	newCharacterName(STRUCT_CHARACTER_NAME ** character_name, int word_size, char * word, STRUCT_CHARACTER_NAME * reference, CString * info) {
	(* character_name) = new STRUCT_CHARACTER_NAME;

	(* character_name)->index = -1;
	(* character_name)->count = 0;
	(* character_name)->word_size = word_size;
	(* character_name)->name = new char[word_size + 1];
	(* character_name)->selected = true;
	(* character_name)->add_this = false;
	(* character_name)->dll_ref = NULL;

	(* character_name)->description = NULL;
	(* character_name)->arguments = NULL;
	(* character_name)->inverse_arguments = NULL;
	(* character_name)->parent = NULL;
	(* character_name)->reference = reference;
	(* character_name)->display_name = new char[word_size + 1];

	(* character_name)->name[word_size] = 0;
	(* character_name)->display_name[word_size] = 0;
	while  (word_size) {
		(* character_name)->name[word_size] = word[--word_size];
		(* character_name)->display_name[word_size] = word[word_size];
	}

	addCharacterNameSort(character_name, info);
}

void	addCharacterName(STRUCT_CHARACTER_NAME ** character_name, char * display_name, CString * info)
{
	for	(int i = 0; i < (* character_name)->word_size; i++) {
		(* character_name)->display_name[i] = display_name[i];
	}
}

void	addCharacterNameSort(STRUCT_CHARACTER_NAME ** character_name, CString * info)
{
	STRUCT_CHARACTER_NAME_SORTED	* character_name_sorted, * new_character_name_sorted;
	int		step_size, i, richting, name_length;
	char	* name;

	name = (* character_name)->name;
	name_length = (* character_name)->word_size;

	count_character_name_sorted++;
	
	if	(! first_character_name_sorted) {
		first_character_name_sorted = new STRUCT_CHARACTER_NAME_SORTED;
		first_character_name_sorted->previous = first_character_name_sorted;
		first_character_name_sorted->next = first_character_name_sorted;
		first_character_name_sorted->reference = (* character_name);

		count_character_name_sorted = 1;
	} else {
		character_name_sorted = first_character_name_sorted;
		step_size = (count_character_name_sorted + 1)/2;
		richting = 1;

		while  (step_size > 1) {
			if	(richting == 1) {
				for (i=0; i<step_size; i++) {
					character_name_sorted = character_name_sorted->next;
				}
			} else {
				for (i=0; i<step_size; i++) {
					character_name_sorted = character_name_sorted->previous;
				}
			}

			richting = compareStrings(name, name_length, character_name_sorted->reference->name, character_name_sorted->reference->word_size, info);

			step_size = (step_size + 1)/2;
		}

		if	(richting == 1) {
			character_name_sorted = character_name_sorted->next;
		} else {
			character_name_sorted = character_name_sorted->previous;
		}

		richting = compareStrings(name, name_length, character_name_sorted->reference->name, character_name_sorted->reference->word_size, info);

		if	(richting == 1) {
			character_name_sorted = character_name_sorted->next;
		} else {
			character_name_sorted = character_name_sorted->previous;
		}

		richting = compareStrings(name, name_length, character_name_sorted->reference->name, character_name_sorted->reference->word_size, info);

		if	(richting == 1) {
			new_character_name_sorted = new STRUCT_CHARACTER_NAME_SORTED;
			if	(character_name_sorted->next == character_name_sorted) {
				new_character_name_sorted->next = new_character_name_sorted;
			} else {
				character_name_sorted->next->previous = new_character_name_sorted;
				new_character_name_sorted->next = character_name_sorted->next;
			}
			new_character_name_sorted->previous = character_name_sorted;
			new_character_name_sorted->reference = (* character_name);
			character_name_sorted->next = new_character_name_sorted;
		} else {
			new_character_name_sorted = new STRUCT_CHARACTER_NAME_SORTED;
			if	(character_name_sorted->previous == character_name_sorted) {
				new_character_name_sorted->previous = new_character_name_sorted;
			} else {
				character_name_sorted->previous->next = new_character_name_sorted;
				new_character_name_sorted->previous = character_name_sorted->previous;
			}
			new_character_name_sorted->next = character_name_sorted;
			new_character_name_sorted->reference = (* character_name);

			character_name_sorted->previous = new_character_name_sorted;
			first_character_name_sorted = first_character_name_sorted->previous;
		}
	}
}

STRUCT_CHARACTER_NAME_SORTED	* findExactWord(char * text, int text_length, int output, bool filter, CString * info)
{
	STRUCT_CHARACTER_NAME_SORTED	* character_name_sorted;
	bool	part_valid;
	int		j;

	character_name_sorted = first_character_name_sorted;

	while  (character_name_sorted) {
		if	(character_name_sorted->reference->count) {
			if	( (character_name_sorted->reference->selected) ||
				  (! filter) ) {
				if	(character_name_sorted->reference->word_size == text_length) {
					part_valid = true;

					for	 (j = 0; j < text_length; j++) {
						if	(text[j] != character_name_sorted->reference->name[j]) {
							part_valid = false;
						}
					}

					if	(part_valid) {
						character_name_sorted->reference->add_this = true;
						return	character_name_sorted;
					}
				}
			}
		}

		if	(character_name_sorted == character_name_sorted->next) {
			character_name_sorted = NULL;
		} else {
			character_name_sorted = character_name_sorted->next;
		}
	}

	return	NULL;  
}

int		compareStrings(char * source, int source_length, char * target, int target_length, CString * info)
{
	int	i = 0;

	while  ( (i < source_length)  && 
			 (i < target_length) )
	{
		if	(source[i] != target[i])
		{
			if	(source[i] > target[i])
			{
				return	1;
			} else {
				return	-1;
			}
		}

		i++;
	}

	if	(source_length > target_length)
	{
		return	1;
	} else {
		return	-1;
	}
}

void	stringToString(int size, char * source, char * target, CString * info)
{
	while  (size > 0) {
		size--;

		target[size] = source[size];
	}
}
