# Technisch


## Inleiding

abcdef
 
## Doel

abcdef


## Architectuur

abcdef
 
Figuur 1 Architectuur

![Afbeelding](media/fig-1-architectuur.png)
 

* A
* B
* C

## Protocollen

abcdef

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


## Scenario berichtuitwisseling

abcdef

 
### Berichtuitwisseling vaste elementen op raamwerkniveau

abcdef

Op raamwerkniveau: 
* Elk raamwerk zal het volgende stukje XML bevatten om de SOAPServerURL aan een organisatie toe te kunnen wijzen:

`
	<OrganisationType id="Organisatie">
`
<br>
`
		<description>Standaard organisatie</description>
`
<br>
`
		<complexElements>
`
<br>
`
			<ComplexElementTypeRef idref="WillekeurigComplexElement"/>
`
<br>
`
		</complexElements>
`
<br>
`
	</OrganisationType>
`
<br>
`
	<ComplexElementType id="WillekeurigComplexElement">
`
<br>
`
		<description>Een willekeurig complex element</description>
`
<br>
`
		<simpleElements>
`
<br>
`	
			<SimpleElementTypeRef idref="SOAPServerURL"/>
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
	<SimpleElementType id="SOAPServerURL">
`
<br>
`
	</SimpleElementType>
`

abcdef


### Berichtuitwisseling vaste elementen op berichtniveau

abcdef

* In dit projectspecifieke bericht is voor elke organisatie gedefinieerd wat zijn SOAPServerURL is:

`
	<Organisatie id="Bierco">
`
<br>
`
		<name>Biereco"s Aannemingsbedrijf BV</name>
`
<br>
`
		<willekeurigComplexElement>
`
<br>
`
			<WillekeurigComplexElementRef idref="BierecoGegevens"/>
`
<br>
`
		</willekeurigComplexElement>
`
<br>
`
	</Organisatie>
`
<br>
`
	<WillekeurigComplexElement id="BierecoGegevens">
`
<br>
`
		<SOAPServerURL>http://192.168.0.102/visi</SOAPServerURL>
`
<br>
`
	</WillekeurigComplexElement>
`


### Gevolgen

abcdef
 
 
### Berichtuitwisseling initialisatie

abcdef

 
### Berichtuitwisseling scenario

abcdef

Bij de voorbeelden:
* URL SOAP server versturende partij: 	http://192.168.0.102
* URL SOAP server ontvangende partij:	http://192.168.0.138
 
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
				…						//	VISI Bericht
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
note: de id van elke attachment is gelijk aan de id die in het VISI bericht 
	wordt gebruikt om de metadata van een attachment te beschrijven:
</p>

`    
    <Data id=”abc”>
`
<br>
`

	
## Ontsluiten Raamwerk en update scenario

abcdef
 
	
## Ontsluiten projectspecifiek bericht scenario

abcdef

 
## Attachments, Ref’s en Id’s

abcdef
 
## Encryptie

abcdef

## SOAP function calls

abcdef

## Project specifiek bericht

abcdef




Systematiek Part II
AppendixGroup




