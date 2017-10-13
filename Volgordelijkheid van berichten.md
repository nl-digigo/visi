# Volgordelijkheid van berichten

In de praktijk blijkt het soms wenselijk om berichten pas te kunnen versturen nadat andere berichten zijn ontvangen, dat berichten alleen verstuurd mogen worden wanneer andere berichten nog niet zijn ontvangen of dat een bericht slechts één keer verzonden mag worden. 
Om dit mogelijk te maken is het nodig de volgordelijkheid van te versturen berichten af te dwingen.

Doel is het inperken van mogelijke voorzettingen uitgaande van een bepaalde toestand in de berichtenflow binnen een transactie en haar subtransacties. Er zijn drie oorzaken waarom bepaalde voortzettingen niet aangeboden mogen worden:
1.	Een bericht mag pas verzonden worden nadat één of meerdere specifieke berichten aanwezig zijn (reeds ontvangen of verzonden) in de transactie of zijn subtransacties, er is dus een afhankelijkheid tussen twee (of meer) al aanwezige berichten.
2.	Een bericht mag alleen verzonden worden wanneer één of meerdere specifieke berichten niet aanwezig zijn (nog niet ontvangen of verzonden) in de transactie of zijn subtransacties, er is dus een afhankelijkheid tussen twee (of meer) nog niet aanwezige berichten.
3.	Een bericht dat maar één keer verzonden mag worden is reeds verzonden, er is dus een restrictie op het aantal keren dat een bericht verzonden mag worden.

## Aanpassingen ten opzichte van de voorgaande systematiek:
* De bestaande klasse ”MessageInTransactionType” wordt uitgebreid met een extra relatie “conditions” van het type “OPTIONAL SET[1:?](1__) OF MessageInTransactionTypeCondition”;
* Een nieuwe klasse “MessageInTransactionTypeCondition” wordt gecreëerd. Deze bepaalt het type van de set-relatie die in de hierboven genoemde “conditions” is gespecificeerd. Als er een “conditions” relatie is gespecificeerd dan moet deze set minimaal één element bevatten. Als de “conditions” set meer dan één element bevat dan worden de betrokken elementen geëvalueerd volgens tussenliggende logische EN-operatoren;
* Aan de klasse “MessageInTransactionTypeCondition” wordt een relatie "sendAfter" toegevoegd van het type “OPTIONAL SET [1:?](1__) MessageInTransactionType”. Deze relatie is optioneel, indien aanwezig dient de set minimaal één MITT te bevatten. Indien de “sendAfter” set meer dan één MITT bevat worden de betrokken MITT's geëvalueerd volgens tussenliggende logische OF-operatoren;
* Aan de klasse “MessageInTransactionTypeCondition” wordt een relatie "sendBefore" toegevoegd van het type “OPTIONAL SET [1:?](1__) MessageInTransactionType”. Deze relatie is optioneel, indien aanwezig dient de set minimaal één MITT te bevatten. Indien de “sendBefore” set meer dan één MITT bevat worden de betrokken MITT's geëvalueerd volgens tussenliggende logische OF-operatoren;

* Toegestane verwijzingen bij "sendAfter" en "sendBefore "zijn "MessageInTransactionType’s" die ontvangen kunnen worden in de actuele transactie of van de aangesloten transacties, waarbij de persoon die het actuele bericht behandelt initiator of executor is. Met aangesloten transacties worden de transactie waaruit een transactie geïnitieerd is en de directe subtransacties bedoeld. Met directe subtransacties worden transacties bedoeld die vanuit de actuele transactie geïnitieerd zijn, dus niet subtransacties van subtransacties.
	* Deze beperking is geïntroduceerd omdat een VISI Raamwerk plus PSB zich altijd op dezelfde manier moet gedragen, onafhankelijk of alle actoren op dezelfde VISI server werken, of dat iedere actor op een andere VISI server werkt. Dit is een basis uitgangspunt wat t/m de 1.3 standaard al zo werkt en wordt om deze reden ook bij deze aanpassing gerespecteerd wordt. Op deze manier ziet de betreffende actor ook altijd de berichten die zijn keuzes beïnvloeden, doordat hij ze verstuurt of ontvangt.
	* Als voorbeeld: de kok mag alleen maar Before of After relaties gebruiken met transacties waarin hij zelf als initiator of executor meewerkt en deze transacties moeten direct gekoppeld zijn aan de transactie die de kok op dit moment wil behandelen.

* Indien de "MessageInTransactionTypeCondition" zowel één of meerdere "sendBefore" als één of meerdere "sendAfter" bevat worden deze sets geëvalueerd volgens een logische OF-operator.

* Het effect om een bericht slechts één keer te mogen versturen wordt bereikt door de MiTT van het betreffende bericht in de sendBefore lijst van diezelfde MITT te plaatsen. In dit specifieke geval mag een bericht dus _niet_ naar meerdere executors worden verzonden. 

**toevoeging op bestaande klasse**
// multi-line
{{ 
ENTITY MessageInTransactionType;
 ….
 conditions : OPTIONAL SET[1:?](1__) OF MessageInTransactionTypeCondition;  -- AND
END_ENTITY;
}}

**nieuwe klasse**
//multiline
{{
ENTITY MessageInTransactionTypeCondition;
 sendAfter : OPTIONAL SET [1:?](1__) MessageInTransactionType;  -- OR
 sendBefore : OPTIONAL SET [1:?](1__) MessageInTransactionType;  -- OR
END_ENTITY;
}}

## Backwards compatibiliteit
Voor backward comptabiliteit is de “conditions” relatie optioneel: zonder deze relatie is de afhandeling van het VISI berichtenverkeer gelijk aan die van de vigerende VISI systematiek 1.3. 