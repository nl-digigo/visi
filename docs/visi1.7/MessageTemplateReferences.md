### References

#### appendixGroup



```
appendixGroup : OPTIONAL AppendixGroup;
```

A subgrouping to which the specific attachment belongs.\
\
Message level example:

```
<Bijlage id="...">
  ...
  <appendixGroup>
    <AppendixGroup id="...">
      ...
    </AppendixGroup>
  </appendixGroup>
  ...
</Bijlage>
```

#### contactPerson



```
contactPerson : PersonTemplate;
```

The person linked to a PersonInRole \[1.8\] object or linked to a
specific organization. Example at message level (with an organization
chosen as a basis):

```
<Organisatie id="...">
  ...
  <contactPerson>
    <Persoon id="...">
      ...
    </Persoon>
  </contactPerson>
</Organisatie>
```

So in the associated framework there is an OrganizationType Organization
and a PersonType Person.

#### executor



```
executor : PersonInRole;
```

Which role filler is the executive.

#### group



```
group : OPTIONAL GroupTemplate;
```

The general group to which a set of attachments belong.\
\
Message level example:

```
<AppendixGroup id="...">
  ...
    <group>
        <Groep id="...">
            ...
        </Groep>
    </group>
  ...
</AppendixGroup>
```

#### Initiator



```
initiator : PersonInRole;
```

Which role filler is the initiator.

#### message



```
message : MessageTemplate;
```

The message to which a specific attachment belongs.\
\
Message level example:

```
<Bijlage id="...">
  ...
    <message>
        <Bericht id="...">
        ...
        </Bericht>
    </message>
  ...
</Bijlage>
```

There is therefore an AppendixType Attachment and a MessageType Message
in the associated framework.

#### messageInTransaction



```
messageInTransaction : MessageInTransactionTemplate;
```

Reference to the place the message occupies in the flow of the
transaction.

#### organisation



```
organisation : OrganisationTemplate;
```

The organization belonging to a PersonInRole \[1.8\] object.\
\
Message level example:

```
 
<PersonInRole id="...">
  ...
  <organisation>
    <Organisatie id="...">
      ...
    </Organisatie>
  </organisation>
  ...
</PersonInRole>
```

#### role



```
role : RoleTemplate;
```

Reference to a role that can be fulfilled by an organization on behalf
of a PersonTemplate (person).

#### substituting



```
substituting : OPTIONAL PersonInRole;
```

PersonInRole \[1.8\] on behalf of whom this PersonInRole can send
messages.

#### successor



```
successor : OPTIONAL PersonInRole;
```

Successor to another person in a specific role.

#### transaction



```
transaction : TransactionTemplate;
```

The transaction to which a specific group, message or transaction phase
belongs.\
\
Example at message level (with a message selected as the basis):

```
<Bericht id="...">
  ...
  <transaction>
    <Transactie id="...">
      ...
    </Transactie>
  </transaction>
  ...
</Bericht>
```

There is therefore a MessageType *Message* and a TransactionType
*Transaction* in the associated framework.
