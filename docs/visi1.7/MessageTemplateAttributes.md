### Attributes

#### id {#sec:attr-id}

Unique code that provides a reference to this object instance within a
given message. This reference can be used again later.\
\
Attribute 'id' is a specific definition in XML and is therefore subject
to more restrictions than 'normal' attribute values. For example, an ID
value cannot contain spaces and often no special characters. Also, an ID
value cannot start with a number. See also \[xml:id Version
1.0\](http://www.w3.org/TR/xml-id/).\
\
Example at message level: Piece of XML within a message (defines the
organisation TNO of the OrganisationType Research Institution):

    <Onderzoeksinstelling id="TNO">
        ...
    </Onderzoeksinstelling>

The following piece of XML within this same message can now refer to
TNO:

    <OnderzoeksinstellingRef idref="TNO"/>
