// promoteCommandPrompt.cpp : Defines the entry point for the console application.
//

#include	"stdafx.h"
#include	"dll.h"

int		main(int argc, char* argv[])
{
	char	* nameSpace = "visi", * URI = "http://www.visi.nl/schemas/20060807";

	if	(argc < 4) {
		printf("promoteCommandPrompt _2.exp _5.exp _7.xml [10.xsd]\r\n\r\n  _2.exp     Systematiek I input EXPRESS Schema file\r\n  _5.exp     Systematiek II input EXPRESS Schema file\r\n  _7.xml     Framework (raamwerk) XML file\r\n  10.xsd     Messages (berichten) schema output eXtended Schema Definition file (optional)");
	} else {
		char	* output = new char[10000];

		Set__2(argv[1], 0);

		Set__5(argv[2], 0);

		Set__7(argv[3], 0);

		Promote__2__5__7into__9(0);

		Get_10(&output, 0, nameSpace, URI);

		if	(argc == 4) {
			printf(output);
		} else {
			FILE	* file;
			if	(file = fopen(argv[4], "w+b")) {
				int	size = 0;
				while  (output[size]) {
					size++;
				}
				fwrite(output, size, 1, file);
				fclose(file);
			}
		}
	}

	return 0;
}

