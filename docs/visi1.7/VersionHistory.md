## Version Management

The Guideline, including all appendices, was created in collaboration
with the VISI Expert Committee. CROW is the author, maintainer and
publisher of this document.\
\
With the publication of this version, all previous versions of the
Guideline have expired. VISI software may still exist based on previous
versions.\
\
The history is summarised in the table below.


   **Author**   **Version**   **Datum**    **Status**  **Remarks**
  ------------ ------------- ------------ ------------ --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    TEEC2/EC        1.7       01-09-2023     Future    Translation to English documentation to support internationalisation. Changes in [0.2.6](#sec:ChangesVersion1.7){reference-type="ref+label" reference="sec:ChangesVersion1.7"}.
                    1.6       31-03-2016    Current    Changes in [0.2.5](#sec:ChangesVersion1.6){reference-type="ref+label" reference="sec:ChangesVersion1.6"}.
                    1.4       31-03-2014    Current    Changes in [0.2.4](#sec:ChangesVersion1.4){reference-type="ref+label" reference="sec:ChangesVersion1.4"}.
    CROW/EC         1.3       25-11-2011    Current    The entire guide has been adapted in accordance with version 1.3 of the VISI system. The Guidance now consists of a main document with a series of normative or informative annexes, each containing a specific requirement or guideline. Version 1.3 is aligned with the ISO/DIS 29481 Part 2 (Information Delivery Manual IDM). Changes in [0.2.3](#sec:ChangesVersion1.3){reference-type="ref+label" reference="sec:ChangesVersion1.3"}
    Gobar/EC        1.2       31-10-2008    Expired    Changes in [0.2.2](#sec:ChangesVersion1.2){reference-type="ref+label" reference="sec:ChangesVersion1.2"}.
     Gobar        1.1(a)                    Expired    Still used in some cases.


## Important changes in the VISI system

### Introduction; Release Cycle

The VISI system is still evolving. Progressive insight, technical
errors, wishes of users or software suppliers can all lead to proposals
for improvement. The Expert Committee (VISI EC) deals with all
improvement proposals and keeps a progressing status overview of which
improvements are being implemented in which version of the VISI system.\
\
The EC uses an annual release cycle from version 1.3. The management
structure is available on the VISI website. We have now arrived at
version 1.7. The technical elaboration of each improvement proposal is
included in this Guideline and/or in one of the appendices. It is also
indicated whether an improvement is normative or informative. This
chapter explains the most important improvements.\
\
This chapter briefly explains the changes in version 1.7 compared to
version 1.6. Appendix 5 contains a content log of all changes, including
changes in previous versions. From version 1.4, the EC works with an
environment <https://github.com/bimloket/visi/wiki>. There, under
'Issues', the entire resolution of the issues in a certain version of
the development process can be followed in detail. However, the latest,
final version of a version is NOT on Github; it must be downloaded from
the VISI website and/or the VISI toolbox.

### Important changes in version 1.2 {#sec:ChangesVersion1.2}

Below are the most important changes that have already been made in
version 1.2 compared to the previous versions (these improvements are
now an integral part of version 1.3). These points are further explained
in appendix 5.

-   Transaction link; communication across multiple transactions.

-   Reuse and blocking data elements.

-   DateTime format.

-   Replacement of people within a project (Successor; see also TC015
    infinite loops).

-   Add MITT MessageInTransactionType to message.

### Changes in version 1.3 vs version 1.2 {#sec:ChangesVersion1.3}

The numbering is in accordance with the status overview of the EC at the
time.\
\
**Increase attachment capacity of VISI messages (M0001)**

This concerns increasing the attachment capacity of the VISI messages to
approx. 120 MB. This becomes combined with chunking for further
optimization.\
\
**Require subject field (M0002)**

Making the subject field mandatory, so that no messages can be sent
without a subject field are sent.\
\
**Unique sequence number for each transaction (M0004)**

Each transaction is given a unique identifier. A 'Universal Unique
Identifier' (UUID) is used for this (for example
'ac0234d8-5c89-40c0-8afc-57cdbe9ac00c'). The Entity
'TransactionTemplate' in VISI Systematics Part 2 has been expanded with
the mandatory attribute 'number' of type 'INTEGER' and the Entity
'OrganisationTemplate' has been expanded with an 'abbreviation'
attribute. See Annex 3, paragraphs 1.13 and 1.7.\
\
**Authority to send messages on behalf of another user (M0006)**

This concerns transparency when temporarily replacing a person, i.e.
making it possible to 'authorize' people to send messages on their
behalf. It can also be used to arrange that several people can send
messages on behalf of the formal person fulfilling the role (for
example, UAV Director). See appendix 3, section 1.8.\
\
**Ensure traceability of communication after changing framework
(TC001)**

This is done by changing the current namespace of the VISI messaging to
a framework specific namespace that is derived from the new namespace
attribute of the ProjectType entity of the framework. The promoter
software uses this data to generate the correct target namespace. Note:
After the introduction of VISI Systematics version 1.3, VISI software
will have to take into account that several versions of a framework can
be active side by side.\
\
**Link appendix types to transactions (TC006)**

It is now possible to indicate in a framework when which AppendixType
may be chosen. Standard and guideline for archiving VISI projects
((TC010) This concerns the requirements that the exchange and archiving
format for (completed) VISI projects (the 'VISI archive') must meet (see
appendix 11).\
\
**Metaframework (TC013)**

This is a transactional procedure for distributing a new version of a
framework and/or a project specific message. Through this
'meta-framework', the VISI system itself is used for managing VISI
communication within a project. A project framework (for example in the
case of a long-term project) can now also be changed if there are still
outstanding transactions (see appendix 6).\
\
**Guideline for 'successor' (TC015)**

This concerns a working method in which a user who fulfills a certain
role in the VISI framework is succeeded (by means of a PersonInRole
element) by another user. The link attribute 'successor' (in Systematics
Part 1) serves this purpose. This prevents 'infinite loops' from now on
(see also appendix 7).\
\
**Additional functional requirements (TC016)**

In response to user wishes, a number of functions and requirements have
been described (see appendix 10) that users of products with the VISI
quality mark can expect from the product in question, as a minimum, when
it comes to:

-   assurance of the authenticity of VISI messages and associated files.

-   presentation of the communication structure in a VISI framework.

-   Reproduce the VISI communication afterwards.

**Duplicate message types (TC022)**

This concerns an adjustment to Systematics Part 2, which can be used to
indicate explicitly whether a MessageInTransactionType concerns a
message with which a new transaction can be started.\
\
**Boolean values (TC024)**

It has been established that for Booleans the value '1' = 'True' and '0'
= 'False', and both forms may be used. It also applies that 'no value'
is equal to '0', or 'False', because within the VISI system 'no value'
is also valid.\
\
**Optional Fields**

By making a number of fields optional, frameworks (xml and xsd) can
become more compact. A more compact and efficient framework results in
increased scalability and speed of VISI software and better readability.
N.B. This improvement could not yet be implemented in the IDM-DIS
(possibly in the F-DIS).

### Changes in version 1.4 vs version 1.3 {#sec:ChangesVersion1.4}

The numbering is in accordance with Codeplex.\
\
**Security of VISI communication (1003).**

This concerns the requirement that VISI communication between SOAP
servers always takes place via https and SSL. The use of HTTPS (TLS 1.0
or higher, with at least 128 bit encryption) for sending VISI messages
and attachments is mandatory. All communication over the internet
between a VISI user and a VISI application must use HTTPS with the same
specifications.\
\
**Linking external and internal processes (1007)**

This concerns the requirement that VISI must be able to facilitate that
project partners can independently change the VISI communication within
their own project organization, i.e. that internal and external project
processes can be bundled in one framework. In version 1.4, this problem
definition is clearly documented (but no technical solution has yet been
devised). The topic is a high priority on the list of points for
improvement for version 1.5.\
\
**Use of 'DateTime' fields (1022)**

This concerns a tightening of the quality mark test for support and
correct use of this entity type (date + time) as an input field in VISI
messages. Transfer roles from the standard (1024). This concerns being
able to generate an export to the VISI archive format, and then an
import of this VISI archive format, in order to transfer the
responsibilities of a contractual partner who has left (eg after a
bankruptcy).\
\
**Being able to enforce a certain order of messages to be sent (1025)**

This involves limiting possible continuations of a transaction, assuming
a certain state in the message flow, (1) so that a message may only be
sent after one or more specific messages are present (already received
or sent) in the transaction or its sub-transactions , i.e. a dependency
between two (or more) already present messages, or (2) so that a message
may only be sent as long as one or more specific messages are not yet
present. (this can also be used to ensure that a message can only be
sent once by referring the message to itself with this rule).\
\
**Automatically start a project (1026)**

This concerns an extension of the 'Meta-framework' phenomenon so that a
VISI project can be started in combination with a project-specific
message from the meta-framework ('automatically'). The "meta-framework"
phenomenon -- which has existed since version 1.3 of VISI -- is an
overarching framework specific to each project, with which changes in
the project framework itself or a project-specific message can be
distributed among the participants of a VISI network. The meta-framework
will now also include the 'Project Initiator' and 'Project Executor'
role types.\
\
**(Impact on) backwards compatibility (1040)**

Backwards compatibility means that the operation of a new version of the
VISI Standard (and/or a framework according to this standard) has at
least the same effect as the previous version. For each point of
improvement, it is analyzed and documented whether the technical
solution has an impact on it. Backwards compatibility is not always
obvious. If functionality is deliberately removed, or if behavior is
changed, there is no longer any question of backwards compatibility on
that point.

### Changes in version 1.6 vs version 1.4 {#sec:ChangesVersion1.6}

Belongs to:
[\[propertiesexplanationminmax\]](#propertiesexplanationminmax){reference-type="ref+label"
reference="propertiesexplanationminmax"}\
The numbering of issues is now according to Github.\
\
**Define number of rows in a table (1008)**

For a ComplexElementType, a minimum and/or maximum number of times that
the ComplexElementType may occur can optionally be defined in a
framework.

```
ENTITY ComplexElementType;
...
minOccurs : OPTIONAL INTEGER;
maxOccurs : OPTIONAL INTEGER;
...
END_ENTITY;
```

When nothing is entered in a framework (in accordance with version 1.6)
at minOccurs and maxOccurs, the rules of the previous system versions
apply;

For the ProjectType, MessageType, PersonType, AppendixType,
OrganizationType types, a Complex Element always occurs 0 or 1 time. For
the Complex Element type types, a complex Element always occurs from 0
to infinity.\
\
**Can make attachments mandatory per message type (1019)** (see
[\[propertiesexplanationappendixmandatory\]](#propertiesexplanationappendixmandatory){reference-type="ref+label"
reference="propertiesexplanationappendixmandatory"}

When a document has to be sent for acceptance and the attachment is not
included, it can be foreseen that the message will be rejected. Forcing
that an attachment must be added can help. The impact of making an
appendix mandatory is low. It enforces that the messages that need an
attachment actually have it. In a number of cases, this can be an
advantage for users because attachments are no longer forgotten.

The chosen solution is to indicate per MessageType whether an appendix
is mandatory.

```
ENTITY MessageType;
...
appendixMandatory: OPTIONAL BOOLEAN;
...
END_ENTITY;
```

This solution is backwards compatible, because the boolean has been made
optional. Therefore, this option is not enforced.\
\
**ElementConditions for tables (1226)**

Until version 1.6 there was no unequivocal agreement on which level an
Element Condition should be set for a table. As a result, the operation
in the software is difficult to predict in advance and can differ per
software supplier. A table is created in a framework by adding a Complex
Element to a Complex Element. The ambiguity lies in the Complex Element
to which the element condition must be added. Is this the parent element
or the child element? A new priority table has been included in appendix
12 to remove this ambiguity.\
\
**Increase attachment size to 10GB (1236)**

There is a limitation for the size of the attachments according to the
VISI Standard. For VISI Standards version 1.0, 1.1 and 1.2 the maximum
is 20MB per message, and for version 1.3 and 1.4 the maximum is 120MB
per message. A maximum of 20MB or 120MB is not realistic in 2019. With
the VISI Standard, BIM containers or delivery files can also be
exchanged. These containers and delivery files can be/become very large,
which is why the maximum has been increased to 10 GB.

### Changes in version 1.7 vs version 1.6 {#sec:ChangesVersion1.7}

**Framework with non-ascii characters in list boxes and descriptions
(enumerations & descriptions) (#68)**

It used to be that messages with non-ascii characters in picklists and
descriptions were not displayed correctly to the recipient of a VISI
message. To prevent this, it has been stated that in

1.  description of elements (SimpleElementType, ComplexElementType,
    MessageType, TransactionType)

2.  enumeration (UserDefinedTYpe) non-ascii characters must be displayed
    correctly
