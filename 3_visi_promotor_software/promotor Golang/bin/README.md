Created by TEEC2 - info@teec2.nl
# Promotor usage. 

There are two promotor programs to promote VISI framework files. 
For Windows based systems:

- visi-promotor.exe

For Linux based systems:

- visi-promotor-linux

The program is terminal based and needs parameters to be able to opperate. Below are the instructions on the usage of the program. 
The general input is: 
`visiVersion inputParameters outputFileName`

outputFileName supports absolute and relative folder paths. So you are able to create files in different folders. 
For Windows it seems the folder has to exist before running the program.
examples:
relative path:
`*/testmap/_3.xsd`
Absolute path: 
`C:/Users/testmap/_3.xsd`
When using folders names which contain spaces, use: `"` around it.
`"C:/Users/test map/_3.xsd"`

## Windows usage

For manual creation of the files open a command prompt window or other terminal. Point it to the same folder as where the visi-promotor.exe is located.
The .exe can also be called uppon with a program without the need for a terminal, but it still needs the required parameters.

### Creating a _3.xsd file.

`visi-promotor.exe 1.6 _2.exp _3result.xsd`

This results in the file: `_3result.xsd`

### Creating a _10.xsd file.

`visi-promotor.exe 1.6 _2 .exp _5.exp _7.xml _10result.xsd`

This results in the file: `_10result.xsd`

## Linux usage

For manual creation of the files open a command prompt window or other terminal. Point it to the same folder as where the visi-promotor-linux file is located.
The file can also be called uppon with a program without the need for a terminal, but it still needs the required parameters.

### Creating a _3.xsd file.

`visi-promotor-linux 1.6 _2.exp _3result.xsd`

This results in the file: `_3result.xsd`

### Creating a _10.xsd file.

`visi-promotor-linux 1.6 _2 .exp _5.exp _7.xml _10result.xsd`

This results in the file: `_10result.xsd`

## Known bugs:
| Bugs |
|----------|
| Providing a different version number as parameter than is stated in the ProjectType in `_7.xml` will ignore the parameter and the version is based on the schema number that is provided. |
| Windows: When pointing to a non existing output folder, the program states it has successfully writen the file, but it has not. |