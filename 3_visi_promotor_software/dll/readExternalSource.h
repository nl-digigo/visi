#define		MAX_EXPRESS_WORD_SIZE					256
#define		MAX_REFERENCE_CHARACTERS				256
#define		MEMORY_BLOCK_SIZE						1024
#define		MAX_WORD_SIZE							1000

typedef struct MEMORY_BUFFER {
	char				buffer[MEMORY_BLOCK_SIZE];
	int					cnt;
	int					currentIndex;
	MEMORY_BUFFER		* next;
}	memory_buffer;

struct STRUCT_CHARACTER_NAME;

typedef struct STRUCT_TYPE {
	char				type;
	STRUCT_TYPE			* next;
}	struct_type;

typedef struct STRUCT_CHARACTER_ARGUMENT {
	int									argument_name_size;
	char								* argument_name;
	bool								optional;
	bool								unique;
	int									static_type;
	int									set_or_list;
	int									min;
	int									max;
	bool								group;
	void								* dll_ref;
	char								* content;

	STRUCT_CHARACTER_NAME				* reference;
	STRUCT_CHARACTER_ARGUMENT			* next;
}	struct_character_argument;

typedef struct STRUCT_CHARACTER_INVERSE_ARGUMENT {
	int									argument_name_size;
	char								* argument_name;
	bool								optional;
	bool								unique;
	int									static_type;
	int									set_or_list;
	int									min;
	int									max;
	void								* dll_ref;
	char								* content;

	STRUCT_CHARACTER_NAME				* reference;
	STRUCT_CHARACTER_INVERSE_ARGUMENT	* next;
	STRUCT_CHARACTER_ARGUMENT			* refering_argument;
	int									refering_argument_name_size;
	char								* refering_argument_name;
}	struct_character_inverse_argument;

typedef struct STRUCT_CHARACTER_NAME {
	int									index;	// static -1, to discriminate from STRUCT_CHARACTER_INDEX
	int									word_size;
	char								* name;
	char								* description;
	int									count;
	bool								selected;
	bool								add_this;
	void								* dll_ref;
	STRUCT_CHARACTER_NAME				* reference;

	char								* single_instance_name;
	char								* display_name;
	STRUCT_CHARACTER_NAME				* parent;
	STRUCT_CHARACTER_ARGUMENT			* arguments;
	STRUCT_CHARACTER_INVERSE_ARGUMENT	* inverse_arguments;

	int									file_number;
}	struct_character_name;

struct STRUCT_XML_ARGUMENT;

typedef struct STRUCT_XML_ELEMENT {
	int									index;	// static -1, to discriminate from STRUCT_CHARACTER_INDEX
	int									word_size;
	char								* name;

	STRUCT_CHARACTER_NAME				* schema;
	bool								defined;

	STRUCT_XML_ARGUMENT					* arguments;
}	struct_xml_element;


typedef struct STRUCT_XML_ELEMENT_REFERENCE {
	STRUCT_XML_ELEMENT					* reference;
	STRUCT_XML_ELEMENT_REFERENCE		* next;
}	struct_xml_element_reference;

typedef struct STRUCT_XML_ARGUMENT {
	STRUCT_XML_ARGUMENT					* next;
	STRUCT_CHARACTER_ARGUMENT			* schemaArgument;
	STRUCT_XML_ELEMENT_REFERENCE		* elementReference;
	char								* content;
}	struct_xml_argument;




typedef struct STRUCT_CHARACTER_INDEX {
	int						index;
	STRUCT_CHARACTER_INDEX	* reference[MAX_REFERENCE_CHARACTERS];
}	struct_character_index;

typedef struct STRUCT_CHARACTER_NAME_SORTED {
	STRUCT_CHARACTER_NAME			* reference;
	STRUCT_CHARACTER_NAME_SORTED	* previous;
	STRUCT_CHARACTER_NAME_SORTED	* next;
}	struct_character_name_sorted;

typedef struct STRUCT_XML_NAME_SORTED {
	STRUCT_XML_ELEMENT				* reference;
	STRUCT_XML_NAME_SORTED			* previous;
	STRUCT_XML_NAME_SORTED			* next;
}	struct_xml_name_sorted;

typedef struct STRUCT_LINE {
	int						name_length;
	STRUCT_TYPE				* arguments;
	STRUCT_CHARACTER_NAME	* reference;
	int						cache_for_zero_children;
}	struct_line;

typedef struct STRUCT_BACKLINK {
	int						express_id;
	int						attribute_index;
	STRUCT_BACKLINK			* previous;
	STRUCT_BACKLINK			* next;
}	struct_backlink;

typedef struct STRUCT_ORGANIZE_BACKLINK {
	STRUCT_BACKLINK			* first;
	STRUCT_BACKLINK			* last_added;
}	struct_organize_backlink;



int		readStream(int type, char * streamName, CString * info);
int		readString(int type, char* string, CString * info);
char	* getByte();
void	undoGetByte();

