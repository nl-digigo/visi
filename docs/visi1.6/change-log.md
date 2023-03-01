2.2 Belangrijkste verbeteringen in versie 1.2
Hieronder de belangrijkste wijzigingen die in versie 1.2 al zijn doorgevoerd t.o.v. de vorige versies (deze verbeteringen zijn dus inmiddels integraal onderdeel van versie 1.3). In bijlage 5 worden deze punten verder toegelicht.

Transactiekoppeling; communicatie over meerdere transacties.
Hergebruik en blokkeren gegevenselementen .
DateTime format.
Vervanging personen binnen een project (Successor ; zie ook TC015 oneindige loops).
Toevoeging MITT MessageInTransactionType aan bericht.
2.3 Wijzigingen in versie 1.3 t.o.v. versie 1.2
(de nummering is overeenkomstig het toenmalige statusoverzicht van de TC).

Vergroten bijlage capaciteit VISI-berichten (M0001)
Dit betreft het vergroten van de bijlagecapaciteit van de VISI-berichten tot ca. 120 MB. Dit wordt voor verdere optimalisatie gecombineerd met ‘chunking’.

Verplicht stellen onderwerpveld (M0002)
Het verplicht stellen van het onderwerpveld, zodat er geen berichten zonder onderwerpveld kunnen worden verzonden.

Uniek volgnummer voor iedere transactie (M0004)
Iedere transactie krijgt een unieke identificatie. Hiervoor wordt een ‘Globally Unique Identifier’ (GUID) gebruikt (bijvoorbeeld ‘ac0234d8-5c89-40c0-8afc-57cdbe9ac00c’). De Entity ‘TransactionTemplate’ in VISI Systematiek Deel 2 is uitgebreid met het verplichte attribuut ‘number’ van het type ‘INTEGER’ en de Entity ‘OrganisationTemplate’ is uitgebreid met een ‘abbreviation’ attribuut. Zie bijlage 3, paragrafen 1.13 en 1.7.

Machtiging om namens een andere gebruiker berichten te versturen (M0006)
Dit betreft de transparantie bij tijdelijke vervanging van een persoon, oftewel het mogelijk maken om mensen te ‘machtigen’ om namens hem/haar berichten te verzenden. Tevens kan hiermee worden geregeld dat meerdere mensen uit naam van de formele rolvervuller (bijvoorbeeld Directievoerder UAV) berichten kunnen verzenden. Zie bijlage 3, paragraaf 1.8.

Traceerbaarheid van communicatie waarborgen na aanpassen raamwerk (TC001)
Dit is geregeld doordat de huidige ‘namespace’ van het VISI berichtenverkeer is gewijzigd in een raamwerk specifieke ‘namespace’ die is ontleend aan het nieuwe ‘namespace’ attribuut van de ProjectType entiteit van het raamwerk. De promotor software gebruikt dit gegeven om de correcte target ‘namespace’ te genereren. Opmerking: VISI-software zal na invoering van VISI Systematiek versie 1.3 rekening moeten houden dat er meerdere versies van een raamwerk naast elkaar actief kunnen zijn.

Appendixtypes koppelen aan transacties (TC006)
Er kan nu in een raamwerk worden aangegeven wanneer welk AppendixType gekozen mag worden. Standaard en richtlijn voor het archiveren van VISI-projecten ((TC010) Dit betreft de eisen waaraan het uitwisseling- en archiveringsformaat voor (afgeronde) VISI projecten (het ‘VISI archief’) moet voldoen (zie bijlage 11).

Metaraamwerk (TC013)
Dit is een procedure met transacties voor het verspreiden van een nieuwe versie van een raamwerk en/of een project specifiek bericht. Door dit ‘metaraamwerk’ wordt de VISI systematiek zelf gebruikt voor het managen van VISI-communicatie binnen een project. Een projectraamwerk kan (bijvoorbeeld bij een langlopend project) nu dus ook worden gewijzigd als er nog openstaande transacties zijn (zie bijlage 6).

Richtlijn voor ‘successor’ (TC015)
Dit betreft een werkwijze waarbij een gebruiker die een bepaalde rol in het VISI-raamwerk vervult, (door middel van een PersonInRole element) wordt opgevolgd door een andere gebruiker. Hiervoor dient het link-attribuut ‘successor’ (in Systematiek Deel 1). Hierdoor worden ‘oneindige loops’ voortaan voorkomen (zie ook bijlage 7).

Aanvullende functionele eisen (TC016)
Naar aanleiding van gebruikerswensen is een aantal functies en eisen beschreven (zie bijlage 10) die gebruikers van producten met het VISI-keurmerk minimaal van het desbetreffende product mogen verwachten, als het gaat om:

borging van de authenticiteit van VISI-berichten en bijbehorende bestanden;
presentatie van de communicatiestructuur in een VISI-raamwerk;
achteraf reproduceren van gevoerde VISI-communicatie.
Dubbele messagetypes (TC022)
Dit betreft een aanpassing in Systematiek Deel 2, waarmee expliciet kan worden aangegeven of een MessageInTransactionType een bericht betreft waarmee een nieuwe transactie kan worden gestart.

Boolean waarden (TC024)
Vastgesteld is dat voor Booleans de waarde ‘1’ = ‘True’ en ‘0’ = ‘False’, en dat beide vormen mogen worden gebruikt. Daarbij geldt tevens dat ‘geen waarde’ gelijk is aan ‘0’, oftewel ‘False’, omdat binnen de VISI-systematiek ‘geen waarde’ ook valide is.

Optionele velden
Door een aantal velden optioneel te maken, kunnen raamwerken (xml en xsd) compacter worden. Een compacter en efficiënter raamwerk resulteert in vergrootte schaalbaarheid en snelheid van VISIsoftware en betere leesbaarheid. N.B. Deze verbetering kon nog niet worden doorgevoerd in de IDM-DIS (mogelijk wel in de F-DIS).

2.4 Wijzigingen in versie 1.4 t.o.v. versie 1.3
(de nummering is overeenkomstig Codeplex).

Beveiliging van VISI-communicatie (1003).
Dit betreft de eis dat VISI communicatie tussen SOAP-servers altijd plaats vindt via https en SSL. Het gebruik van HTTPS (TLS 1.0 of hoger, met minimaal 128 bits encryptie) voor het versturen van VISI berichten en bijlagen is verplicht. Alle communicatie over internet tussen een VISI gebruiker en een VISI applicatie moet gebruik maken van HTTPS met dezelfde specificaties.

Koppelen van externe en interne processen (1007)
Dit betreft de eis dat VISI moet kunnen faciliteren dat projectpartners onafhankelijk van elkaar de VISI communicatie binnen de eigen projectorganisatie kunnen wijzigen, m.a.w. dat interne en externe projectprocessen in één raamwerk kunnen worden gebundeld. In versie 1.4 is deze probleemdefinitie helder gedocumenteerd (maar er is dus nog geen technische oplossing bedacht). Het onderwerp staat met hoge prioriteit op de lijst van verbeterpunten voor versie 1.5.

Gebruik van ‘DateTime’ velden (1022)
Dit betreft een aanscherping van de keurmerktest op ondersteuning en correct gebruik van dit entiteittype (datum + tijdstip) als invoerveld in VISI berichten. Overdragen van rollen vanuit de standaard (1024). Dit betreft het kunnen genereren van een export naar het VISI-archiefformaat, en daarna een import van dit VISI-archiefformaat, om hiermee de verantwoordelijkheden van een uitgestapte contractpartner (bijvoorbeeld na een faillissement) over te dragen.

Het kunnen afdwingen van een bepaalde volgordelijkheid van te versturen berichten (1025)
Dit betreft het inperken van mogelijke voorzettingen van een transactie, uitgaande van een bepaalde toestand in de berichtenflow, (1) zodat een bericht pas mag worden verzonden nadat één of meerdere specifieke berichten aanwezig zijn (reeds ontvangen of verzonden) in de transactie of zijn subtransacties, m.a.w. een afhankelijkheid tussen twee (of meer) al aanwezige berichten, danwel (2) zodat een bericht alleen mag worden verzonden zolang een of meerdere specifieke berichten nog niet aanwezig zijn. (hiermee kan ook geregeld worden dat een bericht maar één keer verzonden mag worden door het bericht met deze regel naar zichzelf te verwijzen).

Automatisch starten van een project (1026)
Dit betreft een uitbreiding van het fenomeen ‘Meta-raamwerk’ zodat een VISI-project in combinatie met een project-specifiek bericht vanuit het meta-raamwerk (‘automatisch’) kan worden gestart. Het fenomeen ‘meta-raamwerk’ – dat al sinds versie 1.3 van VISI bestond – is een voor elk project specifiek overkoepelend raamwerk waarmee mutaties in het projectraamwerk zelf of een projectspecifiek bericht over de deelnemers van een VISI netwerk kan worden gedistribueerd. Het metaraamwerk zal nu ook de roltypen ‘Project-initiator’ en ‘Project-executor’ omvatten.

(Impact op) backwards compatibiliteit (1040)
Backwards compatibiliteit betekent dat de werking van een nieuwe versie van de VISI Standaard (en/of een raamwerk volgens deze standaard) minimaal dezelfde werking heeft als de vorige versie. Bij ieder verbeterpunt wordt geanalyseerd en gedocumenteerd of de technische oplossing impact daarop heeft. Backwards compatibiliteit is niet altijd vanzelfsprekend. Indien er functionaliteit weloverwogen wordt verwijderd, of indien gedrag wordt gewijzigd, is er op dat punt geen sprake meer van backwards compatibiliteit.

2.5 Wijzigingen in versie 1.6 t.o.v. versie 1.4
(de nummering is overeenkomstig Github).

Definiëren van aantal rijen in een tabel (1008)
Voor een ComplexElementType kan optioneel een minimum en/of maximum aantal keer dat het ComplexElementType mag voorkomen vastgelegd worden in een raamwerk.

ENTITY ComplexElementType;
...
minOccurs : OPTIONAL INTEGER;
maxOccurs : OPTIONAL INTEGER;
...
END_ENTITY;
Wanneer in een raamwerk (conform versie 1.6) bij minOccurs en maxOccurs niets wordt ingevuld dan gelden de regels van de voorgaande systematiek versies;
Voor de typen ProjectType, MessageType, PersonType, AppendixType, OrganisationType komt een Complex Element altijd 0 of 1 keer voor. Voor de typen Complex Elementtype komt een complex Element altijd 0 tot oneindig voor.

Bijlage verplicht kunnen stellen per berichttype (1019)
Als er een document ter acceptatie verzonden moet worden en de bijlage wordt er niet bij gedaan kan worden voorzien dat het bericht afgekeurd gaat woorden. Afdwingen dat een bijlage moet worden toegevoegd kan dan helpen. De impact van het verplicht stellen van een bijlage is laag. Het dwingt af dat de berichten die een bijlage nodig hebben deze ook daadwerkelijk hebben. Dat kan in een aantal gevallen een voordeel voor gebruikers opleveren omdat er geen bijlagen meer vergeten worden.
De gekozen oplossing is om per MessageType aan te geven of een appendix verplicht is.

ENTITY MessageType;
...
appendixMandatory: OPTIONAL BOOLEAN;
...
END_ENTITY;
Deze oplossing is backwards compatible, omdat de boolean optioneel is gemaakt. Deze optie wordt daarom niet afgedwongen.

ElementConditions voor tabellen (1226)
Tot versie 1.6 bestond geen eenduidige afspraak op welk niveau een Element Condition voor een tabel gezet moet worden. Hierdoor is de werking in de software van te voren moeilijk voorspelbaar en kan per softwareleverancier verschillen. Een tabel wordt in een raamwerk gecreëerd door een Complex Element aan een Complex Element toe te voegen. De onduidelijkheid zit hem in het Complex Element waar de element condition aan toegevoegd dient te worden. Is dit het ouderelement of het kindelement? In bijlage 12 is een nieuwe voorrangstabel opgenomen om deze onduidelijkheid weg te nemen.

Ophogen van bijlagegrootte naar 10GB (1236)
Voor de grootte van de bijlagen is er een beperking volgens de VISI Standaard. Voor VISI Standaarden versie 1.0, 1.1 en 1.2 is het maximum 20MB per bericht, en voor versie 1.3 en 1.4 is dit maximum 120MB per bericht. Een maximum van 20MB of 120MB is anno 2019 niet realistisch. Met de VISI Standaard kunnen ook BIM-containers of opleverdossiers uitgewisseld worden. Deze containers en opleverdossiers kunnen bijzonder omvangrijk zijn/worden, daarom is het maximum verhoog naar 10 GB.

2.6 Wijzigingen in versie 1.7 t.o.v. versie 1.6 (in ontwikkeling)
(de nummering is overeenkomstig Github).

Raamwerk met niet-ascii tekens in keuzelijsten en omschrijvingen (enumerations & descriptions) (#68)
Het kwam voor de berichten met niet-ascii tekens in keuzelijsten en omschrijvingen niet correct werden getoond bij de ontvanger van een VISI bericht. Om dit te voorkomen is gesteld dat in a) omschrijving van elementen (SimpleElementType, ComplexElementType, MessageType, TransactionType) en b) enumeratie (UserDefiniedTYpe) niet-ascii tekens correct getoond dienen te worden.
