# Testprotocol

The scenarios below are figures prepared in Microsoft Visio 2003. The
source file is Scenarios.

## Test framework Pizzeria

The framework contains four transaction types:

-   t1_OpnameBestelling;

-   t2_VraagOberAanKok;

-   t3_OpdrachtKok;

-   t4_VraagKokAanKeukenhulp.

And four roles: Customer, Waiter, Cook and Kitchen Help.

![Testscenario Raamwerk met
keukenhulp](images/visiw8.1testscenarioframework.jpg){#fig:testscenarioframework
width="100%"}

### Scenario 1

*Goal*\
Testing of functionality for:

-   Starting a transaction.

-   Replying to a message.

-   Using different types of data fields.

![Scenario1](images/visiw8.2scenario1.png){#fig:scenario1 width="100%"}

*Description*\
\
Waiter A asks Customer K if he/she wants to see the card. When filling
in the question whether the customer wants to see the map, all different
Base Type fields are presented.\
\
Test if the following fields work as follows:

::: {#tab:my_label}
  Field         Function (The input must be\...)
  ------------- -------------------------------------------------------------------------------------------------------------------------
  Boolean       \... either a check box or 0 - 1 or true-false (required)
  Date          \... a date field or date picker (required)
  Date Time     \... a Date and time field or date and time picker (required)
  Time          \... a time field or time picker (required)
  Decimal       \... a number, with or without decimal values (required)
  Integer       \... an integer (required)
  Choice List   \... a field with checked input or drop-down list with the values \"Choice 1\", \"Choice 2\" or \"Choice 3\" (required)
  String        \... random characters can be entered (not required):
:::

Customer K answers the question with No.

### Scenario 2a

*Goal*\
Testing of functionality for:

-   Starting a (sub)transaction.

-   Returning to a (main) transaction.

![Scenario2a](images/visiw8.3scenario2a.png){#fig:scenario2a
width="100%"}

*Description*

1.  Waiter A asks Customer K if he/she wants to see the card. Customer K
    answers the question with Yes, and indicates which card he/she wants
    to see.

2.  Waiter A offers the menu that Customer K has requested. Waiter A
    cannot change the menu card type. Customer K receives the requested
    menu. Customer K places an order with Waiter A consisting of a table
    with the name of a dish per row and possibly an associated comment.

3.  Waiter A places the same order with Cook X and with Cook Y. Waiter A
    cannot adjust or supplement Customer K's order.

4.  Cook Y agrees to Waiter A. Cook Y cannot adjust or supplement Waiter
    A's order.

5.  Waiter A agrees to Customer K. Waiter A cannot adjust or supplement
    Cook Y's accord.

6.  After Waiter A has communicated to Customer K, Cook X still gives an
    agreement to Waiter A. Waiter A **cannot communicate anything** with
    the notification received from Cook X, so cannot communicate to Cook
    x or Customer K.

### Scenario 2c

ISSUE 134: Testscenario 2a en 2c gelijk ? Opmerking GS: Volgens mij is
de beschrijving van dit scenario gelijk aan Scenario 2A, het plaatje bij
dit scenario sluit wel beter aan bij de tekst

*Goal*\
Testing for the functionality for a) starting two (sub)transactions and
b) returning 1 (sub)transaction to the (main)transaction.

![Scenario2c](images/visiw8.4scenario2c.png){#fig:scenario2c
width="100%"}

*Description*

1.  Waiter A asks Customer K if he/she wants to see the menu.

2.  Customer K answers the question with Yes, and indicates which card
    he/she wants to see.

3.  Waiter A offers the menu that Customer K requested.

4.  Waiter A cannot change the menu card type. Customer K receives the
    requested menu.

5.  Customer K places an order with Waiter A consisting of a table with
    the name of a dish per row and possibly an associated comment.

6.  Waiter A places the same order with Cook X and with Cook Y. Waiter A
    cannot adjust or supplement Customer K's order.

7.  Cook Y gives Waiter A an agreement.

8.  Cook Y cannot adjust or supplement Waiter A's order.

9.  Waiter A gives Customer K an agreement.

10. Waiter A cannot adjust or supplement Cook Y's agreement.

11. After Waiter A has communicated to Customer K, Cook X still a
    non-agreement to Ober A.

12. Waiter A cannot communicate at all with the message received from
    Cook X, i.e. cannot communicate with Cook X or Customer K.

### Scenario 3a

*Goal*\
Testing of functionality for:

-   Starting a certain type of (sub)transaction.

-   Returning to the (main)transaction.

-   Starting the same type of (sub)transaction again.

![Scenario3a](images/visiw8.5scenario3a.png){#fig:scenario3a
width="100%"}

*Description*

1.  Waiter A asks Customer K if he/she wants to see the card. Customer K
    answers the question with Yes, and indicates which card he/she wants
    to see.

2.  Waiter A offers the menu that Customer K has requested. Waiter A
    cannot change the menu type *not*. Customer K receives the requested
    menu.

3.  Customer K places an order with Waiter A consisting of a table with
    the name of a dish per row and possibly an associated comment.

4.  Waiter A places the same order with Cook X. Waiter A cannot adjust
    or supplement Customer K's order.

5.  Cook X disagrees with About NA. Cook X cannot adjust or supplement
    Waiter A's order.

6.  Waiter A disapproves of Customer K. Waiter A cannot adjust or
    supplement Cook X's disagreement.

7.  Customer K places a completely new order with Waiter A, consisting
    of a table with the name of a dish per row and possibly an
    associated comment. (Customer K can fill in the entire table.)

8.  Waiter A places the same order with Cook Y. Waiter A cannot adjust
    or supplement Customer K's order.

9.  Cook Y agrees to Waiter A. Cook Y cannot adjust or supplement Waiter
    A's order.

10. Waiter A agrees to Customer K. Waiter A cannot adjust or supplement
    Cook Y's accord.

### Scenario 3b

*Goal*\
Testing of functionality for:

-   Starting a certain type of (sub) transaction.

-   Returning to the (main) transaction.

-   Multiple messages in the main transaction.

-   Start the same type of (sub) transaction again.

![Scenario3b](images/visiw8.6scenario3b.png){#fig:scenario3b
width="100%"}

*Description*

1.  Waiter A asks Customer K if he/she wants to see the card. Customer K
    answers the question with Yes, and indicates which card he/she wants
    to see.

2.  Waiter A offers the menu that Customer K has requested. Waiter A
    cannot change the menu card type. Customer K receives the requested
    menu.

3.  Customer K places an order with Waiter A consisting of a table with
    the name of a dish per row and possibly an associated comment.

4.  Waiter A places the same order with Cook X. Waiter A cannot adjust
    or supplement Customer K's order.

5.  Cook X gives Waiter A a disagreement. Cook X cannot adjust or
    supplement Waiter A's order.

6.  Waiter A gives Customer K a disagreement. Waiter A cannot adjust or
    supplement Cook X's disagreement.

7.  Customer K asks Waiter A a question.

8.  Waiter A answers Customer K's question. (In the answer, Waiter A
    cannot adjust Customer K's question.)

9.  Customer K places a completely new order with Waiter A, consisting
    of a table with the name of a dish per row and possibly an
    associated comment. (Customer K can fill in the entire table.)

10. Waiter A places the same order with Cook Y. Waiter A cannot adjust
    or supplement Customer K's order.

11. Cook Y agrees to Waiter A. Cook Y cannot adjust or supplement Waiter
    A's order.

12. Waiter A agrees to Customer K. Waiter A cannot adjust or supplement
    Cook Y's accord.

### Scenario 4a

*Goal*\
Testing of functionality for: ElementConditions.

![Scenario4a](images/visiw8.7scenario4a.png){#fig:scenario4a
width="100%"}

*Description*

1.  Waiter A asks Customer K if he/she wants to see the card. Customer K
    answers the question with Yes, and indicates which card he/she wants
    to see.

2.  Waiter A offers the menu that Customer K has requested. Waiter A
    cannot change the menu card type. Customer K receives the requested
    menu.

3.  Customer K asks Waiter A a question.

4.  Waiter A answers Customer K's question. (In the answer, Waiter A
    cannot adjust Customer K's question.)

5.  Customer K places a completely new order with Waiter A, consisting
    of a table with the name of a dish per row and possibly an
    associated comment. (Customer K can fill in the entire table.)

6.  Waiter A places the same order with Cook X. Waiter A cannot adjust
    or supplement Customer K's order.

7.  Cook X agrees to Waiter A. Cook X cannot adjust or supplement Waiter
    A's order.

8.  Waiter A agrees to Customer K. Waiter A cannot adjust or supplement
    Cook X's accord.

### Scenario 4b

*Goal*\
Testing of functionality for: ElementConditions.

![Scenario4b](images/visiw8.8scenario4b.png){#fig:scenario4b
width="100%"}

*Description*

1.  Waiter A asks Customer K if he/she wants to see the card. Customer K
    answers the question with Yes, and indicates which card he/she wants
    to see.

2.  Waiter A offers the menu that Customer K has requested. Waiter A
    cannot change the menu card type. Customer K receives the requested
    menu.

3.  Customer K asks Waiter A a question.

4.  Waiter A answers Customer K's question. (In the answer, Waiter A
    cannot adjust Customer K's question.)

5.  Customer K asks a second question to Waiter A. (In the question,
    Customer K cannot fill in the question, because in the framework
    ElementCondition has no value for condition!!!)

6.  Waiter A answers Customer K's question. (In the answer, Waiter A
    cannot adjust Customer K's question.)

7.  Customer K places a completely new order with Waiter A, consisting
    of a table with the name of a dish per row and possibly an
    associated comment. (Customer K can fill in the entire table.)

8.  Waiter A places the same order with Cook X. Waiter A cannot adjust
    or supplement Customer K's order.

9.  Cook X agrees to Over NA. Cook X cannot adjust or supplement Waiter
    A's order.

10. Waiter A agrees to Customer K. Waiter A cannot adjust or supplement
    Cook X's accord.

### Scenario 4c

*Goal*\
Testing of functionality for: ElementConditions.

![Scenario4c](images/visiw8.9scenario4c.png){#fig:scenario4c
width="100%"}

*Description*

1.  Waiter A asks Customer K if he/she wants to see the card. Customer K
    answers the question with Yes, and indicates which card he/she wants
    to see.

2.  Waiter A offers the menu that Customer K has requested. Waiter A
    cannot change the menu card type. Customer K receives the requested
    menu.

3.  Customer K asks Waiter A a question.

4.  Waiter A answers Customer K's question. (In the answer, Waiter A
    cannot adjust Customer K's question.)

5.  Customer K asks a second question to Waiter A. (In the question,
    Customer K cannot fill in the question, because in the framework
    ElementCondition has no value for condition!!!)

6.  Waiter A answers Customer K's question. (In the answer, Waiter A
    cannot adjust Customer K's question.)

7.  Customer K asks a third question to Waiter A. (In the question,
    Customer K cannot fill in the question, because in the framework
    theElementCondition has no value for condition!!!)

8.  Waiter A answers Customer K's question. (In the answer, Waiter A
    cannot adjust Customer K's question.)

9.  Customer K places a completely new order with Waiter A, consisting
    of a table with the name of a dish per row and possibly an
    associated comment. (Customer K can fill in the entire table.)

10. Waiter A places the same order with Cook X. Waiter A cannot adjust
    or supplement Customer K's order.

11. Cook X agrees to Waiter A. Cook X cannot adjust or supplement Waiter
    A's order.

12. Waiter A agrees to Customer K. Waiter A cannot adjust or supplement
    Cook X's accord.

### Scenario 5a

*Goal*\
Testing of functionality for:

-   ElementConditions

-   openSecondaryTransactionsAllowed

![Scenario5a](images/visiw8.10scenario5a.png){#fig:scenario5a
width="100%"}

*Description*

1.  Waiter A asks Customer K if he/she wants to see the card. Customer K
    answers the question with Yes, and indicates which card he/she wants
    to see.

2.  Waiter A offers the menu that Customer K has requested. Waiter A
    cannot change the menu card type. Customer K receives the requested
    menu.

3.  Customer K asks Waiter A a question.

4.  Waiter A asks Cook Z a question. (In the question, Waiter A cannot
    adjust the question.)

5.  Cook Z answers Waiter A's question. (In the answer, Cook Z cannot
    adjust Waiter A's question.)

6.  Waiter A answers Customer K's question. (In the answer, Waiter A
    cannot adjust Cook Z's answer.)

7.  Customer K places a completely new order with Waiter A, consisting
    of a table with the name of a dish per row and possibly an
    associated comment. (Customer K can fill in the entire table.)

8.  Waiter A places the same order with Cook X. Waiter A cannot adjust
    or supplement Customer K's order.

9.  Cook X agrees to Waiter A. Cook X cannot adjust or supplement Waiter
    A's order.

10. Waiter A agrees to Customer K. Waiter A cannot adjust or supplement
    Cook X's accord.

### Scenario 5b

*Goal*\
Testing of functionality for:

-   ElementConditions

-   openSecondaryTransactionsAllowed

![Scenario5b](images/visiw8.11scenario5b.png){#fig:scenario5b
width="100%"}

*Description*

1.  Waiter A asks Customer K if he/she wants to see the card. Customer K
    answers the question with Yes, and indicates which card he/she wants
    to see.

2.  Waiter A offers the menu that Customer K has requested. Waiter A
    cannot change the menu card type. Customer K receives the requested
    menu.

3.  Customer K asks Waiter A a question.

4.  Waiter A asks Cook Y and Z a question. (In the question, Waiter A
    cannot adjust the question.)

5.  Cook Y answers Waiter A's question. (In the answer, Cook Y cannot
    adjust Waiter A's question.)

6.  Waiter A answers Customer K's question. (In the answer, Waiter A
    cannot adjust Cook Y's answer.)

7.  After Waiter A has communicated to Customer K, Cook Z still gives an
    answer to Waiter A. Waiter A cannot communicate at all with the
    notification received from Cook Z, so cannot communicate to Cook Z
    or Customer K.

8.  Customer K places a completely new order with Waiter A, consisting
    of a table with the name of a dish per row and possibly an
    associated comment. (Customer K can fill in the entire table.)

9.  Waiter A places the same order with Cook X. Waiter A cannot adjust
    or supplement Customer K's order.

10. Cook X agrees to Waiter A. Cook X cannot adjust or supplement Waiter
    A's order.

11. Waiter A agrees to Customer K. Waiter A cannot adjust or supplement
    Cook X's chord.

### Scenario 5c

*Goal*\
Testing of functionality for:

-   ElementConditions

-   openSecondaryTransactionsAllowed

![Scenario5c](images/visiw8.12scenario5c.png){#fig:scenario5c
width="100%"}

*Description*

1.  Waiter A asks Customer K if he/she wants to see the card. Customer K
    answers the question with Yes, and indicates which card he/she wants
    to see.

2.  Waiter A offers the menu that Customer K has requested. Waiter A
    cannot change the menu card type. Customer K receives the requested
    menu.

3.  Customer K asks Waiter A a question.

4.  Waiter A asks Cook Y and Z a question. (In the question, Waiter A
    cannot adjust the question.)

5.  Cook Y answers Waiter A's question. (In the answer, Cook Y cannot
    adjust Waiter A's question.)

6.  Waiter A answers Customer K's question. (In the answer, Waiter A
    cannot adjust Cook Y's answer.)

7.  Customer K asks a second question to Waiter A. (In the question,
    Customer K cannot fill in the question, because in the framework
    ElementCondition has no value for condition!!!)

8.  Waiter A asks Cook Y and Z a second question. (In the question,
    Waiter A cannot adjust the question.)

9.  Cook Z answers the first question from Waiter A. Waiter A cannot
    communicate at all with the notification received from Cook Z, so
    cannot communicate with Cook Z or Customer K.

10. Cook Z answers Waiter A's second question. (In the answer, Cook Z
    cannot adjust Waiter A's question.)

11. Waiter A answers Customer K's question. (In the answer, Waiter A
    cannot adjust Cook Z's answer.)

12. After Waiter A has communicated to Customer K, Cook Y still answers
    Waiter A to the second question. Waiter A cannot communicate at all
    with the notification received from Cook Y, so cannot communicate
    with Cook Y or Customer K.

13. Customer K places a completely new order with Waiter A, consisting
    of a table with the name of a dish per row and possibly an
    associated comment. (Customer K can fill in the entire table.)

14. Waiter A places the same order with Cook X. Waiter A cannot adjust
    or supplement Customer K's order.

15. Cook X agrees to Waiter A. Cook X cannot adjust or supplement Waiter
    A's order.

16. Waiter A agrees to Customer K. Waiter A cannot adjust or supplement
    Cook X's accord.

### Scenario 5d

*Goal*\
Testing of functionality for:

-   ElementConditions

-   openSecondaryTransactionsAllowed

![Scenario5d](images/visiw8.13scenario5d.png){#fig:scenario5d
width="100%"}

*Description*

1.  Waiter A asks Customer K if he/she wants to see the card. Customer K
    answers the question with Yes, and indicates which card he/she wants
    to see.

2.  Waiter A offers the menu that Customer K has requested. Waiter A
    cannot change the menu card type. Customer K receives the requested
    menu.

3.  Customer K asks Waiter A a question.

4.  Waiter A asks Cook Y and Z a question. (In the question, Waiter A
    cannot adjust the question.)

5.  The answer from Cook Y and Z is not forthcoming. Waiter A answers
    Customer K's question. (In the answer, Waiter A cannot adjust
    Customer K's question.)

6.  Customer K asks a second question to Waiter A. (In the question,
    Customer K cannot fill in the question, because in the framework
    ElementCondition has no value for condition!!!)

7.  Waiter A asks Cook Y and Z a second question. (In the question,
    Waiter A cannot adjust the question.)

8.  Cook Y answers Waiter A's first question. Waiter A cannot
    communicate at all with the notification received from Cook Y, so
    cannot communicate with Cook Y or Customer K.

9.  Cook Z answers the first question from Waiter A. Waiter A cannot
    communicate at all with the notification received from Cook Z, so
    cannot communicate with Cook Z or Customer K.

10. Cook Y answers Waiter A's second question. (In the answer, Cook Y
    cannot adjust Waiter A's question.)

11. Waiter A answers Customer K's question. (In the answer, Waiter A
    cannot adjust Cook Y's answer.)

12. After Waiter A has communicated to Customer K, Cook Z still answers
    Waiter A to the second question. Waiter A cannot communicate at all
    with the notification received from Cook Z, so cannot communicate
    with Cook Z or Customer K.

13. Customer K places a completely new order with Waiter A, consisting
    of a table with the name of a dish per row and possibly an
    associated comment. (Customer K can fill in the entire table.)

14. Waiter A places the same order with Cook X. Waiter A cannot adjust
    or supplement Customer K's order.

15. Cook X agrees to Waiter A. Cook X cannot adjust or supplement Waiter
    A's order.

16. Waiter A agrees to Customer K. Waiter A cannot adjust or supplement
    Cook X's accord.

### Scenario 6a

*Goal*\
Testing of functionality for: A (main)transaction with two layers of
(sub)transactions.

![Scenario6a](images/visiw8.14scenario6a.jpg){#fig:scenario6a
width="100%"}

*Description*

1.  Waiter A asks Customer K if he/she wants to see the card. Customer K
    answers the question with Yes, and indicates which card he/she wants
    to see.

2.  Waiter A offers the menu that Customer K has requested. Waiter A
    cannot change the menu card type. Customer K receives the requested
    menu.

3.  Customer K asks Waiter A a question.

4.  Waiter A asks Cook Y a question. (In the question, Waiter A cannot
    adjust the question.)

5.  Cook Y asks two kitchen helpers. (Kitchen Help N and Kitchen Help O)

6.  Kitchen help N answers Cook Y.

7.  Kitchen help O answers Cook Y.

8.  Cook Y answers Waiter A when he has received answers from Kitchen
    Help N and/or O.

9.  Waiter A then answers Customer K.

10. Customer K is satisfied with the answer and places his/her order
    with Waiter A.

11. Waiter A places the order with Cook X.

12. Cook X asks Kitchen Help P if he/she can look up the recipe.

13. Kitchen help P looks up the recipe and answers Cook X.

14. Cook X now has the recipe and can agree to Waiter A.

15. Waiter A confirms the order to Customer K.

ISSUE 135: testscenario pizzeria 7a varianten Te testen varianten
(voorstel Michon Maas):

### Scenario 6a - Variant 1 (initiation with internal transaction within one party)

Initiation process from internal transaction. This can be achieved
through a specific division of roles between different
suppliers/parties. Fulfillment of roles:

1.  Role Waiter A implemented by supplier X

2.  Role Customer K implemented by supplier X

3.  Role Cook Y implemented by supplier X

4.  Role Kitchen help N en O implemented by supplier Y

### Scenario 6a - Variant 2 (initiatie met interne transactie op raakvlak partij)

Initiation process from the interface between suppliers/parties.
Fulfillment of roles:

1.  Role Waiter A implemented by supplier X

2.  Role Customer K implemented by supplier Y

3.  Role Cook Y implemented by supplier Y

4.  Role Kitchen help N en O implemented by supplier Y

### Scenario 6a - Variant 3 (initiatie met interne transactie over drie partijen)

Process with multiple linked transactions across three
suppliers/parties. Fulfillment of roles:

1.  Role Waiter A implemented by supplier X

2.  Role Customer K implemented by supplier Y

3.  Role Cook Y implemented by supplier Y

4.  Role Kitchen help N en O implemented by supplier Z

### Scenario 7a

*Goal*\
Testing of functionality for: the correct operation of message sequence
(sendBefore en sendAfter)\
\
*Description*

-   The waiter sends an order to the cook (T3).

    -   Only 1 of the present cooks may be chosen here.

    -   The waiter is not allowed to send another order to the cook
        after this.

```{=html}
<!-- -->
```
-   The cook sends a question to the kitchen helper (T4). This can be
    based on the request of the waiter (T2), or the order of the waiter
    (T3).

```{=html}
<!-- -->
```
-   The kitchen helper sends an answer in T4. The cook should now be
    able to choose from the following options:

    -   If it was based on a question from the waiter(T2) he can choose
        from:

        -   Forward the answer to the waiter in T2.

        -   Ask a new question in T4.

        -   Report that the answer is not used in T4.

    -   If it was based on an order from the waiter, he can choose from:

        -   Agree or disagree message to the waiter in T3.

        -   Ask a new question in T4.

        -   Report that the answer is not used in T4.

```{=html}
<!-- -->
```
-   Once the cook has sent a reply to the waiter in T2 or T3:

    -   Can the cook no longer send a new question to the kitchen helper
        in T4.

    -   Can he only send 1 closing message to the kitchen helper in T4
        each time. This message corresponds to the message that went to
        the waiter in T2 or T3.

### Scenario 8

*Goal*\
Testing of functionality for: Define the number of rows in a table.
(minOccurs/maxOccurs on child CE)\
*Description*

-   Transaction only (T1)

    -   Waiter sends the question to the customer if he wants to see the
        menu.

    -   Customer answers \"Yes\".

    -   Waiter sends the message \"Menu card\".

        -   At the table Menu card; test that no more than 3 can be
            filled in and that it can be sent empty.

    -   Customer replies with \"Order\".

        -   At the table \"Content of the order\"; test that 1 or more
            lines must be filled in and that empty sending should not be
            possible.

        -   Test at the table \"Content of drinks order\" that it is
            mandatory to fill in 1 line and that empty or more than 1
            line is not allowed.

### Scenario 9

*Goal*\
Testing of functionality for: the mandatory inclusion of an appendix for
a message type (appendixMandatory).

![Scenario9](images/visiw8.15scenario9.png){#fig:scenario9 width="100%"}

*Description*

1.  Waiter A asks Customer K if he/she wants to see the card. Customer K
    answers the question with Yes, and indicates which card he/she wants
    to see.

2.  Waiter A offers the menu that Customer K has requested, WITHOUT
    attachment.

3.  Waiter A can NOT offer the menu to Customer K, because he forgot to
    add an attachment.

4.  Waiter A then offers the menu that Customer K has requested, WITH an
    attachment.

5.  Waiter A can offer the menu to Customer K, because he has added an
    attachment.

6.  Customer K receives menu card with attachment.

### Scenario 10

*Goal*\
Testing of functionality for: Element conditions in tables (Ce normal /
CE parent / CE Child); Sys 1.6 and higher\
*Description*

-   The waiter offers the menu.

-   Customer says \"yes\".

-   Waiter completes the menu card message as follows:

    -   Menu card (top table, check that this name \"Menu card\" of the
        CE is legible).

        -   Fill in 2 lines, all cells must contain values.

    -   Daily menu (middle table, check that this name \"Daily menu\" of
        the CE is legible).

        -   Fill in 2 lines, all cells must contain values.

    -   Drinks card (bottom table table, check that this name \"Drinks
        card\" from the CE is legible).

        -   Fill in 2 lines, all cells must contain values.

-   Customer responds with the message \"question\";

    -   In the \"Menu card\" table you check:

        -   Whether the name of the CE \"Menu card\" is visible.

        -   The values in the column Description and Price must be
            adjustable, the first column is not adjustable. \[Naam
            default fixed / Omschr; se free in deze parent ce (5)/Prijs
            se free in child ce (3)\]

        -   No lines can be deleted or added.

        -   Empty the bottom cell \"Description\" in preparation for the
            next check.

    -   In the \"Daily menu\" table you check:

        -   Whether the name of the CE "Daily Menu" is visible.

        -   Only the Name column is still filled and can be edited. The
            other 2 columns are empty. \[Parent CE dagmenu EMPTY
            (4)/Naam se FREE in mitt, parent, child, se(15)/Prijs free
            in child (3)\]

        -   Rules can be removed or added.

    -   In the "Drink card" table you check:

        -   Whether the name of the CE "Drinks card" is visible.

        -   The name and description columns are editable, the price
            column is not editable. \[FREE op parent en child CE (6) /
            fixed op parent ce, child CE en SE prijs (7)\]

        -   No lines can be deleted or added.

    -   Send the message.

-   Waiter responds with "Reply" message.

    -   Check:

        -   No lines can be removed or added \[FREE on child and parent
            in wrong order so not a valid condition. Menu content must
            be parent and menu must be child for this condition to work.
            (n/a)\]

### Scenario 11

*Goal*\
Testing for no-ascii symbols in:

-   Description of elements (SimpleElementType, ComplexElementType,
    MessageType, TransactionType)

-   Enumeratie (UserDefiniedType).

*Description*\
Waiter A starts a new transaction and sends a message to Customer K. In
the message, Waiter A enters the value \"eaiou with circumflexes:
êâîôû\" for element \"Enumeration/Selection List\".\
*Result*\
To Waiter A, elements are shown in the message with $>$ and & and € in
the description. The Enumeration/Picklist element shows a list including
êâîôûëäïöü$<$\"$\mu$\@ç€.\
\
Customer K receives a message with element \"Enumeration/Picklist\" the
value \"eaiou with circumflexes: êâîôû\".

## Reading archived VISI project

*Goal*\
Testing for: reading a file that complies with the guidelines for
archiving VISI projects.\
*Description*\
The file is read into the application without manual pre-processing. It
is up to you how this is read and by whom.\
Met een nabewerking worden openstaande transacties worden geadresseerd
aan\
Wat te doen met soap servers? Deze moeten eigenlijk aangepast worden om
de communicatie verder te kunnen laten lopen.\
*Result*\
The system has read all information from the file, namely: a)
transactions, messages, attachments, b) frameworks, c) project-specific
messages.\
The system can continue open transactions.\
*Sample Data*\
Files can be requested from Elisabeth Kloren.

## Archiving and reactivating projects

*Scenario 1*

-   Archive a VISI Project.

-   Import the archived VISI Project into another VISI environment.

-   Compare the original project with the rebuilt project.

*Result*

-   The content of both projects, including frameworks, project specific
    messages, transactions, messages, attachments etc must be exactly
    the same.

-   Possibly after adjustment of the soap address, communication with
    the project must be possible.

## Archiving of a VISI project

*Goal*\
Testing for: creating a file that complies with the guidelines for
archiving VISI projects.\
*Description*\
A project is archived (from the application). It is up to you how this
\"archive\" is created and by whom.\
The project must have the following properties:

-   Transaction with a subject longer than 256 characters.

-   Transaction with non-alphanumeric characters in the subject.

-   Attachment with a name longer than 256 characters.

*Result*\
The system has written out information from the project, namely: all a)
transactions, messages, attachments, b) frameworks, c) project-specific
messages. The structuring of the data is in accordance with the
guideline.\
\
Special consideration should be given to non-ascii characters in the
subject of a transaction, which are not allowed in Microsoft Windows
directory names (for example /: ). These characters must appear in the
directory names as spaces.

## HTTPS check

The project-specific message is provided with a SOAP Server with http.\
*Expected result*\
The project-specific message is not read/rejected.\
*Sample Data*\
The project-specific message
\"projectspecifiekberichttotenmetbericht_6.xml\".

## Large attachments

A zip file of 10GB is attached to a message. This message is sent to
another server via soap.\
*Expected result*\
The message with the attachment is sent correctly, the attachment can be
extracted on the other server and the files extracted from the zip are
readable.\
*Sample Data*\
A zip file can be created on the spot.

## HTTPS requirement

*Goal*\
Testing for: enforcing secure communications\
*Description*

1.  The project-specific message of an existing project is modified. The
    soap server address is changed from https:// to http://.

2.  The adjusted project-specific message is read into the application.

*Expected result*\
The application rejects the project specific message, and the xml file
is not read/activated.\
*Sample Data*\
The project-specific message
\"projectspecifiekberichttotenmetbericht_6.xml\".

## Attachments $>$`<!-- -->`{=html}2GB

*Goal*\
Testing for: sending and receiving attachments larger than 2GB and
smaller than 10GB.\
*Description*

1.  A 9.9 GB zip file is attached to a new message. The zip file
    contains at least one PDF.

2.  The message is sent and goes via the soap protocol to an external
    server.

3.  The message is received on the remote server. And the message
    contains the zip file as the attachment.

*Expected result*\
The attachment is a zip file and can be extracted on the remote server.
The file sizes on the sending and receiving server are the same (in
bytes). The PDF file extracted from the zip has the same size (in bytes)
on both servers. Also, the PDF file can be opened on the receiving
server with an application, and the content corresponds to the PDF file
on the sending server.\
*Sample Data*\
Prior to running the test scenario, a zip file can be compiled with at
least 1 PDF file.

## Test scenarios meta framework

### Scenario A.1 (meta framework)

*Goal*\
Testing of functionality for: initiating a project with the meta
framework.\
*Prerequisite*\
VISI Project met meta-raamwerk & meta-projectspecifiek bericht raamwerk
projectspecifiek bericht

![ScenarioA1](images/visiw8.16scenarioa1.png){#fig:scenarioA1
width="100%" height="16cm"}

*Description*\
Project initiator offers Project executor a proposal for a new VISI
project with a new framework and project-specific message as
attachments. Project executor answers the proposal with acceptance of
the new VISI project. Project initiator confirms project initiation to
Project executor. Project executor reports back to Project initiator
that the project has been set up.\
End\
*Expected result*\
\...

## Scenario A.2 (meta framework)

*Goal*\
Testing of functionality for: ending a project with the meta framework.\
*Prerequisite*\
VISI Project met meta-raamwerk & meta-projectspecifiek bericht VISI
Project met raamwerk & projectspecifiek bericht

![ScenarioA2](images/visiw8.17scenarioa2.png){#fig:scenarioA2
width="100%"}

*Description*\
Project initiator offers Project executor a proposal for a new VISI
project with a new framework and project-specific message as
attachments. Project executor answers the proposal with acceptance of
the new VISI project. Project initiator confirms project initiation to
Project executor. Project executor reports back to Project initiator
that the project has been set up.\
End\
*Expected result*\
\...

## Scenario B (meta framework)

*Goal*\
Testing of functionality for: updating an existing project with the meta
framework.\
*Prerequisite*\
VISI Project met meta-raamwerk & meta-projectspecifiek bericht VISI
Project met raamwerk & projectspecifiek bericht gewijzigd raamwerk
gewijzigd projectspecifieke bericht

![ScenarioB](images/visiw8.18scenariob.png){#fig:scenarioB width="100%"
height="18.5cm"}

*Description*\
Change initiator offers VISI Communication Manager a proposal for
changing an existing VISI project with an amended framework and a
modified project-specific message as attachments. VISI Communication
Manager answers the proposal with approval. Change initiator confirms
the proposed change by proposing an effective date and time to VISI
Communicator. VISI Communicator answers the proposal with agreement.
Change initiator confirms the effective date and time.\
End\
*Expected result*\
\...

## Visi werk sessie 16 mei 2023

### Test sets Jos

Jos heeft niet de B&S software gebruikt om niet hun fouten mee te nemen.
eigen raamwerk software gebruikt 1.6. Kan gewoon querries op los worden
gelaten. om testset te maken om goed te kunnen zien wat er ingesteld
staat. per stap van de test een overzicht nodig voor: wat was het vorige
bericht, waar staan we, hoeveel rijen zijn er, wat is het max, welke
types zitter er in? per bericht genoteerd welke content er in dat
bericht zit. en wat je nodig hebt om te kunnen zien of het fucntioneert.
alle informatie die in het raarmwerk zit kunnen afbeelden per bericht.
zie rapportage van access. een hoop paginas, maar voor het testen moet
je echt gaan zitten

#### elementCondition

initieel bericht kun je alle waardes invullen bij vervolg bericht kan
dit niet 2 nieuwe berichten types gedefineerd: initieel en kopie om dit
op te lossen? before en after conditities

spreadsheet uit de mail kan niet alle informatie bevatten (char limit)
userdefine type, staat een hele lijst van plaatsnamen die mogelijk zijn
in, dat vind excel te veel.

scenario7, is herschreven door jos, gaat die bespreken met arne om te
kijken of dit terrecht is.

Documentatie: oude visio versie gebruikt om te upgraden naar nieuwere
versie.

auditor: iemand van iso ter certificering gebruiken ipv tno. maar
hierbij is waarschijnlijk wel een

zou jezelf als developer moeten testen of je nog voldoet als je
aanpassingen doet in je software.

soap aanvullingen in mail zetten Jeroen heeft unit tests voor
aanpassingen. software ontwikkelaar doet dit zelf ook. functionele
testen worden geregistreerd, wij gebruiken teec2, jeroen nog excel.

tessa loopt nog tegen scenario11 aan.

documentatie: mag een bericht zonder complex en zonder simpleElement en
complexelement bestaan?

## Testscenario archiveren en weer activeren van projecten

\_\_Scenario 1\_\_ - Archiveer een VISI-Project; - Importeer het
gearchiveerde VISI-Project in een andere VISI-omgeving; - Vergelijk het
originele project met het opnieuw opgebouwde project.

\_\_Testresultaat:\_\_ - De inhoud van beide projecten, inclusief
raamwerken, project specifieke berichten, transacties, berichten,
bijlagen etc moet exact gelijk zijn. - Eventueel na aanpassing van het
soap adres moet communicatie met het project mogelijk zijn

## Testscenario's

\<div class=\"wikidoc\"\> \<p\>De figuren van onderstaande scenario's
zijn opgesteld in Microsoft Visio 2003. Het bronbestand is: \<a
href=\"https://github.com/bimloket/visi/blob/master/WIKI%20docs/Testscenario's_Scenarios_vsd.zip\"\>
Scenarios_vsd.zip\</a\>\</p\> \<h2\>VISI-raamwerk\</h2\> \<p\>\<span
style=\"font-size:10pt\"\>Het raamwerk bevat vier
transactietypen:\</span\>\</p\> \<p\>- t1_OpnameBestelling;\<br\> -
t2_VraagOberAanKok;\<br\> - t3_OpdrachtKok;\<br\> -
t4_VraagKokAanKeukenhulp.\</p\> \<p\>En vier rollen: Klant, Ober, Kok en
Keukenhulp.\</p\> \<p\>\<img
src=\"https://github.com/bimloket/visi/blob/master/WIKI%20docs/Testscenario's_Raamwerkmetkeukenhulp.jpg\"
alt=\"\"\>\</p\> \<p\>&nbsp;\</p\> \<h2\>&nbsp;\</h2\> \<h2\>Scenario
1\</h2\> \<p\>\<strong\>\<strong\>Doel:\</strong\>\</strong\>\</p\>
\<p\>Testen op de functionaliteit voor \<br\> a) het starten van een
transactie\<br\> b) het beantwoorden van een bericht\<br\> c) het
gebruik van verschillende soorten gegevensvelden\</p\>
\<p\>\<strong\>Figuur:\</strong\>\</p\> \<p\>\<strong\>\<img
src=\"https://github.com/bimloket/visi/blob/master/WIKI%20docs/Testscenario's_Scenario_1.gif\"
alt=\"\"\>\<br\> \</strong\>\</p\>
\<p\>\<strong\>Beschrijving:\</strong\>\</p\> \<ul\> \<li\>Ober A vraagt
aan Klant K of hij/zij de kaart wil zien. \</li\>\<li\>Bij het invullen
van de vraag of de klant de kaart wil zien, worden alle verschillende
Base Type velden aangeboden. \</li\>\<li\>Test of de volgende velden als
volgt werken: \<ul\> \<li\>Boolean \<ul\> \<li\>Hier moet een vinkjes
veldje&nbsp; of 0 - 1 of true-false of waar-onwaar staan (verplicht)
\</li\>\</ul\> \</li\>\<li\>Date / Datum \<ul\> \<li\>Een datum moet
ingevoerd worden (verplicht) \</li\>\</ul\> \</li\>\<li\>Datetime /
Datum en tijd \<ul\> \<li\>Datum en tijd moeten ingevuld worden
(verplicht) \</li\>\</ul\> \</li\>\<li\>Time / Tijd \<ul\> \<li\>Een
tijdstip moet ingevoerd worden (verplicht) \</li\>\</ul\>
\</li\>\<li\>Decimal / Decimaal \<ul\> \<li\>Een getal, al dan niet met
decimale waarden moet ingevoerd worden (verplicht) \</li\>\</ul\>
\</li\>\<li\>Integer / Geheel getal \<ul\> \<li\>Een geheel getal moet
ingevoerd worden (verplicht) \</li\>\</ul\> \</li\>\<li\>Keuzelijst
\<ul\> \<li\>Een van de waarden &quot;Keuze 1&quot;, &quot;Keuze 2&quot;
of &quot;Keuze 3&quot; moet ingevoerd worden (verplicht) \</li\>\</ul\>
\</li\>\<li\>String / Vrije tekst \<ul\> \<li\>Willekeurige tekens
kunnen ingevoerd worden (niet verplicht) \</li\>\</ul\> \</li\>\</ul\>
\</li\>\<li\>Klant K beantwoordt de vraag met Nee.&nbsp; \</li\>\</ul\>
\<p\>\<br\> Einde\</p\>

\<h2\>Scenario 3a\</h2\> \<p\>\<strong\>Doel:\</strong\>\</p\>
\<p\>Testen op de functionaliteit voor het starten van een bepaald type
(sub)transactie, terugkeren naar de (hoofd)transactie, en weer starten
van hetzelfde type (sub)transactie.\</p\>
\<p\>\<strong\>Figuur:\</strong\>\</p\> \<p\>\<img
src=\"https://github.com/bimloket/visi/blob/master/WIKI%20docs/Testscenario's_Scenario_3a\_-\_serie.gif\"
alt=\"\"\>\</p\> \<p\>\<strong\>Beschrijving:\</strong\>\<br\> Ober A
vraagt aan Klant K of hij/zij de kaart wil zien. Klant K beantwoordt de
vraag met Ja, en geeft aan welke kaart hij/zij wil zien. \<br\> Ober A
biedt de menukaart aan die Klant K gevraagd heeft. Ober A kan het
menukaarttype \<em\>niet\</em\> wijzigen. Klant K krijgt de gevraagde
menukaart. \<br\> Klant K plaatst een bestelling bij Ober A bestaande
uit een tabel met per rij de naam van een gerecht en eventueel een
bijbehorende opmerking. \<br\> Ober A plaatst dezelfde bestelling bij
Kok X. Ober A kan de bestelling van Klant K niet aanpassen, en ook niet
aanvullen. \<br\> Kok X geeft Ober A een niet akkoord. Kok X kan de
bestelling van Ober A niet aanpassen, en ook niet aanvullen. \<br\> Ober
A geeft Klant K een niet akkoord. Ober A kan het niet akkoord van Kok X
niet aanpassen, en ook niet aanvullen. \<br\> Klant K plaatst een
compleet nieuwe bestelling bij Ober A bestaande uit een tabel met per
rij de naam van een gerecht en eventueel een bijbehorende opmerking.
(Klant K kan de gehele tabel invullen.) \<br\> Ober A plaatst dezelfde
bestelling bij Kok Y. Ober A kan de bestelling van Klant K niet
aanpassen, en ook niet aanvullen. \<br\> Kok Y geeft Ober A een akkoord.
Kok Y kan de bestelling van Ober A niet aanpassen, en ook niet
aanvullen. \<br\> Ober A geeft Klant K een akkoord. Ober A kan het
akkoord van Kok Y niet aanpassen, en ook niet aanvullen. \<br\>
Einde.\</p\> \<h2\>Scenario 3b\</h2\>
\<p\>\<strong\>Doel:\</strong\>\</p\> \<p\>Testen op de functionaliteit
voor het starten van een bepaald type (sub)transactie, terugkeren naar
de (hoofd)transactie, meerdere berichten in de hoofdtransactie, en weer
starten van hetzelfde type (sub)transactie.\</p\>
\<p\>\<strong\>Figuur:\</strong\>\</p\> \<p\>\<strong\>\<img
src=\"https://github.com/bimloket/visi/blob/master/WIKI%20docs/Testscenario's_Scenario_3b\_-\_serie.gif\"
alt=\"\"\>\<br\> \</strong\>\</p\>
\<p\>\<strong\>Beschrijving:\</strong\>\<br\> Ober A vraagt aan Klant K
of hij/zij de kaart wil zien. Klant K beantwoordt de vraag met Ja, en
geeft aan welke kaart hij/zij wil zien. \<br\> Ober A biedt de menukaart
aan die Klant K gevraagd heeft. Ober A kan het menukaarttype
\<em\>niet\</em\> wijzigen. Klant K krijgt de gevraagde menukaart.
\<br\> Klant K plaatst een bestelling bij Ober A bestaande uit een tabel
met per rij de naam van een gerecht en eventueel een bijbehorende
opmerking. \<br\> Ober A plaatst dezelfde bestelling bij Kok X. Ober A
kan de bestelling van Klant K niet aanpassen, en ook niet aanvullen.
\<br\> Kok X geeft Ober A een niet akkoord. Kok X kan de bestelling van
Ober A niet aanpassen, en ook niet aanvullen. \<br\> Ober A geeft Klant
K een niet akkoord. Ober A kan het niet akkoord van Kok X niet
aanpassen, en ook niet aanvullen. \<br\> Klant K stelt Ober A een vraag.
\<br\> Ober A beantwoordt de vraag van Klant K. (In de beantwoording kan
Ober A de vraag van Klant K \<em\>niet\</em\> aanpassen.) \<br\> Klant K
plaatst een compleet nieuwe bestelling bij Ober A bestaande uit een
tabel met per rij de naam van een gerecht en eventueel een bijbehorende
opmerking. (Klant K kan de gehele tabel invullen.) \<br\> Ober A plaatst
dezelfde bestelling bij Kok Y. Ober A kan de bestelling van Klant K niet
aanpassen, en ook niet aanvullen. \<br\> Kok Y geeft Ober A een akkoord.
Kok Y kan de bestelling van Ober A niet aanpassen, en ook niet
aanvullen. \<br\> Ober A geeft Klant K een akkoord. Ober A kan het
akkoord van Kok Y niet aanpassen, en ook niet aanvullen. \<br\>
Einde.\</p\> \<h2\>Scenario 4a\</h2\>
\<p\>\<strong\>Doel:\</strong\>\</p\> \<p\>Testen op de functionaliteit
voor ElementConditions.\</p\> \<p\>\<strong\>Figuur:\</strong\>\</p\>
\<p\>\<strong\>\<img
src=\"https://github.com/bimloket/visi/blob/master/WIKI%20docs/Testscenario's_Scenario_4a\_-\_no_loop.gif\"
alt=\"\"\>\<br\> \</strong\>\</p\>
\<p\>\<strong\>Beschrijving:\</strong\>\<br\> Ober A vraagt aan Klant K
of hij/zij de kaart wil zien. Klant K beantwoordt de vraag met Ja, en
geeft aan welke kaart hij/zij wil zien. \<br\> Ober A biedt de menukaart
aan die Klant K gevraagd heeft. Ober A kan het menukaarttype
\<em\>niet\</em\> wijzigen. Klant K krijgt de gevraagde menukaart.
\<br\> Klant K stelt een vraag aan Ober A. \<br\> Ober A beantwoordt de
vraag van Klant K. (In de beantwoording kan Ober A de vraag van Klant K
\<em\>niet\</em\> aanpassen.) \<br\> Klant K plaatst een compleet nieuwe
bestelling bij Ober A bestaande uit een tabel met per rij de naam van
een gerecht en eventueel een bijbehorende opmerking. (Klant K kan de
gehele tabel invullen.) \<br\> Ober A plaatst dezelfde bestelling bij
Kok X. Ober A kan de bestelling van Klant K niet aanpassen, en ook niet
aanvullen. \<br\> Kok X geeft Ober A een akkoord. Kok X kan de
bestelling van Ober A niet aanpassen, en ook niet aanvullen. \<br\> Ober
A geeft Klant K een akkoord. Ober A kan het akkoord van Kok X niet
aanpassen, en ook niet aanvullen. \<br\> Einde.\</p\> \<h2\>Scenario
4b\</h2\> \<p\>\<strong\>Doel:\</strong\>\</p\> \<p\>Testen op de
functionaliteit voor ElementConditions.\</p\>
\<p\>\<strong\>Figuur:\</strong\>\</p\> \<p\>\<strong\>\<img
src=\"https://github.com/bimloket/visi/blob/master/WIKI%20docs/Testscenario's_Scenario_4b\_-\_loop.gif\"
alt=\"\"\>\<br\> \</strong\>\</p\>
\<p\>\<strong\>Beschrijving:\</strong\>\<br\> Ober A vraagt aan Klant K
of hij/zij de kaart wil zien. Klant K beantwoordt de vraag met Ja, en
geeft aan welke kaart hij/zij wil zien. \<br\> Ober A biedt de menukaart
aan die Klant K gevraagd heeft. Ober A kan het menukaarttype
\<em\>niet\</em\> wijzigen. Klant K krijgt de gevraagde menukaart.
\<br\> Klant K stelt een vraag aan Ober A. \<br\> Ober A beantwoordt de
vraag van Klant K. (In de beantwoording kan Ober A de vraag van Klant K
\<em\>niet\</em\> aanpassen.) \<br\> Klant K stelt een tweede vraag aan
Ober A. (In de vraagstelling kan Klant K een nieuwe vraag invullen,
omdat in het raamwerk de ElementCondition Empty heeft!!!) \<br\> Ober A
beantwoordt de vraag van Klant K. (In de beantwoording kan Ober A de
vraag van Klant K \<em\>niet\</em\> aanpassen.) \<br\> Klant K plaatst
een compleet nieuwe bestelling bij Ober A bestaande uit een tabel met
per rij de naam van een gerecht en eventueel een bijbehorende opmerking.
(Klant K kan de gehele tabel invullen.) \<br\> Ober A plaatst dezelfde
bestelling bij Kok X. Ober A kan de bestelling van Klant K niet
aanpassen, en ook niet aanvullen. \<br\> Kok X geeft Ober A een akkoord.
Kok X kan de bestelling van Ober A niet aanpassen, en ook niet
aanvullen. \<br\> Ober A geeft Klant K een akkoord. Ober A kan het
akkoord van Kok X niet aanpassen, en ook niet aanvullen. \<br\>
Einde.\</p\> \<h2\>Scenario 4c\</h2\>
\<p\>\<strong\>Doel:\</strong\>\</p\> \<p\>Testen op de functionaliteit
voor ElementConditions.\</p\> \<p\>\<strong\>Figuur:\</strong\>\</p\>
\<p\>\<strong\>\<img
src=\"https://github.com/bimloket/visi/blob/master/WIKI%20docs/Testscenario's_Scenario_4c\_-\_loop.gif\"
alt=\"\"\>\<br\> \</strong\>\</p\>
\<p\>\<strong\>Beschrijving:\</strong\>\<br\> Ober A vraagt aan Klant K
of hij/zij de kaart wil zien. Klant K beantwoordt de vraag met Ja, en
geeft aan welke kaart hij/zij wil zien. \<br\> Ober A biedt de menukaart
aan die Klant K gevraagd heeft. Ober A kan het menukaarttype
\<em\>niet\</em\> wijzigen. Klant K krijgt de gevraagde menukaart.
\<br\> Klant K stelt een vraag aan Ober A. \<br\> Ober A beantwoordt de
vraag van Klant K. (In de beantwoording kan Ober A de vraag van Klant K
\<em\>niet\</em\> aanpassen.) \<br\> Klant K stelt een tweede vraag aan
Ober A. (In de vraagstelling kan Klant K een nieuwe vraag invullen,
omdat in het raamwerk de ElementCondition Empty heeft!!!) \<br\> Ober A
beantwoordt de vraag van Klant K. (In de beantwoording kan Ober A de
vraag van Klant K \<em\>niet\</em\> aanpassen.) \<br\> Klant K stelt een
derde vraag aan Ober A. (In de vraagstelling kan Klant K de vraag
\<em\>niet\</em\> invullen, omdat in het raamwerk de ElementCondition
\<em\>geen\</em\> waarde voor condition heeft!!!) \<br\> Ober A
beantwoordt de vraag van Klant K. (In de beantwoording kan Ober A de
vraag van Klant K \<em\>niet\</em\> aanpassen.) \<br\> Klant K plaatst
een compleet nieuwe bestelling bij Ober A bestaande uit een tabel met
per rij de naam van een gerecht en eventueel een bijbehorende opmerking.
(Klant K kan de gehele tabel invullen.) \<br\> Ober A plaatst dezelfde
bestelling bij Kok X. Ober A kan de bestelling van Klant K niet
aanpassen, en ook niet aanvullen. \<br\> Kok X geeft Ober A een akkoord.
Kok X kan de bestelling van Ober A niet aanpassen, en ook niet
aanvullen. \<br\> Ober A geeft Klant K een akkoord. Ober A kan het
akkoord van Kok X niet aanpassen, en ook niet aanvullen. \<br\>
Einde.\</p\> \<h2\>Scenario 5a\</h2\>
\<p\>\<strong\>Doel:\</strong\>\</p\> \<p\>Testen op de functionaliteit
voor ElementConditions &amp; openSecondaryTransactionsAllowed.\</p\>
\<p\>\<strong\>Figuur:\</strong\>\</p\> \<p\>\<strong\>\<img
src=\"https://github.com/bimloket/visi/blob/master/WIKI%20docs/Testscenario's_Scenario_5a\_-\_serie.gif\"
alt=\"\"\>\<br\> \</strong\>\</p\>
\<p\>\<strong\>Beschrijving:\</strong\>\<br\> Ober A vraagt aan Klant K
of hij/zij de kaart wil zien. Klant K beantwoordt de vraag met Ja, en
geeft aan welke kaart hij/zij wil zien. \<br\> Ober A biedt de menukaart
aan die Klant K gevraagd heeft. Ober A kan het menukaarttype
\<em\>niet\</em\> wijzigen. Klant K krijgt de gevraagde menukaart.
\<br\> Klant K stelt een vraag aan Ober A. \<br\> Ober A stelt een vraag
aan Kok Z. (In de vraagstelling kan Ober A de vraag \<em\>niet\</em\>
aanpassen.) \<br\> Kok Z beantwoordt de vraag van Ober A. (In de
beantwoording kan Kok Z de vraag van Ober A \<em\>niet\</em\>
aanpassen.) \<br\> Ober A beantwoordt de vraag van Klant K. (In de
beantwoording kan Ober A het antwoord van Kok Z \<em\>niet\</em\>
aanpassen.) \<br\> Klant K plaatst een compleet nieuwe bestelling bij
Ober A bestaande uit een tabel met per rij de naam van een gerecht en
eventueel een bijbehorende opmerking. (Klant K kan de gehele tabel
invullen.) \<br\> Ober A plaatst dezelfde bestelling bij Kok X. Ober A
kan de bestelling van Klant K niet aanpassen, en ook niet aanvullen.
\<br\> Kok X geeft Ober A een akkoord. Kok X kan de bestelling van Ober
A niet aanpassen, en ook niet aanvullen. \<br\> Ober A geeft Klant K een
akkoord. Ober A kan het akkoord van Kok X niet aanpassen, en ook niet
aanvullen. \<br\> Einde.\</p\> \<h2\>Scenario 5b\</h2\>
\<p\>\<strong\>Doel:\</strong\>\</p\> \<p\>Testen op de functionaliteit
voor ElementConditions &amp; openSecondaryTransactionsAllowed.\</p\>
\<p\>\<strong\>Figuur:\</strong\>\</p\> \<p\>\<strong\>\<img
src=\"https://github.com/bimloket/visi/blob/master/WIKI%20docs/Testscenario's_Scenario_5b\_-\_parallel\_-\_no_loop.gif\"
alt=\"\"\>\<br\> \</strong\>\</p\>
\<p\>\<strong\>Beschrijving:\</strong\>\<br\> Ober A vraagt aan Klant K
of hij/zij de kaart wil zien. Klant K beantwoordt de vraag met Ja, en
geeft aan welke kaart hij/zij wil zien. \<br\> Ober A biedt de menukaart
aan die Klant K gevraagd heeft. Ober A kan het menukaarttype
\<em\>niet\</em\> wijzigen. Klant K krijgt de gevraagde menukaart.
\<br\> Klant K stelt een vraag aan Ober A. \<br\> Ober A stelt een vraag
aan Kok Y en Z. (In de vraagstelling kan Ober A de vraag \<em\>
niet\</em\> aanpassen.) \<br\> Kok Y beantwoordt de vraag van Ober A.
(In de beantwoording kan Kok Y de vraag van Ober A \<em\>niet\</em\>
aanpassen.) \<br\> Ober A beantwoordt de vraag van Klant K. (In de
beantwoording kan Ober A het antwoord van Kok Y \<em\>niet\</em\>
aanpassen.) \<br\> Nadat Ober A naar Klant K heeft gecommuniceerd geeft
Kok Z alsnog een antwoord aan Ober A. Ober A kan met de ontvangen
melding van Kok Z \<em\>helemaal niets\</em\>, dus niet communiceren
richting Kok Z of Klant K. \<br\> Klant K plaatst een compleet nieuwe
bestelling bij Ober A bestaande uit een tabel met per rij de naam van
een gerecht en eventueel een bijbehorende opmerking. (Klant K kan de
gehele tabel invullen.) \<br\> Ober A plaatst dezelfde bestelling bij
Kok X. Ober A kan de bestelling van Klant K niet aanpassen, en ook niet
aanvullen. \<br\> Kok X geeft Ober A een akkoord. Kok X kan de
bestelling van Ober A niet aanpassen, en ook niet aanvullen. \<br\> Ober
A geeft Klant K een akkoord. Ober A kan het akkoord van Kok X niet
aanpassen, en ook niet aanvullen. \<br\> Einde.\</p\> \<h2\>Scenario
5c\</h2\> \<p\>\<strong\>Doel:\</strong\>\</p\> \<p\>Testen op de
functionaliteit voor ElementConditions &amp;
openSecondaryTransactionsAllowed.\</p\>
\<p\>\<strong\>Figuur:\</strong\>\</p\> \<p\>\<strong\>\<img
src=\"https://github.com/bimloket/visi/blob/master/WIKI%20docs/Testscenario's_Scenario_5c\_-\_parallel\_-\_loop.gif\"
alt=\"\"\>\<br\> \</strong\>\</p\>
\<p\>\<strong\>Beschrijving:\</strong\>\<br\> Ober A vraagt aan Klant K
of hij/zij de kaart wil zien. Klant K beantwoordt de vraag met Ja, en
geeft aan welke kaart hij/zij wil zien. \<br\> Ober A biedt de menukaart
aan die Klant K gevraagd heeft. Ober A kan het menukaarttype
\<em\>niet\</em\> wijzigen. Klant K krijgt de gevraagde menukaart.
\<br\> Klant K stelt een vraag aan Ober A. \<br\> Ober A stelt een vraag
aan Kok Y en Z. (In de vraagstelling kan Ober A de vraag \<em\>
niet\</em\> aanpassen.) \<br\> Kok Y beantwoordt de vraag van Ober A.
(In de beantwoording kan Kok Y de vraag van Ober A \<em\>niet\</em\>
aanpassen.) \<br\> Ober A beantwoordt de vraag van Klant K. (In de
beantwoording kan Ober A het antwoord van Kok Y \<em\>niet\</em\>
aanpassen.) \<br\> Klant K stelt een tweede vraag aan Ober A. (In de
vraagstelling kan Klant K een nieuwe vraag invullen, omdat in het
raamwerk de ElementCondition Empty heeft!!!) \<br\> Ober A stelt een
tweede vraag aan Kok Y en Z. (In de vraagstelling kan Ober A de vraag
\<em\>niet\</em\> aanpassen.) \<br\> Kok Z beantwoordt de eerste vraag
van Ober A. Ober A kan met de ontvangen melding van Kok Z \<em\>helemaal
niets\</em\>, dus niet communiceren richting Kok Z of Klant K. \<br\>
Kok Z beantwoordt de tweede vraag van Ober A. (In de beantwoording kan
Kok Z de vraag van Ober A \<em\>niet\</em\> aanpassen.) \<br\> Ober A
beantwoordt de vraag van Klant K. (In de beantwoording kan Ober A het
antwoord van Kok Z \<em\>niet\</em\> aanpassen.) \<br\> Nadat Ober A
naar Klant K heeft gecommuniceerd geeft Kok Y alsnog een antwoord aan
Ober A op de tweede vraag. Ober A kan met de ontvangen melding van Kok Y
\<em\>helemaal niets\</em\>, dus niet communiceren richting Kok Y of
Klant K. \<br\> Klant K plaatst een compleet nieuwe bestelling bij Ober
A bestaande uit een tabel met per rij de naam van een gerecht en
eventueel een bijbehorende opmerking. (Klant K kan de gehele tabel
invullen.) \<br\> Ober A plaatst dezelfde bestelling bij Kok X. Ober A
kan de bestelling van Klant K niet aanpassen, en ook niet aanvullen.
\<br\> Kok X geeft Ober A een akkoord. Kok X kan de bestelling van Ober
A niet aanpassen, en ook niet aanvullen. \<br\> Ober A geeft Klant K een
akkoord. Ober A kan het akkoord van Kok X niet aanpassen, en ook niet
aanvullen. \<br\> Einde.\</p\> \<h2\>Scenario 5d\</h2\>
\<p\>\<strong\>Doel:\</strong\>\</p\> \<p\>Testen op de functionaliteit
voor ElementConditions &amp; openSecondaryTransactionsAllowed.\</p\>
\<p\>\<strong\>Figuur:\</strong\>\</p\> \<p\>\<img
src=\"https://github.com/bimloket/visi/blob/master/WIKI%20docs/Testscenario's_Scenario_5d\_-\_parallel\_-\_loop.gif\"
alt=\"\"\>\</p\> \<p\>\<strong\>Beschrijving:\</strong\>\<br\> Ober A
vraagt aan Klant K of hij/zij de kaart wil zien. Klant K beantwoordt de
vraag met Ja, en geeft aan welke kaart hij/zij wil zien. \<br\> Ober A
biedt de menukaart aan die Klant K gevraagd heeft. Ober A kan het
menukaarttype \<em\>niet\</em\> wijzigen. Klant K krijgt de gevraagde
menukaart. \<br\> Klant K stelt een vraag aan Ober A. \<br\> Ober A
stelt een vraag aan Kok Y en Z. (In de vraagstelling kan Ober A de vraag
\<em\> niet\</em\> aanpassen.) \<br\> De beantwoording van Kok Y en Z
laat op zich wachten. Ober A beantwoordt de vraag van Klant K. (In de
beantwoording kan Ober A de vraag van Klant K \<em\>niet\</em\>
aanpassen.) \<br\> Klant K stelt een tweede vraag aan Ober A. (In de
vraagstelling kan Klant K een nieuwe vraag invullen, omdat in het
raamwerk de ElementCondition Empty heeft!!!) \<br\> Ober A stelt een
tweede vraag aan Kok Y en Z. (In de vraagstelling kan Ober A de vraag
\<em\>niet\</em\> aanpassen.) \<br\> Kok Y beantwoordt de eerste vraag
van Ober A. Ober A kan met de ontvangen melding van Kok Y \<em\>helemaal
niets\</em\>, dus niet communiceren richting Kok Y of Klant K. \<br\>
Kok Z beantwoordt de eerste vraag van Ober A. Ober A kan met de
ontvangen melding van Kok Z \<em\>helemaal niets\</em\>, dus niet
communiceren richting Kok Z of Klant K. \<br\> Kok Y beantwoordt de
tweede vraag van Ober A. (In de beantwoording kan Kok Y de vraag van
Ober A \<em\>niet\</em\> aanpassen.) \<br\> Ober A beantwoordt de vraag
van Klant K. (In de beantwoording kan Ober A het antwoord van Kok Y
\<em\>niet\</em\> aanpassen.) \<br\> Nadat Ober A naar Klant K heeft
gecommuniceerd geeft Kok Z alsnog een antwoord aan Ober A op de tweede
vraag. Ober A kan met de ontvangen melding van Kok Z \<em\>helemaal
niets\</em\>, dus niet communiceren richting Kok Z of Klant K. \<br\>
Klant K plaatst een compleet nieuwe bestelling bij Ober A bestaande uit
een tabel met per rij de naam van een gerecht en eventueel een
bijbehorende opmerking. (Klant K kan de gehele tabel invullen.) \<br\>
Ober A plaatst dezelfde bestelling bij Kok X. Ober A kan de bestelling
van Klant K niet aanpassen, en ook niet aanvullen. \<br\> Kok X geeft
Ober A een akkoord. Kok X kan de bestelling van Ober A niet aanpassen,
en ook niet aanvullen. \<br\> Ober A geeft Klant K een akkoord. Ober A
kan het akkoord van Kok X niet aanpassen, en ook niet aanvullen. \<br\>
Einde.\</p\> \<h2\>Scenario 6a\</h2\>
\<p\>\<strong\>Doel:\</strong\>\</p\> \<p\>Testen op de functionaliteit
voor een (hoofd)transactie met twee lagen van (sub)transacties.\</p\>
\<p\>\<strong\>Figuur:\</strong\>\</p\> \<p\>\<strong\>\<img
src=\"https://github.com/bimloket/visi/blob/master/WIKI%20docs/Testscenario's_Scenario_6A_drie_lagen_diep.jpg\"
alt=\"\" width=\"1060\" height=\"682\"\>\<br\> \</strong\>\</p\>
\<p\>\<strong\>Beschrijving:\</strong\>\<br\> Ober A vraagt aan Klant K
of hij/zij de kaart wil zien. Klant K beantwoordt de vraag met Ja, en
geeft aan welke kaart hij/zij wil zien. \<br\> Ober A biedt de menukaart
aan die Klant K gevraagd heeft. Ober A kan het menukaarttype
\<em\>niet\</em\> wijzigen. Klant K krijgt de gevraagde menukaart.
\<br\> Klant K stelt een vraag aan Ober A. \<br\> Ober A stelt een vraag
aan Kok Y. (In de vraagstelling kan Ober A de vraag \<em\>niet\</em\>
aanpassen.) \<br\> Kok Y stelt en vraag aan twee keukenhulpen
(Keukenhulp N en Keukenhulp O) \<br\> Keukenhulp N geeft antwoord aan
Kok Y. \<br\> Keukenhulp O geeft antwoord aan Kok Y. \<br\> Kok Y geeft
antwoord aan Ober A als hij een antwoorden van Keukenhulp N en/of O
heeft gekregen. \<br\> Ober A geeft vervolgens antwoord aan Klant K.
\<br\> Klant K is tevreden over het antwoord en plaats zijn/haar
bestelling bij Ober A. \<br\> Ober A plaats de bestelling bij Kok X
\<br\> Kok X vraagt Keukenhulp P of hij/zij het recept kan opzoeken.
\<br\> Keukenhulp P zoekt het recept op en geeft antwoord aan Kok X
\<br\> Kok X heeft nu het recept en kan akkoord geven aan Ober A \<br\>
Ober A bevestigt de bestelling aan Klant K \<br\>

\<strong\>Te testen varianten (voorstel Michon Maas):\</strong\> \<br\>
\<strong\>Variant 1 (initiatie met interne transactie binnen één
partij)\</strong\> \<br\> Initiatie proces vanuit interne transactie.
Dit kan worden bereikt door een specifieke verdeling van rollen tussen
verschillende leveranciers/partijen. \<br\>

Invulling rollen: \<br\> Rol Ober A ingevuld door leverancier X \<br\>
Rol klant K ingevuld door leverancier X \<br\> Rol Kok Y ingevuld door
leverancier X \<br\> Rol Keukenhulp N en O ingevuld door leverancier Y
\<br\>

\<strong\>Variant 2 (initiatie met interne transactie op raakvlak
partij)\</strong\> \<br\> Initiatie proces vanuit raakvlak tussen
leveranciers/partijen. \<br\>

Invulling rollen: \<br\> rol Ober A ingevuld door leverancier X \<br\>
Rol klant K ingevuld door leverancier Y \<br\> Rol Kok Y ingevuld door
leverancier Y \<br\> Rol Keukenhulp N en O ingevuld door leverancier Y
\<br\>

\<strong\>Variant 3 (initiatie met interne transactie over drie
partijen)\</strong\> \<br\> Proces met meerdere gekoppelde transacties
over drie leveranciers/partijen. \<br\>

Invulling rollen: \<br\> rol Ober A ingevuld door leverancier X \<br\>
Rol klant K ingevuld door leverancier Y \<br\> Rol Kok Y ingevuld door
leverancier Y \<br\> Rol Keukenhulp N en O ingevuld door leverancier Z
\<br\>\</p\>

\<p\>Einde\</p\> \<h2\>Scenario 7a\</h2\>
\<p\>\<strong\>Doel:\</strong\>\</p\> \<p\>Met dit scenario wordt de
juiste werking van de &ldquo;volgordelijkheid van berichten&rdquo;
(sendBefore en sendAfter)&nbsp; functionaliteit getest.\</p\> \<ul\>
\<li\>De ober stuurt een bestelling naar de kok(T3). \<ul\> \<li\>Hier
mag maar 1 van de aanwezige koks gekozen worden. \</li\>\<li\>De ober
mag hierna niet nog een bestelling naar de kok sturen \</li\>\</ul\>
\</li\>\<li\>De kok stuurt een vraag aan de keukenhulp (T4). Dit kan op
basis van de vraag van de ober (T2), of de bestelling van de ober (T3).
\</li\>\<li\>De keukenhulp stuurt een antwoord in T4. De kok moet nu
kunnen kiezen uit de volgende opties: \<ul\> \<li\>Als het op basis van
een vraag van de ober(T2) was kan hij kiezen uit: \<ul\> \<li\>Het
antwoord doorsturen naar de ober in T2 \</li\>\<li\>Een nieuwe vraag
stellen in T4 \</li\>\<li\>Melden dat het antwoord niet gebruikt wordt
in T4. \</li\>\</ul\> \</li\>\<li\>Als het op basis van een bestelling
van de ober was, kan hij kiezen uit: \<ul\> \<li\>Een akkoord of niet
akkoord bericht naar de ober in T3 \</li\>\<li\>Een nieuwe vraag stellen
in T4 \</li\>\<li\>Melden dat het antwoord niet gebruikt wordt in T4
\</li\>\</ul\> \</li\>\</ul\> \</li\>\<li\>Zodra de kok een antwoord
naar de ober verzonden heeft in T2 of T3: \<ul\> \<li\>Kan de kok geen
nieuwe vraag meer naar de keukenhulp sturen in T4 \</li\>\<li\>Kan hij
iedere keer nog maar 1 afsluitend bericht naar de keukenhulp sturen in
T4. Dit bericht correspondeert met het bericht dat naar de ober ging in
T2 of T3. \</li\>\</ul\> \</li\>\</ul\> \<h2\>Scenario 8\</h2\>
\<p\>\<strong\>Doel:\</strong\>\</p\> \<p\>Met dit scenario wordt de
juiste werking van het Defini&euml;ren van het aantal rijen in een tabel
functionaliteit getest. (minOccurs/maxOccurs op child CE)\</p\> \<ul\>
\<li\>Alleen transactie (T1) \<ul\> \<li\>Ober stuurt de vraag aan de
klant of hij de menukaart wil zien \</li\>\<li\>Klant antwoordt
&ldquo;Ja&rdquo; \</li\>\<li\>Ober stuurt het bericht
&ldquo;Menukaart&rdquo; \<ul\> \<li\>Bij de de tabel
&ldquo;Menukaart&rdquo; testen dat er niet meer dan 3 ingevuld mogen
worden en dat hij leeg verzonden kan worden. \</li\>\</ul\>
\</li\>\<li\>Klant antwoordt met &ldquo;Bestelling&rdquo; \<ul\>
\<li\>Bij de tabel &ldquo;Inhoud van de bestelling&rdquo; testen dat er
1 of meer regels ingevuld moeten worden en dat leeg verzenden niet moet
kunnen. \</li\>\<li\>Bij de tabel &ldquo;Inhoud drankbestelling&rdquo;
testen dat er verplicht 1 regel ingevuld moeten worden en dat leeg of
meer dan 1 regel niet mag. \</li\>\</ul\> \</li\>\</ul\> \</li\>\</ul\>

\<h2\>Scenario 9\</h2\> \<p\>\<strong\>Doel:\</strong\>\</p\>
\<p\>Testen op de functionaliteit voor het verplicht bijvoegen van een
bijlage voor een berichttype (appendixMandatory).\</p\>
\<p\>\<strong\>Figuur:\</strong\>\</p\> \<p\>\<img
src=\"https://github.com/bimloket/visi/blob/master/WIKI%20docs/Testscenario's_Scenario_9\_-\_bijlage_verplicht.gif\"
alt=\"Scenario 9 - bijlage verplicht\" width=\"800\"
height=\"164\"\>\</p\> \<p\>\<strong\>Beschrijving:\</strong\>\</p\>
\<p\>Ober A vraagt aan Klant K of hij/zij de kaart wil zien. Klant K
beantwoordt de vraag met Ja, en geeft aan welke kaart hij/zij wil zien.
\<br\> Ober A biedt de menukaart aan die Klant K gevraagd heeft, ZONDER
bijlage.\</p\> \<p\>Ober A kan de menukaart NIET aanbieden aan Klant K,
omdat hij een bijlage is vergeten toe te voegen.\</p\> \<p\>Vervolgens
biedt Ober A de menukaart aan die Klant K gevraagd heeft, MET
bijlage.\</p\> \<p\>Ober A kan de menukaart aanbieden aan Klant K, omdat
hij een bijlage heeft toegevoegd.\</p\> \<p\>Klant K ontvangt menukaart
met bijlage.\</p\> \<p\>Einde.\</p\> \<h2\>Scenario 10\</h2\>
\<p\>\<strong\>Doel:\</strong\>\</p\> \<p\>Testen op de Element
conditions in tabellen (Ce normaal / CE parent / CE Child).&nbsp; Sys
1.6 en hoger\</p\> \<p\>&nbsp;\</p\>
\<p\>\<strong\>Beschrijving:\</strong\>\</p\> \<ul\> \<li\>De ober biedt
de menukaart aan \</li\>\<li\>Klant zegt &ldquo;ja&rdquo;
\</li\>\<li\>Ober vult het menukaart bericht als volgt: \<ul\>
\<li\>Menukaart (bovenste tabel, controleer dat deze naam
&ldquo;Menukaart &rdquo; van het CE leesbaar is). \<ul\> \<li\>Vul 2
regels in, alle cellen moeten waarden bevatten. \</li\>\</ul\>
\</li\>\<li\>Dagmenu (middelste tabel, controleer dat deze naam
&ldquo;Dagmenu&rdquo; van het CE leesbaar is). \<ul\> \<li\>Vul 2 regels
in, alle cellen moeten waarden bevatten. \</li\>\</ul\>
\</li\>\<li\>Drankenkaart (onderste tabel tabel, controleer dat deze
naam &ldquo;Drankenkaart&rdquo; van het CE leesbaar is). \<ul\>
\<li\>Vul 2 regels in, alle cellen moeten waarden bevatten.
\</li\>\</ul\> \</li\>\</ul\> \</li\>\<li\>Klant reageert met het
bericht &ldquo;vraag&rdquo; \<ul\> \<li\>In de &ldquo;Menukaart&rdquo;
tabel controleer je: \<ul\> \<li\>Of de naam van het CE
&ldquo;Menukaart&ldquo; zichtbaar is \</li\>\<li\>De waarden in de kolom
Omschrijving en Prijs moeten aan te passen zijn, eerste kolom is niet
aanpasbaar. \[Naam default fixed / Omschr.&nbsp; se free in deze parent
ce (5)/Prijs se free in child ce (3)\] \</li\>\<li\>Er kunnen
\<strong\>geen\</strong\> regels verwijderd of toegevoegd worden
\</li\>\<li\>Maak de onderste cel &ldquo;Omschrijving&rdquo; leeg ter
voorbereiding op de volgende contole. \</li\>\</ul\> \</li\>\<li\>In de
&ldquo;Dagmenu&rdquo; tabel controleer je: \<ul\> \<li\>Of de naam van
het CE &ldquo;Dagmenu&rdquo; zichtbaar is \</li\>\<li\>Alleen de kolom
Naam is nog gevuld en is aanpasbaar. De andere 2 kolommen zijn leeg.
\[Parent CE dagmenu EMPTY (4)/Naam se FREE in mitt, parent, child,
se(15)/Prijs&nbsp; free in child (3)\] \</li\>\<li\>Er kunnen
\<strong\>wel\</strong\> regels verwijderd of toegevoegd worden
\</li\>\</ul\> \</li\>\<li\>In de &ldquo;Drankenkaart&rdquo; tabel
controleer je: \<ul\> \<li\>Of de naam van het CE
&ldquo;Drankenkaart&rdquo; zichtbaar is \</li\>\<li\>De kolommen naam en
omschrijving zijn aanpasbaar, de kolom prijs is niet aanpasbaar \[FREE
op parent en child CE (6) / fixed op parent ce, child CE en SE prijs
(7)\] \</li\>\<li\>Er kunnen \<strong\>geen\</strong\> regels verwijderd
of toegevoegd worden. \</li\>\</ul\> \</li\>\<li\>Verstuur het bericht
\</li\>\</ul\> \</li\>\<li\>Ober reageert met het bericht
&ldquo;Antwoord&rdquo; \<ul\> \<li\>Contoleer: \<ul\> \<li\>er kunnen
\<strong\>geen\</strong\> regels verwijderd of toegevoegd worden \[FREE
op child en parent in verkeerde volgorde dus geen geldige conditie.
Inhoud van de menukaart moet parent zijn en menukaart moet child zijn om
deze conditie werkend te hebben. (nvt)\] \</li\>\</ul\> \</li\>\</ul\>
\</li\>\</ul\> \<h2\>Scenario 11\</h2\>
\<p\>\<strong\>Doel:\</strong\>\</p\> \<p\>Testen op niet-ascii tekens
in a) omschrijving van elementen (SimpleElementType, ComplexElementType,
MessageType, TransactionType) en b) enumeratie (UserDefiniedTYpe).\</p\>
\<p\>\<strong\>Beschrijving:\</strong\>\</p\> \<p\>Ober A start een
nieuwe transactie en verstuurd een bericht naar Klant K. In het bericht
vult Ober A voor element \"Enumeration / Keuzelijst\" de waarde \"eaiou
with circumflexes: êâîôû\" in.\</p\>
\<p\>\<strong\>Resultaat:\</strong\>\</p\> \<p\>Aan Ober A worden in het
bericht elementen getoond met &gt; en &amp; en € in de omschrijving. Het
element Enumeration / Keuzelijst toont een lijst met onder andere
êâîôûëäïöü&lt;&quot;µ@ç€.\</p\> \<p\>Klant K ontvangt een bericht met
voor element \"Enumeration / Keuzelijst\" de waarde \"eaiou with
circumflexes: êâîôû\"\</p\> \<p\>Einde.\</p\>

\<h2\>Scenario Inlezen van gearchiveerd VISI project\</h2\>
\<p\>\<strong\>Doel:\</strong\>\</p\> \<p\>Testen op het inlezen van een
bestand dat voldoet aan \<a
href=\"https://github.com/bimloket/visi/wiki/Bijlage-11-Richtlijn-voor-het-archiveren-van-VISI--projecten\"\>de
richtlijn voor het archiveren van VISI projecten\</a\>\</p\>
\<p\>\<strong\>Beschrijving:\</strong\>\</p\> \<p\>Het bestand wordt
zonder handmatige voorbewerking ingelezen in de applicatie. Het staat
vrij hoe dit ingelezen wordt en door wie.\</p\> \<p\>Met een nabewerking
worden openstaande transacties worden geadresseerd aan \</p\> \<p\>Wat
te doen met soap servers? Deze moeten eigenlijk aangepast worden om de
communicatie verder te kunnen laten lopen.\</p\>
\<p\>\<strong\>Resultaat:\</strong\>\</p\> \<p\>Het systeem heeft alle
informatie uit het bestand ingelezen, te weten: a) transacties,
berichten, bijlagen, b) raamwerken, c) projectspecifieke
berichten.\</p\> \<p\>Het systeem kan openstaande transacties
verder.\</p\> \<p\>\<strong\>Test Data:\</strong\>\</p\> \<p\>Bestanden
zijn op te vragen bij Elisabeth Kloren.\</p\>

\<h2\>Scenario Archiveren van VISI project\</h2\>
\<p\>\<strong\>Doel:\</strong\>\</p\> \<p\>Testen op het aanmaken van
een bestand dat voldoet aan \<a
href=\"https://github.com/bimloket/visi/wiki/Bijlage-11-Richtlijn-voor-het-archiveren-van-VISI--projecten\"\>de
richtlijn voor het archiveren van VISI projecten\</a\>\</p\>
\<p\>\<strong\>Beschrijving:\</strong\>\</p\> \<p\>Een project wordt
gearchiveerd (vanuit de applicatie). Het staat vrij hoe dit \"archief\"
aangemaakt wordt en door wie.\</p\> \<p\>Het project moet over de
volgende eigenschappen beschikken:\</p\> \<p\>Transactie met een
onderwerp langer van 256 karakters.\</p\> \<p\>Transactie met in het
onderwerp niet alfa-numerieke karakters.\</p\> \<p\>Bijlage met een naam
langer van 256 karakters.\</p\>
\<p\>\<strong\>Resultaat:\</strong\>\</p\> \<p\>Het systeem heeft
informatie uit het project uitgeschreven, te weten: alle a) transacties,
berichten, bijlagen, b) raamwerken, c) projectspecifieke berichten. De
structurering van de data is conform de richtlijn.\</p\> \<p\>Speciale
aandacht verdienen niet-ascii tekens in het onderwerp van een
transactie, die niet toegestaan zijn in namen van een Microsoft Windows
directory (bijvoorbeeld / ). Deze karakters moeten in de directory
benamingen terugkomen als spaties.\</p\> \<h2\>Scenario HTTPS\</h2\>
\<p\>\<strong\>Doel:\</strong\>\</p\> \<p\>Testen op het afdwingen van
beveiligde communicatie\</p\>
\<p\>\<strong\>Beschrijving:\</strong\>\</p\> \<p\>1. Van een bestaand
project wordt het projectspecifiek bericht aangepast. Het adres van de
soap server wordt gewijzigd van https:// in http://.\</p\> \<p\>2. Het
aangepaste projectspecifiek bericht wordt ingelezen in de
applicatie.\</p\> \<p\>\<strong\>Verwachte resultaat:\</strong\>\</p\>
\<p\>De applicatie weigert het projectspecifieke bericht, en de
xml-bestand wordt niet ingelezen / geactiveerd.\</p\>
\<p\>\<strong\>Test Data:\</strong\>\</p\> \<p\>Het projectspecifiek
bericht &quot;projectspecifiekberichttotenmetbericht_6.xml&quot;.\</p\>
\<h2\>Scenario Bijlagen &gt;2GB\</h2\>
\<p\>\<strong\>Doel:\</strong\>\</p\> \<p\>Testen op het verzenden en
ontvangen van bijlagen groter dan 2GB en kleiner dan 10GB\</p\>
\<p\>\<strong\>Beschrijving:\</strong\>\</p\> \<p\>1. Bij een nieuw
bericht wordt een zip-bestand van 9,9 GB gevoegd. In het zip-bestand zit
minimaal een pdf.\</p\> \<p\>2. Het bericht wordt verstuurd en gaat via
het soap protocol naar een externe server.\</p\> \<p\>3. Het bericht
wordt ontvangen op de externe server. En het bericht bevat het
zip-bestand als de bijlage.\</p\> \<p\>\<strong\>Verwachte
resultaat:\</strong\>\</p\> \<p\>De bijlage is een zip-bestand en op de
externe server uit te pakken. De bestandsgrootte op verzendende en
ontvangende server zijn gelijk (in bytes). Het uit de zip gehaalde
pdf-bestand heeft op beide servers dezelfde grootte (in bytes). Tevens
is het pdf-bestand te openen op de ontvangende server met een
applicatie, en is de inhoud overeenkomstig met het pdf-bestand op de
verzendende server.\</p\> \<p\>\<strong\>Test Data:\</strong\>\</p\>
\<p\>Voorafgaand aan het uitvoeren van het testscenario kan een
zip-bestand worden samengesteld met minimaal 1 pdf-bestand.\</p\>

\</div\> \<div class=\"ClearBoth\"\>\</div\>

## Testscenario's

\<div class=\"wikidoc\"\> \<p\>De figuren van onderstaande scenario's
zijn opgesteld in Microsoft Visio 2003. Het bronbestand is: \<a
href=\"https://github.com/bimloket/visi/blob/master/WIKI%20docs/Testscenario's_Scenarios_vsd.zip\"\>
Scenarios_vsd.zip\</a\>\</p\> \<h2\>VISI-raamwerk\</h2\> \<p\>\<span
style=\"font-size:10pt\"\>Het raamwerk bevat vier
transactietypen:\</span\>\</p\> \<p\>- t1_OpnameBestelling;\<br\> -
t2_VraagOberAanKok;\<br\> - t3_OpdrachtKok;\<br\> -
t4_VraagKokAanKeukenhulp.\</p\> \<p\>En vier rollen: Klant, Ober, Kok en
Keukenhulp.\</p\> \<p\>\<img
src=\"https://github.com/bimloket/visi/blob/master/WIKI%20docs/Testscenario's_Raamwerkmetkeukenhulp.jpg\"
alt=\"\"\>\</p\> \<p\>&nbsp;\</p\> \<h2\>&nbsp;\</h2\> \<h2\>Scenario
1\</h2\> \<p\>\<strong\>\<strong\>Doel:\</strong\>\</strong\>\</p\>
\<p\>Testen op de functionaliteit voor \<br\> a) het starten van een
transactie\<br\> b) het beantwoorden van een bericht\<br\> c) het
gebruik van verschillende soorten gegevensvelden\</p\>
\<p\>\<strong\>Figuur:\</strong\>\</p\> \<p\>\<strong\>\<img
src=\"https://github.com/bimloket/visi/blob/master/WIKI%20docs/Testscenario's_Scenario_1.gif\"
alt=\"\"\>\<br\> \</strong\>\</p\>
\<p\>\<strong\>Beschrijving:\</strong\>\</p\> \<ul\> \<li\>Ober A vraagt
aan Klant K of hij/zij de kaart wil zien. \</li\>\<li\>Bij het invullen
van de vraag of de klant de kaart wil zien, worden alle verschillende
Base Type velden aangeboden. \</li\>\<li\>Test of de volgende velden als
volgt werken: \<ul\> \<li\>Boolean \<ul\> \<li\>Hier moet een vinkjes
veldje&nbsp; of 0 - 1 of true-false of waar-onwaar staan (verplicht)
\</li\>\</ul\> \</li\>\<li\>Date / Datum \<ul\> \<li\>Een datum moet
ingevoerd worden (verplicht) \</li\>\</ul\> \</li\>\<li\>Datetime /
Datum en tijd \<ul\> \<li\>Datum en tijd moeten ingevuld worden
(verplicht) \</li\>\</ul\> \</li\>\<li\>Time / Tijd \<ul\> \<li\>Een
tijdstip moet ingevoerd worden (verplicht) \</li\>\</ul\>
\</li\>\<li\>Decimal / Decimaal \<ul\> \<li\>Een getal, al dan niet met
decimale waarden moet ingevoerd worden (verplicht) \</li\>\</ul\>
\</li\>\<li\>Integer / Geheel getal \<ul\> \<li\>Een geheel getal moet
ingevoerd worden (verplicht) \</li\>\</ul\> \</li\>\<li\>Keuzelijst
\<ul\> \<li\>Een van de waarden &quot;Keuze 1&quot;, &quot;Keuze 2&quot;
of &quot;Keuze 3&quot; moet ingevoerd worden (verplicht) \</li\>\</ul\>
\</li\>\<li\>String / Vrije tekst \<ul\> \<li\>Willekeurige tekens
kunnen ingevoerd worden (niet verplicht) \</li\>\</ul\> \</li\>\</ul\>
\</li\>\<li\>Klant K beantwoordt de vraag met Nee.&nbsp; \</li\>\</ul\>
\<p\>\<br\> Einde\</p\>

\<h2\>Scenario 3a\</h2\> \<p\>\<strong\>Doel:\</strong\>\</p\>
\<p\>Testen op de functionaliteit voor het starten van een bepaald type
(sub)transactie, terugkeren naar de (hoofd)transactie, en weer starten
van hetzelfde type (sub)transactie.\</p\>
\<p\>\<strong\>Figuur:\</strong\>\</p\> \<p\>\<img
src=\"https://github.com/bimloket/visi/blob/master/WIKI%20docs/Testscenario's_Scenario_3a\_-\_serie.gif\"
alt=\"\"\>\</p\> \<p\>\<strong\>Beschrijving:\</strong\>\<br\> Ober A
vraagt aan Klant K of hij/zij de kaart wil zien. Klant K beantwoordt de
vraag met Ja, en geeft aan welke kaart hij/zij wil zien. \<br\> Ober A
biedt de menukaart aan die Klant K gevraagd heeft. Ober A kan het
menukaarttype \<em\>niet\</em\> wijzigen. Klant K krijgt de gevraagde
menukaart. \<br\> Klant K plaatst een bestelling bij Ober A bestaande
uit een tabel met per rij de naam van een gerecht en eventueel een
bijbehorende opmerking. \<br\> Ober A plaatst dezelfde bestelling bij
Kok X. Ober A kan de bestelling van Klant K niet aanpassen, en ook niet
aanvullen. \<br\> Kok X geeft Ober A een niet akkoord. Kok X kan de
bestelling van Ober A niet aanpassen, en ook niet aanvullen. \<br\> Ober
A geeft Klant K een niet akkoord. Ober A kan het niet akkoord van Kok X
niet aanpassen, en ook niet aanvullen. \<br\> Klant K plaatst een
compleet nieuwe bestelling bij Ober A bestaande uit een tabel met per
rij de naam van een gerecht en eventueel een bijbehorende opmerking.
(Klant K kan de gehele tabel invullen.) \<br\> Ober A plaatst dezelfde
bestelling bij Kok Y. Ober A kan de bestelling van Klant K niet
aanpassen, en ook niet aanvullen. \<br\> Kok Y geeft Ober A een akkoord.
Kok Y kan de bestelling van Ober A niet aanpassen, en ook niet
aanvullen. \<br\> Ober A geeft Klant K een akkoord. Ober A kan het
akkoord van Kok Y niet aanpassen, en ook niet aanvullen. \<br\>
Einde.\</p\> \<h2\>Scenario 3b\</h2\>
\<p\>\<strong\>Doel:\</strong\>\</p\> \<p\>Testen op de functionaliteit
voor het starten van een bepaald type (sub)transactie, terugkeren naar
de (hoofd)transactie, meerdere berichten in de hoofdtransactie, en weer
starten van hetzelfde type (sub)transactie.\</p\>
\<p\>\<strong\>Figuur:\</strong\>\</p\> \<p\>\<strong\>\<img
src=\"https://github.com/bimloket/visi/blob/master/WIKI%20docs/Testscenario's_Scenario_3b\_-\_serie.gif\"
alt=\"\"\>\<br\> \</strong\>\</p\>
\<p\>\<strong\>Beschrijving:\</strong\>\<br\> Ober A vraagt aan Klant K
of hij/zij de kaart wil zien. Klant K beantwoordt de vraag met Ja, en
geeft aan welke kaart hij/zij wil zien. \<br\> Ober A biedt de menukaart
aan die Klant K gevraagd heeft. Ober A kan het menukaarttype
\<em\>niet\</em\> wijzigen. Klant K krijgt de gevraagde menukaart.
\<br\> Klant K plaatst een bestelling bij Ober A bestaande uit een tabel
met per rij de naam van een gerecht en eventueel een bijbehorende
opmerking. \<br\> Ober A plaatst dezelfde bestelling bij Kok X. Ober A
kan de bestelling van Klant K niet aanpassen, en ook niet aanvullen.
\<br\> Kok X geeft Ober A een niet akkoord. Kok X kan de bestelling van
Ober A niet aanpassen, en ook niet aanvullen. \<br\> Ober A geeft Klant
K een niet akkoord. Ober A kan het niet akkoord van Kok X niet
aanpassen, en ook niet aanvullen. \<br\> Klant K stelt Ober A een vraag.
\<br\> Ober A beantwoordt de vraag van Klant K. (In de beantwoording kan
Ober A de vraag van Klant K \<em\>niet\</em\> aanpassen.) \<br\> Klant K
plaatst een compleet nieuwe bestelling bij Ober A bestaande uit een
tabel met per rij de naam van een gerecht en eventueel een bijbehorende
opmerking. (Klant K kan de gehele tabel invullen.) \<br\> Ober A plaatst
dezelfde bestelling bij Kok Y. Ober A kan de bestelling van Klant K niet
aanpassen, en ook niet aanvullen. \<br\> Kok Y geeft Ober A een akkoord.
Kok Y kan de bestelling van Ober A niet aanpassen, en ook niet
aanvullen. \<br\> Ober A geeft Klant K een akkoord. Ober A kan het
akkoord van Kok Y niet aanpassen, en ook niet aanvullen. \<br\>
Einde.\</p\> \<h2\>Scenario 4a\</h2\>
\<p\>\<strong\>Doel:\</strong\>\</p\> \<p\>Testen op de functionaliteit
voor ElementConditions.\</p\> \<p\>\<strong\>Figuur:\</strong\>\</p\>
\<p\>\<strong\>\<img
src=\"https://github.com/bimloket/visi/blob/master/WIKI%20docs/Testscenario's_Scenario_4a\_-\_no_loop.gif\"
alt=\"\"\>\<br\> \</strong\>\</p\>
\<p\>\<strong\>Beschrijving:\</strong\>\<br\> Ober A vraagt aan Klant K
of hij/zij de kaart wil zien. Klant K beantwoordt de vraag met Ja, en
geeft aan welke kaart hij/zij wil zien. \<br\> Ober A biedt de menukaart
aan die Klant K gevraagd heeft. Ober A kan het menukaarttype
\<em\>niet\</em\> wijzigen. Klant K krijgt de gevraagde menukaart.
\<br\> Klant K stelt een vraag aan Ober A. \<br\> Ober A beantwoordt de
vraag van Klant K. (In de beantwoording kan Ober A de vraag van Klant K
\<em\>niet\</em\> aanpassen.) \<br\> Klant K plaatst een compleet nieuwe
bestelling bij Ober A bestaande uit een tabel met per rij de naam van
een gerecht en eventueel een bijbehorende opmerking. (Klant K kan de
gehele tabel invullen.) \<br\> Ober A plaatst dezelfde bestelling bij
Kok X. Ober A kan de bestelling van Klant K niet aanpassen, en ook niet
aanvullen. \<br\> Kok X geeft Ober A een akkoord. Kok X kan de
bestelling van Ober A niet aanpassen, en ook niet aanvullen. \<br\> Ober
A geeft Klant K een akkoord. Ober A kan het akkoord van Kok X niet
aanpassen, en ook niet aanvullen. \<br\> Einde.\</p\> \<h2\>Scenario
4b\</h2\> \<p\>\<strong\>Doel:\</strong\>\</p\> \<p\>Testen op de
functionaliteit voor ElementConditions.\</p\>
\<p\>\<strong\>Figuur:\</strong\>\</p\> \<p\>\<strong\>\<img
src=\"https://github.com/bimloket/visi/blob/master/WIKI%20docs/Testscenario's_Scenario_4b\_-\_loop.gif\"
alt=\"\"\>\<br\> \</strong\>\</p\>
\<p\>\<strong\>Beschrijving:\</strong\>\<br\> Ober A vraagt aan Klant K
of hij/zij de kaart wil zien. Klant K beantwoordt de vraag met Ja, en
geeft aan welke kaart hij/zij wil zien. \<br\> Ober A biedt de menukaart
aan die Klant K gevraagd heeft. Ober A kan het menukaarttype
\<em\>niet\</em\> wijzigen. Klant K krijgt de gevraagde menukaart.
\<br\> Klant K stelt een vraag aan Ober A. \<br\> Ober A beantwoordt de
vraag van Klant K. (In de beantwoording kan Ober A de vraag van Klant K
\<em\>niet\</em\> aanpassen.) \<br\> Klant K stelt een tweede vraag aan
Ober A. (In de vraagstelling kan Klant K een nieuwe vraag invullen,
omdat in het raamwerk de ElementCondition Empty heeft!!!) \<br\> Ober A
beantwoordt de vraag van Klant K. (In de beantwoording kan Ober A de
vraag van Klant K \<em\>niet\</em\> aanpassen.) \<br\> Klant K plaatst
een compleet nieuwe bestelling bij Ober A bestaande uit een tabel met
per rij de naam van een gerecht en eventueel een bijbehorende opmerking.
(Klant K kan de gehele tabel invullen.) \<br\> Ober A plaatst dezelfde
bestelling bij Kok X. Ober A kan de bestelling van Klant K niet
aanpassen, en ook niet aanvullen. \<br\> Kok X geeft Ober A een akkoord.
Kok X kan de bestelling van Ober A niet aanpassen, en ook niet
aanvullen. \<br\> Ober A geeft Klant K een akkoord. Ober A kan het
akkoord van Kok X niet aanpassen, en ook niet aanvullen. \<br\>
Einde.\</p\> \<h2\>Scenario 4c\</h2\>
\<p\>\<strong\>Doel:\</strong\>\</p\> \<p\>Testen op de functionaliteit
voor ElementConditions.\</p\> \<p\>\<strong\>Figuur:\</strong\>\</p\>
\<p\>\<strong\>\<img
src=\"https://github.com/bimloket/visi/blob/master/WIKI%20docs/Testscenario's_Scenario_4c\_-\_loop.gif\"
alt=\"\"\>\<br\> \</strong\>\</p\>
\<p\>\<strong\>Beschrijving:\</strong\>\<br\> Ober A vraagt aan Klant K
of hij/zij de kaart wil zien. Klant K beantwoordt de vraag met Ja, en
geeft aan welke kaart hij/zij wil zien. \<br\> Ober A biedt de menukaart
aan die Klant K gevraagd heeft. Ober A kan het menukaarttype
\<em\>niet\</em\> wijzigen. Klant K krijgt de gevraagde menukaart.
\<br\> Klant K stelt een vraag aan Ober A. \<br\> Ober A beantwoordt de
vraag van Klant K. (In de beantwoording kan Ober A de vraag van Klant K
\<em\>niet\</em\> aanpassen.) \<br\> Klant K stelt een tweede vraag aan
Ober A. (In de vraagstelling kan Klant K een nieuwe vraag invullen,
omdat in het raamwerk de ElementCondition Empty heeft!!!) \<br\> Ober A
beantwoordt de vraag van Klant K. (In de beantwoording kan Ober A de
vraag van Klant K \<em\>niet\</em\> aanpassen.) \<br\> Klant K stelt een
derde vraag aan Ober A. (In de vraagstelling kan Klant K de vraag
\<em\>niet\</em\> invullen, omdat in het raamwerk de ElementCondition
\<em\>geen\</em\> waarde voor condition heeft!!!) \<br\> Ober A
beantwoordt de vraag van Klant K. (In de beantwoording kan Ober A de
vraag van Klant K \<em\>niet\</em\> aanpassen.) \<br\> Klant K plaatst
een compleet nieuwe bestelling bij Ober A bestaande uit een tabel met
per rij de naam van een gerecht en eventueel een bijbehorende opmerking.
(Klant K kan de gehele tabel invullen.) \<br\> Ober A plaatst dezelfde
bestelling bij Kok X. Ober A kan de bestelling van Klant K niet
aanpassen, en ook niet aanvullen. \<br\> Kok X geeft Ober A een akkoord.
Kok X kan de bestelling van Ober A niet aanpassen, en ook niet
aanvullen. \<br\> Ober A geeft Klant K een akkoord. Ober A kan het
akkoord van Kok X niet aanpassen, en ook niet aanvullen. \<br\>
Einde.\</p\> \<h2\>Scenario 5a\</h2\>
\<p\>\<strong\>Doel:\</strong\>\</p\> \<p\>Testen op de functionaliteit
voor ElementConditions &amp; openSecondaryTransactionsAllowed.\</p\>
\<p\>\<strong\>Figuur:\</strong\>\</p\> \<p\>\<strong\>\<img
src=\"https://github.com/bimloket/visi/blob/master/WIKI%20docs/Testscenario's_Scenario_5a\_-\_serie.gif\"
alt=\"\"\>\<br\> \</strong\>\</p\>
\<p\>\<strong\>Beschrijving:\</strong\>\<br\> Ober A vraagt aan Klant K
of hij/zij de kaart wil zien. Klant K beantwoordt de vraag met Ja, en
geeft aan welke kaart hij/zij wil zien. \<br\> Ober A biedt de menukaart
aan die Klant K gevraagd heeft. Ober A kan het menukaarttype
\<em\>niet\</em\> wijzigen. Klant K krijgt de gevraagde menukaart.
\<br\> Klant K stelt een vraag aan Ober A. \<br\> Ober A stelt een vraag
aan Kok Z. (In de vraagstelling kan Ober A de vraag \<em\>niet\</em\>
aanpassen.) \<br\> Kok Z beantwoordt de vraag van Ober A. (In de
beantwoording kan Kok Z de vraag van Ober A \<em\>niet\</em\>
aanpassen.) \<br\> Ober A beantwoordt de vraag van Klant K. (In de
beantwoording kan Ober A het antwoord van Kok Z \<em\>niet\</em\>
aanpassen.) \<br\> Klant K plaatst een compleet nieuwe bestelling bij
Ober A bestaande uit een tabel met per rij de naam van een gerecht en
eventueel een bijbehorende opmerking. (Klant K kan de gehele tabel
invullen.) \<br\> Ober A plaatst dezelfde bestelling bij Kok X. Ober A
kan de bestelling van Klant K niet aanpassen, en ook niet aanvullen.
\<br\> Kok X geeft Ober A een akkoord. Kok X kan de bestelling van Ober
A niet aanpassen, en ook niet aanvullen. \<br\> Ober A geeft Klant K een
akkoord. Ober A kan het akkoord van Kok X niet aanpassen, en ook niet
aanvullen. \<br\> Einde.\</p\> \<h2\>Scenario 5b\</h2\>
\<p\>\<strong\>Doel:\</strong\>\</p\> \<p\>Testen op de functionaliteit
voor ElementConditions &amp; openSecondaryTransactionsAllowed.\</p\>
\<p\>\<strong\>Figuur:\</strong\>\</p\> \<p\>\<strong\>\<img
src=\"https://github.com/bimloket/visi/blob/master/WIKI%20docs/Testscenario's_Scenario_5b\_-\_parallel\_-\_no_loop.gif\"
alt=\"\"\>\<br\> \</strong\>\</p\>
\<p\>\<strong\>Beschrijving:\</strong\>\<br\> Ober A vraagt aan Klant K
of hij/zij de kaart wil zien. Klant K beantwoordt de vraag met Ja, en
geeft aan welke kaart hij/zij wil zien. \<br\> Ober A biedt de menukaart
aan die Klant K gevraagd heeft. Ober A kan het menukaarttype
\<em\>niet\</em\> wijzigen. Klant K krijgt de gevraagde menukaart.
\<br\> Klant K stelt een vraag aan Ober A. \<br\> Ober A stelt een vraag
aan Kok Y en Z. (In de vraagstelling kan Ober A de vraag \<em\>
niet\</em\> aanpassen.) \<br\> Kok Y beantwoordt de vraag van Ober A.
(In de beantwoording kan Kok Y de vraag van Ober A \<em\>niet\</em\>
aanpassen.) \<br\> Ober A beantwoordt de vraag van Klant K. (In de
beantwoording kan Ober A het antwoord van Kok Y \<em\>niet\</em\>
aanpassen.) \<br\> Nadat Ober A naar Klant K heeft gecommuniceerd geeft
Kok Z alsnog een antwoord aan Ober A. Ober A kan met de ontvangen
melding van Kok Z \<em\>helemaal niets\</em\>, dus niet communiceren
richting Kok Z of Klant K. \<br\> Klant K plaatst een compleet nieuwe
bestelling bij Ober A bestaande uit een tabel met per rij de naam van
een gerecht en eventueel een bijbehorende opmerking. (Klant K kan de
gehele tabel invullen.) \<br\> Ober A plaatst dezelfde bestelling bij
Kok X. Ober A kan de bestelling van Klant K niet aanpassen, en ook niet
aanvullen. \<br\> Kok X geeft Ober A een akkoord. Kok X kan de
bestelling van Ober A niet aanpassen, en ook niet aanvullen. \<br\> Ober
A geeft Klant K een akkoord. Ober A kan het akkoord van Kok X niet
aanpassen, en ook niet aanvullen. \<br\> Einde.\</p\> \<h2\>Scenario
5c\</h2\> \<p\>\<strong\>Doel:\</strong\>\</p\> \<p\>Testen op de
functionaliteit voor ElementConditions &amp;
openSecondaryTransactionsAllowed.\</p\>
\<p\>\<strong\>Figuur:\</strong\>\</p\> \<p\>\<strong\>\<img
src=\"https://github.com/bimloket/visi/blob/master/WIKI%20docs/Testscenario's_Scenario_5c\_-\_parallel\_-\_loop.gif\"
alt=\"\"\>\<br\> \</strong\>\</p\>
\<p\>\<strong\>Beschrijving:\</strong\>\<br\> Ober A vraagt aan Klant K
of hij/zij de kaart wil zien. Klant K beantwoordt de vraag met Ja, en
geeft aan welke kaart hij/zij wil zien. \<br\> Ober A biedt de menukaart
aan die Klant K gevraagd heeft. Ober A kan het menukaarttype
\<em\>niet\</em\> wijzigen. Klant K krijgt de gevraagde menukaart.
\<br\> Klant K stelt een vraag aan Ober A. \<br\> Ober A stelt een vraag
aan Kok Y en Z. (In de vraagstelling kan Ober A de vraag \<em\>
niet\</em\> aanpassen.) \<br\> Kok Y beantwoordt de vraag van Ober A.
(In de beantwoording kan Kok Y de vraag van Ober A \<em\>niet\</em\>
aanpassen.) \<br\> Ober A beantwoordt de vraag van Klant K. (In de
beantwoording kan Ober A het antwoord van Kok Y \<em\>niet\</em\>
aanpassen.) \<br\> Klant K stelt een tweede vraag aan Ober A. (In de
vraagstelling kan Klant K een nieuwe vraag invullen, omdat in het
raamwerk de ElementCondition Empty heeft!!!) \<br\> Ober A stelt een
tweede vraag aan Kok Y en Z. (In de vraagstelling kan Ober A de vraag
\<em\>niet\</em\> aanpassen.) \<br\> Kok Z beantwoordt de eerste vraag
van Ober A. Ober A kan met de ontvangen melding van Kok Z \<em\>helemaal
niets\</em\>, dus niet communiceren richting Kok Z of Klant K. \<br\>
Kok Z beantwoordt de tweede vraag van Ober A. (In de beantwoording kan
Kok Z de vraag van Ober A \<em\>niet\</em\> aanpassen.) \<br\> Ober A
beantwoordt de vraag van Klant K. (In de beantwoording kan Ober A het
antwoord van Kok Z \<em\>niet\</em\> aanpassen.) \<br\> Nadat Ober A
naar Klant K heeft gecommuniceerd geeft Kok Y alsnog een antwoord aan
Ober A op de tweede vraag. Ober A kan met de ontvangen melding van Kok Y
\<em\>helemaal niets\</em\>, dus niet communiceren richting Kok Y of
Klant K. \<br\> Klant K plaatst een compleet nieuwe bestelling bij Ober
A bestaande uit een tabel met per rij de naam van een gerecht en
eventueel een bijbehorende opmerking. (Klant K kan de gehele tabel
invullen.) \<br\> Ober A plaatst dezelfde bestelling bij Kok X. Ober A
kan de bestelling van Klant K niet aanpassen, en ook niet aanvullen.
\<br\> Kok X geeft Ober A een akkoord. Kok X kan de bestelling van Ober
A niet aanpassen, en ook niet aanvullen. \<br\> Ober A geeft Klant K een
akkoord. Ober A kan het akkoord van Kok X niet aanpassen, en ook niet
aanvullen. \<br\> Einde.\</p\> \<h2\>Scenario 5d\</h2\>
\<p\>\<strong\>Doel:\</strong\>\</p\> \<p\>Testen op de functionaliteit
voor ElementConditions &amp; openSecondaryTransactionsAllowed.\</p\>
\<p\>\<strong\>Figuur:\</strong\>\</p\> \<p\>\<img
src=\"https://github.com/bimloket/visi/blob/master/WIKI%20docs/Testscenario's_Scenario_5d\_-\_parallel\_-\_loop.gif\"
alt=\"\"\>\</p\> \<p\>\<strong\>Beschrijving:\</strong\>\<br\> Ober A
vraagt aan Klant K of hij/zij de kaart wil zien. Klant K beantwoordt de
vraag met Ja, en geeft aan welke kaart hij/zij wil zien. \<br\> Ober A
biedt de menukaart aan die Klant K gevraagd heeft. Ober A kan het
menukaarttype \<em\>niet\</em\> wijzigen. Klant K krijgt de gevraagde
menukaart. \<br\> Klant K stelt een vraag aan Ober A. \<br\> Ober A
stelt een vraag aan Kok Y en Z. (In de vraagstelling kan Ober A de vraag
\<em\> niet\</em\> aanpassen.) \<br\> De beantwoording van Kok Y en Z
laat op zich wachten. Ober A beantwoordt de vraag van Klant K. (In de
beantwoording kan Ober A de vraag van Klant K \<em\>niet\</em\>
aanpassen.) \<br\> Klant K stelt een tweede vraag aan Ober A. (In de
vraagstelling kan Klant K een nieuwe vraag invullen, omdat in het
raamwerk de ElementCondition Empty heeft!!!) \<br\> Ober A stelt een
tweede vraag aan Kok Y en Z. (In de vraagstelling kan Ober A de vraag
\<em\>niet\</em\> aanpassen.) \<br\> Kok Y beantwoordt de eerste vraag
van Ober A. Ober A kan met de ontvangen melding van Kok Y \<em\>helemaal
niets\</em\>, dus niet communiceren richting Kok Y of Klant K. \<br\>
Kok Z beantwoordt de eerste vraag van Ober A. Ober A kan met de
ontvangen melding van Kok Z \<em\>helemaal niets\</em\>, dus niet
communiceren richting Kok Z of Klant K. \<br\> Kok Y beantwoordt de
tweede vraag van Ober A. (In de beantwoording kan Kok Y de vraag van
Ober A \<em\>niet\</em\> aanpassen.) \<br\> Ober A beantwoordt de vraag
van Klant K. (In de beantwoording kan Ober A het antwoord van Kok Y
\<em\>niet\</em\> aanpassen.) \<br\> Nadat Ober A naar Klant K heeft
gecommuniceerd geeft Kok Z alsnog een antwoord aan Ober A op de tweede
vraag. Ober A kan met de ontvangen melding van Kok Z \<em\>helemaal
niets\</em\>, dus niet communiceren richting Kok Z of Klant K. \<br\>
Klant K plaatst een compleet nieuwe bestelling bij Ober A bestaande uit
een tabel met per rij de naam van een gerecht en eventueel een
bijbehorende opmerking. (Klant K kan de gehele tabel invullen.) \<br\>
Ober A plaatst dezelfde bestelling bij Kok X. Ober A kan de bestelling
van Klant K niet aanpassen, en ook niet aanvullen. \<br\> Kok X geeft
Ober A een akkoord. Kok X kan de bestelling van Ober A niet aanpassen,
en ook niet aanvullen. \<br\> Ober A geeft Klant K een akkoord. Ober A
kan het akkoord van Kok X niet aanpassen, en ook niet aanvullen. \<br\>
Einde.\</p\> \<h2\>Scenario 6a\</h2\>
\<p\>\<strong\>Doel:\</strong\>\</p\> \<p\>Testen op de functionaliteit
voor een (hoofd)transactie met twee lagen van (sub)transacties.\</p\>
\<p\>\<strong\>Figuur:\</strong\>\</p\> \<p\>\<strong\>\<img
src=\"https://github.com/bimloket/visi/blob/master/WIKI%20docs/Testscenario's_Scenario_6A_drie_lagen_diep.jpg\"
alt=\"\" width=\"1060\" height=\"682\"\>\<br\> \</strong\>\</p\>
\<p\>\<strong\>Beschrijving:\</strong\>\<br\> Ober A vraagt aan Klant K
of hij/zij de kaart wil zien. Klant K beantwoordt de vraag met Ja, en
geeft aan welke kaart hij/zij wil zien. \<br\> Ober A biedt de menukaart
aan die Klant K gevraagd heeft. Ober A kan het menukaarttype
\<em\>niet\</em\> wijzigen. Klant K krijgt de gevraagde menukaart.
\<br\> Klant K stelt een vraag aan Ober A. \<br\> Ober A stelt een vraag
aan Kok Y. (In de vraagstelling kan Ober A de vraag \<em\>niet\</em\>
aanpassen.) \<br\> Kok Y stelt en vraag aan twee keukenhulpen
(Keukenhulp N en Keukenhulp O) \<br\> Keukenhulp N geeft antwoord aan
Kok Y. \<br\> Keukenhulp O geeft antwoord aan Kok Y. \<br\> Kok Y geeft
antwoord aan Ober A als hij een antwoorden van Keukenhulp N en/of O
heeft gekregen. \<br\> Ober A geeft vervolgens antwoord aan Klant K.
\<br\> Klant K is tevreden over het antwoord en plaats zijn/haar
bestelling bij Ober A. \<br\> Ober A plaats de bestelling bij Kok X
\<br\> Kok X vraagt Keukenhulp P of hij/zij het recept kan opzoeken.
\<br\> Keukenhulp P zoekt het recept op en geeft antwoord aan Kok X
\<br\> Kok X heeft nu het recept en kan akkoord geven aan Ober A \<br\>
Ober A bevestigt de bestelling aan Klant K \<br\>

\<strong\>Te testen varianten (voorstel Michon Maas):\</strong\> \<br\>
\<strong\>Variant 1 (initiatie met interne transactie binnen één
partij)\</strong\> \<br\> Initiatie proces vanuit interne transactie.
Dit kan worden bereikt door een specifieke verdeling van rollen tussen
verschillende leveranciers/partijen. \<br\>

Invulling rollen: \<br\> Rol Ober A ingevuld door leverancier X \<br\>
Rol klant K ingevuld door leverancier X \<br\> Rol Kok Y ingevuld door
leverancier X \<br\> Rol Keukenhulp N en O ingevuld door leverancier Y
\<br\>

\<strong\>Variant 2 (initiatie met interne transactie op raakvlak
partij)\</strong\> \<br\> Initiatie proces vanuit raakvlak tussen
leveranciers/partijen. \<br\>

Invulling rollen: \<br\> rol Ober A ingevuld door leverancier X \<br\>
Rol klant K ingevuld door leverancier Y \<br\> Rol Kok Y ingevuld door
leverancier Y \<br\> Rol Keukenhulp N en O ingevuld door leverancier Y
\<br\>

\<strong\>Variant 3 (initiatie met interne transactie over drie
partijen)\</strong\> \<br\> Proces met meerdere gekoppelde transacties
over drie leveranciers/partijen. \<br\>

Invulling rollen: \<br\> rol Ober A ingevuld door leverancier X \<br\>
Rol klant K ingevuld door leverancier Y \<br\> Rol Kok Y ingevuld door
leverancier Y \<br\> Rol Keukenhulp N en O ingevuld door leverancier Z
\<br\>\</p\>

\<p\>Einde\</p\> \<h2\>Scenario 7a\</h2\>
\<p\>\<strong\>Doel:\</strong\>\</p\> \<p\>Met dit scenario wordt de
juiste werking van de &ldquo;volgordelijkheid van berichten&rdquo;
(sendBefore en sendAfter)&nbsp; functionaliteit getest.\</p\> \<ul\>
\<li\>De ober stuurt een bestelling naar de kok(T3). \<ul\> \<li\>Hier
mag maar 1 van de aanwezige koks gekozen worden. \</li\>\<li\>De ober
mag hierna niet nog een bestelling naar de kok sturen \</li\>\</ul\>
\</li\>\<li\>De kok stuurt een vraag aan de keukenhulp (T4). Dit kan op
basis van de vraag van de ober (T2), of de bestelling van de ober (T3).
\</li\>\<li\>De keukenhulp stuurt een antwoord in T4. De kok moet nu
kunnen kiezen uit de volgende opties: \<ul\> \<li\>Als het op basis van
een vraag van de ober(T2) was kan hij kiezen uit: \<ul\> \<li\>Het
antwoord doorsturen naar de ober in T2 \</li\>\<li\>Een nieuwe vraag
stellen in T4 \</li\>\<li\>Melden dat het antwoord niet gebruikt wordt
in T4. \</li\>\</ul\> \</li\>\<li\>Als het op basis van een bestelling
van de ober was, kan hij kiezen uit: \<ul\> \<li\>Een akkoord of niet
akkoord bericht naar de ober in T3 \</li\>\<li\>Een nieuwe vraag stellen
in T4 \</li\>\<li\>Melden dat het antwoord niet gebruikt wordt in T4
\</li\>\</ul\> \</li\>\</ul\> \</li\>\<li\>Zodra de kok een antwoord
naar de ober verzonden heeft in T2 of T3: \<ul\> \<li\>Kan de kok geen
nieuwe vraag meer naar de keukenhulp sturen in T4 \</li\>\<li\>Kan hij
iedere keer nog maar 1 afsluitend bericht naar de keukenhulp sturen in
T4. Dit bericht correspondeert met het bericht dat naar de ober ging in
T2 of T3. \</li\>\</ul\> \</li\>\</ul\> \<h2\>Scenario 8\</h2\>
\<p\>\<strong\>Doel:\</strong\>\</p\> \<p\>Met dit scenario wordt de
juiste werking van het Defini&euml;ren van het aantal rijen in een tabel
functionaliteit getest. (minOccurs/maxOccurs op child CE)\</p\> \<ul\>
\<li\>Alleen transactie (T1) \<ul\> \<li\>Ober stuurt de vraag aan de
klant of hij de menukaart wil zien \</li\>\<li\>Klant antwoordt
&ldquo;Ja&rdquo; \</li\>\<li\>Ober stuurt het bericht
&ldquo;Menukaart&rdquo; \<ul\> \<li\>Bij de de tabel
&ldquo;Menukaart&rdquo; testen dat er niet meer dan 3 ingevuld mogen
worden en dat hij leeg verzonden kan worden. \</li\>\</ul\>
\</li\>\<li\>Klant antwoordt met &ldquo;Bestelling&rdquo; \<ul\>
\<li\>Bij de tabel &ldquo;Inhoud van de bestelling&rdquo; testen dat er
1 of meer regels ingevuld moeten worden en dat leeg verzenden niet moet
kunnen. \</li\>\<li\>Bij de tabel &ldquo;Inhoud drankbestelling&rdquo;
testen dat er verplicht 1 regel ingevuld moeten worden en dat leeg of
meer dan 1 regel niet mag. \</li\>\</ul\> \</li\>\</ul\> \</li\>\</ul\>

\<h2\>Scenario 9\</h2\> \<p\>\<strong\>Doel:\</strong\>\</p\>
\<p\>Testen op de functionaliteit voor het verplicht bijvoegen van een
bijlage voor een berichttype (appendixMandatory).\</p\>
\<p\>\<strong\>Figuur:\</strong\>\</p\> \<p\>\<img
src=\"https://github.com/bimloket/visi/blob/master/WIKI%20docs/Testscenario's_Scenario_9\_-\_bijlage_verplicht.gif\"
alt=\"Scenario 9 - bijlage verplicht\" width=\"800\"
height=\"164\"\>\</p\> \<p\>\<strong\>Beschrijving:\</strong\>\</p\>
\<p\>Ober A vraagt aan Klant K of hij/zij de kaart wil zien. Klant K
beantwoordt de vraag met Ja, en geeft aan welke kaart hij/zij wil zien.
\<br\> Ober A biedt de menukaart aan die Klant K gevraagd heeft, ZONDER
bijlage.\</p\> \<p\>Ober A kan de menukaart NIET aanbieden aan Klant K,
omdat hij een bijlage is vergeten toe te voegen.\</p\> \<p\>Vervolgens
biedt Ober A de menukaart aan die Klant K gevraagd heeft, MET
bijlage.\</p\> \<p\>Ober A kan de menukaart aanbieden aan Klant K, omdat
hij een bijlage heeft toegevoegd.\</p\> \<p\>Klant K ontvangt menukaart
met bijlage.\</p\> \<p\>Einde.\</p\> \<h2\>Scenario 10\</h2\>
\<p\>\<strong\>Doel:\</strong\>\</p\> \<p\>Testen op de Element
conditions in tabellen (Ce normaal / CE parent / CE Child).&nbsp; Sys
1.6 en hoger\</p\> \<p\>&nbsp;\</p\>
\<p\>\<strong\>Beschrijving:\</strong\>\</p\> \<ul\> \<li\>De ober biedt
de menukaart aan \</li\>\<li\>Klant zegt &ldquo;ja&rdquo;
\</li\>\<li\>Ober vult het menukaart bericht als volgt: \<ul\>
\<li\>Menukaart (bovenste tabel, controleer dat deze naam
&ldquo;Menukaart &rdquo; van het CE leesbaar is). \<ul\> \<li\>Vul 2
regels in, alle cellen moeten waarden bevatten. \</li\>\</ul\>
\</li\>\<li\>Dagmenu (middelste tabel, controleer dat deze naam
&ldquo;Dagmenu&rdquo; van het CE leesbaar is). \<ul\> \<li\>Vul 2 regels
in, alle cellen moeten waarden bevatten. \</li\>\</ul\>
\</li\>\<li\>Drankenkaart (onderste tabel tabel, controleer dat deze
naam &ldquo;Drankenkaart&rdquo; van het CE leesbaar is). \<ul\>
\<li\>Vul 2 regels in, alle cellen moeten waarden bevatten.
\</li\>\</ul\> \</li\>\</ul\> \</li\>\<li\>Klant reageert met het
bericht &ldquo;vraag&rdquo; \<ul\> \<li\>In de &ldquo;Menukaart&rdquo;
tabel controleer je: \<ul\> \<li\>Of de naam van het CE
&ldquo;Menukaart&ldquo; zichtbaar is \</li\>\<li\>De waarden in de kolom
Omschrijving en Prijs moeten aan te passen zijn, eerste kolom is niet
aanpasbaar. \[Naam default fixed / Omschr.&nbsp; se free in deze parent
ce (5)/Prijs se free in child ce (3)\] \</li\>\<li\>Er kunnen
\<strong\>geen\</strong\> regels verwijderd of toegevoegd worden
\</li\>\<li\>Maak de onderste cel &ldquo;Omschrijving&rdquo; leeg ter
voorbereiding op de volgende contole. \</li\>\</ul\> \</li\>\<li\>In de
&ldquo;Dagmenu&rdquo; tabel controleer je: \<ul\> \<li\>Of de naam van
het CE &ldquo;Dagmenu&rdquo; zichtbaar is \</li\>\<li\>Alleen de kolom
Naam is nog gevuld en is aanpasbaar. De andere 2 kolommen zijn leeg.
\[Parent CE dagmenu EMPTY (4)/Naam se FREE in mitt, parent, child,
se(15)/Prijs&nbsp; free in child (3)\] \</li\>\<li\>Er kunnen
\<strong\>wel\</strong\> regels verwijderd of toegevoegd worden
\</li\>\</ul\> \</li\>\<li\>In de &ldquo;Drankenkaart&rdquo; tabel
controleer je: \<ul\> \<li\>Of de naam van het CE
&ldquo;Drankenkaart&rdquo; zichtbaar is \</li\>\<li\>De kolommen naam en
omschrijving zijn aanpasbaar, de kolom prijs is niet aanpasbaar \[FREE
op parent en child CE (6) / fixed op parent ce, child CE en SE prijs
(7)\] \</li\>\<li\>Er kunnen \<strong\>geen\</strong\> regels verwijderd
of toegevoegd worden. \</li\>\</ul\> \</li\>\<li\>Verstuur het bericht
\</li\>\</ul\> \</li\>\<li\>Ober reageert met het bericht
&ldquo;Antwoord&rdquo; \<ul\> \<li\>Contoleer: \<ul\> \<li\>er kunnen
\<strong\>geen\</strong\> regels verwijderd of toegevoegd worden \[FREE
op child en parent in verkeerde volgorde dus geen geldige conditie.
Inhoud van de menukaart moet parent zijn en menukaart moet child zijn om
deze conditie werkend te hebben. (nvt)\] \</li\>\</ul\> \</li\>\</ul\>
\</li\>\</ul\> \<h2\>Scenario 11\</h2\>
\<p\>\<strong\>Doel:\</strong\>\</p\> \<p\>Testen op niet-ascii tekens
in a) omschrijving van elementen (SimpleElementType, ComplexElementType,
MessageType, TransactionType) en b) enumeratie (UserDefiniedTYpe).\</p\>
\<p\>\<strong\>Beschrijving:\</strong\>\</p\> \<p\>Ober A start een
nieuwe transactie en verstuurd een bericht naar Klant K. In het bericht
vult Ober A voor element \"Enumeration / Keuzelijst\" de waarde \"eaiou
with circumflexes: êâîôû\" in.\</p\>
\<p\>\<strong\>Resultaat:\</strong\>\</p\> \<p\>Aan Ober A worden in het
bericht elementen getoond met &gt; en &amp; en € in de omschrijving. Het
element Enumeration / Keuzelijst toont een lijst met onder andere
êâîôûëäïöü&lt;&quot;µ@ç€.\</p\> \<p\>Klant K ontvangt een bericht met
voor element \"Enumeration / Keuzelijst\" de waarde \"eaiou with
circumflexes: êâîôû\"\</p\> \<p\>Einde.\</p\>

\<h2\>Scenario Inlezen van gearchiveerd VISI project\</h2\>
\<p\>\<strong\>Doel:\</strong\>\</p\> \<p\>Testen op het inlezen van een
bestand dat voldoet aan \<a
href=\"https://github.com/bimloket/visi/wiki/Bijlage-11-Richtlijn-voor-het-archiveren-van-VISI--projecten\"\>de
richtlijn voor het archiveren van VISI projecten\</a\>\</p\>
\<p\>\<strong\>Beschrijving:\</strong\>\</p\> \<p\>Het bestand wordt
zonder handmatige voorbewerking ingelezen in de applicatie. Het staat
vrij hoe dit ingelezen wordt en door wie.\</p\> \<p\>Met een nabewerking
worden openstaande transacties worden geadresseerd aan \</p\> \<p\>Wat
te doen met soap servers? Deze moeten eigenlijk aangepast worden om de
communicatie verder te kunnen laten lopen.\</p\>
\<p\>\<strong\>Resultaat:\</strong\>\</p\> \<p\>Het systeem heeft alle
informatie uit het bestand ingelezen, te weten: a) transacties,
berichten, bijlagen, b) raamwerken, c) projectspecifieke
berichten.\</p\> \<p\>Het systeem kan openstaande transacties
verder.\</p\> \<p\>\<strong\>Test Data:\</strong\>\</p\> \<p\>Bestanden
zijn op te vragen bij Elisabeth Kloren.\</p\>

\<h2\>Scenario Archiveren van VISI project\</h2\>
\<p\>\<strong\>Doel:\</strong\>\</p\> \<p\>Testen op het aanmaken van
een bestand dat voldoet aan \<a
href=\"https://github.com/bimloket/visi/wiki/Bijlage-11-Richtlijn-voor-het-archiveren-van-VISI--projecten\"\>de
richtlijn voor het archiveren van VISI projecten\</a\>\</p\>
\<p\>\<strong\>Beschrijving:\</strong\>\</p\> \<p\>Een project wordt
gearchiveerd (vanuit de applicatie). Het staat vrij hoe dit \"archief\"
aangemaakt wordt en door wie.\</p\> \<p\>Het project moet over de
volgende eigenschappen beschikken:\</p\> \<p\>Transactie met een
onderwerp langer van 256 karakters.\</p\> \<p\>Transactie met in het
onderwerp niet alfa-numerieke karakters.\</p\> \<p\>Bijlage met een naam
langer van 256 karakters.\</p\>
\<p\>\<strong\>Resultaat:\</strong\>\</p\> \<p\>Het systeem heeft
informatie uit het project uitgeschreven, te weten: alle a) transacties,
berichten, bijlagen, b) raamwerken, c) projectspecifieke berichten. De
structurering van de data is conform de richtlijn.\</p\> \<p\>Speciale
aandacht verdienen niet-ascii tekens in het onderwerp van een
transactie, die niet toegestaan zijn in namen van een Microsoft Windows
directory (bijvoorbeeld / ). Deze karakters moeten in de directory
benamingen terugkomen als spaties.\</p\> \<h2\>Scenario HTTPS\</h2\>
\<p\>\<strong\>Doel:\</strong\>\</p\> \<p\>Testen op het afdwingen van
beveiligde communicatie\</p\>
\<p\>\<strong\>Beschrijving:\</strong\>\</p\> \<p\>1. Van een bestaand
project wordt het projectspecifiek bericht aangepast. Het adres van de
soap server wordt gewijzigd van https:// in http://.\</p\> \<p\>2. Het
aangepaste projectspecifiek bericht wordt ingelezen in de
applicatie.\</p\> \<p\>\<strong\>Verwachte resultaat:\</strong\>\</p\>
\<p\>De applicatie weigert het projectspecifieke bericht, en de
xml-bestand wordt niet ingelezen / geactiveerd.\</p\>
\<p\>\<strong\>Test Data:\</strong\>\</p\> \<p\>Het projectspecifiek
bericht &quot;projectspecifiekberichttotenmetbericht_6.xml&quot;.\</p\>
\<h2\>Scenario Bijlagen &gt;2GB\</h2\>
\<p\>\<strong\>Doel:\</strong\>\</p\> \<p\>Testen op het verzenden en
ontvangen van bijlagen groter dan 2GB en kleiner dan 10GB\</p\>
\<p\>\<strong\>Beschrijving:\</strong\>\</p\> \<p\>1. Bij een nieuw
bericht wordt een zip-bestand van 9,9 GB gevoegd. In het zip-bestand zit
minimaal een pdf.\</p\> \<p\>2. Het bericht wordt verstuurd en gaat via
het soap protocol naar een externe server.\</p\> \<p\>3. Het bericht
wordt ontvangen op de externe server. En het bericht bevat het
zip-bestand als de bijlage.\</p\> \<p\>\<strong\>Verwachte
resultaat:\</strong\>\</p\> \<p\>De bijlage is een zip-bestand en op de
externe server uit te pakken. De bestandsgrootte op verzendende en
ontvangende server zijn gelijk (in bytes). Het uit de zip gehaalde
pdf-bestand heeft op beide servers dezelfde grootte (in bytes). Tevens
is het pdf-bestand te openen op de ontvangende server met een
applicatie, en is de inhoud overeenkomstig met het pdf-bestand op de
verzendende server.\</p\> \<p\>\<strong\>Test Data:\</strong\>\</p\>
\<p\>Voorafgaand aan het uitvoeren van het testscenario kan een
zip-bestand worden samengesteld met minimaal 1 pdf-bestand.\</p\>

\</div\> \<div class=\"ClearBoth\"\>\</div\>

## Testscenario's metaraamwerk

\<div class=\"wikidoc\"\> \<h2\>Scenario A.1 (meta-raamwerk)\</h2\>
\<p\>\<strong\>Doel:\</strong\>\</p\> \<p\>Testen op de functionaliteit
voor het initi&euml;ren van een project met het meta-raamwerk.\</p\>
\<p\>\<strong\>Prerequisite:\</strong\>\</p\> \<p\>VISI Project met
meta-raamwerk &amp; meta-projectspecifiek bericht \<br\> raamwerk \<br\>
projectspecifiek bericht\</p\> \<p\>\<strong\>Figuur:\</strong\>\</p\>
\<p\>\<img
src=\"https://github.com/bimloket/visi/blob/master/WIKI%20docs/Testscenario's_scenario-a1.png\"
alt=\"\"\>\</p\> \<p\>\<strong\>Beschrijving:\</strong\>\</p\>
\<p\>Project-initiator biedt aan Project-executor een voorstel voor een
nieuw VISI project aan met als bijlagen een nieuw raamwerk en
projectspecifiek bericht.&nbsp;Project-executor beantwoordt het voorstel
met acceptatie van het nieuwe VISI project. Project-initiator bevestigt
de projectinitiatie aan Project-executor. Project-executor meldt terug
aan Project-initiator dat het project ingericht is.\</p\>
\<p\>Einde\</p\> \<p\>\<strong\>Expected result:\</strong\>\</p\>
\<p\>\...\</p\> \<p\>&nbsp;\</p\> \<h2\>Scenario A.2
(meta-raamwerk)\</h2\> \<p\>\<strong\>Doel:\</strong\>\</p\> \<p\>Testen
op de functionaliteit voor het be&euml;indigen van een project met het
meta-raamwerk.\</p\> \<p\>\<strong\>Prerequisite:\</strong\>\</p\>
\<p\>VISI Project met meta-raamwerk &amp; meta-projectspecifiek
bericht\</p\> \<p\>VISI Project met raamwerk &amp; projectspecifiek
bericht\</p\> \<p\>\<strong\>Figuur:\</strong\>\</p\> \<p\>\<img
src=\"https://github.com/bimloket/visi/blob/master/WIKI%20docs/Testscenario's_scenario-a2.png\"
alt=\"\"\>\</p\> \<p\>\<strong\>Beschrijving:\</strong\>\</p\>
\<p\>Project-initiator biedt aan Project-executor een voorstel voor een
nieuw VISI project aan met als bijlagen een nieuw raamwerk en
projectspecifiek bericht.&nbsp;Project-executor beantwoordt het voorstel
met acceptatie van het nieuwe VISI project. Project-initiator bevestigt
de projectinitiatie aan Project-executor. Project-executor meldt terug
aan Project-initiator dat het project ingericht is.\</p\>
\<p\>Einde\</p\> \<p\>\<strong\>Expected result:\</strong\>\</p\>
\<p\>\...\</p\> \<p\>&nbsp;\</p\> \<h2\>Scenario B
(meta-raamwerk)\</h2\> \<p\>\<strong\>Doel:\</strong\>\</p\> \<p\>Testen
op de functionaliteit voor het actualiseren van een bestaand project met
het meta-raamwerk.\</p\> \<p\>\<strong\>Prerequisite:\</strong\>\</p\>
\<p\>VISI Project met meta-raamwerk &amp; meta-projectspecifiek
bericht\</p\> \<p\>VISI Project met raamwerk &amp; projectspecifiek
bericht\</p\> \<p\>gewijzigd raamwerk\</p\> \<p\>gewijzigd
projectspecifieke bericht\</p\> \<p\>\<strong\>Figuur:\</strong\>\</p\>
\<p\>\<img
src=\"https://github.com/bimloket/visi/blob/master/WIKI%20docs/Testscenario's_scenario-b.png\"
alt=\"\" width=\"451\" height=\"879\"\>\</p\>
\<p\>\<strong\>Beschrijving:\<br\> \</strong\>Wijzigingsinitiator biedt
aan VISI Communicatiemanager een voorstel voor het wijzigen van een
bestaand VISI project aan met als bijlagen een gewijzigd raamwerk en een
gewijzigd projectspecifiek bericht.&nbsp;VISI Communicatiemanager
beantwoordt het voorstel met akkoord. Wijzigingsinitiator bevestigt de
voorgestelde wijziging met een voorstel van een ingangsdatum en
-tijdstip aan VISI Communicator. VISI Communicator beantwoordt het
voorstel met akkoord. Wijzigingsinitiator bevestigt de ingangsdatum en
-tijdstip.\</p\> \<p\>Einde\</p\> \<p\>\<strong\>Expected
result:\</strong\>\</p\> \<p\>\...\</p\> \<p\>&nbsp;\</p\> \</div\>\<div
class=\"ClearBoth\"\>\</div\>
