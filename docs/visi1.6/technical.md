# Technisch


## Inleiding

abcdef
 
## Doel

abcdef

## Hoe bouw je een VISI XML bericht op

1. De SOAP server van de versturende partij bouwt een VISI XML bericht als volgt op:

`
    <SOAP-ENV:Envelope ...>
`
<br>
`
	<SOAP-ENV:Header>
`
<br>
`
		<SOAPServerURL ...>
`
<br>
`
			<sender>http://192.168.0.102</sender>
`
<br>
`
			<receiver>http://192.168.0.138</reciever>
`
<br>
`
		</SOAPServerURL>
`
<br>
`
		<UniqueID ...>
`
<br>
`
			<ID>UniqueIDonMessageInitiatingSOAPServer_XYZ</ID>
`
<br>
`
		</UniqueID>
`
<br>
`
		<Attachments ...>
`
<br>
`
			<count>2</count>
`
<br>
`
		</Attachments>
`
<br>
`
	</SOAP-ENV:Header>
`
<br>
`
	<SOAP-ENV:Body>
`
<br>
`
		<parseMessage …>
`
<br>
`
			<Data …>
`
<br>
`
				…						//	Attachment I
`
<br>
`
			</Data>
`
<br>
`
			<Data …>
`
<br>
`
				…						//	Attachment II
`
<br>
`
			</Data>
`
<br>
`
			<visiXML_MessageSchema …>
`
<br>
`
				…						//	VISI XML Bericht
`
<br>
`
			</visiXML_MessageSchema>
`
<br>
`
		</parseMessage>
`
<br>
`
	</SOAP-ENV:Body>
`
<br>
`
    </SOAP-ENV:Envelope>
`

<p class="note" title="ID van attachement">
note: de id van elke attachment is gelijk aan de id die in het VISI XML bericht 
	wordt gebruikt om de metadata van een attachment te beschrijven:
</p>


## Hoe verstuur je een VISI bericht

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




