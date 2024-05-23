## Data Model

This chapter describes the VISI data model (metamodel). The metamodel
describes the concepts and relationships that make up VISI itself, i.e.
concepts such as transaction, role, message, intention, etc.\
\
We do not describe the concepts from concrete frameworks here because
they are built with the help of VISI for any desired situation.
Reference frameworks are described in the appendix. The metadata model
is given as an entity model with a description.\
\
Figure 12 shows the VISI data model. VISI has transaction types and
roles. Each message (type) has exactly 1 intention. For each transaction
type, all intentions associated with actions appear as shown in Table
3.\
\
There is no entity role type, even though that would be obvious. The
reason is that there are two role types, initiator and executor, and
each transaction type always has an initiator and an executor.
Therefore, the role types are modeled as relationships between role and
transaction type.\
\
There is no distinction between entity intent type resp. intent, because
the concept is the same for message type as for message.\
\
A transaction (type) can have dependent transaction (type)s, this is
shown with the relationship is (possibly) parent of.\
\
When a framework is going to be applied, the people and the role(s) they
will fulfill are defined. A person always belongs to an organization.
The transactions that will be executed are instances of one of the
transaction types. For each instance of a transaction, a person who can
have the role of initiator for the transaction type is appointed as the
initiator and a person who can have the role of executor for the
transaction type is appointed as the executor. The person with the role
of initiator is the sender of messages associated with initiator actions
from the complete transaction pattern and is the recipient of messages
sent by the person with the executor role in this transaction. Every
time the initiator or executor of a transaction sends a message, an
instance of the message with that intent is created and sent.
