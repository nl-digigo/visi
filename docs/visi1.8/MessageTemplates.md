## Systematics Part 2 Messages

### Templates

#### AppendixGroup

**Attributes**: id [[sec:attr-id]](#id)

**Elements**: state
[[[sec:elem-state]](#state), dateLaMu
[[[sec:elem-dateLaMu]](#datelamu), userLaMu
[[[sec:elem-userLaMu]](#userlamu)\
**References**: group
[[[sec:ref-group]](#group)

```
ENTITY AppendixGroup;
 state : STRING;
 dateLaMu : OPTIONAL DATETIME;
 userLaMu : OPTIONAL STRING;
 group : OPTIONAL GroupTemplate;
END_ENTITY;
```

The link table for the n:m relationship between attachments and groups.\
\
Simple example at message level:

```
<AppendixGroup id="BijlageGroep_1">
    <state>active</state>
    <dateLaMu>2011-02-04T00:00:00Z</dateLaMu>
    <userLaMu>bapa</userLaMu>
    <group>
        <StandardGroupType id="...">
            ...
        </StandardGroupType>
    </group>
</AppendixGroup>
```

Associated part of the framework:

```
<GroupType id="StandardGroupType">
    <description>Standaard groep</description>
    <startDate>2010-12-20T00:00:00Z</startDate>
    <endDate>2011-12-31T00:00:00Z</endDate>
    <state>active</state>
    <dateLaMu>2010-12-20T00:00:00Z</dateLaMu>
    <userLaMu>bapa</userLaMu>
</GroupType>
```

#### AppendixTemplate

**Attributes**: id
[[[sec:attr-id]](#id)\
**Elements**: name
[[[sec:elem-name]](#name), fileLocation
[[[sec:elem-fileLocation]](#filelocation), fileType
[[[sec:elem-fileType]](#filetype), fileVersion
[[[sec:elem-fileVersion]](#fileversion), documentIdentification
[[[sec:elem-documentIdentification]](#documentidentification), documentVersion
[[[sec:elem-documentVersion]](#documentversion), documentReference
[[[sec:elem-documentReference]](#documentreference), objectCode
[[[sec:elem-objectCode]](#objectcode), startDate
[[[sec:elem-startDate]](#startdate), endDate
[[[sec:elem-endDate]](#enddate), state
[[[sec:elem-state]](#state), dateLaMu
[[[sec:elem-dateLaMu]](#datelamu), userLaMu
[[[sec:elem-userLaMu]](#userlamu), language
[[[sec:elem-language]](#language)\
**References**: message
[[0.1.1.6](#messagetemplate), appendixGroup
[[[sec:ref-appendixGroup]](#appendixgroup), template
[[0.1.1.3](#complexelementtemplate)

```
ENTITY AppendixTemplate;
    name : STRING;
    fileLocation : STRING;
    fileType : STRING;
    fileVersion : STRING;
    documentIdentification : OPTIONAL STRING;
    documentVersion : OPTIONAL STRING;
    documentReference : OPTIONAL STRING;
    objectCode : OPTIONAL STRING;
    startDate : OPTIONAL DATETIME;
    endDate : OPTIONAL DATETIME;
    state : OPTIONAL STRING;
    dateLaMu : OPTIONAL DATETIME;
    userLaMu : OPTIONAL STRING;
    language : OPTIONAL STRING;
    message : MessageTemplate;
    appendixGroup : OPTIONAL AppendixGroup;
    template : ComplexElementTemplate;
END_ENTITY;
```

The linked files are registered here.\
\
Simple example at message level:

```
<Bijlage id="VoorbeeldDocument">
    <name>Voorbeeld</name>
    <fileLocation>\\srv-bouw\Public\project\docs\msword\</fileLocation>
    <fileType>application/msword</fileType>
    <fileVersion>2010</fileVersion>
    <documentIdentification>345899</documentIdentification>
    <documentVersion>1</documentVersion>
    <documentReference>FG783990</documentReference>
    <startDate>2011-02-04T00:00:00Z</startDate>
    <endDate>2011-12-31T00:00:00Z</endDate>
    <state>active</state>
    <dateLaMu>2011-02-04T00:00:00Z</dateLaMu>
    <userLaMu>bapa</userLaMu>
    <language>NL</language>
    <appendixGroup>
        <AppendixGroup id="...">
            ...
        </AppendixGroup>
    </appendixGroup>
</Bijlage>
```

Associated part of the framework:

```
<AppendixType id="Bijlage">
    <description>
        Standaard bijlage definitie (geen zelf gedefinieerde velden)
    </description>
    <startDate>2011-02-04T00:00:00Z</startDate>
    <endDate>2011-12-31T00:00:00Z</endDate>
    <state>active</state>
    <dateLaMu>2011-02-04T00:00:00Z</dateLaMu>
    <userLaMu>bapa</userLaMu>
    <language>NL</language>
</AppendixType>
```

#### ComplexElementTemplate

**Attributes**: id
[[[sec:attr-id]](#id)

```
ENTITY ComplexElementTemplate;
    template : SimpleElementVirtual;
END_ENTITY;
```

#### GroupTemplate

**Attributes**: id
[[[sec:attr-id]](#id)\
**Elements**: name
[[[sec:elem-name]](#name), description
[[[sec:elem-description]](#description), creationDate
[[[sec:elem-creationDate]](#creationdate), startDate
[[[sec:elem-startDate]](#startdate), endDate
[[[sec:elem-endDate]](#enddate), state
[[[sec:elem-state]](#state), dateLaMu
[[[sec:elem-dateLaMu]](#datelamu), userLaMu
[[[sec:elem-userLaMu]](#userlamu), versionNo
[[[sec:elem-versionNo]](#versionno)\
**References**: transaction
[[[sec:ref-transaction]](#transaction)

```
ENTITY GroupTemplate;
    name : STRING;
    description : STRING;
    creationDate : DATETIME;
    startDate : DATETIME;
    endDate : DATETIME;
    state : OPTIONAL STRING;
    dateLaMu : OPTIONAL DATETIME;
    userLaMu : OPTIONAL STRING;
    versionNo : STRING;
    transaction : TransactionTemplate;
END_ENTITY;
```

The group within which attachments of a message are placed for
retrieving the documents.\
\
Simple example at message level:

```
<StandardGroupType id="MenukaartAchtergronden">
    <name>Menukaart Plaatjes</name>
    <description>
        Een aantal achtergronden ter verfraaiing van de menukaart
    </description>
    <creationDate>2011-02-04T00:00:00Z</creationDate>
    <startDate>2011-02-04T00:00:00Z</startDate>
    <endDate>2011-12-31T00:00:00Z</endDate>
    <state>active</state>
    <dateLaMu>2011-02-04T00:00:00Z</dateLaMu>
    <userLaMu>bapa</userLaMu>
    <versionNo>1</versionNO>
    <transaction>
        <MenukaartVerkrijgenTransactie id="...">
            ...
        </MenukaartVerkrijgenTransactie>
    </transaction>
</StandardGroupType>
```

Associated part of the framework:

```
<GroupType id="StandardGroupType">
    <description>Standaard groep</description>
    <startDate>2010-12-20T00:00:00Z</startDate>
    <endDate>2011-12-31T00:00:00Z</endDate>
    <state>active</state>
    <dateLaMu>2010-12-20T00:00:00Z</dateLaMu>
    <userLaMu>bapa</userLaMu>
</GroupType>
<TransactionType id="MenukaartVerkrijgenTransactie">
    <description>
        De transactie om te komen tot het verkrijgen van de juiste Menukaart
    </description>
    <startDate>2011-01-23T00:00:00Z</startDate>
    <endDate>2011-12-31T00:00:00Z</endDate>
    <state>active</state>
    <dateLaMu>2011-01-23T00:00:00Z</dateLaMu>
    <userLaMu>bapa</userLaMu>
    <initiator>
        <RoleTypeRef idref="Consument"/>
    </initiator>
    <executor>
        <RoleTypeRef idref="Werknemer"/>
    </executor>
</TransactionType>
```

#### MessageInTransactionTemplate

**Attributes**: id
[[[sec:attr-id]](#id)\
**Elements**: identification
[[[sec:elem-identification]](#identification), dateSend
[[[sec:elem-dateSend]](#datesend), dateRead
[[[sec:elem-dateRead]](#dateread), state
[[[sec:elem-state]](#state), dateLaMu
[[[sec:elem-dateLaMu]](#datelamu), userLaMu
[[[sec:elem-userLaMu]](#userlamu), initiatorToExecutor
[[[sec:elem-initiatorToExecutor]](#initiatortoexecutor)

```
ENTITY MessageInTransactionTemplate;
    identification : STRING;
    dateSend : OPTIONAL DATETIME;
    dateRead : OPTIONAL DATETIME;
    state : OPTIONAL STRING;
    dateLaMu : OPTIONAL DATETIME;
    userLaMu : OPTIONAL STRING;
END_ENTITY;
```

This is the entity that makes it possible to include the actual
MessageInTransactionType in the message. This means that the position in
the workflow of a transaction can always be clearly identified.

#### MessageTemplate


**Attributes**: id
[[[sec:attr-id]](#id)]
**Elements**: identification
[[[sec:elem-identification]](#identification), dateSend
[[[[sec:elem-dateSend]](#datesend), dateRead
[[[[sec:elem-dateRead]](#dateread), state
[[[[sec:elem-state]](#state), dateLaMu
[[[[sec:elem-dateLaMu]](#datelamu), userLaMu
[[[[sec:elem-userLaMu]](#userlamu), initiatingTransactionMessageID
[[[[sec:elem-initiatingTransactionMessageID]](#initiatingtransactionmessageid),
initiatorToExecutor
[[[[sec:elem-initiatorToExecutor]](#initiatortoexecutor)\
**References**: messageInTransaction
[[[[sec:ref-messageInTransaction]](#messageintransaction), transaction
[[[[sec:ref-transaction]](#transaction), template
[[[0.1.1.3](#complexelementtemplate)

```
ENTITY MessageTemplate;
    identification : STRING;
    dateSend : DATETIME;
    dateRead : OPTIONAL DATETIME;
    state : OPTIONAL STRING;
    dateLaMu : OPTIONAL DATETIME;
    userLaMu : OPTIONAL STRING;
    initiatingTransactionMessageID : OPTIONAL STRING;
    initiatorToExecutor : BOOLEAN;
    messageInTransaction : MessageInTransactionTemplate;
    transaction : TransactionTemplate;
    template : ComplexElementTemplate;
END_ENTITY;
```

An instance of the MessageType. This is the entity that holds the actual
information exchange between OrganizationTemplate's \[1.7\]
(organizations). Simple example at message level:

```
<VerstrekkenVanMenukaartBericht id="a002">
    <identification>id a002</identification>
    <dateSend>2011-01-23T00:00:00Z</dateSend>
    <dateRead>2011-01-23T00:00:00Z</dateRead>
    <state>active</state>
    <dateLaMu>2011-01-23T00:00:00Z</dateLaMu>
    <userLaMu>bapa</userLaMu>
    <initiatingTransactionMessageID>
        a009
    </initiatingTransactionMessageID>
    <initiatorToExecutor>false</initiatorToExecutor>
    <messageInTransaction>
        <BerichtInTransactie12Ref idref="BiT001"/>
    </messageInTransaction>
    <transaction>
        <MenukaartVerkrijgenTransactie id="...">
            ...
        </MenukaartVerkrijgenTransactie>
    </transaction>
    <menukaart>
        <Menukaart id="...">
            ...
        </Menukaart>
            ...
        <Menukaart id="...">
            ...
        </Menukaart>
    </menukaart>
</VerstrekkenVanMenukaartBericht>
```

Associated part of the framework:

```
<TransactionType id="MenukaartVerkrijgenTransactie">
    <description>De transactie om te komen tot het verkrijgen van de juiste menukaart</description>
    <startDate>2011-01-23T00:00:00Z</startDate>
    <endDate>2011-12-31T00:00:00Z</endDate>
    <state>active</state>
    <dateLaMu>2011-01-23T00:00:00Z</dateLaMu>
    <userLaMu>bapa</userLaMu>
    <initiator>
        <RoleTypeRef idref="Consument"/>
    </initiator>
    <executor>
        <RoleTypeRef idref="Werknemer"/>
    </executor>
</TransactionType>
<MessageType id="VerstrekkenVanMenukaartBericht">
    <description>Bericht welke de menukaart bevat.</description>
    <startDate>2011-01-23T00:00:00Z</startDate>
    <endDate>2011-12-31T00:00:00Z</endDate>
    <state>active</state>
    <dateLaMu>2011-01-23T00:00:00Z</dateLaMu>
    <userLaMu>bapa</userLaMu>
    <complexElements>
        <ComplexElementTypeRef idref="Menukaart"/>
    </complexElements>
</MessageType>
<ComplexElementType id="Menukaart">
    <description>Kaart met aanwezige menu's</description>
    <startDate>2011-01-23T00:00:00Z</startDate>
    <endDate>2011-12-31T00:00:00Z</endDate>
    <state>active</state>
    <dateLaMu>2011-01-23T00:00:00Z</dateLaMu>
    <userLaMu>bapa</userLaMu>
    <elements>
        <SimpleElementTypeRef idref="MenukaartItems"/>
    </elements>
</ComplexElementType>
```

#### OrganisationTemplate

**Attributes**: id
[[[sec:attr-id]](#id)\
**Elements**: name
[[[sec:elem-name]](#name), abbreviation
[[[sec:elem-abbreviation]](#abbreviation), state
[[[sec:elem-state]](#state), dateLaMu
[[[sec:elem-dateLaMu]](#datelamu), userLaMu
[[[sec:elem-userLaMu]](#userlamu)\
**References**: contactPerson
[[[sec:ref-contactPerson]](#contactperson), template
[[0.1.1.3](#sec:complexelementtemplate)

```
ENTITY OrganisationTemplate;
    name : STRING;
    abbreviation: STRING;
    state : OPTIONAL STRING;
    dateLaMu : OPTIONAL DATETIME;
    userLaMu : OPTIONAL STRING;
    contactPerson : PersonTemplate;
    template : ComplexElementTemplate;
END_ENTITY;
```

The organisation that participates in the project by initiating or
executing a TransactionTemplate \[1.13\] (transaction).\
\
Simple example at message level:

```
<StandardOrganisationType id="TNO">
    <name>
        Nederlandse organisatie voor Toegepast Natuurwetenschappelijk Onderzoek
    </name>
    <abbreviation>TNO</abbreviation>
    <state>active</state>
    <dateLaMu>2011-01-23T00:00:00Z</dateLaMu>
    <userLaMu>bapa</userLaMu>
    <contactPerson>
        <StandardPersonType id="...">
            ...
        </StandardPersonType>
    </contactPerson>
</StandardOrganisationType>
```

Associated part of the framework:

```
<PersonType id="StandardPersonType">
    <description>Standaard persoons type</description>
    <startDate>2011-01-23T00:00:00Z</startDate>
    <endDate>2011-12-31T00:00:00Z</endDate>
    <state>active</state>
    <dateLaMu>2011-01-23T00:00:00Z</dateLaMu>
    <userLaMu>bapa</userLaMu>
</PersonType>
<OrganisationType id="StandardOrganisationType">
    <description>Standaard organisation type</description>
    <startDate>2011-01-23T00:00:00Z</startDate>
    <endDate>2011-12-31T00:00:00Z</endDate>
    <state>active</state>
    <dateLaMu>2011-01-23T00:00:00Z</dateLaMu>
    <userLaMu>bapa</userLaMu>
</OrganisationType>
```

#### PersonInRole

**Attributes**: id
[[[sec:attr-id]](#id)\
**Elements**: state
[[[sec:elem-state]](#state), dateLaMu
[[[sec:elem-dateLaMu]](#datelamu), userLaMu
[[[sec:elem-userLaMu]](#userlamu)\
**References**: successor
[[[sec:ref-successor]](#successor), substituting
[[[sec:ref-substituting]](#substituting), contactPerson
[[[sec:ref-contactPerson]](#contactperson), organisation
[[[sec:ref-organisation]](#organisation), role
[[[sec:ref-role]](#role)

```
ENTITY PersonInRole;
    state : OPTIONAL STRING;
    dateLaMu : OPTIONAL DATETIME;
    userLaMu : OPTIONAL STRING;
    successor : OPTIONAL PersonInRole;
    substituting : OPTIONAL PersonInRole;
    contactPerson : PersonTemplate;
    organisation : OrganisationTemplate;
    role : RoleTemplate;
END_ENTITY;
```

A person who fulfils a specific role for an organisation.\
\
Simple example at message level:

```
<PersonInRole id="KlaasAlsKlant">
    <state>active</state>
    <dateLaMu>2011-01-23T00:00:00Z</dateLaMu>
    <userLaMu>bapa</userLaMu>
    <contactPerson>
        <StandardPersonType id="...">
            ...
        </StandardPersonType>
    </contactPerson>
    <organisation>
        <StandardOrganisationType id="...">
            ...
        </StandardOrganisationType>
    </organisation>
    <role>
        <Consument idref="...">
            ...
        </Consument>
    </role>
</PersonInRole>
```

Associated part of the framework:

```
<PersonType id="StandardPersonType">
    <description>Standaard persoonstype</description>
    <startDate>2011-01-23T00:00:00Z</startDate>
    <endDate>2011-12-31T00:00:00Z</endDate>
    <state>active</state>
    <dateLaMu>2011-01-23T00:00:00Z</dateLaMu>
    <userLaMu>bapa</userLaMu>
</PersonType>
<OrganisationType id="StandardOrganisationType">
    <description>Standaard organisation type</description>
    <startDate>2011-01-23T00:00:00Z</startDate>
    <endDate>2011-12-31T00:00:00Z</endDate>
    <state>active</state>
    <dateLaMu>2011-01-23T00:00:00Z</dateLaMu>
    <userLaMu>bapa</userLaMu>
</OrganisationType>
<RoleType id="Consument">
    <description>Consumerend persoon</description>
    <startDate>2011-01-23T00:00:00Z</startDate>
    <endDate>2011-12-31T00:00:00Z</endDate>
    <state>active</state>
    <dateLaMu>2011-01-23T00:00:00Z</dateLaMu>
    <userLaMu>bapa</userLaMu>
</RoleType>
```

#### PersonTemplate

**Attributes**: id
[[[sec:attr-id]](#id)\
**Elements**: userName
[[[sec:elem-userName]](#username), name
[[[sec:elem-name]](#name), state
[[[sec:elem-state]](#state), dateLaMu
[[[sec:elem-dateLaMu]](#datelamu), userLaMu
[[[sec:elem-userLaMu]](#userlamu)\
**References**: template
[[0.1.1.3](#complexelementtemplate)

```
ENTITY PersonTemplate;
    userName : STRING;
    name : STRING;
    state : OPTIONAL STRING;
    dateLaMu : OPTIONAL DATETIME;
    userLaMu : OPTIONAL STRING;
    template : ComplexElementTemplate;
END_ENTITY;
```

The details of a person who participates in the project by fulfilling a
certain role or being a contact person for a certain organization.\
\
Simple example at message level:

```
<StandardPersonType id="PBonsma">
    <userName>bapa</userName>
    <name>Peter Bonsma</name>
    <state>active</state>
    <dateLaMu>2011-02-04T00:00:00Z</dateLaMu>
    <userLaMu>bapa</userLaMu>
</StandardPersonType>
```

Associated part of the framework:

```
<PersonType id="StandardPersonType">
    <description>Standaard persoons type</description>
    <startDate>2011-01-23T00:00:00Z</startDate>
    <endDate>2011-12-31T00:00:00Z</endDate>
    <state>active</state>
    <dateLaMu>2011-01-23T00:00:00Z</dateLaMu>
    <userLaMu>bapa</userLaMu>
</PersonType>
```

#### ProjectTypeInstance

**Attributes**: id
[[[sec:attr-id]](#id)\
**Elements**: name
[[[sec:elem-name]](#name), description
[[[sec:elem-description]](#description), startDate
[[[sec:elem-startDate]](#startdate), endDate
[[[sec:elem-endDate]](#enddate), state
[[[sec:elem-state]](#state), dateLaMu
[[[sec:elem-dateLaMu]](#datelamu), userLaMu
[[[sec:elem-userLaMu]](#userlamu)\
**References**: template
[[0.1.1.3](#complexelementtemplate)

```
ENTITY ProjectTypeInstance;
    name : STRING;
    description : STRING;
    startDate : DATETIME;
    endDate : DATETIME;
    state : OPTIONAL STRING;
    dateLaMu : OPTIONAL DATETIME;
    userLaMu : OPTIONAL STRING;
    template : ComplexElementTemplate;
END_ENTITY;
```

The project for which the communication has been created. The framework
partly determines (through the XML field) what we can and must enter
here. Simple example at message level:

```
<StandardProjectType id="VISI">
    <name>Het project VISI</name>
    <description>Formalisering van VISI Systematiek</description>
    <startDate>2011-02-04T00:00:00Z</startDate>
    <endDate>2011-12-31T00:00:00Z</endDate>
    <state>active</state>
    <dateLaMu>2011-02-04T00:00:00Z</dateLaMu>
    <userLaMu>bapa</userLaMu>
</StandardProjectType>
```

Associated part of the framework:

```
<ProjectType id="StandardProjectType">
    <description>Standaard project type</description>
    <startDate>2011-02-04T00:00:00Z</startDate>
    <endDate>2011-12-31T00:00:00Z</endDate>
    <state>active</state>
    <dateLaMu>2011-02-04T00:00:00Z</dateLaMu>
    <userLaMu>bapa</userLaMu>
</ProjectType>
```

#### RoleTemplate

**Attributes**: id
[[[sec:attr-id]](#id)\
**Elements**: name
[[[sec:elem-name]](#name), description
[[[sec:elem-description]](#description), state
[[[sec:elem-state]](#state), dateLaMu
[[[sec:elem-dateLaMu]](#datelamu), userLaMu
[[[sec:elem-userLaMu]](#userlamu), category
[[[sec:elem-category]](#category)

```
ENTITY RoleTemplate;
    name : STRING;
    description : STRING;
    state : OPTIONAL STRING;
    dateLaMu : OPTIONAL DATETIME;
    userLaMu : OPTIONAL STRING;
    category : OPTIONAL STRING;
END_ENTITY;
```

The role that can be fulfilled by an organization on behalf of a
PersonTemplate \[1.9\] (person).\
\
Simple example at message level:

```
<Consument id="Klant">
    <name>Rol als klant</name>
    <description>De rol als klant</description>
    <state>active</state>
    <dateLaMu>2011-01-23T00:00:00Z</dateLaMu>
    <userLaMu>bapa</userLaMu>
</Consument>
```

Associated part of the framework:

```
<RoleType id="Consument">
    <description>Consumerend persoon</description>
    <startDate>2011-01-23T00:00:00Z</startDate>
    <endDate>2011-12-31T00:00:00Z</endDate>
    <state>active</state>
    <dateLaMu>2011-01-23T00:00:00Z</dateLaMu>
    <userLaMu>bapa</userLaMu>
</RoleType>
```

#### TransactionPhaseTemplate

**Attributes**: id
[[[sec:attr-id]](#id)\
**Elements**: name
[[[sec:elem-name]](#name), description
[[[sec:elem-description]](#description), dateReached
[[[sec:elem-dateReached]](#datereached), state
[[[sec:elem-state]](#state), dateLaMu
[[sec:elem-dateLaMu]](#datelamu), userLaMu
[[[sec:elem-userLaMu]](#userlamu)\
**References**: transaction
[[[sec:ref-transaction]](#transaction)

```
ENTITY TransactionPhaseTemplate;
    name : STRING;
    description : STRING;
    dateReached : DATETIME;
    state : OPTIONAL STRING;
    dateLaMu : OPTIONAL DATETIME;
    userLaMu : OPTIONAL STRING;
    transaction : TransactionTemplate;
END_ENTITY;
```

The phase in which a transaction is or has been. Simple example at
message level:

```
<WachtenOpMenukaart id="tp003">
    <name>...</name>
    <description>Transaction Phase ...</description>
    <dateReached>2011-02-04T00:00:00Z</dateReached>
    <state>active</state>
    <dateLaMu>2011-02-04T00:00:00]]</dateLaMu>
    <userLaMu>bapa</userLaMu>
    <transaction>
        <MenukaartVerkrijgenTransactieRef idref="ta004"/>
    </transaction>
</WachtenOpMenukaart>
```

Associated part of the framework:

```
<TransactionType id="MenukaartVerkrijgenTransactie">
    <description>De transactie om te komen tot het verkrijgen van de juiste menukaart</description>
    <startDate>2011-01-23T00:00:00Z</startDate>
    <endDate>2011-12-31T00:00:00Z</endDate>
    <state>active</state>
    <dateLaMu>2011-01-23T00:00:00Z</dateLaMu>
    <userLaMu>bapa</userLaMu>
    <initiator>
        <RoleTypeRef idref="Consument"/>
    </initiator>
    <executor>
        <RoleTypeRef idref="Werknemer"/>
    </executor>
</TransactionType>
<TransactionPhaseType id="WachtenOpMenukaart">
    <description>Menukaart gevraagd maar nog niet gegeven</description>
    <startDate>2011-01-23T00:00:00Z</startDate>
    <endDate>2011-12-31T00:00:00Z</endDate>
    <state>active</state>
    <dateLaMu>2011-01-23T00:00:00Z</dateLaMu>
    <userLaMu>bapa</userLaMu>
</TransactionPhaseType>
```

#### TransactionTemplate

**Attributes**: id
[[[sec:attr-id]](#id)\
**Elements**: number
[[[sec:elem-number]](#number), name
[[[sec:elem-name]](#name), description
[[[sec:elem-description]](#description), startDate
[[[sec:elem-startDate]](#startdate), endDate
[[[sec:elem-endDate]](#enddate), state
[[[sec:elem-state]](#state), dateLaMu
[[[sec:elem-dateLaMu]](#datelamu), userLaMu
[[[sec:elem-userLaMu]](#userlamu), result
[[[sec:elem-result]](#result)\
**References**: initiator
[[[sec:ref-initiator]](#initiator), executor
[[[sec:ref-executor]](#executor)

```
ENTITY TransactionTemplate;
    number : INTEGER;
    name : STRING;
    description : STRING;
    startDate : DATETIME;
    endDate : DATETIME;
    state : OPTIONAL STRING;
    dateLaMu : OPTIONAL DATETIME;
    userLaMu : OPTIONAL STRING;
    result : OPTIONAL STRING;
    initiator : PersonInRole;
    executor : PersonInRole;
    project : ProjectTypeInstance;
END_ENTITY;
```

The transaction within which MessageTemplates \[1.6\] (messages) can be
sent in order to perform a task within a project. Simple example at
message level:

```
<MenukaartVerkrijgenTransactie id="DeTransactie">
    <number>001</number>
    <name>...</name>
    <description>...</description>
    <startDate>2011-01-23T00:00:00Z</startDate>
    <endDate>2011-01-23T00:00:00Z</endDate>
    <state>active</state>
    <dateLaMu>2011-01-23T00:00:00Z</dateLaMu>
    <userLaMu>bapa</userLaMu>
    <initiator>
        <PersonInRole id="...">
            ...
        </PersonInRole>
    </initiator>
    <executor>
        <PersonInRole id="...">
            ...
        </PersonInRole>
    </executor>
</MenukaartVerkrijgenTransactie>
```

Associated part of the framework:

```
<TransactionType id="MenukaartVerkrijgenTransactie">
    <description>De transactie om te komen tot het verkrijgen van de juiste menukaart</description>
    <startDate>2011-01-23T00:00:00Z</startDate>
    <endDate>2011-12-31T00:00:00Z</endDate>
    <state>active</state>
    <dateLaMu>2011-01-23T00:00:00Z</dateLaMu>
    <userLaMu>bapa</userLaMu>
    <initiator>
        <RoleTypeRef idref="Consument"/>
    </initiator>
    <executor>
        <RoleTypeRef idref="Werknemer"/>
    </executor>
</TransactionType>
```
