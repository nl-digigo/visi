## Systematics Part 2 Messages

### Templates

#### AppendixGroup {#sec:AppendixGroup}

**Attributes**: id
\[[\[sec:attr-id\]](#sec:attr-id){reference-type="ref"
reference="sec:attr-id"}\]\
**Elements**: state
\[[\[sec:elem-state\]](#sec:elem-state){reference-type="ref"
reference="sec:elem-state"}\], dateLaMu
\[[\[sec:elem-dateLaMu\]](#sec:elem-dateLaMu){reference-type="ref"
reference="sec:elem-dateLaMu"}\], userLaMu
\[[\[sec:elem-userLaMu\]](#sec:elem-userLaMu){reference-type="ref"
reference="sec:elem-userLaMu"}\]\
**References**: group
\[[\[sec:ref-group\]](#sec:ref-group){reference-type="ref"
reference="sec:ref-group"}\]

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

#### AppendixTemplate {#sec:AppendixTemplate}

**Attributes**: id
\[[\[sec:attr-id\]](#sec:attr-id){reference-type="ref"
reference="sec:attr-id"}\]\
**Elements**: name
\[[\[sec:elem-name\]](#sec:elem-name){reference-type="ref"
reference="sec:elem-name"}\], fileLocation
\[[\[sec:elem-fileLocation\]](#sec:elem-fileLocation){reference-type="ref"
reference="sec:elem-fileLocation"}\], fileType
\[[\[sec:elem-fileType\]](#sec:elem-fileType){reference-type="ref"
reference="sec:elem-fileType"}\], fileVersion
\[[\[sec:elem-fileVersion\]](#sec:elem-fileVersion){reference-type="ref"
reference="sec:elem-fileVersion"}\], documentIdentification
\[[\[sec:elem-documentIdentification\]](#sec:elem-documentIdentification){reference-type="ref"
reference="sec:elem-documentIdentification"}\], documentVersion
\[[\[sec:elem-documentVersion\]](#sec:elem-documentVersion){reference-type="ref"
reference="sec:elem-documentVersion"}\], documentReference
\[[\[sec:elem-documentReference\]](#sec:elem-documentReference){reference-type="ref"
reference="sec:elem-documentReference"}\], objectCode
\[[\[sec:elem-objectCode\]](#sec:elem-objectCode){reference-type="ref"
reference="sec:elem-objectCode"}\], startDate
\[[\[sec:elem-startDate\]](#sec:elem-startDate){reference-type="ref"
reference="sec:elem-startDate"}\], endDate
\[[\[sec:elem-endDate\]](#sec:elem-endDate){reference-type="ref"
reference="sec:elem-endDate"}\], state
\[[\[sec:elem-state\]](#sec:elem-state){reference-type="ref"
reference="sec:elem-state"}\], dateLaMu
\[[\[sec:elem-dateLaMu\]](#sec:elem-dateLaMu){reference-type="ref"
reference="sec:elem-dateLaMu"}\], userLaMu
\[[\[sec:elem-userLaMu\]](#sec:elem-userLaMu){reference-type="ref"
reference="sec:elem-userLaMu"}\], language
\[[\[sec:elem-language\]](#sec:elem-language){reference-type="ref"
reference="sec:elem-language"}\]\
**References**: message
\[[0.1.1.6](#sec:MessageTemplate){reference-type="ref"
reference="sec:MessageTemplate"}\], appendixGroup
\[[\[sec:ref-appendixGroup\]](#sec:ref-appendixGroup){reference-type="ref"
reference="sec:ref-appendixGroup"}\], template
\[[0.1.1.3](#sec:ComplexElementTemplate){reference-type="ref"
reference="sec:ComplexElementTemplate"}\]

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

#### ComplexElementTemplate {#sec:ComplexElementTemplate}

**Attributes**: id
\[[\[sec:attr-id\]](#sec:attr-id){reference-type="ref"
reference="sec:attr-id"}\]

```
ENTITY ComplexElementTemplate;
    template : SimpleElementVirtual;
END_ENTITY;
```

#### GroupTemplate

**Attributes**: id
\[[\[sec:attr-id\]](#sec:attr-id){reference-type="ref"
reference="sec:attr-id"}\]\
**Elements**: name
\[[\[sec:elem-name\]](#sec:elem-name){reference-type="ref"
reference="sec:elem-name"}\], description
\[[\[sec:elem-description\]](#sec:elem-description){reference-type="ref"
reference="sec:elem-description"}\], creationDate
\[[\[sec:elem-creationDate\]](#sec:elem-creationDate){reference-type="ref"
reference="sec:elem-creationDate"}\], startDate
\[[\[sec:elem-startDate\]](#sec:elem-startDate){reference-type="ref"
reference="sec:elem-startDate"}\], endDate
\[[\[sec:elem-endDate\]](#sec:elem-endDate){reference-type="ref"
reference="sec:elem-endDate"}\], state
\[[\[sec:elem-state\]](#sec:elem-state){reference-type="ref"
reference="sec:elem-state"}\], dateLaMu
\[[\[sec:elem-dateLaMu\]](#sec:elem-dateLaMu){reference-type="ref"
reference="sec:elem-dateLaMu"}\], userLaMu
\[[\[sec:elem-userLaMu\]](#sec:elem-userLaMu){reference-type="ref"
reference="sec:elem-userLaMu"}\], versionNo
\[[\[sec:elem-versionNo\]](#sec:elem-versionNo){reference-type="ref"
reference="sec:elem-versionNo"}\]\
**References**: transaction
\[[\[sec:ref-transaction\]](#sec:ref-transaction){reference-type="ref"
reference="sec:ref-transaction"}\]

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

#### MessageInTransactionTemplate {#sec:MessageInTransactionTemplate}

**Attributes**: id
\[[\[sec:attr-id\]](#sec:attr-id){reference-type="ref"
reference="sec:attr-id"}\]\
**Elements**: identification
\[[\[sec:elem-identification\]](#sec:elem-identification){reference-type="ref"
reference="sec:elem-identification"}\], dateSend
\[[\[sec:elem-dateSend\]](#sec:elem-dateSend){reference-type="ref"
reference="sec:elem-dateSend"}\], dateRead
\[[\[sec:elem-dateRead\]](#sec:elem-dateRead){reference-type="ref"
reference="sec:elem-dateRead"}\], state
\[[\[sec:elem-state\]](#sec:elem-state){reference-type="ref"
reference="sec:elem-state"}\], dateLaMu
\[[\[sec:elem-dateLaMu\]](#sec:elem-dateLaMu){reference-type="ref"
reference="sec:elem-dateLaMu"}\], userLaMu
\[[\[sec:elem-userLaMu\]](#sec:elem-userLaMu){reference-type="ref"
reference="sec:elem-userLaMu"}\], initiatorToExecutor
\[[\[sec:elem-initiatorToExecutor\]](#sec:elem-initiatorToExecutor){reference-type="ref"
reference="sec:elem-initiatorToExecutor"}\]

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

#### MessageTemplate {#sec:MessageTemplate}

**Attributes**: id
\[[\[sec:attr-id\]](#sec:attr-id){reference-type="ref"
reference="sec:attr-id"}\]\
**Elements**: identification
\[[\[sec:elem-identification\]](#sec:elem-identification){reference-type="ref"
reference="sec:elem-identification"}\], dateSend
\[\[[\[sec:elem-dateSend\]](#sec:elem-dateSend){reference-type="ref"
reference="sec:elem-dateSend"}\], dateRead
\[\[[\[sec:elem-dateRead\]](#sec:elem-dateRead){reference-type="ref"
reference="sec:elem-dateRead"}\], state
\[\[[\[sec:elem-state\]](#sec:elem-state){reference-type="ref"
reference="sec:elem-state"}\], dateLaMu
\[\[[\[sec:elem-dateLaMu\]](#sec:elem-dateLaMu){reference-type="ref"
reference="sec:elem-dateLaMu"}\], userLaMu
\[\[[\[sec:elem-userLaMu\]](#sec:elem-userLaMu){reference-type="ref"
reference="sec:elem-userLaMu"}\], initiatingTransactionMessageID
\[\[[\[sec:elem-initiatingTransactionMessageID\]](#sec:elem-initiatingTransactionMessageID){reference-type="ref"
reference="sec:elem-initiatingTransactionMessageID"}\],
initiatorToExecutor
\[\[[\[sec:elem-initiatorToExecutor\]](#sec:elem-initiatorToExecutor){reference-type="ref"
reference="sec:elem-initiatorToExecutor"}\]\
**References**: messageInTransaction
\[\[[\[sec:ref-messageInTransaction\]](#sec:ref-messageInTransaction){reference-type="ref"
reference="sec:ref-messageInTransaction"}\], transaction
\[\[[\[sec:ref-transaction\]](#sec:ref-transaction){reference-type="ref"
reference="sec:ref-transaction"}\], template
\[\[[0.1.1.3](#sec:ComplexElementTemplate){reference-type="ref"
reference="sec:ComplexElementTemplate"}\]

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

#### OrganisationTemplate {#sec:OrganisationTemplate}

**Attributes**: id
\[[\[sec:attr-id\]](#sec:attr-id){reference-type="ref"
reference="sec:attr-id"}\]\
**Elements**: name
\[[\[sec:elem-name\]](#sec:elem-name){reference-type="ref"
reference="sec:elem-name"}\], abbreviation
\[[\[sec:elem-abbreviation\]](#sec:elem-abbreviation){reference-type="ref"
reference="sec:elem-abbreviation"}\], state
\[[\[sec:elem-state\]](#sec:elem-state){reference-type="ref"
reference="sec:elem-state"}\], dateLaMu
\[[\[sec:elem-dateLaMu\]](#sec:elem-dateLaMu){reference-type="ref"
reference="sec:elem-dateLaMu"}\], userLaMu
\[[\[sec:elem-userLaMu\]](#sec:elem-userLaMu){reference-type="ref"
reference="sec:elem-userLaMu"}\]\
**References**: contactPerson
\[[\[sec:ref-contactPerson\]](#sec:ref-contactPerson){reference-type="ref"
reference="sec:ref-contactPerson"}\], template
\[[0.1.1.3](#sec:ComplexElementTemplate){reference-type="ref"
reference="sec:ComplexElementTemplate"}\]

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

#### PersonInRole {#sec:PersonInRole}

**Attributes**: id
\[[\[sec:attr-id\]](#sec:attr-id){reference-type="ref"
reference="sec:attr-id"}\]\
**Elements**: state
\[[\[sec:elem-state\]](#sec:elem-state){reference-type="ref"
reference="sec:elem-state"}\], dateLaMu
\[[\[sec:elem-dateLaMu\]](#sec:elem-dateLaMu){reference-type="ref"
reference="sec:elem-dateLaMu"}\], userLaMu
\[[\[sec:elem-userLaMu\]](#sec:elem-userLaMu){reference-type="ref"
reference="sec:elem-userLaMu"}\]\
**References**: successor
\[[\[sec:ref-successor\]](#sec:ref-successor){reference-type="ref"
reference="sec:ref-successor"}\], substituting
\[[\[sec:ref-substituting\]](#sec:ref-substituting){reference-type="ref"
reference="sec:ref-substituting"}\], contactPerson
\[[\[sec:ref-contactPerson\]](#sec:ref-contactPerson){reference-type="ref"
reference="sec:ref-contactPerson"}\], organisation
\[[\[sec:ref-organisation\]](#sec:ref-organisation){reference-type="ref"
reference="sec:ref-organisation"}\], role
\[[\[sec:ref-role\]](#sec:ref-role){reference-type="ref"
reference="sec:ref-role"}\]

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

#### PersonTemplate {#sec:PersonTemplate}

**Attributes**: id
\[[\[sec:attr-id\]](#sec:attr-id){reference-type="ref"
reference="sec:attr-id"}\]\
**Elements**: userName
\[[\[sec:elem-userName\]](#sec:elem-userName){reference-type="ref"
reference="sec:elem-userName"}\], name
\[[\[sec:elem-name\]](#sec:elem-name){reference-type="ref"
reference="sec:elem-name"}\], state
\[[\[sec:elem-state\]](#sec:elem-state){reference-type="ref"
reference="sec:elem-state"}\], dateLaMu
\[[\[sec:elem-dateLaMu\]](#sec:elem-dateLaMu){reference-type="ref"
reference="sec:elem-dateLaMu"}\], userLaMu
\[[\[sec:elem-userLaMu\]](#sec:elem-userLaMu){reference-type="ref"
reference="sec:elem-userLaMu"}\]\
**References**: template
\[[0.1.1.3](#sec:ComplexElementTemplate){reference-type="ref"
reference="sec:ComplexElementTemplate"}\]

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

#### ProjectTypeInstance {#sec:ProjectTypeInstance}

**Attributes**: id
\[[\[sec:attr-id\]](#sec:attr-id){reference-type="ref"
reference="sec:attr-id"}\]\
**Elements**: name
\[[\[sec:elem-name\]](#sec:elem-name){reference-type="ref"
reference="sec:elem-name"}\], description
\[[\[sec:elem-description\]](#sec:elem-description){reference-type="ref"
reference="sec:elem-description"}\], startDate
\[[\[sec:elem-startDate\]](#sec:elem-startDate){reference-type="ref"
reference="sec:elem-startDate"}\], endDate
\[[\[sec:elem-endDate\]](#sec:elem-endDate){reference-type="ref"
reference="sec:elem-endDate"}\], state
\[[\[sec:elem-state\]](#sec:elem-state){reference-type="ref"
reference="sec:elem-state"}\], dateLaMu
\[[\[sec:elem-dateLaMu\]](#sec:elem-dateLaMu){reference-type="ref"
reference="sec:elem-dateLaMu"}\], userLaMu
\[[\[sec:elem-userLaMu\]](#sec:elem-userLaMu){reference-type="ref"
reference="sec:elem-userLaMu"}\]\
**References**: template
\[[0.1.1.3](#sec:ComplexElementTemplate){reference-type="ref"
reference="sec:ComplexElementTemplate"}\]

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

#### RoleTemplate {#sec:RoleTemplate}

**Attributes**: id
\[[\[sec:attr-id\]](#sec:attr-id){reference-type="ref"
reference="sec:attr-id"}\]\
**Elements**: name
\[[\[sec:elem-name\]](#sec:elem-name){reference-type="ref"
reference="sec:elem-name"}\], description
\[[\[sec:elem-description\]](#sec:elem-description){reference-type="ref"
reference="sec:elem-description"}\], state
\[[\[sec:elem-state\]](#sec:elem-state){reference-type="ref"
reference="sec:elem-state"}\], dateLaMu
\[[\[sec:elem-dateLaMu\]](#sec:elem-dateLaMu){reference-type="ref"
reference="sec:elem-dateLaMu"}\], userLaMu
\[[\[sec:elem-userLaMu\]](#sec:elem-userLaMu){reference-type="ref"
reference="sec:elem-userLaMu"}\], category
\[[\[sec:elem-category\]](#sec:elem-category){reference-type="ref"
reference="sec:elem-category"}\]

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

#### TransactionPhaseTemplate {#sec:TransactionPhaseTemplate}

**Attributes**: id
\[[\[sec:attr-id\]](#sec:attr-id){reference-type="ref"
reference="sec:attr-id"}\]\
**Elements**: name
\[[\[sec:elem-name\]](#sec:elem-name){reference-type="ref"
reference="sec:elem-name"}\], description
\[[\[sec:elem-description\]](#sec:elem-description){reference-type="ref"
reference="sec:elem-description"}\], dateReached
\[[\[sec:elem-dateReached\]](#sec:elem-dateReached){reference-type="ref"
reference="sec:elem-dateReached"}\], state
\[[\[sec:elem-state\]](#sec:elem-state){reference-type="ref"
reference="sec:elem-state"}\], dateLaMu
[\[sec:elem-dateLaMu\]](#sec:elem-dateLaMu){reference-type="ref"
reference="sec:elem-dateLaMu"}\], userLaMu
\[[\[sec:elem-userLaMu\]](#sec:elem-userLaMu){reference-type="ref"
reference="sec:elem-userLaMu"}\]\
**References**: transaction
\[[\[sec:ref-transaction\]](#sec:ref-transaction){reference-type="ref"
reference="sec:ref-transaction"}\]

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

#### TransactionTemplate {#sec:TransactionTemplate}

**Attributes**: id
\[[\[sec:attr-id\]](#sec:attr-id){reference-type="ref"
reference="sec:attr-id"}\]\
**Elements**: number
\[[\[sec:elem-number\]](#sec:elem-number){reference-type="ref"
reference="sec:elem-number"}\], name
\[[\[sec:elem-name\]](#sec:elem-name){reference-type="ref"
reference="sec:elem-name"}\], description
\[[\[sec:elem-description\]](#sec:elem-description){reference-type="ref"
reference="sec:elem-description"}\], startDate
\[[\[sec:elem-startDate\]](#sec:elem-startDate){reference-type="ref"
reference="sec:elem-startDate"}\], endDate
\[[\[sec:elem-endDate\]](#sec:elem-endDate){reference-type="ref"
reference="sec:elem-endDate"}\], state
\[[\[sec:elem-state\]](#sec:elem-state){reference-type="ref"
reference="sec:elem-state"}\], dateLaMu
\[[\[sec:elem-dateLaMu\]](#sec:elem-dateLaMu){reference-type="ref"
reference="sec:elem-dateLaMu"}\], userLaMu
\[[\[sec:elem-userLaMu\]](#sec:elem-userLaMu){reference-type="ref"
reference="sec:elem-userLaMu"}\], result
\[[\[sec:elem-result\]](#sec:elem-result){reference-type="ref"
reference="sec:elem-result"}\]\
**References**: initiator
\[[\[sec:ref-initiator\]](#sec:ref-initiator){reference-type="ref"
reference="sec:ref-initiator"}\], executor
\[[\[sec:ref-executor\]](#sec:ref-executor){reference-type="ref"
reference="sec:ref-executor"}\]

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
