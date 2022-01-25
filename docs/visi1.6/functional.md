# Functioneel


## Inleiding

De functionele documentatie is bedoeld voor een software productmanager of een softwareontwikkelaar.


## Leeswijzer

De functionele uitleg is opgebouwd in hoofdstukken, en leest het beste hoofdstuk voor hoofdstuk. Met een hoofdstuk wordt een functioneel abstractieniveau inclusief bouwstenen uitgelegd. Aan het einde van een hoofdstuk wordt getoetst of de inhoud in voldoende mate begrepen wordt, en lezer verder kan naar het volgende hoofdstuk. In het volgende hoofdstuk wordt de functionele beschrijving aangevuld of verdiept qua bouwstenen. Hoofdstukken overslaan leidt tot het missen van bouwstenen en logische denkvolgorde.
De hoofdstukopbouw is afgestemd om het kennisniveau van de lezer, en verloopt van newbie tot expert. Voor de newbie wordt in hoofdstuk 1 uitgelegd hoe er communicatie in een project plaatsvindt. Daarna staat in hoofdstuk 2 de verdiepingsslag dat deze communicatie verschillend is per project, en in een sjabloon vastgelegd wordt. Niet ieder project heeft namelijk dezelfde communicatiepatronen. Als aanvulling op de communicatiepatronen wordt in hoofdstuk 3 beschreven hoe bestanden als bijlage onderdeel van de communicatie zijn. Hoofdstuk 4 legt uit hoe om te gaan met het wijzigen van de project specifieke communicatiepatronen in een operationeel project. Wat er aan het einde van een project met de communicatie en informatie gebeurt staat in hoofdstuk 5. Het project specifiek maken van de communicatiepatronen heeft nog een verdiepingsslag, welke in hoofdstuk 6 beschreven staat. Als toegift staan in laatste hoofdstuk de overige (optionele) bouwstenen toegelicht.


## Projectinrichting


### PSB


#### Project

Alles wordt opgehangen aan een project. De definitie van een project is in dit geval een, in de tijd en middelen begrensde, activiteit om iets te creëren. Wat er gecreëerd wordt is een service / product / resultaat. Een project wordt in samenwerking tussen verschillende mensen en organisaties uitgevoerd. De middelen kunnen zowel menselijke inspanningen als materialen zijn. Het onderscheidt zich door zijn eenmalige karakter van een programma of proces. Een project vereist een specifieke managementomgeving om activiteiten te coördineren en te sturen op kwaliteit, tijd en geld. Voor de coördinatie is communicatie nodig.

Van een project worden beperkte, verplichte eigenschappen vastgelegd. Ieder project heeft een unieke identificatie waarmee naar een project gerefereerd kan worden, zonder dat misverstanden kunnen ontstaan welk project bedoeld wordt. Daarnaast heeft een project een naam en een omschrijving. Deze naam en omschrijving behoeven niet uniek te zijn, en is een aanvulling op de unieke identificatie bedoeld voor toelichting en zorgt voor eenvoudigere herkenning voor het project (door mensen). Aanvullend wordt van het project het moment van start en einde vastgelegd.

<aside class="example" title="Project vastleggen in PSB">
<p><b>Project</b><br>
Unieke identificatie: _badc9dab-807e-4319-bd56-60c57605e109<br>
Naam: 			Realisatie West- / Oostlijn<br>
Omschrijving:		Realisatie van metrolijn 47 inclusief 7 nieuwe stations met 9,7	kilometer spoor, waarvan 7,1 kilometer ondergronds<br>
Startdatum:		23-12-2020 14:59<br>
Einddatum: 		20-05-2022 07:08</p>
</aside>


#### Persoon

De activiteit van een project wordt uitgevoerd door personen. De mensen, die aan een project werken, worden personen genoemd. Ieder persoon in een project heeft een unieke identificatie waarmee naar de persoon in het project gerefereerd kan worden, zonder dat misverstanden kunnen ontstaan welke persoon bedoeld wordt. Naast de identificatie heeft een persoon een naam en een gebruikersnaam. De naam is een aanvulling op de unieke identificatie bedoeld voor eenvoudigere herkenning (door mensen). De gebruikersnaam kan een technische invulling hebben, zie 

<div class="issue" data-number="136"></div> 

(Gebruikersnaam kan gebruikt worden voor het linken naar een gebruiker in (bestaande) software systemen.)

<aside class="example" title="Personen vastleggen in PSB">
<p>
<b>Persoon</b><br>
Unieke identificatie: _0c585186-fa97-4de7-8fe0-5c4bee3afead<br>
Naam: 			Urbain Servranckx<br>
Gebruikersnaam:	uservranckx
</p>
<p>
<b>Persoon</b><br>
Unieke identificatie: _974e4822-4944-45ad-ab2f-161370662e30<br>
Naam: 			Georges Remi<br>
Gebruikersnaam:	gremi
</p>
<p>
<b>Persoon</b>
Unieke identificatie: _d4e02752-2ac6-4700-ae67-d33f428f78fb<br>
Naam: 			Luc Dupanloup<br>
Gebruikersnaam:	lupanloup
</p>
</aside>

<p class="note" title="Identificatie is niet globaal">
Indien een persoon aan twee projecten werkt, kan de unieke identificatie van deze persoon per project verschillend zijn. Er is geen sprake van een globale unieke identificatie, maar een unieke identificatie binnen een project. </p>


#### Organisatie

Personen voeren een activiteit in een project uit namens een organisatie. In een zakelijke context werken de mensen aan een project voor een organisatie, daarom is vastlegging van organisaties belangrijk. Ook iedere organisatie in een project heeft een unieke identificatie. Naast de identificatie heeft een organisatie een naam en een afkorting. De naam is een aanvulling op de unieke identificatie bedoeld voor eenvoudigere herkenning (door mensen). De afkorting heeft een functioneel en technisch doel. Deze eigenschap is een drie letterige afkorting van de organisatie, die binnen het project uniek is. 
<div class="issue" data-number="137"></div> 
Uit de afkorting is de organisatorische bron van communicatie ter herleiden, zie … (Verwijzing naar uitleg over eigenschap van TransactionTemplate). Voor een organisatie wordt een contactpersoon gedefinieerd middels een verwijzing naar de unieke identificatie van een persoon. Deze verwijzing heeft geen functionele betekenis, en betreft enkel een administratief doel.

<aside class="example" title="Organisatie vastleggen in PSB">
<p><b>Organisatie</b><br>
Unieke identificatie: _87e9144d-04d6-4a5f-bdcb-b50e96c2b498<br>
Naam: 			Gemeente Rommelgem<br>
Afkorting:		GRG<br>
Contactpersoon:	_0c585186-fa97-4de7-8fe0-5c4bee3afead<br>
</p>
</aside>

Per organisatie wordt ook het adres vastgelegd. Dit is geen fysiek of postadres, maar een digitaal adres. Dit digitale adres heeft een technisch doel, zie … SOAP server
<div class="issue" data-number="136"></div> 


#### Rol

De differentiatie in autorisatie, taken en verantwoordelijkheden in een project worden expliciet gemaakt middels het definiëren van verschillende rollen. Een rol staat voor samenhangende autorisatie, taken en verantwoordelijkheden voor het uitvoeren van activiteiten, die een persoon meestal tijdelijk op zich neemt, en die (afwisselend) door verschillende personen kunnen worden vervuld. Van een rol worden zeer beperkte eigenschappen vastgelegd. Ook iedere rol heeft een unieke identificatie, aangevuld met een naam en omschrijving. Deze naam en omschrijving behoeven niet uniek te zijn, en zijn een aanvulling op de unieke identificatie bedoeld voor toelichting en zorgt voor eenvoudigere herkenning van de rol (door mensen).

<aside class="example" title="Rol vastleggen in PSB">
<p><b>Rol</b><br>
Unieke identificatie: _1252a67a-5f69-4a9c-b4ca-506a4459c7c3 <br>
Naam: 			Beoordelende rol<br>
Omschrijving:	Deze rol geeft een onafhankelijke beoordeling op basis van competenties en deskundigheid binnen het kader van project. Bij de beoordeling doorloopt de rol een aantal vaste stappen. Rol inventariseert gegevens, weegt, motiveert en beoordeelt deze informatie en velt vervolgens het oordeel.<br>
</p></aside>

<p class="note" title="Rol versus functie">
Een rol is fundamenteel anders dan een functie. Een essentieel verschil is dat rollen een afspiegeling zijn van het werk dat georganiseerd wordt, terwijl functies een afspiegeling zijn van mensen die georganiseerd worden (in een organisatie). Een project heeft geen functie Afdelingshoofd, maar wel de rollen Beoordelende, Adviserende.</p>


#### Relaties

*Relatie tussen Persoon, Rol en Organisatie*

Personen handelen in een project altijd vanuit een rol namens een organisatie. Een persoon is niet rechtstreeks gekoppeld aan de organisatie. De persoon heeft een relatie met een rol en een organisatie in het project. Deze relatie is te zien als een unieke sleutel die persoon, rol en organisatie verbindt. Deze sleutel noemen we "Persoon in Rol van Organisatie". Van deze sleutel worden zeer beperkte, verplichte eigenschappen vastgelegd. Voor de sleutel wordt persoon, rol en organisatie gedefinieerd middels een verwijzing naar de unieke identificatie van een persoon, een rol en een organisatie.
 
<aside class="example" title="Persoon in Rol van Organisatie in PSB">
<p><b>Persoon in Rol van Organisatie</b><br>
Unieke identificatie: _e0ad4954-7986-417c-96d6-813efa36e86b<br>
Contactpersoon: 	_0c585186-fa97-4de7-8fe0-5c4bee3afead<br>
Rol:			_1252a67a-5f69-4a9c-b4ca-506a4459c7c3<br>
Organisatie:		_87e9144d-04d6-4a5f-bdcb-b50e96c2b498
</p></aside>
  
Een persoon kan meerdere rollen hebben, en een rol kan door meerdere personen vervuld worden.


#### Personele wisseling

In bijna ieder project treden wijzigingen met betrekking tot de personele invulling. Dit kan zijn in de vorm van tijdelijke vervanging in verband met afwezigheid of vakanties. Of een permanente vervanging indien de projectmedewerkers bij een andere organisatie gaat werken of met pensioen gaat. 


#### Permanente vervanging

Permanente vervanging wordt ook wel opvolging genoemd. De opvolger is een geautoriseerd persoon, die de rol, taken en verantwoordelijkheid overneemt van de (initieel) geautoriseerde persoon. Voor de traceerbaarheid en transparantie kunnen er nooit geautoriseerde personen verwijderd worden. Vandaar dat de opvolging expliciet gemaakt wordt.


Permanente vervanging is altijd op rolniveau. Bij de genoemde sleutel van Persoon in Rol van Organisatie wordt deze permanente vervanger vastgelegd middels een verwijzing naar de unieke identificatie van een persoon, een rol en een organisatie.  De relatie is van geautoriseerde naar de opvolger. Hierbij dienen de rollen exact overeen te komen.

<aside class="example" title="Permanente vervanging cg opvolging">
<p><b>Persoon in Rol van Organisatie</b><br>
Unieke identificatie: _e0ad4954-7986-417c-96d6-813efa36e86b<br>
Contactpersoon: 	_0c585186-fa97-4de7-8fe0-5c4bee3afead<br>
Rol:			<font color = "00ff00">_1252a67a-5f69-4a9c-b4ca-506a4459c7c3</font><br>
Organisatie:		_87e9144d-04d6-4a5f-bdcb-b50e96c2b498<br>
Opvolger:		<font color = "B71C1C">_51693b0e-84e5-4a9a-9fb6-ec4a7dea6edb</font><br>
<br>
<b>Persoon in Rol van Organisatie</b><br>
Unieke identificatie: <font color = "B71C1C">_51693b0e-84e5-4a9a-9fb6-ec4a7dea6edb</font><br>
Contactpersoon: 	_974e4822-4944-45ad-ab2f-161370662e30<br>
Rol:			<font color = "00ff00">_1252a67a-5f69-4a9c-b4ca-506a4459c7c3</font><br>
Organisatie:		_2ba76318-83ab-4a6e-9257-ea91045717d2
</p></aside>
  
Heeft een persoon (in een rol van een organisatie) een opvolger, dan betekent dit dat de persoon niet langer geautoriseerd is om te handelen vanuit deze rol. Alleen de opvolger is geautoriseerd.
Een persoon (in een rol van een organisatie)  kan maar één opvolger hebben.


#### Tijdelijke vervanging 
 
Een tijdelijke vervanging kan ook gelezen worden als een (tijdelijke) machtiging. De tijdelijke vervanging is een autorisatie voor een derde persoon, zodat deze persoon mag handelen uit naam van de geautoriseerde persoon. Dit kan een tijdelijk karakter hebben, of een machtiging zijn gedurende de looptijd van het project.


De tijdelijke vervanging is altijd op rolniveau. Bij de genoemde sleutel van Persoon in Rol van Organisatie wordt deze tijdelijke machtiging vastgelegd middels een verwijzing naar de unieke identificatie van de geautoriseerde persoon, rol en organisatie. De relatie is van gemachtigde naar de geautoriseerde. Ook hierbij dienen de rollen overeen te komen.

<aside class="example" title="Tijdelijke vervanging">
<p><b>Persoon in Rol van Organisatie</b><br>
Unieke identificatie: _752b1dfd-dd91-4404-9708-39b91047ca66<br>
Contactpersoon: 	_d4e02752-2ac6-4700-ae67-d33f428f78fb<br>
Rol:			<font color = "00ff00">_1252a67a-5f69-4a9c-b4ca-506a4459c7c3</font><br>
Organisatie:		_87e9144d-04d6-4a5f-bdcb-b50e96c2b498<br>
Vervangt:	<font color = "B71C1C">_51693b0e-84e5-4a9a-9fb6-ec4a7dea6edb</font><br>
</p></aside>

Voert een gemachtigd persoon (in een rol van een organisatie) een handeling uit, dan is dit altijd uit naam van de geautoriseerde persoon. Bij de handeling wordt geautoriseerde vastgelegd en gemachtigde. De geautoriseerde of gemachtigde kan antwoorden op transacties van de rol van de geautoriseerde, ongeacht wie de transactie gestart heeft. Indien een machtiging ongedaan gemaakt wordt, kan alleen de geautoriseerde de handeling afmaken. Een machtiging mag namelijk wel ongedaan gemaakt worden, omdat machtigingen een tijdelijk karakter kunnen hebben.


Als een gemachtigde iets verstuurt moet in VISI software zichtbaar zijn wie iets verstuurd heeft namens wie.


Een persoon kan gemachtigd zijn om namens meerdere geautoriseerde personen (in rol van organisatie) te handelen. Meerdere personen kunnen gemachtigd zijn om namens één geautoriseerde persoon (in rol van organisatie) te handelen.

#### Project Setup
Project, personen, organisaties rollen en vervangingen dienen bij alle projectdeelnemers bekend en gelijk te zijn. Daarom wordt deze setup van een project vastgelegd in een uitwisselbaarformaat: project specifiek bestand. Dit bestand wordt verspreid onder de deelnemende organisaties. Dit is meestal per organisatie vanwege het eerdergenoemde digitale adres van een organisatie. Dit digitale adres weet hierdoor van het bestaan van een project. In het gebruikte voorbeeld "Realisatie West- / Oostlijn" met unieke identificatie _badc9dab-807e-4319-bd56-60c57605e109 is bekend bij alle organisaties van het project.
De projectcommunicatie via het versturen en beantwoorden van berichten kan starten, zie <div class="issue" data-number="138"></div> 


### Raamwerk

*RAAMWERK / PROJECTCOMMUNICATIESJABLOON*


#### TransactieType

*TransactionType*
Communicatie vindt in VISI altijd plaats op basis van transacties. Een transactie type is in het raamwerk een afsprakenstelsel van elkaar mogelijk opvolgende berichten tussen twee rollen.
Een transactie in een project verloopt dus volgens de regels van het transactie type in het raamwerk.
Daarbij wordt er gesproken over de initiator-rol en executor-rol. De houder van de initiator  rol mag de transactie starten en deze alleen sturen naar houders van de executor rol. Daarna is het steeds de ontvanger van het laatste bericht die moet reageren met een van de ingestelde bericht opties totdat er geen antwoord mogelijkheden meer ingesteld staan, dan is de transactie afgerond/gereed.

<aside class='def'>
<p>In te stellen globale eigenschappen:<br>
id<br>
description<br>
startDate<br>
endDate<br>
state<br>
dateLaMu<br>
userLaMu<br>
language<br>
category<br>
helpinfo<br>
Specifiek voor transactie types is er hier de optie om de gebruikers uitleg te geven over het transactie type. Hier kan bijvoorbeeld vermeld worden welke rollen waarom hier met elkaar communiceren en wat het doel van de totale transactie is.<br>
code
</p>
</aside>

<aside class='def'>
<p>In te stellen specifieke eigenschappen:<br>
Namespace<br>
Hier moet per versie van een raamwerk een unieke namespace in het raamwerk staan. Dit zodat visi software kan identificeren met welk raamwerk een visi transactie afgehandeld moet worden.<br>
<br>
Verwijzingen vanuit project types:<br>
Complex element<br>
Voor zover bekend is er in VISI software geen toepassing van metadata velden op het project type en wordt deze dus niet gekoppeld.<br>
Verwijzingen naar project types:<br>
Geen</p>
</aside>

<aside class="example" title="Project in transactie">
<p><b>ProjectType <b><br>
id: 		RaamwerkUAVGCGemLutjebroek<br>
namespace:	http://www.visi.nl/schemas/20160331/ RaamwerkUAVGCGemLutjebroek_v2<br>
description:	 Standaard raamwerk UAV GC Gemeente Lutjebroek
</p></aside>


#### TransactieFaseType

*TransactionPhaseType*
De DEMO methodologie kent de transactiefases requested, promised, declared, accepted, declined, rejected, revoked, allowed en refused. Het is mogelijk om deze transactie fases te koppelen aan bericht in transactie types, zodat VISI software deze zou kunnen gebruiken voor aanvullende ondersteuning of informering . 
  
Buiten scope: Bij het gebruik van de DEMO oplegger van de systematiek worden in ieder geval de transactie fase Promised en  de volgende revoked-types actief gebruikt voor specifiek software gedrag:  Revoke Acceptance Allow, Revoke Promise Allow, Revoke Request Allow en Revoke Statement Allow

<aside class='def'>
<p>In te stellen globale eigenschappen:<br>
id<br>
description<br>
startDate<br>
endDate<br>
state<br>
dateLaMu<br>
userLaMu<br>
language<br>
category<br>
helpinfo<br>
Voor transactie fases is nog geen toepassing bekend voor de helpinfo. 
code
</p></aside>

<aside class='def'>
<p>In te stellen specifieke eigenschappen:<br>
Verwijzingen vanuit transactie fases:<br>
Geen<br>
<br>
Verwijzingen naar transactie fases:<br>
Bericht in transactie<br>
Op deze manier kan een bericht in transactie aan een bepaalde transactiefase gekoppeld worden.
</p></aside>
  
  
#### GroepTypes
  
*GroupType*
<div class="issue" data-number="139"></div>   
 
<aside class='def'>
<p>In te stellen globale eigenschappen:<br>
id<br>
description<br>
startDate<br>
endDate<br>
state<br>
dateLaMu<br>
userLaMu<br>
language<br>
category<br>
helpinfo<br>
Voor groep types is nog geen toepassing bekend voor de helpinfo.
</p></aside>

<aside class='def'>
<p>In te stellen specifieke eigenschappen:
</p> </aside>

<aside class='def'> 
<p>Verwijzingen vanuit GroepTypes:
</p></aside>

<aside class='def'> 
<p>Verwijzingen naar GroepTypes:<br>
Bericht in transactie
</p></aside>
  
### Globale eigenschappen

Alle elementen…..

#### <dfn>`Id`
  
Ieder element in een raamwerk heeft een Id. Hiermee worden de relaties technisch binnen en buiten het raamwerk gelegd. Een hoofdvereiste is dat een Id uniek is binnen het raamwerk. Een voorbeeld van relaties binnen het raamwerk is bijvoorbeeld het koppelen van een veld (SimpleElement) aan een berichthoofdstuk (ComplexElement). Een voorbeeld van een koppeling buiten een raamwerk is de Rol die aangemaakt wordt in een Projectspcifiek bericht obv de rol in het raamwerk of een veldnaam in een VISI bericht enz.
Een id kan een niet leesbare waarde zijn zoals TR_532856857120. Op dit moment maken bijna alle raamwerkschrijvers daar iets begrijpbaars van, zoals TR_Acceptatiedocument, zodat bijvoorbeeld de originele XML VISI berichten ook zonder visi software te lezen en begrijpen zijn.

#### <dfn>`Description`1
  
Dit is de leesbare naam van een element. Deze waarde wordt meestal getoond aan de gebruikers. 
  
#### <dfn>`startDate`
  
Dit attribuut is optioneel in te stellen  op veel elementen in een raamwerk. De verschillende VISI software pakketten hebben tot op heden nooit iets met deze “startDate” gedaan. Dus als een raamwerkschrijver iets in dit veld invult, komt dit nooit in beeld bij de gebruiker. 
Bij het opstellen van de standaard was dit de verder nog onuitgewerkte gedachte: “Startdatum en tijd van geldigheid van deze objectinstantie.” 
 
#### <dfn>`endDate`
  
Zie startDate

#### <dfn>`state`
  
Dit attribuut is optioneel in te stellen  op veel elementen in een raamwerk. Mogelijke waarden voor dit veld zijn: “passive” en “active”. Op dit moment zijn er toepassingen van software leveranciers die de implementatie in de documentatie (nog) niet gehaald hebben. Voorbeelden zijn het wel of niet tonen/aanbieden van elementen of transacties en in het project specifiek bericht een rol van een persoon (gedeeltelijk)uitschakelen als er geen opvolger is.

#### <dfn>`dateLaMu`
  
Dit attribuut is optioneel in te stellen  op veel elementen in een raamwerk. Raamwerkschrijvers gebruiken dit om in de XML file aan te geven wanneer er als laatste een wijziging aan een element is gemaakt.(date Last Mutation) Tot nu toe zijn er geen verwachtingen of bekende toepassingen in VISI software. Wel in raamwerk opstel software om dit veld  automatisch bij te werken. Dus als een raamwerkschrijver iets in dit veld invult, komt dit nooit in beeld bij de gebruiker.

#### <dfn>`userLaMu`
  
Dit attribuut is optioneel in te stellen  op veel elementen in een raamwerk. Raamwerkschrijvers gebruiken dit om in de XML file aan te geven wie er als laatste een wijziging aan een element heeft uitgevoerd.(user Last Mutation) Tot nu toe zijn er geen verwachtingen of bekende toepassingen in VISI software. Wel in raamwerk opstel software om dit veld  automatisch bij te werken. Dus als een raamwerkschrijver iets in dit veld invult, komt dit nooit in beeld bij de gebruiker.

#### <dfn>`language`
  
Dit attribuut is optioneel in te stellen  op veel elementen in een raamwerk. Het idee was om hier de taal van het element mee vast te leggen, maar tot op heden hebben software leveranciers hier niets mee gedaan en is er geen beschrijving wat voor soort functionaliteit van software verwacht zou worden. Dus als een raamwerkschrijver iets in dit veld invult, komt dit nooit in beeld bij de gebruiker.

#### <dfn>`category`
  
Dit attribuut is optioneel in te stellen  op veel elementen in een raamwerk. Het idee was om hier bepaalde onderdelen mee te kunnen categoriseren, maar tot op heden hebben software leveranciers hier niets mee gedaan en is er geen beschrijving wat voor soort functionaliteit van software verwacht zou worden. Dus als een raamwerkschrijver iets in dit veld invult, komt dit nooit in beeld bij de gebruiker.
  
#### <dfn>`helpInfo`
  
Dit attribuut is optioneel in te stellen  op veel elementen in een raamwerk. Dit wordt veelvuldig gebruikt om gebruikers aanvullende uitleg te geven over raamwerk elementen. Bij bepaalde elementen is functionaliteit in VISI software verplicht gesteld. Zie de verschillende elementen voor voorbeelden.
  
#### <dfn>`code`
  
Dit attribuut is optioneel in te stellen  op veel elementen in een raamwerk. Voorbeelden in oude documentatie geven bijvoorbeeld aan dat een raamwerk element de code “EAN 33156” kan krijgen, maar er wordt ook gesproken over transactie coderingen zoals T1.1 / T2 enz. 


De verschillende VISI software pakketten hebben tot op heden nooit iets met deze “code” gedaan en is er geen beschrijving wat voor soort functionaliteit van software verwacht zou worden.  Dus als een raamwerkschrijver iets in dit veld invult, komt dit nooit in beeld bij de gebruiker. 


In de praktijk zien we trouwens dat als een raamwerk schrijver een transactie code “T3” bij een transactie wil benoemen, dat deze code dan vooraan in de naam van de transactie (description)  bijgevoegd wordt, waardoor de description dan bijvoorbeeld wordt: “T3: Contractwijziging”


## Projectuitvoering

Gebruik Raamwerk en PSB in project


### Berichtencommunicatie
De projectcommunicatie via het versturen en beantwoorden van berichten kan starten. Alle deelnemende organisaties weten van het project. Wordt een bericht verstuurd door persoon Urbain Servranckx (in Beoordelende rol van organisatie Gemeente Rommelgem) naar Georges Remi (in Adviserende rol van organisatie De Blauwe Lotus), dan zorgt de digitale adressering en verspreide project specifieke bestand dat het bericht ook bezorgd wordt bij Georges Remi.

#### Volgorde
Berichten zijn niet onafhankelijk van elkaar, maar hebben een samenhang. Berichten hebben een volgorde die gezien kan worden als een ketting van berichten. De ketting heeft een begin en een eind. Er is een startbericht en een eindbericht. De volgorde is bijvoorbeeld:


start -> verzoek -> levering -> afkeuring -> hernieuwde levering -> goedkeuring -> einde


Voor een bericht wordt aangegeven wat het voorgaande bericht is. Het startbericht heeft geen voorgaande, en dit is de enige manier om een startbericht te onderscheiden van de andere berichten. Evenzogoed komt het eindbericht nergens voor als voorgaand bericht. Dit is de enige manier om een eindbericht te onderscheiden van de andere berichten. De verwijzing naar de voorgaande is de schakel in de ketting van berichten.


Een bericht kan meerdere voorgaande berichten hebben. Immers een bericht goedkeuring kan volgen op een levering, maar ook op een hernieuwde levering. Het eindbericht heeft een afkeuring en een goedkeuring als voorgaand bericht. De ketting van berichten is hierdoor niet lineair, maar is een wiskundige graaf. Meest eenvoudige graaf is:


start	-> afkeuring	-> einde
-> goedkeuring	->


#### Berichttype

Niet ieder bericht is hetzelfde. Er wordt onderscheid gemaakt in type berichten. In bovenstaand voorbeeld is afkeuring een ander berichttype dan goedkeuring. Dit is niet alleen een andere naam voor een bericht, de inhoud van het bericht is verschillend tussen een afkeuring en een goedkeuring. Bijvoorbeeld een afkeuring zal een motivatie bevatten. In een goedkeuring zal motivatie niet nodig zijn en derhalve ontbreken.

De inhoud van een bericht is gekoppeld aan het type. Deze inhoud is niet willekeurig en behoeft uitleg, maar dit vergt te veel details om hier te behandelen. Voor een nadere uitleg over de inhoud van berichten wordt verwezen naar paragraaf XXX.


#### Bericht van persoon naar persoon

De ketting / graaf van berichten gaat altijd tussen twee personen. Het is niet toegestaan om een bericht naar een willekeurige personen te versturen, of naar een organisatie te versturen. Deze personen zijn vastgelegd in de project setup (paragraaf 1.7). Er is een voorwaarde voor het versturen van een startbericht van persoon Urbain Servranckx naar persoon Georges Remi. Deze voorwaarde is dat de personen een bepaalde rol moeten invullen voor hun organisatie. Feitelijk wordt een bericht dus verstuurd van "Persoon in Rol van Organisatie" naar "Persoon in Rol van Organisatie". Dus persoon Urbain Servranckx (in Beoordelende rol van organisatie Gemeente Rommelgem) stuurt een startbericht naar persoon Georges Remi (in Adviserende rol van organisatie De Blauwe Lotus).


#### Versturen van een bericht

Voordat een persoon een bericht kan versturen moet aan bepaalde regels voldaan worden. Een startbericht mag alleen verstuurd worden door personen die een bepaalde rol toegewezen gekregen hebben in het project specifieke bestand. Voor de ontvangende persoon geldt ook een regel. Allereerst kan er maar één ontvangende persoon zijn. Deze persoon dient ook een bepaalde rol toegewezen gekregen te hebben in het project specifieke bestand. In het voorbeeld zijn dit de initiërende rol Beoordelende en ontvangende rol Adviserende. Persoon Urbain Servranckx stuurt het startbericht van type "Opdracht" naar persoon Georges Remi.

<aside class="example" title="Voorbeeld bericht">
<p><b>Bericht</b><br>
Type: 			Opdracht<br>
Unieke identificatie: _9a163e84-a83e-47ea-b5f3-220c403da98b<br>
Verzenddatum:		2021-12-23T14:38:56<br>
Richting (Van–Naar):	TRUE<br>
Transactie:		_f8275cfe-3d8d-4bda-a05b-164a5087a1af<br>
Inhoud:			_170ef962-685f-4fc8-8728-df1bfe2317ba<br>
</p></aside>

De ontvangende persoon kan alleen een reactiebericht sturen naar de initiërende persoon. Dus Georges Remi stuurt een afkeuring (of goedkeuring) naar Urbain Servranckx.
<aside class="example" title="Voorbeeld bericht">
<p><b>Bericht</b><br>
Type: 			Afkeuring<br>
Unieke identificatie: _2bbecc10-948e-4b1a-b6ce-3a133576297c<br>
Verzenddatum:		2021-12-27T10:13:42<br>
Richting (Van–Naar):	FALSE<br>
Transactie:		_f8275cfe-3d8d-4bda-a05b-164a5087a1af<br>
Inhoud:			_657ad592-5d76-4248-b959-68af07465cd6<br>
</p></aside>

Hierna stuurt Urbain weer een reactiebericht naar Georges. Dit gaat heen en weer net zolang tot het eindbericht verstuurd is.
N.B. Van een bericht kan geen kopie gestuurd worden (als cc).
Bij het versturen van een eerste bericht dient ook de volgorde van de reactieberichten vastgelegd te zijn, zodat de berichten een vast patroon volgen. Bijvoorbeeld het patroon: start -> verzoek -> levering -> afkeuring -> hernieuwde levering -> goedkeuring -> einde
Hiermee wordt afgedwongen dat na een afkeuring een hernieuwde levering komt.
Een voorbeeld van een ander patroon: start -> ter informatie -> ontvangstbevestiging -> einde
Versimpeld zou je kunnen zeggen dat dit patroon (c.q. de volgorde van berichttype) bepaald wordt door het type van de transactie, die gestart wordt. Ieder bericht heeft een verwijzing naar de transactie. Deze transactie is - net als een bericht - van een bepaald type.


<aside class="example" title="Voorbeeld bericht">
<p><b>Transactie</b><br>
Type: 			Opdrachtverstrekking<br>
Unieke identificatie: _f8275cfe-3d8d-4bda-a05b-164a5087a1af<br>
Nummer:			GRG000282<br>
Omschrijving:		Opdracht voor project Realisatie West- / Oostlijn<br>
Van:			_e0ad4954-7986-417c-96d6-813efa36e86b<br>
Naar:			_752b1dfd-dd91-4404-9708-39b91047ca66<br>
Project:		_badc9dab-807e-4319-bd56-60c57605e109;<br>
</p></aside>

De voorschriften en regels, waaraan aan de berichtencommunicatie moet voldoen, is vastgelegd in een projectcommunicatiesjabloon. Dit sjabloon bevat de definitie van type rollen, type berichten en type transacties. Ook de inhoud van een type bericht is in dit sjabloon gedefinieerd. Dit sjabloon heet een raamwerk. De term sjabloon geeft al aan dat het een blauwdruk is waaraan de transacties en berichten moeten voldoen.

## Bijlagen

Ieder bericht kan 0, 1 of meerdere bijlagen bevatten. Bijlage betekent hier een binair bestand, zoals een foto of document. De verschijningsvorm is bijvoorbeeld een jpg-, pdf of zip-bestand. Doel van een bijlage is de informatie in het bericht te onderbouwen en / of verduidelijken.

### Verplichte Eigenschappen

Ieder binair bestand mits kleiner dan 10GB kan meegestuurd worden met een bericht. Voor de som van alle bijlagen van één bericht geldt een aanvullende eis, namelijk dat de gezamenlijke grootte van de bijlagen kleiner is dan 10GB. Aan het fysieke bestand worden geen nadere eisen gesteld. Wel worden eisen gesteld aan de eigenschappen / metadata van de bijlage conform het raamwerk (zie paragraaf 2.10 over AppendixType).
Naast de typering heeft een bijlage een vaste set verplichte standaard eigenschappen van het bestand, zoals naam, locatie, type, versie en datum. De naam van de eigenschap geeft aan welke informatie van het bestand vastgelegd dient te worden.

<aside class="example" title="Voorbeeld bericht">
<p><b>Bijlage</b><br>
Type: 			Opdrachtbon<br>
Unieke identificatie: _a0186218-82d9-4b0f-a616-8aa1f162128a<br>
Naam:			Bon_9601.pdf<br>
Bestandslocatie:	???<br>
Bestandstype:		application/pdf<br>
Bestandsversie:	DF43111<br>
Datum:			2021-10-23T08:31:58<br>
Bericht:		_9a163e84-a83e-47ea-b5f3-220c403da98b<br>
Inhoud:	_04cdb00c-fd4d-4e58-b0ad-0cc19a3b07c9, _a1cd32d-ae5ed41-e0bc-1ee28b1c08d1<br>
</p></aside>

Een bijlage heeft een verwijzing naar het bericht waarvan het een onderbouwing en / of verduidelijking is.

### Optionele eigenschappen
Naast de verplichte eigenschappen heeft een bijlage vele optionele standaard eigenschappen, die duiden op een document als bijlage, zoals: documentidentificatie, documentversie, documentreferentie.

### Aanvullende eigenschappen
Uit de typering in het projectcommunicatiesjabloon (c.q. raamwerk) volgt of de bijlage aanvullende eigenschappen heeft. Deze aanvullende eigenschappen zijn niet verplicht. De structuur van de aanvullende eigenschappen is gelijk aan de structuur van een bericht. Waar een bericht verwijst naar 1 of meerdere complexe elementen, zo verwijst een bijlage naar 0 of meerdere complex elementen. Een complex element bestaat uit simpele elementen. En een simpel element heeft een waarde.

<aside class="example" title="Voorbeeld bijlage met optionele eigenschappen">
<p><b>Bijlage</b><br>
Type: 			Bon_van_de_opdracht<br>
Unieke identificatie: _a0186218-82d9-4b0f-a616-8aa1f162128a<br>
Naam:			purchase-order-9601.pdf <br>
<br>
Inhoud:	_04cdb00c-fd4d-4e58-b0ad-0cc19a3b07c9, _a1cd32d-ae5ed41-e0bc-1ee28b1c08d1<br>
Complex Element<br>
Type: 			Gegevens_van_de_opdracht<br>
Unieke identificatie: _04cdb00c-fd4d-4e58-b0ad-0cc19a3b07c9<br>
<br>
Elementen:		<br>
<br>
Simpel Element<br>
Type: 			nummer_van_de_opdracht<br>
Waarde: 		ROM / 2022-666<br>
<br>
Simpel Element<br>
Type: 			naam_opdrachtgever<br>
Waarde: 		Gemeente Rommelgem<br>
<br>
Complex Element<br>
Type: 			Betalingsgegevens<br>
Unieke identificatie: _a1cd32d-ae5ed41-e0bc-1ee28b1c08d1<br>
Elementen:		<br>
<br>
Simpel Element<br>
Type: 			iBAN<br>
Waarde: 		RABO28932392<br>
<br>
Simpel Element<br>
Type: 			naam_van_de_rekeninghouder<br>
Waarde: 		Afdeling Inkoop, Gemeente Rommelgem<br>
<br>
Simpel Element<br>
Type: 			bTW_Nummer<br>
Waarde: 		2933092392809B01<br>
</p></aside>

In het projectcommunicatiesjabloon (c.q. raamwerk) staan de beschikbare typen bijlagen gedefinieerd, en welke aanvullende eigenschappen een bepaald type kan hebben. De structuur is gelijk aan de structuur van type bericht. Een type bijlage heeft verwijzingen naar 0 of meerdere type complexe elementen. Een type complex element bestaat uit naar 1 of meerdere type simpele elementen. En een type simpel element heeft één verwijzing naar een waarde. N.B. Er is geen tabeldefinitie (dus geen complex in complex element, zie paragraaf ???) per bijlage mogelijk.

<aside class="example" title="Voorbeeld bijlage met optionele eigenschappen">
<p><b>Bijlage</b><br>
Unieke identificatie: Bon_van_de_opdracht<br>
Omschrijving:		Opdrachtbon ten behoeve van opdrachtverstrekking<br>
Complex Elementen:	Opdrachtgegevens, Betalingsgegevens<br>
<br>
Complex Element
Unieke identificatie: Gegevens_van_de_opdracht
Omschrijving:		Gegevens van de opdracht
Simpel Elementen:	Opdrachtnummer, Naam_opdrachtgever
<br>
Complex Element
Unieke identificatie: Betalingsgegevens
Omschrijving:		Gegevens voor betaling
Simpel Elementen:	Naam_van_de_rekeninghouder, BTW_Nummer
<br>
Simpel Element<br>
Unieke identificatie: opdrachtnummer<br>
Omschrijving:		Het unieke identificatie van de opdracht<br>
Type:			Tekst<br>
<br>
Simpel Element<br>
Unieke identificatie: naam_opdrachtgever<br>
Omschrijving:		Naam van de organisatie, die opdracht verstrekt<br>
Type:			Tekst<br>
<br>
Simpel Element<br>
Unieke identificatie: iBAN<br>
Omschrijving:		IBAN nummer<br>
Type:			Tekst_verplicht<br>
<br>
Simpel Element<br>
Unieke identificatie: naam_van_de_rekeninghouder<br>
Omschrijving:		Naam van de rekeninghouder<br>
Type:			Tekst_verplicht<br>
<br>
Simpel Element<br>
Unieke identificatie: bTW_Nummer<br>
Omschrijving:		BTW Nummer van de organisatie, die opdracht verstrekt<br>
Type:			Nummer<br>
<br>
Waarde<br>
Unieke identificatie: Tekst<br>
Basis XML Type:	STRING<br>
Waarde<br>
Unieke identificatie: Tekst_verplicht<br>
Basis XML Type:	STRING<br>
XSD Restrictie:	minlength=1<br>
Waarde<br>
Unieke identificatie: Nummer<br>
Basis XML Type:	INTEGER<br>
</p></aside>


### Is een bijlage verplicht?

Voor een bepaald type bericht kan afgedwongen worden dat minimaal 1 bijlage bijgevoegd dient te worden. Ook welk type bijlage dit dient te zijn, kan afgedwongen worden. Deze voorwaarden zijn opgenomen in het projectcommunicatiesjabloon (c.q. raamwerk) (zie paragraaf 2.1, 2.2, 2.7). Op een type bericht staat een vlaggetje (Ja / Nee) of een bijlage verplicht is (zie paragraaf 2.2).

<aside class="example" title="Voorbeeld bericht met verplichte bijlage">
<p><b>Bericht</b><br>
Unieke identificatie: Voorstel_tot_Wijziging<br>
Omschrijving:		Voorstel tot een wijziging<br>
Bijlage verplicht:	Ja<br>
Bijlage typen:		Foto, Offerte, Berekening<br>
Complex Elementen:	Voorstel, Wijziging, Planning, Opmerkingen<br>
</p></aside>

Het maximumaantal bijlagen is niet voor te schrijven. Het minimumaantal is 0 of 1 (Bijlage verplicht: Ja / Nee).


### Transport van een bijlage

Het transportprotocol voor berichten en bijlagen is SOAP. De bijlagen (binaire bestanden) worden eerst getransporteerd van verzendende naar ontvangende software. Vanwege de potentiële omvang van een bijlage (maximaal 10GB) wordt iedere bijlagen in blokjes (chunks) verstuurd. De ontvangende software bouwt met de ontvangen blokjes de originele bijlage op. Er is een controlemechanisme (checksum) om te controleren of alle blokjes ontvangen zijn en of alle blokjes correct zijn.


Na verzending van alle bijlagen verstuurt de verzendende software het bericht (de metadata). De ontvangende software relateert metadata aan eerder ontvangen binaire bestanden, zodat exact dezelfde informatie beschikbaar is aan verzendende en ontvangende kant. Het transport is succesvol.


### Validatie

De software dient bijlagen en bericht te valideren voor verzending.

De software dient ontvangen bijlagen en bericht te valideren. Het resultaat van de validatie wordt teruggestuurd naar de verzendende software. Validatie vindt plaats tegen 1) W3C Standaarden waarop VISI gebaseerd is (XML, XSD, SOAP), 2) VISI Standaard, 3) VISI Raamwerk (cq. Projectsjabloon) en 4) VISI Project Specifiek Bestand.

Het ontvangen bericht bevat de identificatie van het project en van de geadresseerde persoon in rol (van organisatie). Met deze gegevens kan het project en project specifieke bestand getraceerd worden, en de inhoud van het bericht gevalideerd worden tegen de inhoud van het project specifieke bestand. Het ontvangen bericht heeft een verwijzing naar het raamwerk (c.q. projectsjabloon). Voor de verwijzing wordt de gangbare functionaliteit van xml gebruikt: namespace. Met deze verwijzing kan het raamwerk getraceerd worden, en de inhoud van het bericht gevalideerd worden tegen de definities in het raamwerk. Voor validatie tegen het raamwerk kan de xsd-versie van het raamwerk gebruikt worden.

Het validatieproces is asynchroon. Dit betekent dat na ontvangst van bijlagen en bericht in de ontvangende software niet direct de validatie hoeft plaats te vinden. Het resultaat van de validatie wordt teruggestuurd naar de verzendende software met een verwijzing waarbij het validatieresultaat behoort. Het validatieresultaat heeft twee opties: geen error (0), wel error (1). Optioneel kan bij de errorcode van de validatie (0 of 1) aanvullende tekst meegestuurd worden ter verduidelijking van de error. Bijvoorbeeld: dat een bijlage ontbreekt, of het bericht niet conform het projectsjabloon (c.q. raamwerk) is, of het project onbekend is.


### Berichtvelden gedrag


### Wijzigingen in een raamwerk

Gedurende de looptijd van een project kunnen twee soorten wijzigen doorgevoerd worden. De eerste wijziging betreft wijzigingen aan het project, zoals gewijzigde projectnaam, gewijzigde rolverdeling. Bijvoorbeeld een extra projectmedewerker of een nieuwe projectmedewerker als permanente vervanger van een huidige medewerker. De tweede wijzing betreft wijzigingen aan het projectcommunicatiesjabloon, zoals een gewijzigd transactietype, gewijzigd berichttype.

Iedere wijziging moet bij alle betrokken organisaties doorgevoerd worden. Dit betekent dat de gewijzigde bestanden (project specifiek bestand en / of raamwerk) verstrekt moeten worden aan alle - bij het project betrokken - organisaties. Omdat wijzigingen van invloed kunnen zijn op de inhoud van een project, dient de wijziging vooraf inhoudelijk afgestemd te worden tussen projectmedewerkers. 

<aside class="example" title="Voorbeeld wijzigig in het raamwerk">
<p>Bijvoorbeeld: Vergelijk de eerste wijziging met een personeelswisseling in een project. Deze wijziging wordt vooraf tussen projectleiders afgestemd. En vergelijk de tweede wijziging met een procesmatige wijziging van bijvoorbeeld het goedkeuringsproces van documenten.  Een dergelijke wijziging wordt vooraf tussen contractmanagers afgestemd met misschien ondersteuning van de juridische afdeling.<p>
</aside>

#### Machtiging / tijdelijke vervanging

*Substituting*
De wijziging met de kleinste impact is het wijzigen van de machtigingen. Zoals in paragraaf 1.6.2 beschreven is erin voorzien om één of meerdere gemachtigden aan te wijzen voor een persoon in rol (van organisatie). Voert een gemachtigde een handeling uit, dan is dit altijd uit naam van de geautoriseerde persoon. Een machtiging kan verwijderd worden, want de geautoriseerde persoon kan de handeling altijd afmaken. Wordt een machtiging toegevoegd, dan kan de gemachtigde direct handelen op bestaande transacties van de geautoriseerde persoon, en nieuwe transacties starten (namens de geautoriseerde persoon). Een geautoriseerd persoon mag nooit verwijderd worden (zie paragraaf ....).

#### Nieuwe personen

Nieuwe personen kunnen aan een project toegevoegd worden. Tevens kunnen deze personen een rol toegewezen krijgen. Dit kan een rol zijn die al vervuld wordt. Bijvoorbeeld de adviserende rol wordt door meerdere personen in een project ingevuld.
Houd er rekening mee dat nieuwe personen niet a) aan bestaande transactie en berichten kunnen deelnemen, of b) bestaande communicatie kunnen overnemen. Indien dit gewenst is, gebruik dan de opties voor machtiging / tijdelijke of permanente vervanging.

#### Permanente vervanging

Mits goed uitgevoerd heeft het wijzigen van de permanente vervanging een relatief kleine impact. Zoals in paragraaf 1.6.1 beschreven is erin voorzien om één permanente vervanger aan te wijzen voor een persoon in rol (van organisatie). 
Voor de traceerbaarheid en transparantie kunnen a) er nooit geautoriseerde personen verwijderd worden, en b) opvolgingen van geautoriseerde personen nooit aangepast worden. Hierdoor ontstaat altijd een onafgebroken keten van opvolgers van persoon in rol (van organisatie) Met andere woorden geen cirkelverwijzing of vertakkingen. Vandaar dat de opvolging expliciet gemaakt wordt met het aanwijzen van een permanente opvolger.

<aside class="example" title="Voorbeeld permanente vervanging">
<p>Piet heeft Rol A en Rol B (pir 1 en pir2). Truus vervangt rol A (pir3 successor van pir 1) en kees vervangt rol B (pir4 successor van pir 2)  Op een bepaald moment neemt hans de verantwoordelijkheid voor rol  A van Truus over (pir5 successor van pir 3) Weer later komt piet op het project terug en neemt beide rollen weer op zich (pir 6 successor van pir 5 en pir 7 successor van pir 4)<br>
<br>
Als je nu kijkt naar rol A, dan is er een onafgebroken keten vanaf de eerste verantwoordelijke tot de huidige verantwoordelijke. Piet behandelt vanaf dat moment dus de transacties van Pir 1(zichzelf), Pir3 (Truus), Pir5(Hans) en Pir 6, (de actuele Pir van zichzelf)<br>
PLAATJE???</p>
</aside>

#### Personen verwijderen

Met uitzondering van een machtiging kan een persoon niet verwijderd worden uit een project. Behalve indien een persoon in rol (van organisatie) geen transacties aan zijn rol (of aan de eventueel opgevolgde rollen) gekoppeld heeft. In dat geval is verwijderen mogelijk.

De enige optie om een persoon te deactiveren voor een project is het aanwijzen van een permanente vervanger voor deze persoon. Hiervoor is de eigenschap opvolger van een persoon in rol (van organisatie). Moet een persoon met een adviserende rol verwijderd worden uit een project, dan krijgt deze persoon in rol (van organisatie) een opvolger (met dezelfde adviserende rol). Dit kan ook een bestaande persoon zijn (met dezelfde adviserende rol).

<aside class="example" title="Personen verwijderen">
<p><b>Persoon in Rol van Organisatie</b><br>
Unieke identificatie: _b16d7aeb-6a5e-4326-9283-aef843684f5c<br>
Contactpersoon: 	_d4e02752-2ac6-4700-ae67-d33f428f78fb<br>
Rol:			<font color = "00ff00">_1252a67a-5f69-4a9c-b4ca-506a4459c7c3</font><br>
Organisatie:		_87e9144d-04d6-4a5f-bdcb-b50e96c2b498<br>
Opvolger:		<font color = "B71C1C">_666f01b3-6714-44cc-8865-0a9ae1f938ce</font><br>
</p>
<p><b>Persoon in Rol van Organisatie</b><br>
Unieke identificatie: <font color = "B71C1C">_666f01b3-6714-44cc-8865-0a9ae1f938ce</font><br>
Contactpersoon: 	_c6e4430e-65aa-4e55-a8db-1beb6d3f4250<br>
Rol:			<font color = "00ff00">_1252a67a-5f69-4a9c-b4ca-506a4459c7c3</font><br>
Organisatie:		_87e9144d-04d6-4a5f-bdcb-b50e96c2b498
</p>
<p><b>Rol v</b><br>
Unieke identificatie: <font color = "00ff00">_1252a67a-5f69-4a9c-b4ca-506a4459c7c3</font><br>
Naam: 			Adviserende rol<br>
Omschrijving:	Deze rol geeft een onafhankelijk advies op basis van competenties en deskundigheid binnen het kader van project. Bij het advies doorloopt de rol een aantal vaste stappen. Rol inventariseert gegevens, weegt, motiveert en beoordeelt deze informatie en geeft vervolgens het advies.<br>
</p></aside>


### Raamwerk wijzigen

Dit is de wijziging met de grootste impact. Naast het wijzigen van het projectcommunicatiesjabloon (c.q. raamwerk) moet ook de project setup in het project specifieke bestand geactualiseerd worden conform het raamwerk. Het project specifieke bestand heeft namelijk een verwijzing naar het raamwerk. Indien het raamwerk wijzigt, dient deze verwijzing ook te wijzigen. Dus minimale actualisatie is het aanpassen van de verwijzing naar het raamwerk. Voor deze verwijzing wordt de gangbare functionaliteit van xml gebruikt: namespace. Een gewijzigd projectcommunicatiesjabloon dient een nieuwe unieke namespace te bevatten.

<aside class="example" title="Raamwerk aanpassen">
<p><b>Project</b><br>
Unieke identificatie: UAV<br>
Omschrijving:		Uniforme Administratieve Voorwaarden<br>
Namespace:		http://www.visi.nl/schemas/20160331/uav_20-10-2020_1723
</p></aside>

Indien een gewijzigd projectcommunicatiesjabloon (c.q. raamwerk) zonder gewijzigd project specifieke bestand wordt aangeleverd, dan is het "vorige" project specifieke bestand ook van toepassing op het gewijzigd projectcommunicatiesjabloon (c.q. raamwerk).


De verwijzing naar het bijbehorende raamwerk is eveneens aanwezig in ieder bericht. Hierdoor is voor ieder bericht te achterhalen conform welk raamwerk het bericht opgesteld is, en is na te gaan of het bericht valide is conform dit raamwerk. En welke opvolgende berichten als vervolgstap mogelijk zijn.


#### Gedrag software rondom gekoppelkde berichtenflow


#### Gedrag rondom wel en niet aanbieden berichten obv raamwerk/rol







  


  







