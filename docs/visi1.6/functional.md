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
Omschrijving:		Realisatie van metrolijn 47 inclusief 7 nieuwe stations met 9,7			kilometer spoor, waarvan 7,1 kilometer ondergronds<br>
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

<aside class="example" title="Permanetne vervanging cg opvolging">
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
  
#### Globale eigenschappen

Alle elementen…..

##### Id
  
Ieder element in een raamwerk heeft een Id. Hiermee worden de relaties technisch binnen en buiten het raamwerk gelegd. Een hoofdvereiste is dat een Id uniek is binnen het raamwerk. Een voorbeeld van relaties binnen het raamwerk is bijvoorbeeld het koppelen van een veld (SimpleElement) aan een berichthoofdstuk (ComplexElement). Een voorbeeld van een koppeling buiten een raamwerk is de Rol die aangemaakt wordt in een Projectspcifiek bericht obv de rol in het raamwerk of een veldnaam in een VISI bericht enz.
Een id kan een niet leesbare waarde zijn zoals TR_532856857120. Op dit moment maken bijna alle raamwerkschrijvers daar iets begrijpbaars van, zoals TR_Acceptatiedocument, zodat bijvoorbeeld de originele XML VISI berichten ook zonder visi software te lezen en begrijpen zijn.

##### Description
  
Dit is de leesbare naam van een element. Deze waarde wordt meestal getoond aan de gebruikers. 
  
##### startDate
  
Dit attribuut is optioneel in te stellen  op veel elementen in een raamwerk. De verschillende VISI software pakketten hebben tot op heden nooit iets met deze “startDate” gedaan. Dus als een raamwerkschrijver iets in dit veld invult, komt dit nooit in beeld bij de gebruiker. 
Bij het opstellen van de standaard was dit de verder nog onuitgewerkte gedachte: “Startdatum en tijd van geldigheid van deze objectinstantie.” 
 
##### endDate
  
Zie startDate

##### state
  
Dit attribuut is optioneel in te stellen  op veel elementen in een raamwerk. Mogelijke waarden voor dit veld zijn: “passive” en “active”. Op dit moment zijn er toepassingen van software leveranciers die de implementatie in de documentatie (nog) niet gehaald hebben. Voorbeelden zijn het wel of niet tonen/aanbieden van elementen of transacties en in het project specifiek bericht een rol van een persoon (gedeeltelijk)uitschakelen als er geen opvolger is.

##### dateLaMu
  
Dit attribuut is optioneel in te stellen  op veel elementen in een raamwerk. Raamwerkschrijvers gebruiken dit om in de XML file aan te geven wanneer er als laatste een wijziging aan een element is gemaakt.(date Last Mutation) Tot nu toe zijn er geen verwachtingen of bekende toepassingen in VISI software. Wel in raamwerk opstel software om dit veld  automatisch bij te werken. Dus als een raamwerkschrijver iets in dit veld invult, komt dit nooit in beeld bij de gebruiker.

##### userLaMu
  
Dit attribuut is optioneel in te stellen  op veel elementen in een raamwerk. Raamwerkschrijvers gebruiken dit om in de XML file aan te geven wie er als laatste een wijziging aan een element heeft uitgevoerd.(user Last Mutation) Tot nu toe zijn er geen verwachtingen of bekende toepassingen in VISI software. Wel in raamwerk opstel software om dit veld  automatisch bij te werken. Dus als een raamwerkschrijver iets in dit veld invult, komt dit nooit in beeld bij de gebruiker.

##### language
  
Dit attribuut is optioneel in te stellen  op veel elementen in een raamwerk. Het idee was om hier de taal van het element mee vast te leggen, maar tot op heden hebben software leveranciers hier niets mee gedaan en is er geen beschrijving wat voor soort functionaliteit van software verwacht zou worden. Dus als een raamwerkschrijver iets in dit veld invult, komt dit nooit in beeld bij de gebruiker.

##### category
  
Dit attribuut is optioneel in te stellen  op veel elementen in een raamwerk. Het idee was om hier bepaalde onderdelen mee te kunnen categoriseren, maar tot op heden hebben software leveranciers hier niets mee gedaan en is er geen beschrijving wat voor soort functionaliteit van software verwacht zou worden. Dus als een raamwerkschrijver iets in dit veld invult, komt dit nooit in beeld bij de gebruiker.
  
##### helpInfo
  
Dit attribuut is optioneel in te stellen  op veel elementen in een raamwerk. Dit wordt veelvuldig gebruikt om gebruikers aanvullende uitleg te geven over raamwerk elementen. Bij bepaalde elementen is functionaliteit in VISI software verplicht gesteld. Zie de verschillende elementen voor voorbeelden.
  
##### code
  
Dit attribuut is optioneel in te stellen  op veel elementen in een raamwerk. Voorbeelden in oude documentatie geven bijvoorbeeld aan dat een raamwerk element de code “EAN 33156” kan krijgen, maar er wordt ook gesproken over transactie coderingen zoals T1.1 / T2 enz. 
De verschillende VISI software pakketten hebben tot op heden nooit iets met deze “code” gedaan en is er geen beschrijving wat voor soort functionaliteit van software verwacht zou worden.  Dus als een raamwerkschrijver iets in dit veld invult, komt dit nooit in beeld bij de gebruiker. 
In de praktijk zien we trouwens dat als een raamwerk schrijver een transactie code “T3” bij een transactie wil benoemen, dat deze code dan vooraan in de naam van de transactie (description)  bijgevoegd wordt, waardoor de description dan bijvoorbeeld wordt: “T3: Contractwijziging”




  


  







