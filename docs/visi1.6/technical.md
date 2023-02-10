# Technisch


## Inleiding

abcdef
 
## Doel

abcdef

## Hoe bouw je een VISI bericht op

abcdef

## Hoe verstuur je een SOAP bericht

abcdef




## Project specifiek bericht
voorbeeld code markdown

`
	<xs:enumeration value="Automatisch gevuld"/>
` 
<br>
`
    <ProjectType id="Project_xyz">
`
<br>
`
        <description>Standaard project</description>
`
<br>
`
        <complexElements>
`
<br>
`
            <ComplexElementTypeRef idref="AnderWillekeurigComplexElement"/>
`
<br>
`
        </complexElements>
`
<br>
`
    </ProjectType>
`
<br>
`
    <ComplexElementType id="AnderWillekeurigComplexElement">
`
<br>
`
        <description>Een ander willekeurig complex element</description>
`
<br>
`
        <simpleElements>
`
<br>
`
            <SimpleElementTypeRef idref="SOAPProtocol"/>
`
<br>
`
        </simpleElements>
`
<br>
`
    </ComplexElementType>
`
<br>
`
    <SimpleElementType id="SOAPProtocol">
`
<br>
`
    </SimpleElementType>
`
<br>

En voor het projectspecifieke bericht:

`
  <Project_xyz id="Project-000">
`
<br>
`
        <anderWillekeurigComplexElement>
`
<br>
`
            <AnderWillekeurigComplexElementRef idref="ProjectGegevens"/>
`
<br>
`	
        </anderWillekeurigComplexElement>
`
<br>
`
    </Project_xyz>
`
<br>
`
    <AnderWillekeurigComplexElement id="ProjectGegevens">
`
<br>
`
        <SOAPProtocol>MTOM</SOAPProtocol>
`
<br>
`
    </AnderWillekeurigComplexElement>
`


## Architectuur

abcdef
 
Figuur 1 Architectuur

![Afbeelding](media/fig-1-architectuur.png)
 

* A
* B
* C


Systematiek Part II
AppendixGroup




