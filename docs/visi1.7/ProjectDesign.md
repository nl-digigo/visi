# Project inititation

The functional documentation is intended for a software product manager
or a software developer.

## Bookmark

The functional explanation is built up in chapters, and reads the best
chapter by chapter. A chapter explains a functional level of abstraction
including building blocks. At the end of a chapter, it is checked
whether the content has been sufficiently understood, and the reader can
move on to the next chapter. In the next chapter, the functional
description is supplemented or deepened in terms of building blocks.
Skipping chapters leads to missing building blocks and logical thinking
sequence. The chapter structure is tailored to the reader's level of
knowledge. It goes from beginner to expert.\
\
For the newcomer, section 4.3 explains how communication takes place in
a project.\
\
After that, section 4.4 explains in more detail that this communication
differs per project and is recorded in a template. Not every project has
the same communication patterns.\
\
In addition to the communication patterns, section 5.3 describes how
files as attachments are part of the communication.\
\
Section 5.4 explains how to deal with changing project specific
communication patterns in an operational project.\
\
What happens to the communication and information at the end of a
project is described in Chapter 5.\
\
Making the communication patterns project-specific has an additional
step, which is described in chapter 6. As an added bonus, the other
(optional) building blocks are explained in the last chapter.\

## Project specific file 

### Project

A project is central to VISI communication. The definition of a project
in this case is an activity, limited in time and resources, to create
something. What is created is a service/product/result. A project is
carried out in collaboration between different people and organizations.
The resources can be both human efforts and materials. It is
distinguished by its one-time nature of a program or process. A project
requires a specific management environment to coordinate activities and
steer them on quality, time and money. Communication is necessary for
coordination.\
\
Limited, mandatory properties are recorded for a project. Each project
has a unique identifier that can be used to refer to the project,
without misunderstanding which project is meant. In addition, a project
has a name and a description. This name and description need not be
unique, and is in addition to the unique identifier, and is intended for
explanation and allows easier recognition for the project (by people).
In addition, the moment of start and end of the project is recorded with
start and end dates.\

```
Unique ID: _badc9dab-807e-4319-bd56-60c57605e109
Name: Realization of the West/East line
Description: Realization of metro line 47, including 7 new stations with 9.7 kilometres of track, of which 7.1 kilometres are underground
Startdate: 23-12-2020 14:59
Enddate: 20-05-2022 07:08
```

### Person

The communication within a project is carried out by people. The people
who participate in a project are called persons. Each person in a
project has a unique identifier that refers to the person in the
project, without misunderstanding which person is meant.\
In addition to identification, a person has a name and a username. The
name is in addition to the unique identifier, and is intended for easier
recognition (by humans). The username is not mandatory and can be given
a (technical) interpretation of your choice. Username can - for
example - be used to link to a user in an (existing) software system.\

```
Person
Unique ID: _0c585186-fa97-4de7-8fe0-5c4bee3afead
Name: Urbain Servranckx
Username: uservranckx

Person
Unique ID: _974e4822-4944-45ad-ab2f-161370662e30
Name: Georges Remi
Username: gremi

Person
Unique ID: _d4e02752-2ac6-4700-ae67-d33f428f78fb
Name: Luc Dupanloup
Username: ldupanloup
```

**Note:**\
If a person works on two projects, the unique identification of this
person can be different per project. There is no global unique
identifier, but a unique identifier within a project.

### Organization

People perform an activity in a project on behalf of an organization. In
a business context, the people are working on a project for an
organization, so recording organizations is important. Every
organization in a project also has a unique identification. In addition
to the identification, an organization has a name and an abbreviation.
The name is in addition to the unique identifier, and is intended for
easier recognition (by humans). The abbreviation has a functional and
technical purpose. This property is a three letter abbreviation of the
organization, which is unique within the project.\
\
The organizational source of communication can be derived from the
abbreviation, see ... (Reference to explanation of TransactionTemplate
property). For an organization, a contact person is defined by reference
to a person's unique identifier. This reference has no functional
meaning, and is for administrative purpose only.\

```
Organization
Unique ID: _87e9144d-04d6-4a5f-bdcb-b50e96c2b498
Name: Gemeente Rommelgem
Abbreviation: GRG
Contactperson: _0c585186-fa97-4de7-8fe0-5c4bee3afead
```

**Note:** Organization has an address The address is also recorded for
each organization. This is not a physical or postal address, but a
digital address. This digital address has a technical purpose, see
section\
https://bimloket.github.io/visi/visi1.6/#soap over SOAP protocol.

### Role

The differentiation in authorization, tasks and responsibilities in a
project is made explicit by defining different roles. A role represents
coherent authorization, tasks and responsibilities to perform
activities, which a person usually assumes temporarily, and which can be
performed (alternately) by different persons.\
A very limited number of properties are recorded for a role. Each role
has a unique identification, supplemented with a name and description.
This name and description need not be unique, and are an addition to the
unique identifier intended to explain and give meaning to the role. The
name and description make it easier for people to recognize the role.\

```
Role
Unique ID: _1252a67a-5f69-4a9c-b4ca-506a4459c7c3
Name: Beoordelende rol
Description: This role provides an independent assessment based on competences and expertise within the framework of the project. During the assessment, the role goes through a number of fixed steps. Role makes an inventory of data, weighs, motivates and assesses this information and then makes the judgement.
```

**Note:** Role versus function\
A role is fundamentally different from a function. Responsibilities and
tasks are \*\*not\*\* assigned to officials of an organization, but to
roles. An essential difference is that roles are a reflection of **the
work** being organized, while functions are a reflection of **people**
being organized (in an organization). A project does not have a
\"Department Head\" function, but does have the \"Assessment\",
\"Advisory\" roles.\
\
There is not always a one-to-one relationship between organizations and
roles. There are projects in which one party fulfills several roles and
there are also projects in which different organizations have the same
role. An example would be a municipality that has both the initiating
and commissioning role. Or an engineering firm that fulfills the
advisory role. With an accountancy firm in the same project, which also
fulfills the advisory role, but in a different field.\
\
Based on the division of roles between organizations, tasks and
responsibilities can be divided among individuals.

### Relationship between Person, Role and Organization

In a project, people always act from a role on behalf of an
organization. A person is not directly linked to the organization. The
person has a relationship with a role and an organization in the
project. This relationship can be seen as a unique key that connects
person, role and organization. We call this key \"Person in Role of
Organization\". Very limited, mandatory properties are recorded for this
key. For the key, person, role and organization are defined by reference
to the unique identifier of a person, role and organization.\

```
Person in Role of Organization
Unique ID: _e0ad4954-7986-417c-96d6-813efa36e86b
Contactperson: _0c585186-fa97-4de7-8fe0-5c4bee3afead
Role: _1252a67a-5f69-4a9c-b4ca-506a4459c7c3
Organization: _87e9144d-04d6-4a5f-bdcb-b50e96c2b498
```

**Note:** Relationship between person and role\
A person can have multiple roles. A role can be fulfilled by more than
one person.

### Personnel changes

In almost every project there are changes with regard to the staffing.
This can be in the form of temporary replacement due to absence or
holidays. Or a permanent replacement if the project employees go to work
for another organization or retire.

#### Permanent replacement

Permanent replacement is also known as succession. The successor is an
authorized person, who takes over the role, tasks and responsibility of
the (initially) authorized person. For traceability and transparency,
authorized persons can never be removed. That is why the succession is
made explicit.\
\
Permanent replacement is always at role level. With the aforementioned
key of Person in Role of Organization, this permanent replacement is
recorded by means of a reference to the unique identification of a
person, a role and an organization. The relationship is from authorized
to successor. The roles must match exactly.\

```
Person in Role of Organization
Unique ID: _e0ad4954-7986-417c-96d6-813efa36e86b
Contactperson: _0c585186-fa97-4de7-8fe0-5c4bee3afead
Role: _1252a67a-5f69-4a9c-b4ca-506a4459c7c3
Organization: _87e9144d-04d6-4a5f-bdcb-b50e96c2b498
Successor: _51693b0e-84e5-4a9a-9fb6-ec4a7dea6edb

Person in Role of Organization
Unique ID: _51693b0e-84e5-4a9a-9fb6-ec4a7dea6edb
Contactperson: _974e4822-4944-45ad-ab2f-161370662e30
Role: _1252a67a-5f69-4a9c-b4ca-506a4459c7c3
Organization: _2ba76318-83ab-4a6e-9257-ea91045717d2
```

If a person (in a role of an organization) has a successor, this means
that the person is no longer authorized to act from this role. Only the
successor is authorized. A person (in a role of an organization) can
have a maximum of one (1) successor.

#### Temporary replacement

A temporary replacement can also be read as a (temporary) authorisation.
The temporary replacement is an authorization for a third person to act
on behalf of the authorized person. This can be of a temporary nature or
an authorization for the duration of the project.\
\
The temporary replacement is always at role level. With the
aforementioned key of Person in Role of Organization, this temporary
authorization is recorded by means of a reference to the unique
identification of the authorized person, role and organization. The
relationship is from authorized person to authorized person. The roles
must match exactly.\

```
Person in Role of Organization
Unique ID: _752b1dfd-dd91-4404-9708-39b91047ca66
Contactperson: _d4e02752-2ac6-4700-ae67-d33f428f78fb
Role: _1252a67a-5f69-4a9c-b4ca-506a4459c7c3
Organization: _87e9144d-04d6-4a5f-bdcb-b50e96c2b498
Replaces: _51693b0e-84e5-4a9a-9fb6-ec4a7dea6edb
```

If an authorized person (in a role of an organization) performs an
action, this is always on behalf of the authorized person. With an
action, the authorized person is recorded and the authorized person. The
Authorized/Delegate can reply to transactions from the Authorized's
role, regardless of who initiated the transaction. If an authorization
is undone, only the authorized person can complete the action. An
authorization may be revoked, because authorizations can have a
temporary character.\
\
If an authorized representative sends something, it must be traceable
that the authorized representative has sent something, and on whose
behalf it was sent.\
\
A person can be authorized to act on behalf of several authorized
persons (in role of organization). Multiple persons can be authorized to
act on behalf of one authorized person (in role of organization).

### Project Setup

Project, persons, organizations, roles and replacements must be known
and equal to all project participants. Therefore, this setup of a
project is recorded in an interchangeable format: project specific file.
This file is distributed among the participating organisations. This is
usually per organization due to the aforementioned digital address of an
organization. This digital address therefore knows about the existence
of a project. In the example used \"Realization West/East Line\" with
unique identifier \_badc9dab-807e-4319-bd56-60c57605e109 is known to all
organizations of the project. Project communication by sending and
replying to messages can start, see section
<https://bimloket.github.io/visi/visi1.6/#versturen-van-een-bericht>

## Framework/Communication template of a project

The framework is the communication template of a project. All
communication must follow this template. The template defines what type
of information can be transferred between people. The template defines
which type of information can be transferred (what), between which types
of roles (who), and when (how).\
The template also serves to validate the communication. As the name
indicates, it is a template that the communication must comply with.
Based on this template, it can be verified whether the information
provided complies with the agreements.

![Initiation - VISI
Framework](images/visi-diagram-project-initiation.jpg)

[]{#globaleeigenschappendefinitietabel
label="globaleeigenschappendefinitietabel"}


  Attribute                                                                                  
  ---------------------------------- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
  id                                  X   X   X   X   X   X   X   X   X   X   X   X   X   X   X
  description                         X   X   X   X   X   X       X       X   X   X   X   X   X
                                                                                             
                                                                                             
                                      X   X   X   X   X   X   X       X   X   X   X   X   X   X
  dateLaMu                            X   X   X   X   X   X   X       X   X   X   X   X   X   X
  userLaMu                            X   X   X   X   X   X   X       X   X   X   X   X   X   X
  language                            X   X   X   X   X   X               X   X   X   X   X   X
                                                                                             
                                      X   X   X   X   X   X       X   X   X   X   X   X   X   X
  code                                X   X   X       X                   X   X   X   X   X  
  appendixMandatory                           X                                              
  appendixTypes                           X   X                                              
  baseType                                            X                                      
  complexElements                             X                                              
  condition                                                       X                          
  executor                                X                                                  
  firstMessage                                                X                              
  initiator                               X                                                  
  initiatorToExecutor                                         X                              
                                                                                             
                                                                                             
  maxOccurs                                               X                                  
  minOccurs                                               X                                  
  namespace                                                                           X      
  openSecondaryTransactionsAllowed                            X                              
                                                                                             
                                                                                             
                                      X                                                      
  responsibilityScope                 X                                                      
  responsibilitySupportTask           X                                                      
  responsibilityTask                  X                                                      
                                                                                             
                                                                                             
                                                                                             
                                                  X                                          
                                                      X                                      

  : Every VISI Type's attributes


### Role Type (RoleType)

Responsibilities and tasks are not assigned to functions/functionaries
within organizations, but to types of roles. Definition of a role type
is with a unique identifier and a textual description. Therefore, a role
type has the unique identifier and description properties.\

```
Role type
id: RT_Beoordelende_rol
description: Beoordelende rol [startDate](#startdate)
```

### Information transfer conform to transaction type (TransactionType)

Communication in a project always takes place on the basis of a type of
transaction. A transaction type is an arrangement of possibly successive
messages between two roles. A transaction in a project therefore
proceeds according to the rules of the transaction type from the
framework. This refers to the initiating role (initiator) and the
executing role (executor).\
A person in the initiating role may initiate a transaction and send the
first message of this transaction to one (1) person in the executing
role. After that, it is always the recipient (executor or initiator) of
the last message who has to respond with a message, until there are no
more reply options. Then the transaction is completed. The possible
start and reply messages are defined as the order of the type of
messages of a transaction.\
(see section
<https://bimloket.github.io/visi/visi1.6/#berichtencommunicatie>).\
\
A number of properties are recorded for a type of transaction. Not all
properties are equally important, therefore a division follows whether
properties are mandatory or optional. An optional property can be
important, although the property is not required. An example of this is
the help text property (helpInfo). helpInfo is available to provide a
more detailed explanation of the purpose and use of the transaction
type. It can also describe why certain roles communicate with each
other.\

```
id: TT_Contractwijziging_door_opdrachtgever
description: Contractwijziging (door de opdrachtgever)
helpinfo: With this transaction type, the client can report a contract change to the contractor, with the intermediate goals of obtaining a technical proposal from the contractor, a technical agreement from the client, a quotation from the contractor, an acceptance of that quotation by the client and ultimately the acceptance of one or more multiple completion notifications of the work carried out through the delivery of performance declarations.
initiating role: Opdrachtgevende_contractueel
executing role: Opdrachtnemende_contractueel
```

### Message type (MessageType)

Message type defines which information can be exchanged. The type is
recorded with a unique identifier (id) and a textual description
(description). P.S. This description implicitly indicates the status of
a type of transaction.\

```
Message type
ID: MT_Acceptatie_technisch_voorstel_contractwijziging
Description: Acceptance of the technical proposal (for contract modification)
helpinfo: With this message the client accepts the technical proposal, after which the contractor can continue with a financial proposal/quote for the contract change.
elementen: CE_Contractwijziging_Basis, CE_Contractwijziging_Voorstel, CE_Contractwijziging_Opmerkingen
```

### Message fields (SimpleElementType)

Message fields are defined within the message. A field property
(UDT)(<https://bimloket.github.io/visi/visi1.6/#datatype-van-een-element-userdefinedtype>)
is assigned to a message field.\

```
Simple element type
id: SE_DatumUitvoering
description: Gepland moment start uitvoering
helpinfo: Kies hier de beoogde startdatum waarop de hier benoemde werkzaakheden beginnen.
User defined type: UDT_Datumveld
```

**Note:** Relation between person and role\
A person can have multiple roles. A role can be fulfilled by more than
one person. Reserved Field ID: The field with ID "SOAPServerURL" is
reserved exclusively for the message chapter associated with the
organization type. This is so that the SOAP address of an organization
can always be found for VISI software.

### Data type of an element (UserDefinedType)

This determines the behavior of the input field and how it should be
validated.\
A field property (UDT) is assigned to a message field. For example, a
field can be given a date/time/currency/mandatory text/optional text/an
exact number of characters and so on as a requirement. VISI software
usually offers custom input functionality for the most common input
types, such as a date selection window with a date field and a drop-down
function if a choice from a list of values is required.\
This is how a field gets the properties associated:\

```
User defined type
id: UDT_Datumveld
description: Datumveld
basetype: DATE
id: UDT_VerplichteTekst
description: Verplichte tekst veld
basetype: STRING
xsdRestriction: xs:minLength value="1"
```

### Table as element of a message type

A special element is a table.

### Grouping of elements (ComplexElementType)

The message chapters are used to easily manage input fields in messages
in a framework and to make logical subdivisions in messages. Because
only the different chapters are named in messages, a certain field can
easily be added to or removed from an entire group of messages that
contain that chapter.\
The order in which the message fields appear in the chapter determines
the order in which the VISI software presents these chapters in the
chapters and thus also in the messages.\
\
Specifically for message chapters, there is often no support in the
available software. Yet the market tends to demand this. This is so that
it can be clearly explained what purpose this part of the message serves
and what route this information takes or where this information does not
go, for example. (think of information that must remain within a certain
domain)\
\
[Message Chapters (Table Forming)]{.underline}\

It is permitted to name another chapter in a chapter in addition to
message fields. The agreed effect of this is that the chapter is
displayed in the "parent" chapter as table. The message fields in the
inserted chapter will then be presented as columns.\
In this way, a chapter can consist of one or more tables, possibly also
supplemented with normal message fields. NB1: At this time it is not yet
technically possible to indicate at which location the tables in a
chapter should be shown. As a result, they are currently sometimes above
and sometimes below the normal fields and it is not possible to create a
chapter in which fields and tables alternate. This issue is being worked
on in issue 37.\
NB2: Technically it is possible to create a chapter within a chapter
within a chapter etc., which could for example produce a 3D table. There
are no agreements yet in the system about such applications and it is
not yet applied anywhere. This is considered to be room for unknown
future applications.\
\
[Message fields]{.underline}\
Placing message fields in a certain order in a chapter creates the
structure of that chapter, as it appears in all messages containing this
chapter.\
[ProjectType]{.underline}\
As far as we know, it is technically possible to link a chapter to a
project type, but there is no known application yet.\
[PersonType]{.underline}\
This allows additional information to be entered for persons in the
project-specific message, such as a telephone number or other personal
information relevant to the project.\
[OrganisationType]{.underline}\
This allows additional information to be entered for organisations in
the project-specific message, such as an address or other information
relevant to the project.\
[AppendixType]{.underline}\
Op deze manier kan er per bijlage type een andere set aan berichtvelden
met metadata over de bijlageingevoerd worden.\
In this way, a different set of message fields with metadata about the
attachment can be entered per attachment type.\
[MessageType]{.underline}\
For building messages\
[Message field restrictions]{.underline}\
This allows you to say about a field that it should not be editable or
that it should be editable.\

```
Complex element type
id: CeContractwijzigingVoorstel
description: Technisch voorstel
Simple elements:
SE_Wijzigingsnummer
SE_BeschrijvingTechnisch
SE_DatumUitvoering
SE_KostenramingEUR
CE_Tabel_Werkpakketten
Complex element type in Complex element type (tabel)
id: CE_Tabel_Werkpakketten
description: Werkpakketten
Simple elements:
SE_Werkpakket
SE_WPkostenpercentage
```

### Order of message types (MessageInTransactionType)

The design of the message follow-up so that a flow chart can be followed
is regulated in the message in transaction type (hereafter referred to
as "MITT").\
The MITTs connect message types within and between transactions.\
If a message type occurs in more than one place in a transaction, for
example 1 time as a start message and 1 time as a response, then there
are 2 MITTs. Both refer to the transaction and the message type, only
the connection between the MITTs differs.\
\
References from the MITT:\
[Messages]{.underline}\
Determines the message name and content of the element in the message
flow\
[previous message]{.underline}\
In this way, the flow of messages is determined. Because MITTs have the
previous MITTs here, you know from which message this message can be
selected as the next message. There are roughly 4 types of previous
connections that look exactly the same in definition (this MITT is a
previous to this MITT), but are different in operation:

-   Start of a new main transaction. Then the value of previous is
    empty. This MITT may have the property "firstmessage", but since
    this message is by definition a first message, this is not
    necessary.

-   An answer within the same transaction (The previous MITT is also
    connected to the same transaction)

-   A start of a new transaction based on the MITT in this transaction.
    We also call this starting a "Sub-transaction". This MITT must
    always have the property "firstmessage", otherwise no new
    transaction can be started and the previous connection probably
    won't do anything.

-   A return from the sub-transaction to the parent transaction. This
    option is only allowed from a message in a subtransaction back to
    the transaction from which the subtransaction was initiated. This
    message in the parent transaction must not have the property
    "firstmessage", otherwise a subtransaction will be created under the
    subtransaction.

[Transaction]{.underline}\
A MITT is always connected to a transaction. So, at a minimum, a MITT
places a message type in a transaction.\
[Transactionphase]{.underline}\
This property is intended to indicate the transaction phases of the DEMO
universal transaction pattern. Little use is made of this yet. The first
DEMO software on the VISI system does use this feature as an essential
part.\
[Grouptypes]{.underline}\
A group can be entered, but nothing has been done with this until now.\
[Appendixtypes]{.underline}\
This is the most specific way to name which metadata set (message
chapter) of message fields must be filled in for an appendix that is
added to a message.\
[Message in transaction conditions]{.underline}\
Conditionality when you get to choose this message.\
\
References to the Message in transaction type:\
[Message field conditions (elementcondition)]{.underline}\
Message in transaction conditions Conditionality when you are allowed to
choose another message based on the presence of this message.\
Previous message in transaction If this message is a previous message to
the message it is set to.\

```
MessageInTransactionType
id: mit40170_T7
initiatorToExecutor: true
firstMessage: false
messageType: MS_AcceptatieVoorstelWijziging
previous: mitt563
transactionType: TR_ContractwijzigingOG
MessageInTransactionTypeCondition: mtc1
```

#### ONTDUBBELEN In meerdere gekoppelde type transacties (m.a.w. hoofd- & sub-transacties)

WAARSCHIJNLIJK DUBBEL??? Section 2.7 describes that a transaction type
consists of message types, and that the order of the messages in a
transaction is defined with a MITT. Each MITT has a reference to the
previous MITT. However, this reference is not limited by the
transaction. In other words, the previous MITT does not have to be a
message from the same transaction, it could also be a message from
another transaction. As a result, transactions are actually connected to
each other. There are, however, specific rules on how this linking of
transactions should be modeled in the framework.\
\
How a connection is made between two transactions is explained by means
of a change procedure between three roles. These are the roles: drafting
role, approving role and advisory role. There is a transaction between
the drafting role and the approving role. The purpose of this
transaction is to achieve an approved change. There is a transaction
between the approving role and the advisory role. The purpose of this
transaction is to arrive at an opinion on the drafted amendment. The
approving role benefits from a connection between these two
transactions, creating one procedure for drafting, advising and
approving a change between three roles: drafting, advisory and approving
role.\
\
The transaction Approve_Change between drafting role and approving role
consists of three messages:

-   Proposal_to_Change

-   Agree_Change

-   Disagree_Change

The message Proposal_to_Change is the first message of the transaction.
The MITT of Proposal_to_Change has NO previous message in transaction.
The MITTS of Agree_Change en Disagree_Change do have a previous message
in transaction. This is the MITT of Proposal_to_Change.\

```
Bericht in Transactie
Unieke identificatie: _666f01b3-6714-44cc-8865-0a9ae1f938ce
Vorig: Bericht: Voorstel_tot_Wijziging
Transactie:Accorderen\_Wijziging

Bericht in Transactie
Unieke identificatie: _6bdae158-a6dc-491b-a9ea-692fd419a828
Vorig: _666f01b3-6714-44cc-8865-0a9ae1f938ceBericht: Akkoord_Wijziging
Transactie: Accorderen_Wijziging

Bericht in Transactie
Unieke identificatie: _4e5569b7-0c6a-4976-811d-9d9189b8b1df
Vorig: _666f01b3-6714-44cc-8865-0a9ae1f938ceBericht: Niet_Akkkord_Wijziging
Transactie: Accorderen_Wijziging
```

The transaction Advise_Change between approving role and advisory role
and consists of two messages:

-   Request_Advice_Change

-   Advice_Change

The message Request_Advice_Change is the first MITT. The MITT of
Request_Advice_Change has NO previous MITT. The MITT of Advise_Change
does have a previous MITT. This is the MITT of Request_Advice_Change.\

```
Bericht in Transactie
Unieke identificatie: _a7e9fa9c-13ce-49f7-bbd6-f5eeb4688228
Vorig:
Bericht: Verzoek_Advies_Wijziging
Transactie: Adviseren_Wijziging

Bericht in Transactie
Unieke identificatie: _f75a35c7-30f3-4b3b-8776-120cd7811fd4
Vorig: _a7e9fa9c-13ce-49f7-bbd6-f5eeb4688228
Bericht: Advies_Wijziging
Transactie: Adviseren_Wijziging
```

How is the advisory transaction linked to the approval transaction? With
reference to the previous MITT. However, because the property of the
first MITT Adviseren_Wijziging an empty reference to the previous MITT
should flag the first message (True/False) that this is the first
message of the transaction.\

```
Bericht in Transactie
Unieke identificatie: _a7e9fa9c-13ce-49f7-bbd6-f5eeb4688228
Vorig: _666f01b3-6714-44cc-8865-0a9ae1f938ce
Eerste bericht: Waar
Bericht: Verzoek_Advies_Wijziging
Transactie: Adviseren_Wijziging
```

After receiving Voorstel_tot_Wijziging the approving role can choose
three response messages:

-   Akkoord_Wijziging

-   Niet_Akkkoord

-   Verzoek_Advies_Wijziging

However, after receiving the message Advies_Wijziging there is no
response message. The connection back from advisory transaction to
approving transaction has not yet been made. This is also modeled with
the reference to the previous MITT. In this case the MITT of
Akkoord_Wijziging and Niet_Akkoord_Wijziging.\

```
Bericht in Transactie
Unieke identificatie: _6bdae158-a6dc-491b-a9ea-692fd419a828
Vorig: _666f01b3-6714-44cc-8865-0a9ae1f938ce, _f75a35c7-30f3-4b3b-8776-120cd7811fd4
Bericht: Akkoord_Wijziging
Transactie: Accorderen_Wijziging

Bericht in Transactie
Unieke identificatie: _4e5569b7-0c6a-4976-811d-9d9189b8b1df
Vorig: _666f01b3-6714-44cc-8865-0a9ae1f938ce, _f75a35c7-30f3-4b3b-8776-120cd7811fd4
Bericht: Niet_Akkoord_Wijziging
Transactie: Accorderen_Wijziging
```

For the correct definition of one procedure (made up of main and
sub-transactions), two additional functional basic rules apply, which
cannot be technically enforced.\
\
IS DIT WEL EEN REGEL??? Roles can be different between main and sub
transactions.\
Rule 1: the roles in the main and sub-transaction must match. This means
that the receiving role in the main transaction must be the same as the
sending role in the subtransaction. The definition of sending and
receiving role is not at the message level. The roles are defined as
initiator and executor by type of (main and sub) transaction.\

```
Transactietype
id: Accorderen_Wijziging
description: Accorderen wijziging
initiator rol: Opdrachtnemende_contractueel
executor rol: Opdrachtgevende_contractueel

Transactietype
id: Adviseren_Wijziging
description: Adviseren wijziging
initiator rol: Opdrachtgevende_contractueel
executor rol: Adviserende_contractueel
```

For a type of message in a type of transaction (MITT) a direction is
defined. The direction is from initiator-to-executor or from
executor-to-initiator. This direction then moves from initiating role to
executing role (of a type of transaction) respectively.\

```
Bericht in Transactie
Unieke identificatie: _a7e9fa9c-13ce-49f7-bbd6-f5eeb4688228
Vorig: _666f01b3-6714-44cc-8865-0a9ae1f938ce
Eerste bericht: Waar
Richting: Van initiator naar executor
Bericht: Verzoek_Advies_Wijziging
Transactie: Adviseren_Wijziging
```

IS DIT WEL EEN REGEL??? Initiator to Executor is optional in the
framework.\
Rule 2: The direction of the messages must match.\
By direction is meant the value or a message from initiator to executor
of a transaction, or from executor to initiator.\

```
Bericht in Transactie
Unieke identificatie: _666f01b3-6714-44cc-8865-0a9ae1f938ce
Vorig:
Bericht: Voorstel_tot_Wijziging
Transactie: Accorderen_Wijziging

Bericht in Transactie
Unieke identificatie: _a7e9fa9c-13ce-49f7-bbd6-f5eeb4688228
Vorig: _666f01b3-6714-44cc-8865-0a9ae1f938ce
Eerste bericht: Waar
Bericht: Verzoek_Advies_Wijziging
Transactie: Adviseren_Wijziging
```

If an instance of MITT is sent, openSecondaryTransactionsAllowed must
also be sent. A message that does not appear as previous is required, so
that it is clear that a transaction has been completed.\
\
From a (1) type a reference is made to transaction type. This is the
MITT. Although message types belong to a transaction type, there is no
reference from message type to transaction type. As the name suggests,
the reference is from a MITT to message type and transaction type. This
means that message types can be (re)used in different transaction types.

### Conditions for elements of message type (ElementCondition)

This controls when a user may or may not edit a field, or whether the
field should be cleared by the software for a next message.\
\
References from the Message field conditions:\
By naming one or more of the elements below, the situation to which the
condition applies is defined.\
[complexElement]{.underline}\
[simpleElement]{.underline}\
[messageInTransaction]{.underline}\
The basic rules are:

-   A field that is offered for the first time, so does not yet exist in
    the previous message, can always be filled in and is never blocked
    by this setting.

-   By default, a field that already exists in the previous message is
    blocked in subsequent messages. Even if the field happened to be
    "empty" in the previous message. So only if the field is given the
    property "FREE" can it be modified.

-   The value of a field from a previous message is filled in the next
    message when it's the same SimpleElementType and there is no
    condition 'EMPTY'.

-   Field restrictions can be applied to ComplexElementTypes,
    SimpleElementTypes and MessageInTransactionTypes, or a combination
    thereof.

The table below indicates which restriction to use if there are multiple
restrictions on a field in a message:\
The highest number in the first column "wins". So if a condition is set
on a CE and SE (5) then this condition applies relative to a setting
only on a SE (1).\

```
ElementCondition
id: EC_116
description: New element condition
condition: FREE
ComplexElement: CeContractwijzigingVoorstel
ComplexElement: CE_Tabel_Werkpakketten
simpleElement: SE_WPkostenpercentage
messageInTransaction: mitt_265
```

### Conditions for subsequent message types (MessageInTransactionTypeCondition)

Sometimes it is necessary to ensure that you can only send messages
after other messages have been received, that messages may only be sent
when other messages have not yet been received, or that a message may
only be sent once.\
\
We do this by enforcing the sequence of messages to be sent.\
The aim is to limit possible continuations based on a certain state in
the message flow within a transaction and its subtransactions. The terms
\"transaction\", \"parent transaction\", \"sub-transaction\" and
\"affiliated transactions\" mean the following: From VISI system version
1.2, transactions are linked to each other via the \"previous mitt
method\" so that a message from another transaction can be sent based on
the message in one transaction. See !!reference to mitt link in
documentation!!

-   transaction: the transaction we are currently looking at regarding
    whether or not to offer messages. This transaction can have 1 or
    more transactions \"before\" and also one or more \"after\".

-   direct parent transaction: The transaction from which \"the
    transaction\" we are looking at started (via a previous mitt link).
    By this we do not mean other transactions that are at the same level
    next to or above this \"parent transaction\".

-   direct subtransaction: which we are currently viewing. Any
    transaction started directly from \"the transaction\" we are looking
    at (via a previous mitt link).

-   affiliated transactions: \"the transaction\" together with its
    direct parent transaction and its direct sub-transactions.

There are three reasons why certain continuations may not be offered:

1.  A message may only be sent, after one or more specific messages are
    present (already received or sent) in the transaction or its
    *direct* subtransactions, so there is a dependency between two (or
    more) already present messages.

2.  A message may only be sent when one or more specific messages are
    not present (not yet received or sent) in the transaction or its
    *direct* subtransactions, so there is a dependency between two (or
    more) messages that are not yet present.

3.  A message that can only be sent once has already been sent, so there
    is a restriction on the number of times a message can be sent.

References from message in transaction restrictions:\
If there is more than one of the references below in a condition, there
is an OR situation. So if one of the named messages is found, the
condition is met and the message may be chosen. By connecting multiple
conditions to a message with, for example, only 1 message type in the
options below, an AND situation arises. All named conditions must be met
before you can use this message.\
\
sendAfter MITT See situation 1 above\
\
sendBefore MITT See situation 2 and 3 above\
\
For situation 3: The effect of being allowed to send a message only once
is achieved by placing the MITT of the message in question in the
sendBefore list of that same MITT. In this specific case, a message may
not be sent to multiple executors.\
\
Allowed references to \"sendAfter\" and \"sendBefore\" are \"Message in
transaction types\" that can be sent in the current transaction or of
the connected transactions, where the person handling the current
message is the initiator or executor.\
\
This limitation exists because a VISI Framework plus PSB must always
behave in the same way, regardless of whether all actors work on the
same VISI server, or whether each actor works on a different VISI
server. In this way, the actor in question always sees the messages that
influence his choices, because he sends or receives them.\
\
As an example: the cook may only use Before or After relationships with
transactions in which he himself participates as an initiator or
executor and these transactions must be directly connected to the
transaction that the cook currently wants to handle.\
\
References to message in transaction conditions:\
Message in transaction\
It is set in the MITT to be restricted by referencing in it to the
restricting MITT condition.\

```
MessageInTransactionTypeCondition
id: mtc1
sendAfter: mit_VTWoordeelpositief_1
```

### Order of messages

In practice, it sometimes appears desirable to only be able to send
messages after other messages have been received, that messages may only
be sent when other messages have not yet been received, or that a
message may only be sent once. To make this possible, it is necessary to
enforce the order of messages to be sent.

The aim is to limit possible continuations based on a certain state in
the message flow within a transaction and its subtransactions. There are
three reasons why certain continuations may not be offered:

-   A message may only be sent after one or more specific messages are
    present (already received or sent) in the transaction or its
    subtransactions, so there is a dependency between two (or more)
    already present messages.

-   A message may only be sent when one or more specific messages are
    not present (not yet received or sent) in the transaction or its
    subtransactions, so there is a dependency between two (or more) not
    yet present messages.

-   A message that can only be sent once has already been sent, so there
    is a restriction on the number of times a message can be sent.

#### Adjustments compared to the previous system

\

-   The existing class "MessageInTransactionType" is extended with an
    additional relationship "conditions" of the type "OPTIONAL SET
    \[1:?\] OF MessageInTransactionTypeCondition";

-   A new class "MessageInTransactionTypeCondition" is created. This
    determines the type of set relationship specified in the conditions
    mentioned above. If a "conditions" relationship is specified then
    this set must contain at least one element. If the "conditions" set
    contains more than one element, the elements involved are evaluated
    according to intermediate logical AND operators;

-   A relationship \"sendAfter\" of type "OPTIONAL SET \[1:?\]
    MessageInTransactionType" is added to the class
    "MessageInTransactionTypeCondition". This relationship is optional,
    if present the set must contain at least one MITT. If the
    "sendAfter" set contains more than one MITT, the MITTs involved are
    evaluated according to intermediate logical OR operators;

-   A relationship \"sendBefore\" of type "OPTIONAL SET \[1:?\]
    MessageInTransactionType" is added to the class
    "MessageInTransactionTypeCondition". This relationship is optional,
    if present the set must contain at least one MITT. If the
    "sendBefore" set contains more than one MITT, the MITTs involved are
    evaluated according to intermediate logical OR operators;

-   Allowed references to \"sendAfter\" and \"sendBefore\" are
    \"MessageInTransactionTypes\" that can be received in the current
    transaction or from the connected transactions, where the person
    handling the current message is the initiator or executor. Connected
    transactions refer to the transaction from which a transaction was
    initiated and the direct subtransactions. Direct subtransactions
    refer to transactions that are initiated from the current
    transaction, not subtransactions of subtransactions.

-   This limitation is introduced because a VISI Framework plus PSB must
    always behave the same way, regardless of whether all actors are
    running on the same VISI server, or whether each actor is running on
    a different VISI server. This is a basic principle that already
    works this way up to and including the 1.3 standard and is therefore
    also respected in this adjustment. In this way, the actor in
    question always sees the messages that influence his choices,
    because he sends or receives them.

-   This limitation is introduced because a VISI Framework plus PSB must
    always behave the same way, regardless of whether all actors are
    running on the same VISI server, or whether each actor is running on
    a different VISI server. This is a basic principle that already
    works this way up to and including the 1.3 standard and is therefore
    also respected in this adjustment. In this way, the actor in
    question always sees the messages that influence his choices,
    because he sends or receives them.

-   As an example: the cook may only use Before or After relationships
    with transactions in which he himself participates as initiator or
    executor and these transactions must be directly linked to the
    transaction that the cook currently wants to handle.

-   The effect of only being allowed to send a message once is achieved
    by placing the MiTT of the message in question in the sendBefore
    list of the same MITT. In this specific case, a message should
    \_not\_ be sent to multiple executors.

**Addition to existing class**

```
     MessageInTransactionType;
     conditions : OPTIONAL SET[1:?] OF MessageInTransactionTypeCondition;  -- AND
```

**New class**

```
     MessageInTransactionTypeCondition;
     sendAfter : OPTIONAL SET [1:?] MessageInTransactionType;  -- OR
     sendBefore : OPTIONAL SET [1:?] MessageInTransactionType;  -- OR
```

\## Backwards compatibiliteit Voor backward comptabiliteit is de
"conditions" relatie optioneel: zonder deze relatie is de afhandeling
van het VISI berichtenverkeer gelijk aan die van de vigerende VISI
systematiek 1.3.

### Appendix type (AppendixType)

Files can be attached to each VISI message. A file must always be
connected to an appendix type. A framework must therefore always have at
least one appendix type. If a framework has multiple appendix types and
no specific appendix type is set on a message, you can choose which
appendix type an attachment is connected to in a message.\
\
An appendix type is usually linked to a message chapter, so that when
entering an attachment, metadata fields are available to fill in
associated data with the attachment.\
\
References from appendix types:\
The message chapter provides the message fields with which the metadata
is connected to the attachment.\
\
References to appendix types: It is possible to limit the number of
appendix types in a message if the framework contains more than one
appendix type. If nothing is set on the message, the user must choose
from all available types.\
\
[Transaction types]{.underline}\
An appendix type connected at this level is offered in all messages in
that transaction.\
[Message types]{.underline}\
An appendix type connected at this level is offered in this message type
in all transactions (where this message appears).\
[Message in transaction]{.underline}\
An appendix type that is connected at this level is only offered in this
specific message at this place in the transaction.\

```
AppendixType
id: AT_WijzigingGereed
description: Bijlagen bij gereedmelding wijziging
ComplexElementType: CE_BijlagenBijWijzigingGereed
```

### Organisation type (OrganisationType)

An organization type is needed in every framework. This is used when
creating organizations in the project specific message. Normally a
framework contains only 1 organization type. Frameworks with more than 1
variant have not yet been applied.\
\
References from organization types: \[complexElements\]
<https://bimloket.github.io/visi/visi1.6/#groepering-van-elementencomplexelementtype>\
An organization type can contain metadata elements, such as address,
telephone number, etc.\
\
For projects with SOAP communication, at least the Message field with
the exact Id "SOAPServerURL" must be linked to the organization type via
a message chapter, so that the SOAP address can be set.\

```
OrganisationType
id: StandaardOrganisatie
description: Standaard organisatie
ComplexElementType: CeOrganisatieSOAPServer
```

### Type persoon (PersonType)

A person type is needed in every framework. This is used when creating
people in the project specific message. Normally a framework contains
only 1 person type. Frameworks with more than 1 variant have not yet
been applied.\
\
The basic fields of a person in a project specific message, such as
Name, username and Id abbreviation etc. are not in the framework. See
#verwijzing naar psb werking#.\
\
References from person types:\
[complexElements]{.underline}\
A person type can contain metadata elements, such as address, telephone
number, etc. Due to, among other things, new privacy legislation, this
is being entered less and less.\

```
PersonType
id: StandaardPersoon
description: Standaard persoon
ComplexElementType: CE_Persoonspecifieke_informatie
```

### Project type (ProjectType)

A project type is needed in every framework. This is used to record for
example the project name and the framework namespace in the project
specific message. Frameworks with more than 1 variant are not allowed.\
\
The basic fields of a project type in a project specific message, such
as the project name, project Id etc. are not in the framework.\
\
References from project types:\
Complex element\
As far as we know, no metadata fields are applied to the project type in
VISI software, so it is not linked.\
References to project types:\

```
ProjectType
id: RaamwerkUAVGCGemLutjebroek
namespace: http://www.visi.nl/schemas/20160331/RaamwerkUAVGCGemLutjebroek_v2
description: Standaard raamwerk UAV GC Gemeente Lutjebroek
```

### Transaction phase type (TransactionPhaseType)

The DEMO methodology has the transaction phases requested, promised,
declared, accepted, declined, rejected, revoked, allowed and refused. It
is possible to connect these transaction phases to messages in
transaction types, so that VISI software could use them for additional
support or information.\
\
Out of scope: When using the DEMO software of the system, at least the
transaction phase Promised and the following revoked types are actively
used for specific software behavior: Revoke Acceptance Allow, Revoke
Promise Allow, Revoke Request Allow and Revoke Statement Allow\
\
Specific properties to be set:\
References from transaction phases:\
None\
\
References to transaction phases: With Message in transaction a message
in transaction can be connected to a certain transaction phase.

### Group type (GroupType)

The definition of the group for storing appendixes sent with a message
within a transaction. In practice, no functionality is assigned to this
element by suppliers at the moment. However, a GroupType is part of the
structure of a framework.\
\
\
\
References from GroupTypes:\
None\
\
References to GroupTypes:\
Message in transaction

## VISI Attributes

All attributes that can occur. By clicking on the name of the property
you can see where in the documentation the attribute is referenced.

### id

Each element in a framework has a unique identifier (id). In this way,
the relationships are placed technically inside and outside the
framework. A key requirement is that an Id is unique within the
framework. An example of relationships within the framework is, for
example, linking a field (SimpleElement) to a message chapter
(ComplexElement).\
An example of a connection outside a framework is the Role that is
created in a Project-specific message based on the role in the framework
or a field name in a VISI message etc.\
An identifier can be a non-readable value such as TR_532856857120. At
the moment, almost all framework writers make something understandable
out of this, such as TR_Acceptatiedocument, so that, among other things,
the original XML VISI messages can also be read and understood without
visi software.

### description

This is the human-readable name of an element. This value is usually
shown to the users.\
\
AppendixType: With this naming convention, users choose which appendix
type to associate the attachment with.

### state

This attribute can be optionally set on many elements in a framework.
Possible values for this field are: "passive" and "active". At the
moment there are applications from software suppliers that have not
(yet) achieved the implementation in the documentation. Examples are
whether or not to show/offer elements or transactions and to (partially)
disable a role of a person in the project-specific message if there is
no successor.

### dateLaMu

This attribute can be optionally set on many elements in a framework.
Framework writers use this to indicate in the XML file when a change was
last made to an element. (date Last Mutation) Until now there are no
expectations or known applications in VISI software, but there are in
framework drafting software to update this field automatically. So if a
framework writer enters something in this field, it will never show up
to the user.

### userLaMu

This attribute can be optionally set on many elements in a framework.
Framework writers use this to indicate in the XML file who last made a
change to an element. (user Last Mutation)\
Until now there are no expectations or known applications in VISI
software, but there are in framework drafting software to update this
field automatically. So if a framework writer enters something in this
field, it will never show up to the user.

### language

This attribute can be optionally set on many elements in a framework.
The idea is to define the language of the element.

### helpInfo

This attribute can be optionally set on many elements in a framework.
This is frequently used to provide users with additional explanations
about framework elements. Certain elements require functionality in VISI
software. See the different elements for examples.

SimpleElementType: Specifically for message fields, the help text is
often used to explain to the author of a message what exactly is
expected when filling in that field. This both on an abstract level,
such as: "Enter the length of the element here, without taking into
account protruding parts such as reinforcement and the like". But also
specifically in the form of an explanation of which number notation is
checked: "Note the length with a comma and two decimal places".\
The help text also helps to better interpret the contents of a field
when reading a message.

UserDefinedType: For field properties no application is known yet for
the help info. It is conceivable that it could be displayed next to the
help info, to manage the fill instruction here instead of in the help
info of multiple field types that have this property.

ProjectType: With project type, the help info is sometimes used by
framework builders for notes or explanations about the framework. There
is no further application known in VISI software.

### code

This attribute can be optionally set on many elements in a framework.

### appendixMandatory {#propertiesexplanationappendixmandatory}

With this property it can be set that it is mandatory to add at least
one attachment to a message of this type. This prevents a message type
with the description \"Document for acceptance\" from being sent without
an attachment.

### appendixTypes

TransactionType: With this optional property a restriction can be
imposed on which appendix types may be added to the message types of
this transaction type. This property is a reference to one or more
appendix types. If this property is missing for a transaction type, any
appendix type may be included.\
\
MessageType: Because it is possible within a framework to specify
different metadata forms for an attachment to be attached, it is also
possible to set per message type which metadata form(s) can be chosen
for an attachment to a message. If no appendix types are connected, any
appendix type from the framework can be chosen by the user.

### baseType

For each Field Property, you must choose from a number of basic XML
field types to determine the basic behavior of a field. The choice is
limited to the following basic XML field types:

-   BOOLEAN

-   DATE

-   DATETIME

-   TIME

-   DECIMAL

-   INTEGER

-   STRING

### complexElements

This records the content of a message type, because those message
chapters contain the information fields. The order in which the chapters
appear in the message type determines in which order the VISI software
presents these chapters in the messages. It is technically possible with
the current control mechanisms to send a message in which one or more
message chapters are missing, but this is not the intention. Studies are
happening to improve security for this.

### condition

Determines the behavior of a field. You can choose from the following
conditions:

-   FREE

    -   The field may be modified.

-   FIXED

    -   The field may not be modified.

-   EMPTY

    -   The field is cleared by the software for the user.

### executor

This is a reference to a role type. This property defines what type of
role a person must have in order to receive a first message in this type
of transaction. In fact, this is the type of role that will
realize/execute the result of the transaction.

### firstMessage

Boolean value intended to establish indisputably that a message can only
be used as the first message of a subtransaction. Using a MITT with this
setting to true will therefore always result in a new sub-transaction.
When omitted, false will be assumed.

### initiator

This is a reference to a role type. This property defines what type of
role a person must have to initiate a transaction of this type. In this
context, starting means the same as initiating.

### initiatorToExecutor

Boolean value indicating which direction the message has in the
transaction. With True, the message goes from the person who initiated
the transaction to whoever received the first message of the
transaction. OPTIONAL??? See exp_2

### maxOccurs {#propertiesexplanationminmax}

With this it is possible to indicate that a table may not contain more
than x lines. By setting Min and Max to the same number, an exact number
of lines to be created can also be set.

### minOccurs

It is explained below that a chapter can be inserted into a chapter to
create a table. For example, by filling in this setting with 1 or 3 on
the inserted chapter (the table), a user must create at least 1 or 3
lines in this table.

### namespace

Here there must be a unique namespace in the framework for each version
of a framework. This is so that VISI software can identify with which
framework a VISI transaction must be handled.

### openSecondaryTransactionsAllowed

Optional Boolean value indicating whether secondary transactions do not
need to be completed before the primary transaction can continue. The
interpretation for \"TRUE\" is that not all instances of secondary
transactions need to be completed before the primary transaction can
proceed. If the value is \"FALSE\", all instances of secondary
transactions must be completed before the primary transaction can be
resumed. If openSecondaryTransactionsAllowed is not defined, it will be
interpreted as \"TRUE\".

As primary transaction we mean the transaction in which we want to send
the mitt that has this openSecondaryTransactionsAllowed setting. The
secondary transactions referred to in this rule are transactions that
are initiated from the last message connected in the primary transaction
and that refer the secondary transaction to the new message to be sent
via a previous link from the last message sent. This means that if the
last message of the primary transaction itself is also linked to the
message to be sent in the primary transaction, then this way of
responding is always allowed. So this rule restricts only the mandatory
routes through sub-transactions.

### received

Boolean value indicating whether the previous message should have been
received. In practice, this element is not used.

### responsibilityFeedback

Feedback that is expected from the responsibility of the role towards
other roles.

### responsibilityScope

Scope/framework within which the responsibilities associated with the
relevant role are defined.

### responsibilitySupportTask

Tasks performed to support other roles. Think of delegated
responsibilities.

### responsibilityTask

Duties arising from the responsibilities of the relevant role.

### xsdRestriction

This allows very exact behavior to be defined for a field of a certain
base type. A regular expression can be defined for the base type STRING.
Some examples that are now widely used for base type STRING are:

-   1 choice, so field always has this value:

    ```
        <xs:enumeration value="Automatisch gevuld"/>
    ```

-   Selection list with multiple values

    ```
        <xs:enumeration value="k1"/><xs:enumeration value="k2"/><xs:enumeration value="k3"/>
    ```

-   Optional dropdown list:

    ```
        <xs:enumeration value=""/><xs:enumeration value="Keuze 1"/><xs:enumeration value="Keuze 2"/>
    ```

-   Mandatory text of at least 1 character

    ```
        <xs:minLength value="1"/>
    ```

-   Optional text no xsd restriction

-   For example a year number

    ```
        <xs:pattern value="(20\d\d)"/>
    ```

    An example that is often used for base type DECIMAL is:

-   Amount with two decimal places

    ```
        <xs:fractionDigits value="2"/><xs:fractionDigits value="2"/>
    ```

## Appendix 12 Guidance for Element Conditions

### Implementation of element conditions

During the implementation of 'element conditions', discussion arose
about the correct way to apply these conditions. The main reason is that
the application of a condition at a certain level can have an effect on
the behavior of Simple Elements at other levels (precedence rules).\
\
To clarify things, all possible conditions are shown in a table below.
From no condition at all to conditions at MITT, CE and SE level. This
table is then interpreted in pseudo code.\
\
Since a condition element can be placed on 2 CE's in tables, a
distinction is made in the table below between parent and child CE. The
element condition in the XML framework is simply set to 1 or 2 ce's,
parent or child is determined per message situation and is not recorded
in the element condition.\
\
If there are 2 CEs in an element condition, the first is always the
parent and the second the child CE.


       **MITT**   **CE1**   **CE2**   **SE**
  --- ---------- --------- --------- --------
   0      \-        \-        \-        \-
   1      \-        \-        \-        X
   2      \-         X         O        \-
   3      \-         X         O        X
   4      X         \-        \-        \-
   5      X         \-        \-        X
   6      X          X         O        \-
   7      X          X         O        X

  : All options for Element condition (- absent, x defined, O optional)


For example:

-   The SE "Comments" must always be EMPTY, you could represent this as:
    Condition(-, -, -,'Comments') = EMPTY

-   In MITT "MiTT01" the entire MITT must always be FREE, you could
    represent this as: Condition('MiTT01', -, -, -) = FREE

-   If 1 column of a table is \"FIXED\", no lines may be added or
    deleted, even if it is an empty table.

-   The CE \"verifications\" must always be FREE, regardless of whether
    it exists in a table or as a normal CE: Condition(-,
    'verifications', -, -) = FREE

-   The CE \"checks\" must only be FREE as a table within CE \"advice\":
    Condition(-, 'advice', 'checks', -) = FREE

-   A message exists containing a parent CE \"CE1\" and a child CE
    \"CE2\". For the element condition examples below, the location is
    indicated in the table above:

    -   (-, 'CE1', -, -) : Position 4

    -   (-, 'CE2', -, -) : Position 2

    -   (-, 'CE1', 'CE2', -) : Position 6

    -   (-, 'CE2', 'CE1', -) : No position: 1 is not a child of 2. This
        element condition does nothing.

Proposed pseudo code for determining the condition:

```
als Eerste bericht of Element niet aanwezig in vorige bericht

als Conditie gevonden(MITT, Ce normaal/parent, Cechild, SE )
  <Conditie(MITT, Ce normaal/parent, Cechild, SE)>

als Conditie gevonden(MITT, Ce normaal/parent, Cechild, -)
<Conditie(MITT, Ce normaal/parent, Cechild, -)>

als Conditie gevonden(MITT, Ce normaal/parent, -, SE )
  <Conditie(MITT, Ce normaal/parent, -, SE )>

als Conditie gevonden(MITT, Ce normaal/parent, -, - )
  <Conditie(MITT, Ce normaal/parent, -, - )>

als Conditie gevonden(MITT, - , Cechild, SE )
  <Conditie(MITT, - , Cechild, SE )>

als Conditie gevonden(MITT, - , Cechild, -)
  <Conditie(MITT, - , Cechild, -)>

als Conditie gevonden(MITT, - , -, SE )
  <Conditie(MITT, - , -, SE ).

als Conditie gevonden(MITT, -, -, -)
  <Conditie(MITT, -, -, -)>

als Conditie gevonden(-, Ce normaal/parent, Cechild, SE )
  <Conditie(-, Ce normaal/parent, Cechild, SE )>

als Conditie gevonden(-, Ce normaal/parent, Cechild, -)
  <Conditie(-, Ce normaal/parent, Cechild, -)>

als Conditie gevonden(- , Ce normaal/parent, -, SE )
  <Conditie(- , Ce normaal/parent, -, SE )>

als Conditie gevonden(-, Ce normaal/parent, -, -)
  <Conditie(-, Ce normaal/parent, -, -)>

als Conditie gevonden(- , -, Cechild, SE )
  <Conditie(- , -, Cechild, SE )>

als Conditie gevonden(- , - , Cechild, -)
  <Conditie(- , - , Cechild, -)>
  
als Conditie gevonden(- , - , -, SE )
  <Conditie(- , - , -, SE )>

als Conditie gevonden(- , - , -, - ) (geen element condition gevonden)
  <Conditie(- , - , -, - )>
```

```
as First message or Element not present in previous message

as Condition found(MITT, Ce normal/parent, Cechild, SE )
   <Condition(MITT, Ce normal/parent, Cechild, SE)>

as Condition found(MITT, Ce normal/parent, Cechild, -)
<Condition(MITT, Ce normal/parent, Cechild, -)>

as Condition found(MITT, Ce normal/parent, -, SE )
   <Condition(MITT, Ce normal/parent, -, SE )>

if Condition found(MITT, Ce normal/parent, -, - )
   <Condition(MITT, Ce normal/parent, -, - )>

as Condition found(MITT, - , Cechild, SE )
   <Condition(MITT, - , Cechild, SE )>

as Condition found(MITT, - , Cechild, -)
   <Condition(MITT, - , Cechild, -)>

as Condition found(MITT, - , -, SE )
   <Condition(MITT, - , -, SE ).

if Condition found(MITT, -, -, -)
   <Condition(MITT, -, -, -)>

as Condition found(-, Ce normal/parent, Cechild, SE )
   <Condition(-, Ce normal/parent, Cechild, SE )>

if Condition found(-, Ce normal/parent, Cechild, -)
   <Condition(-, Ce normal/parent, Cechild, -)>

as Condition found(- , Ce normal/parent, -, SE )
   <Condition(- , Ce normal/parent, -, SE )>

if Condition found(-, Ce normal/parent, -, -)
   <Condition(-, Ce normal/parent, -, -)>

as Condition found(- , -, Cechild, SE )
   <Condition(- , -, Cechild, SE )>

as Condition found(- , - , Cechild, -)
   <Condition(- , - , Cechild, -)>
  
as Condition found(- , - , -, SE )
   <Condition(- , - , -, SE )>

if Condition found(- , - , -, - ) (no condition element found)
   <Condition(- , - , -, - )>
```

-   Is the SE" Comments" in MITT "MiTT01" now EMPTY or FREE?

    -   According to this definition, "Comments" in "MiTT01" is FREE.

    -   To make "Comments" in "MiTT01" now EMPTY, Condition('MiTT01',
        -,'Comments') must be added.

Backwards compatibility: Because old frameworks have element conditions
in the same way, with the only difference that never more than 1 ce is
specified, all old element conditions in frameworks continue to work
when the framework is converted to 1.6. In 1.6 you can mainly arrange
additional specification. The element conditions existing in the
framework are of course evaluated with the above priority matrix from
1.6 onwards.
