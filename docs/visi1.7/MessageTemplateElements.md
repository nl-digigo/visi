### Elements

#### abbreviation {#sec:elem-abbreviation}

```
abbreviation: STRING;
```

Abbreviation of the organisation name. Is used, among other things, as a
prefix for transaction identification.

#### category {#sec:elem-category}

```
category : OPTIONAL STRING;
```

Category to which this object instance belongs (this is a standard
string field without restrictions).\
\
Message level example:

```
<... id="...">
    ...
    <category>Omdat dit een standaard string veld is mag ik bijvoorbeeld deze tekst als categorie invullen</category>
    ...
</...>
```

#### creationDate {#sec:elem-creationDate}

```
creationDate : DATETIME;
```

Date of creation of specific object instance in this message.\
\
Message level example:

```
<... id="...">
    ...
    <creationDate>2010-12-03T00:00:00Z</creationDate>
    ...
</...>
```

#### dateLaMu {#sec:elem-dateLaMu}

```
dateLaMu : OPTIONAL DATETIME;
```

Date of the creation of this object instance, or the last modification.\
\
Message level example:

```
<... id="...">
    ...
    <dateLaMu>2010-12-03T00:00:00Z</dateLaMu>
    ...
</...>
```

#### dateReached {#sec:elem-dateReached}

```
dateReached : DATETIME;
```

Date \...

Message level example:

```
<... id="...">
    ...
    <dateReached>2008-02-04T00:00:00Z</dateReached>
    ...
</...>
```

#### dateRead {#sec:elem-dateRead}

```
dateRead : OPTIONAL DATETIME;
```

The date this message was read.\
\
Message level example:

```
<... id="...">
    ...
    <dateRead>2010-12-03T00:00:00Z</dateRead>
    ...
</...>
```

#### dateSend {#sec:elem-dateSend}

```
dateSend : DATETIME; -- MessageTemplate
dateSend : OPTIONAL DATETIME; -- MessageInTransactionType
```

The date this message was sent.\
\
Message level example:

```
<... id="...">
    ...
    <dateSend>2010-12-03T00:00:00Z</dateSend>
    ...
</...>
```

#### description {#sec:elem-description}

```
description : STRING;
```

Description of this object instance.\
\
Message level example:

```
<Projectuitvoerende id="TNO">
    ...
    <description>TNO is naast anderen projectuitvoerende van VISI</description>
    ...
</Projectleverende>
```

#### documentIdentification {#sec:elem-documentIdentification}

```
documentIdentification : OPTIONAL STRING;
```

Unique number or characteristic of a document or file by which the
document is identifiable.

#### documentReference {#sec:elem-documentReference}

```
documentReference : OPTIONAL STRING;
```

Reference that can be referenced as an attribute to identify a file or
document.

#### documentVersion {#sec:elem-documentVersion}

```
documentVersion : OPTIONAL STRING;
```

Version of a document or file.

#### endDate {#sec:elem-endDate}

```
endDate : DATETIME;
endDate : OPTIONAL DATETIME; -- AppendixTemplate
```

Validity end date of specific object instance in this message.\
\
Message level example:

```
<... id="...">
    ...
    <endDate>2011-12-03</endDate>
    ...
</...>
```

#### fileLocation {#sec:elem-fileLocation}

```
fileLocation : STRING;
```

Location of the file, preferably an internet location or shared server
path.\
\
Message level example:

```
<... id="...">
    ...
    <fileLocation>\\srv-path\Public\project-x\docs\</fileLocation>
    ...
</...>
```

#### fileType {#sec:elem-fileType}

```
fileType : STRING;
```

Type of the file, preferably the MIME (Multipurpose Internet Mail
Extensions) type.\
\
Message level example:

```
<... id="...">
    ...
    <fileType>text/plain</fileType>
    ...
</...>
```

#### fileVersion {#sec:elem-fileVersion}

```
fileVersion : STRING;
```

Version of the file, an ascending integer number or the date as in the
following example at message level:

```
<... id="...">
    <fileVersion>20071202</fileVersion>
</...>
```

#### identification {#sec:elem-identification}

```
identification : STRING;
```

Identification of this message, in itself the id \[2.1\] is already an
identification (at least for the computer), but for humans a slightly
more extensive identification may be useful, example at message level:

```
<OpdrachtBevestiging id="X">
    <identification>Dit bericht bevat de opdracht X ten behoeve vanonderdeel Y</identification>
</OpdrachtBevestiging>
```

#### initiatingTransactionMessageID {#sec:elem-initiatingTransactionMessageID}

```
initiatingTransactionMessageID : OPTIONAL STRING;
```

Reference to the message associated with a secondary transaction that
initiated the message.

#### initiatorToExecutor {#sec:elem-initiatorToExecutor}

```
initiatorToExecutor : BOOLEAN;
```

The direction of this specific message. Message level example:

```
<VoorbeeldBericht id="...">
    ...
    <initiatorToExecutor>false</initiatorToExecutor>
    ...
    <transaction>
        <VoorbeeldTransactie id="...">
            ...
            <initiator>
                <PersonInRole id="A">
                    ...
                </PersonInRole>
            </initiator>
            <executor>
                <PersonInRole id="B">
                    ...
                </PersonInRole>
            </executor>
        </VoorbeeldTransactie>
    </transaction>
  ...
</VoorbeeldBericht>
```

in the example above, the Sample Message is sent from B (executor
\[[\[sec:ref-executor\]](#sec:ref-executor){reference-type="ref"
reference="sec:ref-executor"}\]) to A (initiator
\[[\[sec:ref-initiator\]](#sec:ref-initiator){reference-type="ref"
reference="sec:ref-initiator"}\]).

#### language {#sec:elem-language}

```
language : OPTIONAL STRING;
```

The language of the attachment content.\
\
Message level example:

```
<... id="...">
  ...
  <language>NL</language>
  ...
</...>
```

#### name {#sec:elem-name}

```
name : STRING;
```

Naming.

#### number {#sec:elem-number}

```
number : INTEGER;
```

Transaction number.

#### objectCode {#sec:elem-objectCode}

```
objectCode : OPTIONAL STRING;
```

Possibility to establish a relationship with an external index. This
includes a work breakdown structure, work packages or specifications.

#### result {#sec:elem-result}

```
result : OPTIONAL STRING;
```

Result of this transaction, content is a string.

#### startDate []{#sec:elem-startDate label="sec:elem-startDate"} 

```
startDate : DATETIME;
startDate : OPTIONAL DATETIME; -- AppendixTemplate
```

Validity start date of specific object instance in this message.\
\
Message level example:

```
<... id="...">
    ...
    <startDate>2010-12-03</startDate>
    ...
</...>
```

#### state {#sec:elem-state}

```
state : OPTIONAL STRING;
```

Status in which this object instance is located.\
\
Message level example:

```
<... id="...">
    ...
    <state>active</state>
    ...
</...>
```

#### userLaMu {#sec:elem-userLaMu}

```
userLaMu : OPTIONAL STRING;
```

User who created or last modified this object instance (CAUTION: this is
not a reference to a PersonTypeInstance instance).\
\
Message level example:

```
<... id="...">
    ...
    <userLaMu>Peter Bonsma</userLaMu>
    ...
</...>
```

#### userName {#sec:elem-userName}

```
userName : STRING;
```

'Code name' of the user, such as a TRIGRAM.\
\
Message level example:

```
<... id="...">
    ...
    <userName>BAP</userName>
    ...
</...>
```

#### versionNo {#sec:elem-versionNo}

```
versionNo : STRING;
```

Version number of this object instance within this project, when an
adjustment is made to this object instance, this field also changes.\
\
Message level example:

```
<... id="...">
    ...
    <versionNo>23</versionNo>
    ...
</...>
```
