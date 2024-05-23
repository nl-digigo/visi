# VISI Glossary

A specific jargon is used in the VISI system, in which concepts may have
a slightly different meaning than the generally accepted ones.

### Message (Bericht)

Means of transferring information / exchanging data. A message is of a
certain message type and is inextricably linked to a transaction. A
message contains the data structure prescribed in the VISI framework.
The message has a \"header\" that includes details of the involved
roles, the transaction, and the work to which the transaction relates.
The body of the message contains the information to be transferred
consisting of completed data elements, attached documents and references
to documents.

### Message Category (Berichtcategorie)

Set of messages that can be classified in a certain category in the
context of VISI based on corresponding characteristics, for example
contractual basis, contractual change, operational, financial,
escalation or quality.

### Security Certificate (Beveiligingscertificaat)

A security certificate is intended to authenticate the data exchanged
and ensure privacy. When communication takes place between server and
user, this ensures that the data cannot be eavesdropped or falsified.
The protocol is referred to as 'SSL' (Secure Sockets Layer). By means of
cryptography and authentication, this protocol provides a secure
connection to the Internet.

### Complex (Data) Element (Complex (gegevens)element)

Type of data element used in the VISI framework to group (simple) data
elements.

### DEMO-method

Method for modelling business processes. DEMO stands for 'Dynamic
Essential Modelling of Organisations'. The method was developed by
prof.dr.ir. J.L.G. Dietz of Delft University of Technology. \[see
"Introductie tot DEMO", 1996, Dietz, J.L.G., Samson, Alphen aan den
Rijn; ISBN 9789014053271\]

### Executor

Role performing a transaction.

### Generic Framework (Generiek raamwerk)

A generic framework is managed and published by CROW. A generic
framework is made for a specific application area, but can be tailored
to a specific situation.

### Initiator

Role that initiates a transaction.

### Interaction Diagram (Interactiekaart)

See [1.0.25](#glos:VISI-InteractionDiagram){reference-type="ref"
reference="glos:VISI-InteractionDiagram"}.

### Project Specific Framework (Projectspecifiek raamwerk)

Framework derived from a generic framework, which means that:

-   the project-specific framework is first a subset of the generic
    framework;

-   the project-specific framework can then receive adjustments and
    additions, if necessary, to meet the project-specific requirements.

### Promotor

A computer program that translates a VISI framework (according to W3C
technology) into a schedule of messages belonging to that framework. The
Promoter is made available by CROW.

### Framework (Raamwerk)

Is used in this context in the sense of 'VISI framework'; see
[1.0.28](#glos:VISI-Framework){reference-type="ref"
reference="glos:VISI-Framework"}.

### Role Description (Rolbeschrijving)

Description of the nature and responsibility per role, as defined in the
VISI framework.

### Role (Rol)

Participant in a transaction in the capacity of originator or executor.

### Assigning Roles (Rolverdeling)

Allocation of (VISI) roles in a partnership of parties.

### Cooperation Concept (Samenwerkingsconcept)

A composition of construction organisation model, contract form, tender
form and project information provision to be agreed between (market)
parties, with the aim of a project organisation and process handling in
which risks and liability distribution are shared in an economically and
socially responsible manner.

### Simple (Data) Element (Simpel (gegevens)element)

Type of data element that forms the basis of the VISI framework
containing the properties of a message. Simple data elements can be
combined into complex data elements.

### SSL

Secure Sockets Layer; zie bij beveiligingscertificaat.

### Transaction (Transactie)

Binding agreement between two roles that agree on what needs to be done.
Each transaction has an initiator and an executor and goes through
different transaction states.

### Transaction Model (Transactieschema)

The overview of messages that can be sent in the context of a specific
transaction. The transaction schedule naturally contains the name,
description and desired outcome of the transaction.

### Transaction State (Transactietoestand)

Stage in which a transaction is, recorded in a transaction schedule.

### VISI

Original abbreviation of 'Creating conditions for the introduction of
ICT standardization in the construction industry' ('**V**oorwaarden
scheppen voor de **I**nvoering van **S**tandaardisatie **I**CT in de
bouw'). The term has become the acronym for an agreement system accepted
by the Dutch construction sector for the digital exchange of formal
communication.

### VISI Communication (VISI-communicatie)

The digital exchange of information according to the VISI standard.

### VISI-compatibele software

Software from a VISI supplier that complies with the VISI System
Guideline as published by CROW, and which has been provided with the
VISI quality mark by CROW.

### VISI interaction diagram (VISI-interactiekaart) {#glos:VISI-InteractionDiagram}

The schematic representation of a framework, intended to map the
relevant roles and transactions for an existing process.

### (VISI-certificate (VISI-keurmerk)

The quality mark assigned by CROW to the VISI-compatible software,
including the associated (unique) registration number; the VISI quality
mark guarantees that the relevant software product has been tested with
a positive result for the VISI compatibility feature.

### VISI Supplier (VISI-leverancier)

A supplier of VISI-compatible software.

### VISI-Framework (VISI-raamwerk) {#glos:VISI-Framework}

The whole of descriptions of roles, transactions, messages and data,
recorded in accordance with the VISI system, which contain the
agreements and/or communication that can and may be used in a project.

### VISI-standard (VISI-standaard)

The open standard that comprises the whole of the VISI system and the
published requirements and guidelines, as collected in the VISI System
Guide.

### VISI-system (VISI-systematiek)

The specification of the language used to describe VISI frameworks and
create VISI messages. The VISI system consists of two parts: Part 1 is
for VISI frameworks, and Part 2 is for VISI messages.

### VISI-website

https://www.bimloket.nl/visi

### W3C

World Wide Web Consortium (W3C) that provides standard formats for data
exchange (such as XML, XSD and XSLT), which VISI uses.

### XML

eXtensible Mark-up Language. The W3C standard file format for data
exchange. XML files are readable text files with an \".xml\" extension.
VISI frameworks and messages are captured in XML. A good introduction
and interactive course on XML can be found on the W3C website
(www.w3schools.com).

### XSD

eXtensible Schema Definition language. The W3C standard schema format
for data exchange. XSD files are readable text files with an \".xsd\"
extension. XSD defines allowed building blocks of an XML file and can
also define which values elements may have. XML files that comply with a
certain XSD are 'valid'. The VISI system is recorded by means of an XSD
file.
