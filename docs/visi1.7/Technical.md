# Technical

## TBD

Systematiek Part II AppendixGroup

## Appendix 10 Additional functional requirements

### Introduction

The documents Systematics Part 1 (frameworks) and Part 2 (messages)
together describe the VISI system. Because these descriptions do not
discuss how the system should be interpreted, an implementation
guideline has been drawn up with a number of separate guidelines that
deal with specific topics. In addition, some additional functional
requirements have been drawn up, which are explained in this appendix.

### Additional functions and requirements for the VISI quality mark

In addition to the requirements described in the above documents and
guidelines, the present document describes a number of functions and
requirements that users of products with the VISI quality mark can at
least expect from the product in question, namely:

1.  Ensuring the authenticity of exchanged VISI messages and associated
    files.

2.  Presenting the communication structure laid down in a VISI framework
    in a recognizable manner.

3.  Being able to reproduce VISI communications afterwards.

The requirements derived from these functions are listed below for each
function. These 'additional requirements' only apply if the VISI product
contains a user interface for the end user. The additional requirements
also relate to obtaining the VISI quality mark.

::: {#tab:my_label}
        **Ensuring the authenticity of exchanged VISI messages and associated files**
  ----- ------------------------------------------------------------------------------------------------------------
   A.1  VISI messages must comply with the system as shown when sent from a VISI product(\*).
        described in the documentation associated with the current system.
        (\*) A VISI product is software that a supplier offers in combination with the VISI quality mark.
   A.2  A VISI message with any linked file(s) must be included in the VISI product as such
        stored so that the message and associated file(s) can be retrieved in relation to each other at all times.
   A.3  It should not be possible to retrieve originally sent and/or received VISI messages and associated
        change or delete files in the VISI product.
        (N.B. This does not include copying to create a new message)
   A.4  The VISI product must check whether a user is authorised to access the system.
        Gaining access must be done using means that the person in question
        under his/her sole control.
   A.5  Only the persons listed in the project-specific message may use the VISI product
        Perform VISI communications in accordance with the VISI roles assigned to them.
:::

::: {#tab:my_label}
  ----- ----------------------------------------------------------------------------------
        **Presenting in a recognizable manner**
        **the communication structure established in a VISI framework**
   B.1  The software may only show a user those transactions
        for which the user is responsible based on his/her role(s).
        N.B. An exception must be made for the so-called 'viewing function'.
        This is a facility for the administrator of the VISI product and
        offers the possibility to make all message traffic visible
        (without the possibility of influencing the flow of messages).
   B.2  For a user, after selecting a VISI message
        to have insight into which files are linked to the message.
   B.3  Once a message has been selected, the following information should be available:
        \- The transaction type with associated 'description'
        \- The naming of the message type
        \- The initiator
        \- The executor
        \- The date the message was sent
   B.4  It must be possible to show transactions in relation to each other on
        the manner as laid down in the underlying VISI framework and where
        the user is involved as 'Person-in-Role' (initiator or executor).
  ----- ----------------------------------------------------------------------------------
:::

::: {#tab:my_label}
  ----- ---------------------------------------------------------------------------
        **The afterwards (i.e. after closing the project)**
        **being able to reproduce conducted VISI communications**
   C.1  To perform an audit trail, messages must be able to be reproduced
        in the order in which they were sent or received, within the framework of
        the own organization of a VISI user, and the system used.
   C.2  Linked files must be able to be exported in
        the format in which they were sent.
   C.3  Documents (files) exchanged with VISI
        -- within the frameworks set by the Archives Act --
        must remain retrievable and readable at all times (\*\*),
        regardless of changes to software or otherwise.
        http://wetten.overheid.nl/BWBR0007376/geldigheidsdatum_30-11-2010
        (\*\*) N.B. Testing of this item is not possible;
        agreements can be made about uniform archiving
  ----- ---------------------------------------------------------------------------
:::

## Appendix 13 Reducing frames using optional fields

The aim is to make frameworks (XML and XSD) more compact. This is
beneficial for VISI users, because a bulky and inefficient framework
leads to delays in the handling of VISI messages and the use of VISI
software. A more compact and efficient framework results in increased
scalability and speed of VISI software. An additional advantage is that
the readability of frameworks and VISI messages is increased.\
\
In de praktijk verandert er weinig:

-   In VISI Standard version 1.2, many mandatory properties can
    ultimately be left empty, because they are a property of type string
    (for example \<interfaceType\>\</interfaceType\>).

-   In VISI Standard version 1.2, a large number of properties are
    optional (e.g. basePoint, category, helpInfo, language : OPTIONAL
    STRING;). These optional features can be used.

-   In VISI Standard version 1.3 the number of optional features can be
    expanded.

It is important to distinguish between VISI Standard Part 1 and Part 2
(layers 2 and 5). Part 1 contains the contents of the VISI framework.
Part 2 concerns the content of the VISI messages and project-specific
messages.

### Part 1 (\_2.exp): VISI-framework

[\[globaleeigenschappendefinitietabel\]](#globaleeigenschappendefinitietabel){reference-type="ref"
reference="globaleeigenschappendefinitietabel"}

::: {#tab:my_label}
  **Type**                   **Optional properties**
  -------------------------- -------------------------
  All elements               userLaMu
                             dateLaMu
                             state
                             startDate
                             endDate
  SimpleElementType          interfaceType
  MessageInTransactionType   requiredNotify
                             received
                             send
                             group
:::

### Part 2 (\_5.exp): VISI messages and project-specific message

::: {#tab:my_label}
  **Type**                       **Properties to be made optional**
  ------------------------------ ------------------------------------
  All elements                   userLaMu
                                 dateLaMu
                                 state
  AppendixTemplate               documentIdentification
                                 documentVersion
                                 documentReference
                                 startDate
                                 endDate
                                 appendixGroup
  MessageTemplate                dateRead
  MessageInTransactionTemplate   dateSend
                                 dateRead
  AppendixGroup                  group
:::

### Test result

#### Framework for

-   600 KB

-   Fragment regarding readability

```{=html}
<!-- -->
```
    <ComplexElementType id="CeDocumentAttributen">
        <description>Documentgegevens</description>
        <startDate>2008-10-08</startDate>
        <endDate>2008-10-08</endDate>
        <state>-</state>
        <dateLaMu>2009-11-10</dateLaMu>
        <userLaMu>ALFAmail</userLaMu>
        <language>onbekend</language>
        <category>-</category>
        <helpInfo>Gegevens van een document</helpInfo>
        <simpleElements>
            <SimpleElementTypeRef idref="documentNaam" />
            <SimpleElementTypeRef idref="documentKenmerk" />
            <SimpleElementTypeRef idref="versieNummer" />
            <SimpleElementTypeRef idref="documentSoort" />
            <SimpleElementTypeRef idref="disciplineType" />
        </simpleElements>
    </ComplexElementType>

    <MessageInTransactionType id="MITT1_Verzoek_advies_korting">
        <requiredNotify>0</requiredNotify>
        <dateLaMu>2009-11-10</dateLaMu>
        <userLaMu>ALFAmail</userLaMu>
        <received>0</received>
        <send>0</send>
        <state>active</state>
        <initiatorToExecutor>true</initiatorToExecutor>
        <message>
            <MessageTypeRef idref="Verzoek_advies_korting" />
        </message>
        <transaction>
            <TransactionTypeRef idref="T8_04_Verzoek_Advies_ADV" />
        </transaction>
        <transactionPhase>
            <TransactionPhaseTypeRef idref="verzocht" />
        </transactionPhase>
        <group>
            <GroupTypeRef idref="standaardGroep" />
        </group>
    </MessageInTransactionType>

#### Framework after

-   380 KB (37% less)

-   Fragment regarding readability

```{=html}
<!-- -->
```
    <ComplexElementType id="CeDocumentAttributen">
        <description>Documentgegevens</description>
        <simpleElements>
            <SimpleElementTypeRef idref="documentNaam" />
            <SimpleElementTypeRef idref="documentKenmerk" />
            <SimpleElementTypeRef idref="versieNummer" />
            <SimpleElementTypeRef idref="documentSoort" />
            <SimpleElementTypeRef idref="disciplineType" />
        </simpleElements>
    </ComplexElementType>

    <MessageInTransactionType id="MITT1_Verzoek_advies_korting">
        <initiatorToExecutor>true</initiatorToExecutor>
        <message>
            <MessageTypeRef idref="Aanbod_weekrapport" />
        </message>
        <transaction>
            <TransactionTypeRef idref="T2_06_Weekrapporten_PLB-AN" />
        </transaction>
    </MessageInTransactionType>

## Appendix C: Validating frameworks

This appendix contains a number of proposals for validating frameworks
that are DEMO based. There are 2 sets of rules, 1 set of rules that
assume a framework with passive messages and 1 set of rules for
frameworks in which there are no passive messages, because these
messages are not present in the framework.

### General principles:

-   A MITT does not contain a (starting message), one or more
    MITT.previous

-   check all MITT's

### With passive messages

-   check per TransactionType whether all statuses (Request, Decline,
    etc) are present

-   check per MessageInTransactionType (MITT) whether each MITT.previous
    has a correct value

-   \* do this by checking whether both conditions per line are true or
    both conditions per line are false

-   \* MITT = Request and MITT.previous = Decline

-   \* MITT = Decline and MITT.previous = Request

-   \* MITT = Quit and MITT.previous = Decline

-   \* MITT = Promise and MITT.previous = Request

-   \* MITT = State and MITT.previous = Promise

-   \* MITT = Reject and MITT.previous = State

-   \* MITT = Stop and MITT.previous = Reject

-   \* MITT = Accept and MITT.previous = State

#### Rules to check the Passive MITT's:

-   There must always be at least 1 Active message

-   If the MITT = Request is passive and the Request has no MITTPrevious
    within the same TransactionType then the MITT of Decline must be
    Passive and the MITT of the Quit must be Passive

-   If the MITT = Decline Passive and MITTPrevious = Request and the
    Request has no MITTPrevious within the same TransactionType then the
    MITT of Request must be Passive

-   If the MITT = State is Passive and the State if MITTPrevious is not
    Promise then the MITT of Reject must be Passive and the MITT of Stop
    must be Passive

-   If the MITT = Reject Passive and MITTPrevious = State and the State
    if MITTPrevious does not have Promise then the MITT of Reject
    Passive must be

<figure id="fig:">

<figcaption>Shortened transaction pattern with passive
messages</figcaption>
</figure>

### Without Passive messages

-   view each MITTPrevious line per MITT

-   check whether a MITT of type State is present

-   check if all the following lines are true

-   If the MITT = Request and (MITTPrevious = Nothing or MITTPrevious =
    Decline)

-   If the MITT = Decline and MITTPrevious = Request

-   If the MITT = Quit and MITTPrevious = Decline

-   If the MITT = Promise and (MITTPrevious = Nothing or MITTPrevious =
    Request)

-   If the MITT = State and (MITTPrevious = Nothing or MITTPrevious =
    Request)

-   If the MITT = State and MITTPrevious = Promise

-   If the MITT = Reject and MITTPrevious = State

-   If the MITT = Stop and MITTPrevious = Reject

-   If the MITT = Accept and MITTPrevious = State

<figure id="fig:">

<figcaption></figcaption>
</figure>
