// exp2xsdCommandPrompt.cpp : Defines the entry point for the console application.
//

#include	"stdafx.h"
#include	"dll.h"

int		main(int argc, char* argv[])
{
	char	* nameSpace = "visi", * URI = "http://www.visi.nl/schemas/20060807";

	if	(argc == 1) {
		printf("exp2xsdCommandPrompt _2.exp [_3.xsd]\r\n\r\n  _2.exp     Systematiek I input EXPRESS Schema file\r\n  _3.xsd     Systematiek I output eXtended Schema Definition file (optional)");
	} else {
		char	* output = new char[10000];

		Set__2(argv[1], 0);

		Convert__2into__3(0);

		Get__3(&output, 0, nameSpace, URI);

		if	(argc == 2) {
			printf(output);
		} else {
			FILE	* file;
			if	(file = fopen(argv[2], "w+b")) {
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

