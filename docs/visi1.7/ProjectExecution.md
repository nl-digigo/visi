# Project execution 

#### Removing people

With the exception of a permission, a person cannot be removed from a
project. Except if a person in role (of organization) has not connected
any transactions to his role (or to any successor roles). In which case
removal is possible.\
\
The only option to deactivate a person for a project is to appoint a
permanent replacement for this person. For this, the property is
successor of a person in role (of organization). Should a person with an
advisory role be removed from a project, then this person in role (of
organization) will receive a successor (with the same advisory role).
This can also be an existing person (with the same advisory role).\
Example 20: Removing people

```
Persoon in Rol van Organisatie
Unieke identificatie: _b16d7aeb-6a5e-4326-9283-aef843684f5c
Contactpersoon: _d4e02752-2ac6-4700-ae67-d33f428f78fb
Rol: _1252a67a-5f69-4a9c-b4ca-506a4459c7c3
Organisatie: _87e9144d-04d6-4a5f-bdcb-b50e96c2b498
Opvolger: _666f01b3-6714-44cc-8865-0a9ae1f938ce

Persoon in Rol van Organisatie
Unieke identificatie: _666f01b3-6714-44cc-8865-0a9ae1f938ce
Contactpersoon: _c6e4430e-65aa-4e55-a8db-1beb6d3f4250
Rol: _1252a67a-5f69-4a9c-b4ca-506a4459c7c3
Organisatie: _87e9144d-04d6-4a5f-bdcb-b50e96c2b498

Rol v
Unieke identificatie: _1252a67a-5f69-4a9c-b4ca-506a4459c7c3
Naam: Adviserende rol
Omschrijving: Deze rol geeft een onafhankelijk advies op basis van competenties en deskundigheid binnen het kader van project. Bij het advies doorloopt de rol een aantal vaste stappen. Rol inventariseert gegevens, weegt, motiveert en beoordeelt deze informatie en geeft vervolgens het advies.
```

## Changing framework

This is the change with the greatest impact. In addition to changing the
project communication template (or framework), the project setup in the
project-specific file must also be updated in accordance with the
framework. The project specific file has a reference to the framework.
If the framework changes, this reference must also change. So minimal
updating is modifying the reference to the framework. The usual
functionality of XML is used for this reference: namespace. A modified
project communication template must contain a new unique namespace.\
\
Example 21: Adjusting framework\

```
Project
Unieke identificatie: UAV
Omschrijving: Uniforme Administratieve Voorwaarden
Namespace: http://www.visi.nl/schemas/20160331/uav_20-10-2020\_1723
```

If an amended project communication template (or framework) is supplied
without a modified project-specific file, then the \"previous\"
project-specific file also applies to the modified project communication
template (or framework).\
\
The reference to the associated framework is also included in each
message. This makes it possible to find out for each message which
framework the message has been drawn up in accordance with, and to check
whether the message is valid in accordance with this framework. And
which subsequent messages are possible as a next step.

### Behavior of software around connected message flow

text

### Behavior around offering and not offering messages based on framework/role

text

## Appendix 11 Guidelines for archiving VISI projects

### Archiving VISI Projects

The exchange and archiving format for (completed) VISI projects is
referred to in this documentation as a \"VISI archive\". The following
paragraphs describe which requirements the archive must meet and how it
is used.

### The requirements for the VISI archive

1.  ) The information that must be present in the archive includes all
    data from a maximum and a minimum of 1 project, namely:

    -   All frameworks of the project.

    -   All project-specific messages from the project.

    -   All sent and received VISI messages in the format xml.

    -   All sent and received attachments in the original format.

2.  ) Information from the archive must be transparent, without
    exotic/VISI (viewer) software:

    -   Attachments are archived in the original format in which they
        were sent by the end user/organization. So a PDF file can be
        found as a PDF file. So archiving of attachments is not done in
        BASE64, MTOM or other similar formats.

    -   The archive must have a structure so that the communication can
        be navigated in a logical manner.

3.  ) The archive must be importable:

    -   The information present in the VISI archive must be complete
        enough to reproduce/read the entire communication into a VISI
        solution of your choice.

    -   The connection between a message and an attachment must be
        retrievable.\
        \
        N.B. In a previous document the following was rightly described:
        "The correct reconstruction of messages, framework(s) and
        project specific message(s) can only be done with projects that
        run under the 1.2 system because there all messages work with a
        DateTime value. In the 1.1 system, only a Date value was used,
        which will make it difficult to restore messages per day in the
        correct order." Therefore in addition, the requirement:

    -   If the VISI software has the time at which a VISI message was
        sent, this information is also archived. If this information is
        not available, the first message within a transaction on that
        day will be timed as '00:01', and for each subsequent message,
        'one minute later' will be used. Justification: Allows 1440
        messages within a transaction to be numbered within a day.

4.  ) Importing archived projects must be possible:

    -   After the import, the VISI project must again function entirely
        in accordance with the VISI System.

### (B) Technical solution

<figure id="fig:">

<figcaption></figcaption>
</figure>

### Project archive application {#archivingtechnicalsolution}

The table below gives an example of the application in practice and
provides insight into the structure of a VISI project archive. In the
example, a VISI project is archived in a file system structure.

```
Communication
|
|-- 2011/ // Year in which the transaction started (yyyy)
| |-- 02/ // Month in which the transaction started (MM)
| | |-- 28/ // Day the transaction started (dd)
| | | |-- Weekly report no. 1\_tc1b35f17-8351- 4bb9-a4cb- f2fb53a16018/
| | | | |-- 20110228\_1524\_Delivery\_weekly report\_m42f15ce5-c97a-4c34-9eb0-ef9894777f36.xml // VISI Messages
| | | \-- 20110228\_1524\_10A06 attachment to weekly report \_a1e8d4d55-3a7a- 4508-897c-a1a261c4c629.pdf // Attachments
|
Project
|
|-- 2009-01-01T00:00:00.0Z |-- Raamwerk.xml
| \-- Project specific message.xml
|
|-- 2010-12-31T00:00:00.0Z |-- Raamwerk.xml
| \-- Project specific message.xml
```

-   Weekly report no. 1_tc1b35f17-8351- 4bb9-a4cb- f2fb53a16018: First
    50 characters [^1] of the subject of a transaction, followed by id
    (=GUID) of the transaction

-   VISI Messages: Date sent of the message in the format 'yyyyMMdd_HHmm
    ', followed by the message type, followed by the message GUID.
    Extension is always .xml

-   Attachment(s): Date sent of the message in the format 'yyyyMMdd_HHmm
    ', followed by the original file name followed by the GUID of the
    attachment and the extension of the original sent file.\
    Files are therefore included in the same (transaction) folder when
    the message is stored.

<figure id="fig:visiprojectarchief">

<figcaption>VISI project archive</figcaption>
</figure>

VISI messages are structured by date. Optionally, the complete archive
can be saved in ZIP format.\
Visual example:

<figure id="fig:visiarchiefstructuur">

<figcaption>VISI archive structure</figcaption>
</figure>

## META FRAMEWORK {#metaframeworkdefinition}

The VISI META framework is a standard part of the system and is intended
for the exchange of a new contract-specific framework and the exchange
of a modified framework or project-specific message between project
partners. The META framework itself is project-transcending. After all,
the META framework must be available before a VISI environment is set up
for a specific project.\
To allow project partners to communicate via the META framework, both
project partners must have VISI compatible software into which a META
project containing the universal META framework and a valid META
project-specific message is loaded. This message contains the server
addresses of the project partners and the organization and personal
data. Each organization manages its own META project-specific message
and supplements this with the data of project partners.

### The available roles and associated responsibilities

The VISI META framework contains four roles. The roles project initiator
and project executor are available for initiating and ending a project.
As a rule, the project initiator is the Contracting Party and the
project executor is the Contracting Party.\
\
For changing a framework or a project-specific message, the roles VISI
communication manager and Change initiator are included. The VISI
communication manager has the responsibility to authorize an
adjustment.\
The Change Initiator is responsible for initiating a change. Both roles
can be filled by all parties involved. In this way, any party involved
can initiate or accept a change.

### The available transactions within the META framework

The META framework contains two transactions with the goal of:\

-   Spreading an initial framework and project specific message (VISI
    project initiation).

-   Spreading a modified framework and/or project-specific message (New
    or modified framework or project-specific message transaction).

The communication per transaction is shown below in a transaction
diagram.\
\
VISI project initiation

<figure id="fig:projectinitiatie">

<figcaption>projectinitiatie</figcaption>
</figure>

Spreading a modified framework and/or project-specific message

<figure id="fig:berichtverspreiding">

<figcaption>berichtverspreiding</figcaption>
</figure>

### Application of the META framework

The META framework offers software suppliers the option of
(semi)automatically deploying a new or modified framework and/or
project-specific message. In addition, the META framework benefits
interoperability because there is more certainty whether the correct
version of a framework and/or project-specific message is in use.

## Appendix 6 Metaframework

### Introduction

In 2010/2011, the VISI Technical Committee submitted a proposal on
behalf of the VISI User Group to ensure the traceability of messages
after an adjustment to the framework has taken place. The motivation is
stated as follows:\
\
*For (long-term) projects it is desirable to be able to adjust the
framework during the project. This could, for example, consist of:*

1.  *adding transactions.*

2.  *changing transactions.*

3.  *deleting transactions.*

Until now, the framework of a project can only be changed if there are
no outstanding transactions. This is a strict requirement that will not
be feasible in many practical situations. A framework must therefore
also be able to be changed if there are still outstanding transactions.\
\
With regard to changes, a distinction can be made between framework
changes that are not compatible with the message flow of the original
framework and changes that are. In general, extensions (new transaction
type, new message type, new complex/simple data type) do not pose a
problem, so that messages started under the original framework can also
be completed under the new framework. Real changes (deleting or moving
MessageInTransaction types, etc.) are generally incompatible with the
message flow associated with the original framework and thus require the
different versions of the framework to coexist with each other and with
their own message flows.\
\
During the analysis of this problem, it was found that the way in which
VISI communication for a project is initiated and managed is not clearly
defined and in practice is managed via informal channels (telephone,
e-mail). The idea therefore arose whether it would not be possible to
use the VISI system itself to manage VISI communication within a
project. This concerns communication about the method of communication,
or meta communication, and in the VISI context a framework is needed for
this, or actually a meta framework.\
\
In addition, the VISI Technical Committee submitted a proposal on behalf
of the VISI User Group in May 2013 for the automated distribution of
project data (framework and project-specific message).\
\
This note describes the technical solution (meta framework) for both
functional questions.

### Meta framework {#meta-framework}

[1.6](#metaframeworkdefinition){reference-type="ref+label"
reference="metaframeworkdefinition"} The VISI meta-framework is an
elaboration for the use of VISI itself for managing VISI communication
in a construction project.

#### General

The meta framework is an elaboration for the use of the VISI Standard
for managing communication about framework and project-specific
messages.\
\
The meta framework contains transactions for distributing frameworks and
project-specific messages. The first question that naturally arises is:
how is that meta framework distributed? At least not with a meta meta
framework, because that just shifts the problem. The solution is that
the meta framework must be available as standard in the certified VISI
software. In this case, distribution of the meta framework is not
necessary. The logical consequence is that the meta framework cannot be
changed for a particular version of the VISI Standard. However, given
the nature of the framework, this is not a problem. If a change is
necessary, it will be related to a change in the VISI Standard itself
and we are therefore talking about a new version of the Standard.\
\
A meta project-specific message contains the data of the
parties/organizations involved (including the SOAP Servers).

#### Roles

Within a meta-framework there are two roles:

-   **VISI communications manager** with the responsibility to authorize
    an adjustment.

-   **Change initiator** for initiating a change.

Because this is a meta-framework and it is not known in advance what
position the party/organization in question has in the specific VISI
project, both roles can be fulfilled by all parties/organizations.

#### Transactions

The meta framework contains two transactions.

1.  Dissemination of an initial framework and project-specific message.

2.  Dissemination of a modified framework and/or project-specific
    message.

<figure id="fig:">

<figcaption>Distributing an initial framework and project-specific
message</figcaption>
</figure>

<figure id="fig:">

<figcaption>Distributing a modified framework and/or project-specific
message</figcaption>
</figure>

A transaction to add a new or modified framework or project-specific
message to the VISI communication. ('i$-->$e' means 'initiator to
executor'; vice versa)

1.  Message (i$->$e): *Proposal start of a new or modified framework or
    project-specific message*. This message can be sent to all partners
    for whom this framework or project-specific message is of interest.
    The new or amended framework or project-specific message is added as
    an appendix, together with any other documents that may be important
    for the assessment of the framework or project-specific message.

2.  Message (e$->$i): *Agree with proposal of a new or modified
    framework or project-specific message*. This message allows the
    recipient of message 1 to accept the proposal.

3.  Message (e$->$i): *Disagree with proposal of a new or modified
    framework or project-specific message*. This message allows the
    recipient of message 1 to reject the proposal. If necessary, a
    further explanation for the rejection can be added as an appendix.
    Because a proposal must be accepted unanimously, the partner in
    question already knows that the proposal has not been successful and
    can therefore regard the transaction as terminated.

4.  Message (i$->$e): *Proposal to start a new or modified framework not
    accepted*. If the proposal has not been accepted unanimously, this
    message can be used to distribute this outcome to the partners who
    did agree, possibly with a further explanation as an appendix.

5.  Message (i$->$e): *Proposed effective date of an accepted new or
    amended framework or project-specific message*. If the proposal has
    been accepted unanimously, the effective date can be determined with
    this message. The message therefore implicitly informs that the
    proposal has been unanimously accepted. In the case of an amended
    framework, the effective date determines the moment that new
    transactions transfer to the amended framework. Transactions that
    are already in progress must be processed according to the original
    framework. The effective date is sent in a non-changeable
    simple-typed date/time field.

6.  Message (e$->$i): *Agree with proposed effective date of a new or
    amended framework or project-specific message*. This message allows
    the recipient of message 5 to accept the proposal.

7.  Message (e$->$i): *Disagree with proposed effective date of a new or
    amended framework or project-specific message*. This message allows
    the recipient of message 5 to reject the proposal. An explanation of
    that decision can be included if necessary. However, because the
    proposal for a new or modified framework had already been
    unanimously accepted, a loop is continued with new proposals for
    effective dates until everyone has accepted it.

8.  Message (i$->$e): *Confirmation of effective date of an accepted new
    or modified framework or project-specific message*. If the effective
    date proposal has been unanimously accepted, the effective date can
    be confirmed with this message. In the case of a changed framework,
    the software will no longer allow transactions under the previous
    framework after the confirmed effective date.

### Meta-framework XML

The meta framework is defined in XML as follows.

```
<visiXML_VISI_Systematics xmlns="http://www.visi.nl/schemas/20140331" 
    xmlns:xsd="http://www.w3.org/2001/XMLSchema" 
    xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance">
    <AppendixType id="APT-NieuwOfGewijzigdRaamwerkOfProjectspecifiekBericht">
        <description>Nieuw of gewijzigd raamwerk en/of projectspecifiek bericht</description>
    </AppendixType>
    <ComplexElementType id="C00-Algemeen">
        <description>Algemeen</description>
        <simpleElements>
            <SimpleElementTypeRef idref="S00-Algemeen" />
        </simpleElements>
    </ComplexElementType>
    <ComplexElementType id="C01-MotivatieVoorstelNietAkkoord">
        <description>Motivatie voorstel niet akkoord</description>
        <simpleElements>
            <SimpleElementTypeRef idref="S01-MotivatieVoorstelNietAkkoord" />
        </simpleElements>
    </ComplexElementType>
    <ComplexElementType id="C02-MotivatieVoorstelGecanceld">
        <description>Motivatie voorstel gecanceld</description>
        <simpleElements>
            <SimpleElementTypeRef idref="S02-MotivatieVoorstelGecanceld" />
        </simpleElements>
    </ComplexElementType>
    <ComplexElementType id="C03-Ingangsdatum">
        <description>Ingangsdatum</description>
        <simpleElements>
            <SimpleElementTypeRef idref="S03-Ingangsdatum" />
        </simpleElements>
    </ComplexElementType>
    <ComplexElementType id="C04-Start-project">
        <description>Start project</description>
        <simpleElements>
            <SimpleElementTypeRef idref="S04-Moment-start-project" />
        </simpleElements>
    </ComplexElementType>
    <ComplexElementType id="C05-Projectgegevens">
        <description>Projectgegevens</description>
        <simpleElements>
            <SimpleElementTypeRef idref="S05-Project-ID" />
            <SimpleElementTypeRef idref="S06-Projectnaam" />
        </simpleElements>
    </ComplexElementType>
    <ComplexElementType id="C06-Beeindiging-project">
        <description>Beeindiging project</description>
        <simpleElements>
            <SimpleElementTypeRef idref="S04-Moment-beeindiging-project" />
        </simpleElements>
    </ComplexElementType>
    <ComplexElementType id="CeOrganisatieSOAPServer">
        <description>Gegevens van SOAP server</description>
        <helpInfo>Hier kan een omschrijving worden weergegeven</helpInfo>
        <simpleElements>
            <SimpleElementTypeRef idref="SOAPServerURL" />
        </simpleElements>
    </ComplexElementType>
    <ElementCondition id="EL-S00-Algemeen">
        <description>-</description>
        <condition>FREE</condition>
        <simpleElement>
            <SimpleElementTypeRef idref="S00-Algemeen" />
        </simpleElement>
    </ElementCondition>
    <ElementCondition id="EL-S04-Moment-start-project">
        <description>-</description>
        <condition>FREE</condition>
        <simpleElement>
            <SimpleElementTypeRef idref="S04-Moment-start-project" />
        </simpleElement>
    </ElementCondition>
    <GroupType id="StandardGroupType">
        <description>Standaard Groep</description>
    </GroupType>
    <MessageInTransactionType id="Mitt_1">
        <initiatorToExecutor>true</initiatorToExecutor>
        <message>
            <MessageTypeRef idref="M01-VoorstelNieuwOfGewijzigdRaamwerkOfProjectSpeciekBericht" />
        </message>
        <transaction>
            <TransactionTypeRef idref="T01-NieuwOfGewijzigdRaamwerkOfProjectSpeciekBerichtTransactie" />
        </transaction>
    </MessageInTransactionType>
    <MessageInTransactionType id="Mitt_10">
        <initiatorToExecutor>true</initiatorToExecutor>
        <message>
            <MessageTypeRef idref="M10-VoorstelNieuwVISIproject" />
        </message>
        <transaction>
            <TransactionTypeRef idref="T02-" />
        </transaction>
    </MessageInTransactionType>
    <MessageInTransactionType id="Mitt_11">
        <initiatorToExecutor>false</initiatorToExecutor>
        <message>
            <MessageTypeRef idref="M11-AfwijzingVoorgesteldVISIproject" />
        </message>
        <previous>
            <MessageInTransactionTypeRef idref="Mitt_10" />
        </previous>
        <transaction>
            <TransactionTypeRef idref="T02-" />
        </transaction>
    </MessageInTransactionType>
    <MessageInTransactionType id="Mitt_12">
        <initiatorToExecutor>false</initiatorToExecutor>
        <message>
            <MessageTypeRef idref="M12-AcceptatieNieuwVISIproject" />
        </message>
        <previous>
            <MessageInTransactionTypeRef idref="Mitt_10" />
        </previous>
        <transaction>
            <TransactionTypeRef idref="T02-" />
        </transaction>
    </MessageInTransactionType>
    <MessageInTransactionType id="Mitt_13">
        <initiatorToExecutor>true</initiatorToExecutor>
        <message>
            <MessageTypeRef idref="M13-AnnuleringProjectInitiatie" />
        </message>
        <previous>
            <MessageInTransactionTypeRef idref="Mitt_12" />
        </previous>
        <transaction>
            <TransactionTypeRef idref="T02-" />
        </transaction>
    </MessageInTransactionType>
    <MessageInTransactionType id="Mitt_14">
        <initiatorToExecutor>true</initiatorToExecutor>
        <message>
            <MessageTypeRef idref="M14-BevestigingProjectInitiatie" />
        </message>
        <previous>
            <MessageInTransactionTypeRef idref="Mitt_12" />
        </previous>
        <transaction>
            <TransactionTypeRef idref="T02-" />
        </transaction>
    </MessageInTransactionType>
    <MessageInTransactionType id="Mitt_15">
        <initiatorToExecutor>false</initiatorToExecutor>
        <message>
            <MessageTypeRef idref="M15-ProjectIngericht" />
        </message>
        <previous>
            <MessageInTransactionTypeRef idref="Mitt_14" />
        </previous>
        <transaction>
            <TransactionTypeRef idref="T02-" />
        </transaction>
    </MessageInTransactionType>
    <MessageInTransactionType id="Mitt_16">
        <initiatorToExecutor>true</initiatorToExecutor>
        <message>
            <MessageTypeRef idref="M16-VerzoekBeeindigingProject" />
        </message>
        <previous>
            <MessageInTransactionTypeRef idref="Mitt_15" />
            <MessageInTransactionTypeRef idref="Mitt_18" />
            <MessageInTransactionTypeRef idref="Mitt_21" />
        </previous>
        <transaction>
            <TransactionTypeRef idref="T02-" />
        </transaction>
    </MessageInTransactionType>
    <MessageInTransactionType id="Mitt_17">
        <initiatorToExecutor>false</initiatorToExecutor>
        <message>
            <MessageTypeRef idref="M17-AkkoordBeeindigingProject" />
        </message>
        <previous>
            <MessageInTransactionTypeRef idref="Mitt_16" />
        </previous>
        <transaction>
            <TransactionTypeRef idref="T02-" />
        </transaction>
    </MessageInTransactionType>
    <MessageInTransactionType id="Mitt_18">
        <initiatorToExecutor>false</initiatorToExecutor>
        <message>
            <MessageTypeRef idref="M18-AfwijzingBeeindigingProject" />
        </message>
        <previous>
            <MessageInTransactionTypeRef idref="Mitt_16" />
        </previous>
        <transaction>
            <TransactionTypeRef idref="T02-" />
        </transaction>
    </MessageInTransactionType>
    <MessageInTransactionType id="Mitt_19">
        <initiatorToExecutor>true</initiatorToExecutor>
        <message>
            <MessageTypeRef idref="M19-AnnuleringProjectbeeindiging" />
        </message>
        <previous>
            <MessageInTransactionTypeRef idref="Mitt_17" />
        </previous>
        <transaction>
            <TransactionTypeRef idref="T02-" />
        </transaction>
    </MessageInTransactionType>
    <MessageInTransactionType id="Mitt_2">
        <initiatorToExecutor>false</initiatorToExecutor>
        <message>
            <MessageTypeRef idref="M02-VoorstelAkkoord" />
        </message>
        <previous>
            <MessageInTransactionTypeRef idref="Mitt_1" />
        </previous>
        <transaction>
            <TransactionTypeRef idref="T01-NieuwOfGewijzigdRaamwerkOfProjectSpeciekBerichtTransactie" />
        </transaction>
    </MessageInTransactionType>
    <MessageInTransactionType id="Mitt_20">
        <initiatorToExecutor>true</initiatorToExecutor>
        <message>
            <MessageTypeRef idref="M20-BevestigingBeeindigingProject" />
        </message>
        <previous>
            <MessageInTransactionTypeRef idref="Mitt_17" />
        </previous>
        <transaction>
            <TransactionTypeRef idref="T02-" />
        </transaction>
    </MessageInTransactionType>
    <MessageInTransactionType id="Mitt_21">
        <initiatorToExecutor>false</initiatorToExecutor>
        <message>
            <MessageTypeRef idref="M21-BevestigingVoortzettingProject" />
        </message>
        <previous>
            <MessageInTransactionTypeRef idref="Mitt_19" />
        </previous>
        <transaction>
            <TransactionTypeRef idref="T02-" />
        </transaction>
    </MessageInTransactionType>
    <MessageInTransactionType id="Mitt_3">
        <initiatorToExecutor>false</initiatorToExecutor>
        <message>
            <MessageTypeRef idref="M03-VoorstelNietAkkoord" />
        </message>
        <previous>
            <MessageInTransactionTypeRef idref="Mitt_1" />
        </previous>
        <transaction>
            <TransactionTypeRef idref="T01-NieuwOfGewijzigdRaamwerkOfProjectSpeciekBerichtTransactie" />
        </transaction>
    </MessageInTransactionType>
    <MessageInTransactionType id="Mitt_4">
        <initiatorToExecutor>true</initiatorToExecutor>
        <message>
            <MessageTypeRef idref="M04-VoorstelGecanceld" />
        </message>
        <previous>
            <MessageInTransactionTypeRef idref="Mitt_3" />
            <MessageInTransactionTypeRef idref="Mitt_2" />
        </previous>
        <transaction>
            <TransactionTypeRef idref="T01-NieuwOfGewijzigdRaamwerkOfProjectSpeciekBerichtTransactie" />
        </transaction>
    </MessageInTransactionType>
    <MessageInTransactionType id="Mitt_5">
        <initiatorToExecutor>true</initiatorToExecutor>
        <message>
            <MessageTypeRef idref="M05-VoorstelIngangsdatum" />
        </message>
        <previous>
            <MessageInTransactionTypeRef idref="Mitt_2" />
            <MessageInTransactionTypeRef idref="Mitt_7" />
            <MessageInTransactionTypeRef idref="Mitt_6" />
        </previous>
        <transaction>
            <TransactionTypeRef idref="T01-NieuwOfGewijzigdRaamwerkOfProjectSpeciekBerichtTransactie" />
        </transaction>
    </MessageInTransactionType>
    <MessageInTransactionType id="Mitt_6">
        <initiatorToExecutor>false</initiatorToExecutor>
        <message>
            <MessageTypeRef idref="M06-IngangsdatumAkkoord" />
        </message>
        <previous>
            <MessageInTransactionTypeRef idref="Mitt_5" />
        </previous>
        <transaction>
            <TransactionTypeRef idref="T01-NieuwOfGewijzigdRaamwerkOfProjectSpeciekBerichtTransactie" />
        </transaction>
    </MessageInTransactionType>
    <MessageInTransactionType id="Mitt_7">
        <initiatorToExecutor>false</initiatorToExecutor>
        <message>
            <MessageTypeRef idref="M07-IngangsdatumNietAkkoord" />
        </message>
        <previous>
            <MessageInTransactionTypeRef idref="Mitt_5" />
        </previous>
        <transaction>
            <TransactionTypeRef idref="T01-NieuwOfGewijzigdRaamwerkOfProjectSpeciekBerichtTransactie" />
        </transaction>
    </MessageInTransactionType>
    <MessageInTransactionType id="Mitt_8">
        <initiatorToExecutor>true</initiatorToExecutor>
        <message>
            <MessageTypeRef idref="M08-BevestigingIngangsdatum" />
        </message>
        <previous>
            <MessageInTransactionTypeRef idref="Mitt_6" />
        </previous>
        <transaction>
            <TransactionTypeRef idref="T01-NieuwOfGewijzigdRaamwerkOfProjectSpeciekBerichtTransactie" />
        </transaction>
    </MessageInTransactionType>
    <MessageType id="M01-VoorstelNieuwOfGewijzigdRaamwerkOfProjectSpeciekBericht">
        <description>Voorstel voor een nieuw of gewijzigd raamwerk of projectspecifiekbericht</description>
        <complexElements>
            <ComplexElementTypeRef idref="C00-Algemeen" />
            <ComplexElementTypeRef idref="C05-Projectgegevens" />
        </complexElements>
    </MessageType>
    <MessageType id="M02-VoorstelAkkoord">
        <description>Voorstel akkoord</description>
        <complexElements>
            <ComplexElementTypeRef idref="C00-Algemeen" />
            <ComplexElementTypeRef idref="C05-Projectgegevens" />
        </complexElements>
    </MessageType>
    <MessageType id="M03-VoorstelNietAkkoord">
        <description>Voorstel niet akkoord</description>
        <complexElements>
            <ComplexElementTypeRef idref="C00-Algemeen" />
            <ComplexElementTypeRef idref="C01-MotivatieVoorstelNietAkkoord" />
            <ComplexElementTypeRef idref="C05-Projectgegevens" />
        </complexElements>
    </MessageType>
    <MessageType id="M04-VoorstelGecanceld">
        <description>Voorstel is gecanceld</description>
        <complexElements>
            <ComplexElementTypeRef idref="C00-Algemeen" />
            <ComplexElementTypeRef idref="C02-MotivatieVoorstelGecanceld" />
            <ComplexElementTypeRef idref="C05-Projectgegevens" />
        </complexElements>
    </MessageType>
    <MessageType id="M05-VoorstelIngangsdatum">
        <description>Voorstel ingangsdatum</description>
        <complexElements>
            <ComplexElementTypeRef idref="C00-Algemeen" />
            <ComplexElementTypeRef idref="C03-Ingangsdatum" />
            <ComplexElementTypeRef idref="C05-Projectgegevens" />
        </complexElements>
    </MessageType>
    <MessageType id="M06-IngangsdatumAkkoord">
        <description>Ingangsdatum akkoord</description>
        <complexElements>
            <ComplexElementTypeRef idref="C00-Algemeen" />
            <ComplexElementTypeRef idref="C03-Ingangsdatum" />
            <ComplexElementTypeRef idref="C05-Projectgegevens" />
        </complexElements>
    </MessageType>
    <MessageType id="M07-IngangsdatumNietAkkoord">
        <description>Ingangsdatum niet akkoord</description>
        <complexElements>
            <ComplexElementTypeRef idref="C00-Algemeen" />
            <ComplexElementTypeRef idref="C01-MotivatieVoorstelNietAkkoord" />
            <ComplexElementTypeRef idref="C05-Projectgegevens" />
        </complexElements>
    </MessageType>
    <MessageType id="M08-BevestigingIngangsdatum">
        <description>Bevestiging ingangsdatum</description>
        <complexElements>
            <ComplexElementTypeRef idref="C00-Algemeen" />
            <ComplexElementTypeRef idref="C03-Ingangsdatum" />
            <ComplexElementTypeRef idref="C05-Projectgegevens" />
        </complexElements>
    </MessageType>
    <MessageType id="M10-VoorstelNieuwVISIproject">
        <description>Voorstel voor een nieuw VISI project</description>
        <complexElements>
            <ComplexElementTypeRef idref="C00-Algemeen" />
            <ComplexElementTypeRef idref="C04-Start-project" />
            <ComplexElementTypeRef idref="C05-Projectgegevens" />
        </complexElements>
    </MessageType>
    <MessageType id="M11-AfwijzingVoorgesteldVISIproject">
        <description>Afwijzing voorgesteld VISI project</description>
        <complexElements>
            <ComplexElementTypeRef idref="C00-Algemeen" />
            <ComplexElementTypeRef idref="C05-Projectgegevens" />
        </complexElements>
    </MessageType>
    <MessageType id="M12-AcceptatieNieuwVISIproject">
        <description>Acceptatie nieuw VISI project</description>
        <complexElements>
            <ComplexElementTypeRef idref="C00-Algemeen" />
            <ComplexElementTypeRef idref="C04-Start-project" />
            <ComplexElementTypeRef idref="C05-Projectgegevens" />
        </complexElements>
    </MessageType>
    <MessageType id="M13-AnnuleringProjectInitiatie">
        <description>Annulering project initiatie</description>
        <complexElements>
            <ComplexElementTypeRef idref="C00-Algemeen" />
            <ComplexElementTypeRef idref="C05-Projectgegevens" />
        </complexElements>
    </MessageType>
    <MessageType id="M14-BevestigingProjectInitiatie">
        <description>Bevestiging project initiatie</description>
        <complexElements>
            <ComplexElementTypeRef idref="C00-Algemeen" />
            <ComplexElementTypeRef idref="C04-Start-project" />
            <ComplexElementTypeRef idref="C05-Projectgegevens" />
        </complexElements>
    </MessageType>
    <MessageType id="M15-ProjectIngericht">
        <description>Project is ingericht</description>
        <complexElements>
            <ComplexElementTypeRef idref="C00-Algemeen" />
            <ComplexElementTypeRef idref="C05-Projectgegevens" />
        </complexElements>
    </MessageType>
    <MessageType id="M16-VerzoekBeeindigingProject">
        <description>Verzoek tot beeindiging project</description>
        <complexElements>
            <ComplexElementTypeRef idref="C06-Beeindiging-project" />
            <ComplexElementTypeRef idref="C00-Algemeen" />
            <ComplexElementTypeRef idref="C05-Projectgegevens" />
        </complexElements>
    </MessageType>
    <MessageType id="M17-AkkoordBeeindigingProject">
        <description>Akkoord beeindiging project</description>
        <complexElements>
            <ComplexElementTypeRef idref="C06-Beeindiging-project" />
            <ComplexElementTypeRef idref="C00-Algemeen" />
            <ComplexElementTypeRef idref="C05-Projectgegevens" />
        </complexElements>
    </MessageType>
    <MessageType id="M18-AfwijzingBeeindigingProject">
        <description>Afwijzing beeindiging project</description>
        <complexElements>
            <ComplexElementTypeRef idref="C00-Algemeen" />
            <ComplexElementTypeRef idref="C05-Projectgegevens" />
        </complexElements>
    </MessageType>
    <MessageType id="M19-AnnuleringProjectbeeindiging">
        <description>Annulering projectbeeindiging</description>
        <complexElements>
            <ComplexElementTypeRef idref="C00-Algemeen" />
            <ComplexElementTypeRef idref="C05-Projectgegevens" />
        </complexElements>
    </MessageType>
    <MessageType id="M20-BevestigingBeeindigingProject">
        <description>Bevestiging beeindiging project</description>
        <complexElements>
            <ComplexElementTypeRef idref="C06-Beeindiging-project" />
            <ComplexElementTypeRef idref="C00-Algemeen" />
            <ComplexElementTypeRef idref="C05-Projectgegevens" />
        </complexElements>
    </MessageType>
    <MessageType id="M21-BevestigingVoortzettingProject">
        <description>Bevestiging voortzetting project</description>
        <complexElements>
            <ComplexElementTypeRef idref="C00-Algemeen" />
            <ComplexElementTypeRef idref="C05-Projectgegevens" />
        </complexElements>
    </MessageType>
    <OrganisationType id="standaardOrganisatie">
        <description>Standaard Organisatie</description>
        <complexElements>
            <ComplexElementTypeRef idref="CeOrganisatieSOAPServer" />
        </complexElements>
    </OrganisationType>
    <PersonType id="standaardPersoon">
        <description>Standaard Persoon</description>
    </PersonType>
    <ProjectType id="PRT-Meta-raamwerk">
        <namespace>http://www.visi.nl/schemas/20140331/metaframework</namespace>
        <description>Meta-raamwerk projecttype</description>
    </ProjectType>
    <RoleType id="R01-VISI-communicatiemanager">
        <description>VISI Communicatiemanager</description>
    </RoleType>
    <RoleType id="R02-Wijzigingsinitiator">
        <description>Wijzigingsinitiator</description>
    </RoleType>
    <RoleType id="R03-Initiator-VISI-project">
        <description>Project-initiator</description>
    </RoleType>
    <RoleType id="R04-Executor-VISI-project">
        <description>Project-executor</description>
    </RoleType>
    <SimpleElementType id="S00-Algemeen">
        <description>Eventuele opmerkingen</description>
        <userDefinedType>
            <UserDefinedTypeRef idref="String" />
        </userDefinedType>
    </SimpleElementType>
    <SimpleElementType id="S01-MotivatieVoorstelNietAkkoord">
        <description>Motivatie voorstel niet akkoord</description>
        <userDefinedType>
            <UserDefinedTypeRef idref="String" />
        </userDefinedType>
    </SimpleElementType>
    <SimpleElementType id="S02-MotivatieVoorstelGecanceld">
        <description>Motivatie voorstel gecanceld</description>
        <userDefinedType>
            <UserDefinedTypeRef idref="String" />
        </userDefinedType>
    </SimpleElementType>
    <SimpleElementType id="S03-Ingangsdatum">
        <description>Ingangsdatum actualisering</description>
        <userDefinedType>
            <UserDefinedTypeRef idref="Datumtijd" />
        </userDefinedType>
    </SimpleElementType>
    <SimpleElementType id="S04-Moment-beeindiging-project">
        <description>Moment van beeindiging project</description>
        <userDefinedType>
            <UserDefinedTypeRef idref="Datumtijd" />
        </userDefinedType>
    </SimpleElementType>
    <SimpleElementType id="S04-Moment-start-project">
        <description>Moment van start project</description>
        <userDefinedType>
            <UserDefinedTypeRef idref="Datumtijd" />
        </userDefinedType>
    </SimpleElementType>
    <SimpleElementType id="S05-Project-ID">
        <description>Project-ID</description>
        <userDefinedType>
            <UserDefinedTypeRef idref="ProjectID" />
        </userDefinedType>
    </SimpleElementType>
    <SimpleElementType id="S06-Projectnaam">
        <description>Projectnaam</description>
        <userDefinedType>
            <UserDefinedTypeRef idref="StringVerplicht" />
        </userDefinedType>
    </SimpleElementType>
    <SimpleElementType id="SOAPServerURL">
        <description>SOAPServerURL</description>
        <userDefinedType>
            <UserDefinedTypeRef idref="String" />
        </userDefinedType>
    </SimpleElementType>
    <TransactionPhaseType id="AanvaardEinde">
        <description>Aanvaard/Einde</description>
    </TransactionPhaseType>
    <TransactionPhaseType id="BeloofdExecutie">
        <description>Beloofd/Executie</description>
    </TransactionPhaseType>
    <TransactionPhaseType id="MeldingGereed">
        <description>Melding Gereed</description>
    </TransactionPhaseType>
    <TransactionPhaseType id="Start">
        <description>Start</description>
    </TransactionPhaseType>
    <TransactionPhaseType id="Verzocht">
        <description>Verzocht</description>
    </TransactionPhaseType>
    <TransactionPhaseType id="WijzigingHold">
        <description>Wijziging/Hold</description>
    </TransactionPhaseType>
    <TransactionType id="T01-NieuwOfGewijzigdRaamwerkOfProjectSpeciekBerichtTransactie">
        <description>Nieuw of gewijzigd raamwerk of projectspecifiekbericht transactie</description>
        <initiator>
            <RoleTypeRef idref="R02-Wijzigingsinitiator" />
        </initiator>
        <executor>
            <RoleTypeRef idref="R01-VISI-communicatiemanager" />
        </executor>
    </TransactionType>
    <TransactionType id="T02-">
        <description>VISI project initiatie</description>
        <initiator>
            <RoleTypeRef idref="R03-Initiator-VISI-project" />
        </initiator>
        <executor>
            <RoleTypeRef idref="R04-Executor-VISI-project" />
        </executor>
    </TransactionType>
    <UserDefinedType id="Datum">
        <description>Datum</description>
        <baseType>DATE</baseType>
    </UserDefinedType>
    <UserDefinedType id="Datumtijd">
        <description>Datum en tijd</description>
        <baseType>DATETIME</baseType>
    </UserDefinedType>
    <UserDefinedType id="ProjectID">
        <description>Project ID</description>
        <baseType>STRING</baseType>
        <xsdRestriction>\&lt;xs:pattern value="[a-zA-Z][\w-]*"/\&gt;</xsdRestriction>
    </UserDefinedType>
    <UserDefinedType id="String">
        <description>String</description>
        <baseType>STRING</baseType>
    </UserDefinedType>
    <UserDefinedType id="StringVerplicht">
        <description>String Verplicht</description>
        <baseType>STRING</baseType>
        <xsdRestriction>\&lt;xs:minLength value="1"/\&gt;</xsdRestriction>
    </UserDefinedType>
</visiXML_VISI_Systematics>
```

#### Example project message

```
<?xml version="1.0" encoding="utf-8"?>
<visiXML_MessageSchema xmlns="http://www.visi.nl/schemas/20140331/metaframework">
    <PRT-Meta-raamwerk id="PRO-META-RW">
        <name>Meta Raamwerk Project</name>
        <description>Meta Raamwerk Project</description>
        <startDate>2011-12-22T12:30:23.0Z</startDate>
        <endDate>2012-12-22T12:30:23.0Z</endDate>
    </PRT-Meta-raamwerk>
    <standaardPersoon id="PER-COMG">
        <userName>comg@visi.nl</userName>
        <name>VISI communicatie manager</name>
    </standaardPersoon>
    <R01-VISI-communicatiemanager id="ROL-COMG">
        <name>R01-VISI-communicatiemanager</name>
        <description>R01-VISI-communicatiemanager</description>
        <category>-</category>
    </R01-VISI-communicatiemanager>
    <standaardOrganisatie id="ORG-INF">
        <name>org1</name>
        <abbreviation>INF</abbreviation>
        <contactPerson>
            <standaardPersoonRef idref="PER-COMG" />
        </contactPerson>
        <ceOrganisatieSOAPServer>
            <CeOrganisatieSOAPServerRef idref="SCE-INF" />
        </ceOrganisatieSOAPServer>
    </standaardOrganisatie>
    <CeOrganisatieSOAPServer id="SCE-INF">
        <sOAPServerURL>http://visi.nl/soapservice.asmx</sOAPServerURL>
    </CeOrganisatieSOAPServer>
    <PersonInRole id="PIR-COMG">
        <contactPerson>
            <standaardPersoonRef idref="PER-COMG" />
        </contactPerson>
        <organisation>
            <standaardOrganisatieRef idref="ORG-INF" />
        </organisation>
        <role>
            <R01-VISI-communicatiemanagerRef idref="ROL-COMG" />
        </role>
    </PersonInRole>
    <standaardPersoon id="PER-WZGI">
        <userName>wzgi@visi.nl</userName>
        <name>Wijzigingsinitiator</name>
    </standaardPersoon>
    <R02-Wijzigingsinitiator id="ROL-WZGI">
        <name>R02-Wijzigingsinitiator</name>
        <description>R02-Wijzigingsinitiator</description>
        <category>-</category>
    </R02-Wijzigingsinitiator>
    <PersonInRole id="PIR-WZGI">
        <contactPerson>
            <standaardPersoonRef idref="PER-WZGI" />
        </contactPerson>
        <organisation>
            <standaardOrganisatieRef idref="ORG-INF" />
        </organisation>
        <role>
            <R02-WijzigingsinitiatorRef idref="ROL-WZGI" />
        </role>
    </PersonInRole>
</visiXML_MessageSchema>
```

### Scenario for using meta framework and meta project specific message

#### Introduction

A scenario has been developed to clarify the operation of the
meta-framework and meta-project-specific message between the various
organizations.

#### Scenario

**STEP 0**\
\
Organization A has VISI software -A-0).\
\
Organization B has VISI software Y with SOAP server 4444.\
\
Organization C has VISI software Y with SOAP server 4444.\
\
Organization R has VISI software Z with SOAP server 8888. This party has
access to a meta-project (m-p-R) containing the universal meta-framework
(m-rw) and a meta-project-specific message from this organization (m-psb
-R-0).\
\
**Step 1**

<figure id="fig:">

<figcaption></figcaption>
</figure>

Organization B passes on to Organization A: SOAP server and the person
acting as VISI communications manager.\
\
Organization A extends the meta-project-specific message with, among
other things, the SOAP server of Organization B (m-psb-A-1).\
\
Organization B receives the meta-project-specific message (m-psb-A-1) by
email from Organization A. Organization B sets up a meta-project with
this meta-project-specific message.\
\
Organization A sets up a VISI project (p-A-555), and sends the project
framework (rw-A-555-0) and project-specific message (psb-A-555-0) by
means of a message in the meta-project. ) to Organization B.\
\
Organization B receives the data from the new VISI project in the
meta-project and sets up this project.\
\
**Step 2**

<figure id="fig:">

<figcaption></figcaption>
</figure>

Organization A adjusts the framework and/or project-specific message of
the VISI project (p-A-555), and sends the project framework (rw-A-555-1)
by means of a message in the meta-project (m-p-A) and/or
project-specific message (psb-A-555-1) to Organization B.\
\
Organization B receives the adjusted data from the VISI project in the
meta-project and updates this existing VISI project.\
\
**Step 3**

<figure id="fig:">

<figcaption></figcaption>
</figure>

Organization C passes on to Organization A: SOAP server and the person
acting as VISI communication Manager.\
\
Organization A extends the meta project-specific message with, among
other things, the SOAP server of Organization C (m psb A 2).\
\
Optional: Organization B receives the adjusted meta-project-specific
message (m psb A 2) by e-mail from Organization A. Organization B
updates the corresponding meta project with this meta project-specific
message.\
\
Organization C receives the meta project-specific message (m psb A 2) by
e-mail from Organization A. Organization C sets up a meta project with
this meta project-specific message.\
\
**Step 4**

<figure id="fig:">

<figcaption></figcaption>
</figure>

Organization A sets up a VISI project (p A 777), and sends the project
framework (rw A 777 0) and project project-specific message (psb A 777
0) to Organization C by means of a message in the metaproject.\
\
Organization C receives the data from the new VISI project in the meta
project and sets up this project.\
\
**Step 5**

<figure id="fig:">

<figcaption></figcaption>
</figure>

Organization C passes on to Organization R: SOAP server and the person
acting as VISI communications manager.\
\
Organization R extends the meta project-specific message with, among
other things, the SOAP server of Organization C (m psb R 1).\
\
**Step 6**

<figure id="fig:">

<figcaption></figcaption>
</figure>

Organization C receives the meta project-specific message (m psb R 1) by
e-mail from Organization R.\
Organization B sets up a meta project with this meta project-specific
message.\
\
Organization R sets up a VISI project (p R 999), and sends the project
framework (rw R 999 0) and project project-specific message (psb R 999
0) to Organization C by means of a message in the metaproject.\
\
Organization C receives the data from the new VISI project in the meta
project and sets up this project.\
\
**Step 7**

<figure id="fig:">

<figcaption></figcaption>
</figure>

## Interactive information model

1 Interactief informatiemodel van \_2.exp Raamwerken VISI Raamwerken -
relaties met info. ProjectType ComplexElementType MessageType
AppendixType ElementCondition SimpleElementType MessageInTransactionType
UserDefinedType TransactionType TransactionPhaseType
MessageInTransactionTypeCondition GroupType PersonType OrganisationType
RoleType Ga terug naar interactief informatiemodel

[^1]: Only alphanumeric characters and spaces are allowed.
    Non-alphanumeric characters must be converted to spaces.
