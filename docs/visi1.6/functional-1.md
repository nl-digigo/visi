# Functioneel - 1. PROJECTINRICHTING

De functionele documentatie is bedoeld voor een software productmanager of een softwareontwikkelaar.

## Leeswijzer

De functionele uitleg is opgebouwd in hoofdstukken, en leest het beste hoofdstuk voor hoofdstuk. Met een hoofdstuk wordt een functioneel abstractieniveau inclusief bouwstenen uitgelegd. Aan het einde van een hoofdstuk wordt getoetst of de inhoud in voldoende mate begrepen wordt, en lezer verder kan naar het volgende hoofdstuk. In het volgende hoofdstuk wordt de functionele beschrijving aangevuld of verdiept qua bouwstenen. Hoofdstukken overslaan leidt tot het missen van bouwstenen en logische denkvolgorde.
De hoofdstukopbouw is afgestemd om het kennisniveau van de lezer, en verloopt van newbie tot expert. 

Voor de newbie wordt in paragraaf 4.3 uitgelegd hoe er communicatie in een project plaatsvindt. 

Daarna staat in paragraaf 4.4 de verdiepingsslag dat deze communicatie verschillend is per project, en in een sjabloon vastgelegd wordt. Niet ieder project heeft namelijk dezelfde communicatiepatronen. 

Als aanvulling op de communicatiepatronen wordt in paragraaf 5.3 beschreven hoe bestanden als bijlage onderdeel van de communicatie zijn. 

Paragraaf 5.4 legt uit hoe om te gaan met het wijzigen van de project specifieke communicatiepatronen in een operationeel project. 

Wat er aan het einde van een project met de communicatie en informatie gebeurt staat in hoofdstuk 5. 

Het project specifiek maken van de communicatiepatronen heeft nog een verdiepingsslag, welke in hoofdstuk 6 beschreven staat. Als toegift staan in laatste hoofdstuk de overige (optionele) bouwstenen toegelicht.

<div class="issue" data-number="141"></div> 


## Project specifiek bestand

Voordat communicate conform de open standaard VISI kan plaatsvinden, moet een project ingericht worden met een project specifiek bestand (psb) en een raamwerk.


### Project

Alles wordt opgehangen aan een project. De definitie van een project is in dit geval een, in de tijd en middelen begrensde, activiteit om iets te creëren. Wat er gecreëerd wordt is een service / product / resultaat. Een project wordt in samenwerking tussen verschillende mensen en organisaties uitgevoerd. De middelen kunnen zowel menselijke inspanningen als materialen zijn. Het onderscheidt zich door zijn eenmalige karakter van een programma of proces. Een project vereist een specifieke managementomgeving om activiteiten te coördineren en te sturen op kwaliteit, tijd en geld. Voor de coördinatie is communicatie nodig.

Van een project worden beperkte, verplichte eigenschappen vastgelegd. Ieder project heeft een unieke identificatie waarmee naar het project gerefereerd kan worden, zonder dat misverstanden kunnen ontstaan welk project bedoeld wordt. Daarnaast heeft een project een naam en een omschrijving. Deze naam en omschrijving behoeven niet uniek te zijn, en is een aanvulling op de unieke identificatie, en is bedoeld voor toelichting en zorgt voor eenvoudigere herkenning voor het project (door mensen). Aanvullend wordt van het project het moment van start en einde vastgelegd met start- en einddatum.

<aside class="example" title="Gegevens van een project (in een project specifiek bestand)">
<p><b>Project</b><br>
Unieke identificatie:    _badc9dab-807e-4319-bd56-60c57605e109<br>
Naam:                    Realisatie West- / Oostlijn<br>
Omschrijving:            Realisatie van metrolijn 47 inclusief 7 nieuwe stations met 9,7	kilometer spoor, waarvan 7,1 kilometer ondergronds<br>
Startdatum:              23-12-2020 14:59<br>
Einddatum:               20-05-2022 07:08</p>
</aside>


### Persoon

De activiteit van een project wordt uitgevoerd door personen. De mensen, die aan een project werken, worden personen genoemd. Ieder persoon in een project heeft een unieke identificatie waarmee naar de persoon in het project gerefereerd kan worden, zonder dat misverstanden kunnen ontstaan welke persoon bedoeld wordt. Naast de identificatie heeft een persoon een naam en een gebruikersnaam. De naam is een aanvulling op de unieke identificatie, en is bedoeld voor eenvoudigere herkenning (door mensen). De gebruikersnaam is niet verplicht en kan een zelfgekozen (technische) invulling krijgen. Gebruikersnaam kan - bijvoorbeeld - gebruikt worden voor het linken naar een gebruiker in een (bestaand) software systeem.

<div class="issue" data-number="136"></div> 

<aside class="example" title="Gegevens van personen (in een project specifiek bestand)">
<p>
<b>Persoon</b><br>
Unieke identificatie:   _0c585186-fa97-4de7-8fe0-5c4bee3afead<br>
Naam:                   Urbain Servranckx<br>
Gebruikersnaam:         uservranckx
</p>
<p>
<b>Persoon</b><br>
Unieke identificatie:   _974e4822-4944-45ad-ab2f-161370662e30<br>
Naam:                   Georges Remi<br>
Gebruikersnaam:         gremi
</p>
<p>
<b>Persoon</b>
Unieke identificatie:   _d4e02752-2ac6-4700-ae67-d33f428f78fb<br>
Naam:                   Luc Dupanloup<br>
Gebruikersnaam:         ldupanloup
</p>
</aside>

<p class="note" title="Identificatie is niet globaal">
N.B. Indien een persoon aan twee projecten werkt, kan de unieke identificatie van deze persoon per project verschillend zijn. Er is geen sprake van een globale unieke identificatie, maar een unieke identificatie binnen een project.</p>


### Organisatie

Personen voeren een activiteit in een project uit namens een organisatie. In een zakelijke context werken de mensen aan een project voor een organisatie, daarom is vastlegging van organisaties belangrijk. Ook iedere organisatie in een project heeft een unieke identificatie. Naast de identificatie heeft een organisatie een naam en een afkorting. De naam is een aanvulling op de unieke identificatie, en is bedoeld voor eenvoudigere herkenning (door mensen). De afkorting heeft een functioneel en technisch doel. Deze eigenschap is een drie letterige afkorting van de organisatie, die binnen het project uniek is. 

Uit de afkorting is de organisatorische bron van communicatie ter herleiden, zie … (Verwijzing naar uitleg over eigenschap van TransactionTemplate). Voor een organisatie wordt een contactpersoon gedefinieerd middels een verwijzing naar de unieke identificatie van een persoon. Deze verwijzing heeft geen functionele betekenis, en betreft enkel een administratief doel.

<aside class="example" title="Gegevens van een organisatie (in een project specifiek bestand">
<p><b>Organisatie</b><br>
Unieke identificatie:  _87e9144d-04d6-4a5f-bdcb-b50e96c2b498<br>
Naam:                  Gemeente Rommelgem<br>
Afkorting:             GRG<br>
Contactpersoon:        <u>_0c585186-fa97-4de7-8fe0-5c4bee3afead</u><br>
</p>
</aside>

<p class="note" title="Organisatie heeft een adres">
Per organisatie wordt ook het adres vastgelegd. Dit is geen fysiek of postadres, maar een digitaal adres. Dit digitale adres heeft een technisch doel, zie paragraaf … over SOAP protocol.</p>
<div class="issue" data-number="136"></div> 


### Rol

De differentiatie in autorisatie, taken en verantwoordelijkheden in een project worden expliciet gemaakt middels het definiëren van verschillende rollen. Een rol staat voor samenhangende autorisatie, taken en verantwoordelijkheden voor het uitvoeren van activiteiten, die een persoon meestal tijdelijk op zich neemt, en die (afwisselend) door verschillende personen kunnen worden vervuld. Van een rol worden zeer beperkte eigenschappen vastgelegd. Ook iedere rol heeft een unieke identificatie, aangevuld met een naam en omschrijving. Deze naam en omschrijving behoeven niet uniek te zijn, en zijn een aanvulling op de unieke identificatie bedoeld voor toelichting en zorgt voor eenvoudigere herkenning van de rol (door mensen).

<aside class="example" title="Gegevens van een rol (in een project specifiek bestand)">
<p><b>Rol</b><br>
Unieke identificatie:  _1252a67a-5f69-4a9c-b4ca-506a4459c7c3 <br>
Naam:                  Beoordelende rol<br>
Omschrijving:          Deze rol geeft een onafhankelijke beoordeling op basis van competenties en deskundigheid binnen het kader van project. Bij de beoordeling doorloopt de rol een aantal vaste stappen. Rol inventariseert gegevens, weegt, motiveert en beoordeelt deze informatie en velt vervolgens het oordeel.<br>
</p></aside>

<p class="note" title="Rol versus functie">
Een rol is fundamenteel anders dan een functie. Een essentieel verschil is dat rollen een afspiegeling zijn van het werk dat georganiseerd wordt, terwijl functies een afspiegeling zijn van mensen die georganiseerd worden (in een organisatie). Een project heeft geen functie Afdelingshoofd, maar wel de rollen Beoordelende, Adviserende.</p>


### Relatie tussen Persoon, Rol en Organisatie

Personen handelen in een project altijd vanuit een rol namens een organisatie. Een persoon is niet rechtstreeks gekoppeld aan de organisatie. De persoon heeft een relatie met een rol en een organisatie in het project. Deze relatie is te zien als een unieke sleutel die persoon, rol en organisatie verbindt. Deze sleutel noemen we "Persoon in Rol van Organisatie". Van deze sleutel worden zeer beperkte, verplichte eigenschappen vastgelegd. Voor de sleutel wordt persoon, rol en organisatie gedefinieerd middels een verwijzing naar de unieke identificatie van een persoon, een rol en een organisatie.
 
<aside class="example" title="Gegevens van een persoon in een rol van een organisatie (in een project specifiek bestand)">
<p><b>Persoon in Rol van Organisatie</b><br/>
Unieke identificatie:  _e0ad4954-7986-417c-96d6-813efa36e86b<br/>
Contactpersoon:        <u>_0c585186-fa97-4de7-8fe0-5c4bee3afead</u><br/>
Rol:                   <u>_1252a67a-5f69-4a9c-b4ca-506a4459c7c3</u><br/>
Organisatie:           <u>_87e9144d-04d6-4a5f-bdcb-b50e96c2b498</u>
</p></aside>

<p class="note" title="Relatie persoon en rol">
Een persoon kan meerdere rollen hebben. Een rol kan door meerdere personen vervuld worden.</p>


### Personele wisselingen

In bijna ieder project treden wijzigingen met betrekking tot de personele invulling. Dit kan zijn in de vorm van tijdelijke vervanging in verband met afwezigheid of vakanties. Of een permanente vervanging indien de projectmedewerkers bij een andere organisatie gaat werken of met pensioen gaat. 


#### Permanente vervanging

Permanente vervanging wordt ook wel opvolging genoemd. De opvolger is een geautoriseerd persoon, die de rol, taken en verantwoordelijkheid overneemt van de (initieel) geautoriseerde persoon. Voor de traceerbaarheid en transparantie kunnen er nooit geautoriseerde personen verwijderd worden. Vandaar dat de opvolging expliciet gemaakt wordt.


Permanente vervanging is altijd op rolniveau. Bij de genoemde sleutel van Persoon in Rol van Organisatie wordt deze permanente vervanger vastgelegd middels een verwijzing naar de unieke identificatie van een persoon, een rol en een organisatie.  De relatie is van geautoriseerde naar de opvolger. Hierbij dienen de rollen exact overeen te komen.

<aside class="example" title="Permanente vervanging cg opvolging">
<p><b>Persoon in Rol van Organisatie</b><br/>
Unieke identificatie:   _e0ad4954-7986-417c-96d6-813efa36e86b<br/>
Contactpersoon:         <u>_0c585186-fa97-4de7-8fe0-5c4bee3afead</u><br/>
Rol:                    <u><font color = "00ff00">_1252a67a-5f69-4a9c-b4ca-506a4459c7c3</font></u><br/>
Organisatie:            <u>_87e9144d-04d6-4a5f-bdcb-b50e96c2b498</u><br/>
Opvolger:               <u><font color = "B71C1C">_51693b0e-84e5-4a9a-9fb6-ec4a7dea6edb</font></u><br/>
<br/>
<b>Persoon in Rol van Organisatie</b><br>
Unieke identificatie:   <font color = "B71C1C">_51693b0e-84e5-4a9a-9fb6-ec4a7dea6edb</font><br/>
Contactpersoon:         <u>_974e4822-4944-45ad-ab2f-161370662e30</u><br/>
Rol:                    <u><font color = "00ff00">_1252a67a-5f69-4a9c-b4ca-506a4459c7c3</font></u><br/>
Organisatie:            <u>_2ba76318-83ab-4a6e-9257-ea91045717d2</u>
</p></aside>
  
Heeft een persoon (in een rol van een organisatie) een opvolger, dan betekent dit dat de persoon niet langer geautoriseerd is om te handelen vanuit deze rol. Alleen de opvolger is geautoriseerd.
Een persoon (in een rol van een organisatie) kan maximaal één (1) opvolger hebben.


#### Tijdelijke vervanging 
 
Een tijdelijke vervanging kan ook gelezen worden als een (tijdelijke) machtiging. De tijdelijke vervanging is een autorisatie voor een derde persoon, zodat deze persoon mag handelen uit naam van de geautoriseerde persoon. Dit kan een tijdelijk karakter hebben, of een machtiging zijn gedurende de looptijd van het project.


De tijdelijke vervanging is altijd op rolniveau. Bij de genoemde sleutel van Persoon in Rol van Organisatie wordt deze tijdelijke machtiging vastgelegd middels een verwijzing naar de unieke identificatie van de geautoriseerde persoon, rol en organisatie. De relatie is van gemachtigde naar de geautoriseerde. Hierbij dienen de rollen exact overeen te komen.

<aside class="example" title="Tijdelijke vervanging">
<p><b>Persoon in Rol van Organisatie</b><br>
Unieke identificatie:  _752b1dfd-dd91-4404-9708-39b91047ca66<br>
Contactpersoon:        <u>_d4e02752-2ac6-4700-ae67-d33f428f78fb</u><br>
Rol:                   <u><font color = "00ff00">_1252a67a-5f69-4a9c-b4ca-506a4459c7c3</font></u><br>
Organisatie:           <u>_87e9144d-04d6-4a5f-bdcb-b50e96c2b498</u><br>
Vervangt:              <u><font color = "B71C1C">_51693b0e-84e5-4a9a-9fb6-ec4a7dea6edb</font></u><br>
</p></aside>

Voert een gemachtigd persoon (in een rol van een organisatie) een handeling uit, dan is dit altijd uit naam van de geautoriseerde persoon. Bij een handeling wordt de geautoriseerde vastgelegd en de gemachtigde. De geautoriseerde / gemachtigde kan antwoorden op transacties van de rol van de geautoriseerde, ongeacht wie de transactie gestart heeft. Indien een machtiging ongedaan gemaakt wordt, kan alleen de geautoriseerde de handeling afmaken. Een machtiging mag namelijk wel ongedaan gemaakt worden, omdat machtigingen een tijdelijk karakter kunnen hebben.


Als een gemachtigde iets verstuurt moet traceerbaar zijn dat de gemachtigde  iets verstuurd heeft, en namens wie dit verstuurd is.


Een persoon kan gemachtigd zijn om namens meerdere geautoriseerde personen (in rol van organisatie) te handelen. Meerdere personen kunnen gemachtigd zijn om namens één geautoriseerde persoon (in rol van organisatie) te handelen.

### Project Setup

Project, personen, organisaties, rollen en vervangingen dienen bij alle projectdeelnemers bekend en gelijk te zijn. Daarom wordt deze setup van een project vastgelegd in een uitwisselbaarformaat: project specifiek bestand. Dit bestand wordt verspreid onder de deelnemende organisaties. Dit is meestal per organisatie vanwege het eerdergenoemde digitale adres van een organisatie. Dit digitale adres weet hierdoor van het bestaan van een project. In het gebruikte voorbeeld "Realisatie West- / Oostlijn" met unieke identificatie _ _badc9dab-807e-4319-bd56-60c57605e109_ is bekend bij alle organisaties van het project.
De projectcommunicatie middels het versturen en beantwoorden van berichten kan starten, zie paragraaf https://bimloket.github.io/visi/visi1.6/#versturen-van-een-bericht<div class="issue" data-number="138"></div> 


## Raamwerk / Communicatiesjabloon van een project

### Informatie-overdracht conform type transactie (TransactionType)

Communicatie vindt in een project altijd plaats op basis van een type transactie. Een type transactie is een afsprakenstelsel van elkaar mogelijk opvolgende berichten tussen twee rollen. Een transactie in een project verloopt dus volgens de regels van het transactie type in het raamwerk. Daarbij wordt er gesproken over de initierende rol (initiator) en de uitvoerende rol (executor). Een persoon met de initierende rol mag een transactie starten en het eerste bericht van deze transactie sturen naar een (1) persoon met de uitvoerende rol. Daarna is het steeds de ontvanger (executor of initiator) van het laatste bericht die moet reageren met een bericht. Net zo lang totdat er geen antwoord mogelijkheden meer zijn. Dan is de transactie afgerond. Welke mogelijke start- en antwoordberichten er zijn staat gedefinieerd als volgorde van type berichten van een transactie (zie paragraaf https://bimloket.github.io/visi/visi1.6/#berichtencommunicatie)


<aside class='def'>
<p>In te stellen globale eigenschappen: id, description, startDate, endDate, state, dateLaMu, userLaMu, language, category, helpinfo, code
Specifiek voor transactie types is helpInfo beschikbaar om de gebruikers uitleg te geven over het transactie type. Hier kan bijvoorbeeld vermeld worden welke rollen waarom hier met elkaar communiceren en wat het doel van de totale transactie is.<br>
</p>
</aside>

JEROENJEROEN
Specifiek voor transactie types is er hier de optie om de gebruikers uitleg te geven over het transactie type. Hier kan bijvoorbeeld vermeld worden welke rollen waarom hier met elkaar communiceren en wat het doel van de totale transactie is.
code
In te stellen specifieke eigenschappen:
result
Dit attribuut is optioneel in te stellen, alleen op Transactietype. Voorbeelden in oude documentatie geven bijvoorbeeld aan dat het resultaat van een transactietype hierin beschreven kan worden. In de praktijk beschrijven raamwerkbouwers dit in de helpinfo van een transactietype.
De verschillende VISI software pakketten hebben tot op heden nooit iets met dit “result” gedaan en is er geen beschrijving wat voor soort functionaliteit van software verwacht zou worden.  Dus als een raamwerkschrijver iets in dit veld invult, komt dit nooit in beeld bij de gebruiker. 

Verwijzingen vanuit het transactie type:
Initiator roltype
Hiermee wordt vastgesteld welke rol een persoon moet hebben om een transactie van dit type te starten 
Executor roltype
Hiermee wordt vastgesteld welke rol een persoon moet hebben om een eerste bericht in dit transactie van dit type te mogen ontvangen. Een initiator kan dus kiezen uit de mogelijke executors om een transactie mee uit te voeren (to execute). 
Bijlage types
Omdat het binnen een raamwerk mogelijk is om verschillende metadata-formulieren te specificeren voor een bij te voegen bijlage, kan ook per transactie type ingesteld worden welk(e) metadata formulier(en) gekozen kan/kunnen worden voor een bijlage bij een transactie. Als er geen bijlage types gekoppeld zijn, kan ieder bijlage type uit het raamwerk gekozen worden door de gebruiker.
subTransactions
Subtransactions lijkt een vervallen eigenschap te zijn, afkomstig uit de systematiekversies voor versie 1.2, waar er nog niet met “previous” subtransacties gedefinieerd kunnen worden door naar Bericht in transactietypes in andere transacties te verwijzen. In alle documentatie vanaf versie 1.2 wordt dus over en subtransactie gesproken als een transactie gestart is obv een previous bericht in een andere transactie. In oude documentatie wordt gesproken over “Transacties die binnen deze transactie vallen”.  Tegenwoordig wordt deze verwijzing nooit ingevuld in een transactietype. 
Verwijzingen naar het transactie type:
Bericht in transactie 
Zie de beschrijving van dit element verderop in dit document
Berichtkeuzebeperkingen 
Zie de beschrijving van dit element verderop in dit document
Transactietype
id: 		TR_ContractwijzigingOG 
description:	Contractwijziging door opdrachtgever
helpinfo:	Met dit transactie type kan opdrachtgever een contractwijziging aan de opdrachtnemer melden, met als tussendoelen het verkrijgen van een technisch voorstel van opdrachtnemer, een technisch akkoord van opdrachtgever, een offerte van opdrachtnemer, een acceptatie van die offerte door opdrachtgever en uiteindelijk de acceptatie van een of meerdere gereedmeldingen van het uitgevoerde werk middels de levering van prestatieverklaringen.
initiator rol: Opdrachtgevende_contractueel
executor rol:	Opdrachtnemende_contractueel
### Type bericht (MessageType)
In een berichttype wordt bepaald welke inhoud een gebruiker in moet vullen en berichttypes worden aan elkaar gekoppeld om een stroomschema binnen een transactie te creëren. De naam van een berichttype is de eerste aanduiding die een gebruiker kiest om een bepaald pad in een stroomschema te doorlopen. Daarmee geeft deze naam ook veel informatie over de status van een transactie op het moment van verzenden van een bericht.
In te stellen globale eigenschappen:
id
description
startDate
endDate
state
dateLaMu
userLaMu
language
category
helpinfo
Specifiek voor bericht types is er hier de optie om de gebruikers uitleg te geven over het specifieke bericht type. Hier kan bijvoorbeeld vermeld worden in welke gevallen voor het specifieke berichttype gekozen moet worden zodat de gebruiker kan begrijpen welke consequenties dit berichttype heeft op de status van de transactie en het te verwachte verder verloop van mogelijke opvolgende berichten. 
code
In te stellen specifieke eigenschappen:
appendixMandatory
Op een berichttype kan ingesteld worden dat het verplicht is om minimaal één bijlage toe te voegen. Dit is een later toegevoegde gebruikerswens, omdat men het bijvoorbeeld vervelend vond als een bericht met de naam “Document ter acceptatie” per abuis zonder bijlage verzonden kon worden.
Verwijzingen vanuit het bericht type:
Berichthoofdstukken
Hiermee wordt de inhoud van een bericht vastgelegd, want in die berichthoofdstukken zitten de informatievelden. De volgorde waarmee de hoofdstukken in het berichttype staan, bepaalt in welke volgorde de VISI software deze hoofdstukken aanbiedt in de berichten.
Technisch is met de huidige controlemechanismes helaas mogelijk om een bericht te versturen waarin een of meerdere berichthoofdstukken ontbreken, maar dit is niet de bedoeling. Er lopen onderzoeken naar een betere beveiliging hiervoor.
Bijlage types
Omdat het binnen een raamwerk mogelijk is om verschillende metadata-formulieren te specificeren voor een bij te voegen bijlage, kan ook per bericht type ingesteld worden welk(e) metadata formulier(en) gekozen kan/kunnen worden voor een bijlage bij een bericht. Als er geen bijlage types gekoppeld zijn, kan ieder bijlage type uit het raamwerk gekozen worden door de gebruiker.
 Verwijzingen naar het bericht type:
Berichtveld beperkingen
Bericht in transactie

Berichttype
id: 		MS_AcceptatieVoorstelWijziging
description:	Acceptatie Technisch voorstel (contractwijziging)
helpinfo:	Met dit bericht accepteert u het technisch voorstel, waarna de opdrachtnemer kan reageren met een offerte voor deze contractwijziging.
Complex elements: 
-	CeContractwijzigingBasis
-	CeContractwijzigingVoorstel
-	CeContractwijzigingOpmerkingen

### Berichthoofdstukken (ComplexElementType)
De berichthoofdstukken worden gebruikt om invoer velden in berichten eenvoudig te kunnen beheren in een raamwerk en om logische onderverdelingen in berichten te kunnen aanbrengen. Doordat in berichten alleen de verschillende hoofdstukken benoemd zijn, kan eenvoudig een bepaald veld toegevoegd worden aan-, of verwijderd worden uit- een hele groep berichten die dat hoofdstuk bevatten.
De volgorde waarmee de berichtvelden in het hoofdstuk staan, bepaalt in welke volgorde de VISI software deze hoofdstukken aanbiedt in de hoofdstukken en daarmee ook in de berichten.
 
In te stellen globale eigenschappen:
id
description
startDate
endDate
state
dateLaMu
userLaMu
language
category
helpinfo
Specifiek voor bericht hoofdstukken is er in de beschikbare software vaak nog geen ondersteuning. Toch neigt de markt ernaar dit wel te gaan eisen. Dit zodat bijvoorbeeld duidelijk uitgelegd kan worden welk doel dit deel van het bericht dient en welke weg deze informatie bijvoorbeeld vervolgt of waar deze informatie bijvoorbeeld niet heen gaat. (denk aan informatie die binnen een bepaald domein moet blijven)
In te stellen specifieke eigenschappen:
MinOccurs
Hieronder wordt uitgelegd dat er een hoofdstuk in een hoofdstuk kan worden ingevoegd om een tabel te creëren. Door deze setting bijvoorbeeld met 1 of 3 in te vullen op het ingevoegde hoofdstuk(de tabel), moet een gebruiker minimaal 1 of 3 regels in deze tabel aanmaken.

maxOccurs
Zoals bij MinOccurs, is het op dezelfde manier ook mogelijk om aan te geven dat een tabel niet meer dan x regels mag bevatten. Door Min en Max op hetzelfde aantal te zetten, is ook een exact aantal aan te maken regels instelbaar
Verwijzingen vanuit het Hoofdstuk type:
Berichthoofdstukken (Tabelvorming)
Het is toegestaan om in een hoofdstuk naast berichtvelden, ook een ander hoofdstuk te benoemen. De afgesproken werking hiervan is dat het hoofdstuk in het “bovenliggende” hoofdstuk weergegeven wordt als tabel. De bericht velden in het ingevoegde hoofdstuk worden dan als kolommen aangeboden.
Op deze manier kan een hoofdstuk bestaan uit een of meerdere tabellen, eventueel ook aangevuld met normale berichtvelden. 
NB1: Op dit moment is technisch nog niet aan te geven op welke locatie de tabellen in een hoofdstuk getoond moeten worden. Hierdoor komen ze op dit moment soms boven en soms onder de normale velden en is het niet mogelijk om een hoofdstuk te maken waarin velden en tabellen elkaar afwisselen. In issue 37 wordt aan dit probleem gewerkt.
NB2: Technisch is het mogelijk om een hoofdstuk in een hoofdstuk in een hoofdstuk enz. te maken, wat bijvoorbeeld een 3d-tabel op zou kunnen leveren. Over dergelijke toepassingen zijn nog geen afspraken in de systematiek en het wordt ook nog nergens toegepast. Dit wordt wel als ruimte voor nog niet bekende evt toekomstige toepassingen beschouwd.
Berichtvelden
Door berichtvelden in een bepaalde volgorde in een hoofdstuk te plaatsen, ontstaat de structuur van dat hoofdstuk, zoals het in alle berichten waarin  dit hoofdstuk staat wordt weergegeven. 
Verwijzingen naar het Hoofdstuk type:
Berichthoofdstukken (Tabelvorming)
Zie hierboven.
ProjectType
Voor zover bekend is het technisch mogelijk en hoofdstuk aan een projecttype te koppelen, maar is er nog geen toepassing voor bekend.
PersonType
Hiermee kan er in het projectspecifieke bericht aanvullende informatie bij personen ingevuld worden, zoals bijvoorbeeld een telefoonnummer of andere voor het project relevante persoonsinformatie.
OrganisationType
Hiermee kan er in het projectspecifieke bericht aanvullende informatie bij organisaties ingevuld worden, zoals bijvoorbeeld een adres of andere voor het project relevante informatie.
AppendixType
Op deze manier kan er per bijlage type een andere set aan berichtvelden met metadata over de bijlage ingevoerd worden.
Bericht type
Voor de opbouw van berichten
Complex element type
id: 		CeContractwijzigingVoorstel
description:	Technisch voorstel
Simple elements: 
-	SE_Wijzigingsnummer
-	SE_BeschrijvingTechnisch
-	SE_DatumUitvoering
-	SE_KostenramingEUR
-	CE_Tabel_Werkpakketten
Complex element type in Complex element type (tabel)
id: 		CE_Tabel_Werkpakketten
description:	Werkpakketten
Simple elements: 
-	SE_Werkpakket
-	SE_WPkostenpercentage


Berichtveld beperkingen
### Element van een type bericht (SimpleElementType)
In te stellen globale eigenschappen:
id
description
state
dateLaMu
userLaMu
language
category
helpinfo
Specifiek voor berichtvelden wordt de helptekst veelvuldig gebruikt om de opsteller van een bericht uit te leggen wat er exact verwacht wordt bij het invullen van dat veld. Dit zowel op abstract niveau, zoals: “Vul hier de lengte van het element in, zonder rekening te houden met uitstekende delen zoals wapening en dergelijke” Maar ook specifiek in de vorm van een uitleg welke getal notatie op gecontroleerd wordt: “Noteer de lengte met een komma en twee decimalen”.
Ook bij het lezen van een bericht helpt de helptekst om de inhoud van een veld beter te kunnen duiden.
NB: Gereserveerd veld-ID: het veld met ID “SOAPServerURL” is exclusief gereserveerd voor het berichthoofdstuk dat aan het organisatie type gekoppeld is. Dit zodat hiermee voor VISI software altijd het SOAP-adres van een organisatie gevonden kan worden.

					
In te stellen specifieke eigenschappen:
interfaceType
Dit veld is bij de allereerste opzet van de systematiek bedacht, maar heeft nooit een echte toepassing of duidelijke uitleg gekend. In de vorige documentatie stond het volgende:
“Type interface c.q. view op dit SimpleElementType voor dit specifieke bericht. Bijvoorbeeld als hetgegevenselement bedoeld is als invoer (inputText)of slechts een vaste inhoud bevat en nietaangepast mag worden (label). OP het moment wordt hier in de praktijk geen functionaliteit aan verbonden. “
valueList
Is niet in gebruik. Dit is de uitleg uit de vorige documentatie:
“Puntkomma geseparate lijst van waarden die een instance op berichtniveau uiteindelijk aan mag nemen. Oorspronkelijk was dit element bedoeld als enumeration. In de huidige praktijk wordt dit opgelost met het element type UserDefinedType en het element xsdRestriction. In de xsdRestriction worden de enumeration values aangegeven. Aan het element valueList wordt in de huidige praktijk geen betekenis toegekend.”
Verwijzingen vanuit het Berichtveld type: 
Veld eigenschappen
Verwijzingen naar het Berichtveld type:
Berichtveld beperkingen
Bericht hoofdstukken
Simple element type
id: 		SE_DatumUitvoering
description:	 Gepland moment start uitvoering
helpinfo:	Kies hier de beoogde startdatum waarop de hier benoemde werkzaakheden beginnen.
User defined type: UDT_Datumveld

### Datatype van een element (UserDefinedType)
Hiermee wordt het gedrag van het invoerveld bepaald en hoe het gevalideerd moet worden.
Zo kan een veld een datum/tijdstip/valuta/verplichte tekst/optionele tekst/een exact aantal karakters enzovoorts als vereiste mee krijgen. VISI software biedt doorgaans invoerfunctionaliteit op maat voor de meest voorkomende invoer soorten, zoals een datum keuze venster bij een datum veld en een keuzelijst functie als er een keuze uit lijst met waardes vereist wordt.
In te stellen globale eigenschappen:
id
description
state
dateLaMu
userLaMu
language
category
helpinfo
Voor veldeigenschappen is nog geen toepassing bekend voor de helpinfo. Het is denkbaar dat deze naast de helpinfo weergegeven zou kunnen worden, om de invul instructie hier te beheren in plaats van in de helpinfo van meerdere veld types die deze eigenschap hebben.

In te stellen specifieke eigenschappen:
baseType
Per Veld eigenschap moet uit een aantal basis XML veldsoorten gekozen worden om het basis gedrag van een veld vast te stellen. De keuze is beperkt tot de volgende basis XML veldsoorten:
-	BOOLEAN  
-	DATE 
-	DATETIME
-	TIME
-	DECIMAL
-	INTEGER
-	STRING
XsdRestriction
Hiermee kan zeer exact gedrag aan een veld van een bepaald basetype gedefinieerd worden. Voor het basetype STRING kan een reguliere expressie gedefinieerd worden.
Enkele voorbeelden die nu veel gebruikt worden voor basetype STRING zijn:
-	1 keuze mogelijkheid, dus veld heeft altijd deze waarde:
<xs:enumeration value="Automatisch gevuld"/>
-	Keuzelijst met meerdere waardes
<xs:enumeration value="k1"/>
<xs:enumeration value="k2"/>
<xs:enumeration value="k3"/>
-	Optionele keuzelijst:
<xs:enumeration value=""/>
<xs:enumeration value="Keuze 1"/>
<xs:enumeration value="Keuze 2"/>
-	Verplichte tekst van minimaal 1 karakter
<xs:minLength value="1"/>
-	Optionele tekst
geen xsd restrictie
-	Bijvoorbeeld een jaarnummer
<xs:pattern value="(20\d\d)"/>
Een voorbeeld dat veel gebruikt wordt voor basetype DECIMAL zijn:
-	Bedrag met twee decimalen
<xs:fractionDigits value="2"/>
Verwijzingen vanuit het Veld eigenschap type:
Geen
Verwijzingen naar het Veld eigenschap type:
Berichtvelden
Op deze manier krijgt een veld de eigenschappen gekoppeld
User defined type
id: 		UDT_Datumveld
description:	 Datumveld
Basetype : DATE

id: 		UDT_VerplichteTekst
description:	 Verplichte tekst veld
Basetype : STRING
XsdRestriction: xs:minLength value="1"


### Berichtveld beperkingen (ElementCondition)
Hiermee wordt geregeld wanneer een gebruiker een veld wel of niet mag aanpassen, of dat het veld door de software leeg gemaakt moet worden voor een volgend bericht.
In te stellen globale eigenschappen:
id
description
helpinfo
Voor berichtveld beperking is geen toepassing bekend voor de helpinfo.
In te stellen specifieke eigenschappen:
Condition
Hiermee wordt het gedrag van een veld bepaald. Er is keuze uit de volgende conditions:
-	FREE
Het veld mag aangepast worden
-	FIXED
Het veld mag niet aangepast worden
-	EMPTY
Het veld wordt door de software leeggemaakt voor de gebruiker
Verwijzingen vanuit de Berichtveld beperkingen:
Door een of meerdere van onderstaande elementen te benoemen, wordt de situatie waar de conditie op van toepassing is gedefinieerd. 
complexElements
simpleElement
messageInTransaction

De basis regels zijn:
-	Een veld dat voor de eerste keer aangeboden wordt, dus nog niet bestaat in het voorgaande bericht, is altijd invulbaar en wordt nooit geblokkeerd door deze instelling.
-	Standaard wordt een veld dat in het voorgaande bericht al bestaat geblokkeerd in de opvolgende berichten. Ook als het veld toevallig “leeg” was in het voorgaande bericht. Dus alleen doordat het veld de eigenschap “FREE” mee krijgt, kan een veld aangepast worden.
-	OVERNEMEN VAN WAARDEN???
-	Berichtveld beperkingen kunnen ingesteld worden op Berichthoofdstukken, Berichtvelden en Berichten in transacties of een combinatie daarvan. Onderstaande tabel geeft aan welke beperking gebruikt moet worden als er meerdere beperkingen op een veld in een bericht staan:
Het hoogste getal in de eerste kolom “wint”. Dus als er een conditie op een CE en SE ingesteld is (5) dan geldt deze conditie tov een instelling alleen op een SE  (1).
 

Verwijzingen naar de Berichtveld beperkingen:
Geen
ElementCondition
id: 		EC_116
description:	 New element condition
condition:	 FREE
ComplexElement: CeContractwijzigingVoorstel
ComplexElement: CE_Tabel_Werkpakketten
simpleElement: SE_WPkostenpercentage
messageInTransaction: mitt_265

### Bericht in transactie (MessageInTransactionType)
De vormgeving van de opvolging van berichten zodat een stroomschema gevolgd kan worden wordt geregeld in het bericht in transacties type (vanaf hier aangeduid als “MITT”). 
De MITT’s koppelen berichttypes aan elkaar binnen- en tussen transacties.
Als een bericht type op meerdere plekken in een transactie voorkomt, bijvoorbeeld 1 keer als start bericht en 1 keer als reactie, dan bestaan er 2 MITT’s. Beiden verwijzen naar de transactie en het bericht type, alleen verschilt de koppeling tussen de MITT’s. 
In te stellen globale eigenschappen:
id
state
dateLaMu
userLaMu


In te stellen specifieke eigenschappen: 
requiredNotify
Op het moment wordt aan het element requiredNotify geen betekenis toegekend.
received
Boolean waarde die aangeeft of het vorige bericht ontvangen zou moeten zijn. In de praktijk wordt dit element niet gebruikt.
Send
Boolean waarde die aangeeft of het huigie bericht inmiddels verstuurd zou moeten zijn. In de
praktijk wordt dit element niet gebruikt.
initiatorToExecutor
Boolean waarde die aangeeft welke richting het bericht in de transactie heeft. Bij true gaat het bericht vanaf de persoon die de transactie gestart heeft naar degene die ontvanger was van het eerste bericht van de transactie.
OPTIONAL??? Zie exp_2
openSecondaryTransactionsAllowed
Optional Boolean waarde die de mogelijkheid aangeeft of secundaire transacties nog niet afgerond
hoeven te zijn voordat met de primaire transactie kan worden verder gegaan. De interpretatie voor
"TRUE" is dat niet alle instanties van secundaire transacties hoeven te zijn afgerond voordat met de
primaire transactie kan worden verder gegaan. Als de waarde "FALSE" is dienen alle instanties van
secundaire transacties te worden afgerond voordat de primaire transactie hervat kan worden. Indien
openSecondaryTransactionsAllowed niet is gedefinieerd wordt dit geïnterpreteerd als "TRUE".
TODO: terugkeerantwoorden schijnen wel door te mogen.. Opzoeken!!!!!!!! ARNE met Jos!!!
firstMessage
Optional Boolean waarde die bedoeld is om onbetwistbaar vast te kunnen stellen dat een bericht alleen gebruikt kan worden als eerste bericht van een subtransactie. Gebruik van een MITT met deze instelling resulteert dus altijd in een nieuwe subtransactie.

Verwijzingen vanuit het Bericht in transactie type:
Berichten
Hiermee wordt de berichtnaam en inhoud van het element in de berichtenstroom bepaald.
Voorgaand(previous) bericht
Op deze manier ligt vast hoe de stroom van berichten verloopt. Doordat MITT’s  de voorgaande MITT’s hier hebben staan, weet je vanuit welk bericht dit bericht gekozen kan worden als volgend bericht. Er zijn grofweg 4 soorten previous-koppelingen die er qua definitie precies hetzelfde uitzien(deze MITT is een previous op deze MITT), maar in werking anders zijn:
-	Start van een nieuwe hoofdtransactie. De waarde van previous is dan leeg.
-	Een antwoord binnen dezelfde transactie (De previous MiTT is ook aan dezelfde transactie gekoppeld)
-	Een start van een nieuwe transactie op basis van de MITT in deze transactie. Dit noemen we ook wel een “Subtransactie” starten. Deze MITT moet altijd de eigenschap “firstmessage” hebben, anders kan er geen nieuwe transactie gestart worden en doet de previous koppeling waarschijnlijk niets.
-	Een terugkering vanuit de subtransactie naar de bovenliggende transactie. 
Deze optie is alleen toegestaan vanuit een bericht in een subtransactie terug naar de transactie waaruit de subtransactie is opgestart. Dit bericht in de bovenliggende transactie mag niet de eigenschap “firstmessage” hebben, want dan wordt er een subtransactie onder de subtransactie aangemaakt.
Transactie
Een MITT is altijd aan een transactie gekoppeld. Minimaal plaatst een MITT dus een berichttype in een transactie.
Transactiefase
Deze eigenschap is bedoeld om de transactie fases van het DEMO universele transactie patroon mee aan te geven. Hier wordt nog weinig gebruik van gemaakt. De eerste DEMO oplegger op de VISI systematiek gebruikt deze eigenschap wel als essentieel onderdeel.
Groeptypes
Er kan een groep ingevuld worden, maar hier wordt tot op dit moment niets mee gedaan.
Bijlage types
Dit is de meest specifieke manier om te benoemen welke metadata set (berichthoofdstuk) aan berichtvelden ingevuld moet worden voor een bijlage die bij een bericht wordt toegevoegd. 
Bericht in transactie beperkingen
Voorwaardelijkheid wanneer je dit bericht mag kiezen.

Verwijzingen naar het Bericht in transactie type:
Berichtveld beperkingen (elementcondition)
Bericht in transactie beperkingen
Voorwaardelijkheid wanneer je een ander bericht mag kiezen op basis van de aanwezigheid van dit bericht.
Voorgaand(previous) bericht in transactie
Als dit bericht een voorgaand bericht is voor het bericht waarop het ingesteld staat
MessageInTransactionType
id: 		mit40170_T7
initiatorToExecutor:	 true
firstMessage: false
MessageType: MS_AcceptatieVoorstelWijziging
Previous MessageInTransactionType: mitt563
TransactionType: TR_ContractwijzigingOG
MessageInTransactionTypeCondition: mtc1


#### Transacties koppelen tot één procedure (m.a.w. hoofd- & sub-transacties)
WAARSCHIJNLIJK DUBBEL??? ONTDUBBELEN
In paragraaf 2.7 staat beschreven dat een type transactie uit type berichten bestaat, en dat de volgorde van de berichten in een transactie gedefinieerd wordt met een object bericht in transactie. Ieder bericht in transactie heeft een verwijzing naar het vorige bericht in transactie. Deze verwijzing is echter niet beperkt door de transactie. Met andere woorden het vorige bericht in transactie hoeft niet een bericht uit dezelfde transactie te zijn, het kan ook een bericht uit een andere transactie zijn. Hierdoor worden transactie feitelijk aan elkaar gekoppeld. Wel gelden er specifieke regels hoe deze koppeling van transactie gemodelleerd dient te worden in het raamwerk.
Hoe een koppeling aangebracht wordt tussen twee transacties wordt uitgelegd aan de hand van een wijzigingsprocedure tussen drie rollen. Dit zijn de rollen: opstellende rol, accorderende rol en adviserende rol. Er is een transactie tussen de opstellende rol en accorderende rol. Deze transactie heeft als doel om tot een geaccordeerde wijziging te komen. Er is een transactie tussen de accorderende rol en adviserende rol. Deze transactie heeft als doel on tot een advies te komen over de opgestelde wijziging. De accorderende rol heeft baat bij een koppeling tussen deze twee transacties, waardoor één procedure voor het opstellen, adviseren en accorderen van een wijziging ontstaat tussen drie rollen: opstellende, adviserende en accorderende rol.
De transactie Accorderen_Wijziging tussen opstellende rol en accorderende rol bestaat uit drie berichten: Voorstel_tot_Wijziging, Akkoord_Wijziging, Niet_Akkoord_Wijziging. Het bericht Voorstel_tot_Wijziging is het eerste bericht van de transactie. Het bericht in transactie van Voorstel_tot_Wijziging heeft GEEN vorig bericht in transactie. De berichten in transactie van Akkoord_Wijziging en Niet_Akkoord_Wijziging hebben wel een vorig bericht in transactie. Dit is namelijk het bericht in transactie van Voorstel_tot_Wijziging.
Bericht in Transactie
Unieke identificatie: _666f01b3-6714-44cc-8865-0a9ae1f938ce
Vorig:		 	
Bericht:		Voorstel_tot_Wijziging
Transactie:		Accorderen_Wijziging
Bericht in Transactie
Unieke identificatie: _6bdae158-a6dc-491b-a9ea-692fd419a828
Vorig:		 	_666f01b3-6714-44cc-8865-0a9ae1f938ce
Bericht:		Akkoord_Wijziging
Transactie:		Accorderen_Wijziging
Bericht in Transactie
Unieke identificatie: _4e5569b7-0c6a-4976-811d-9d9189b8b1df
Vorig:		 	_666f01b3-6714-44cc-8865-0a9ae1f938ce
Bericht:		Niet_Akkkord_Wijziging
Transactie:		Accorderen_Wijziging
De transactie Adviseren_Wijziging tussen accorderende rol en adviserende rol en bestaat uit twee berichten: Verzoek_Advies_Wijziging en Advies_Wijziging. Het bericht Verzoek_Advies_Wijziging is het eerste bericht van de transactie. Het bericht in transactie van Verzoek_Advies_Wijziging heeft GEEN vorig bericht in transactie. Het bericht in transactie van Advies_Wijziging heeft wel een vorig bericht in transactie. Dit is namelijk het bericht in transactie van Verzoek_Advies_Wijziging.
Bericht in Transactie
Unieke identificatie: _a7e9fa9c-13ce-49f7-bbd6-f5eeb4688228
Vorig:		 	
Bericht:		Verzoek_Advies_Wijziging
Transactie:		Adviseren_Wijziging
Bericht in Transactie
Unieke identificatie: _f75a35c7-30f3-4b3b-8776-120cd7811fd4
Vorig:		 	_a7e9fa9c-13ce-49f7-bbd6-f5eeb4688228
Bericht:		Advies_Wijziging
Transactie:		Adviseren_Wijziging
Hoe wordt de adviestransactie gekoppeld aan de accorderingstransactie? Met de verwijzing naar het vorige bericht in transactie. Echter omdat de eigenschap van het eerste bericht van de transactie Adviseren_Wijziging - een lege verwijzing naar het vorige bericht in transactie - dient het eerste bericht een vlag (Waar / Onwaar) te krijgen dat dit het eerste bericht is van de transactie.
Bericht in Transactie
Unieke identificatie: _a7e9fa9c-13ce-49f7-bbd6-f5eeb4688228
Vorig:		 	_666f01b3-6714-44cc-8865-0a9ae1f938ce
Eerste bericht:	Waar
Bericht:		Verzoek_Advies_Wijziging
Transactie:		Adviseren_Wijziging
Na het ontvangen van Voorstel_tot_Wijziging kan de accorderende rol kiezen voor drie reactieberichten: Akkoord_Wijziging, Niet_Akkkoord en Verzoek_Advies_Wijziging. Echter na ontvangst van het bericht Advies_Wijziging is er geen reactiebericht. De koppeling terug van adviestransactie naar accorderende transactie is nog niet aangebracht. Dit wordt ook gemodelleerd met de verwijzing naar het vorige bericht in transactie. In dit geval het bericht in transactie van Akkoord_Wijziging en Niet_Akkoord_Wijziging.
Bericht in Transactie
Unieke identificatie: _6bdae158-a6dc-491b-a9ea-692fd419a828
Vorig:		 	_666f01b3-6714-44cc-8865-0a9ae1f938ce, _f75a35c7-30f3-4b3b-8776-120cd7811fd4
Bericht:		Akkoord_Wijziging
Transactie:		Accorderen_Wijziging
Bericht in Transactie
Unieke identificatie: _4e5569b7-0c6a-4976-811d-9d9189b8b1df
Vorig:		 	_666f01b3-6714-44cc-8865-0a9ae1f938ce, _f75a35c7-30f3-4b3b-8776-120cd7811fd4
Bericht:		Niet_Akkkord_Wijziging
Transactie:		Accorderen_Wijziging
Voor het correct definiëren van één procedure (opgebouwd uit hoofd- en subtransacties) gelden twee aanvullende functionele basisregels, die niet technisch af te dwingen zijn.
IS DIT WEL EEN REGEL??? Rollen kunnen anders zijn tussen hoofd en sub transacties
Regel 1: de rollen in hoofd- en subtransactie dienen op elkaar aansluiten. Hiermee wordt bedoeld dat de ontvangende rol in de hoofdtransactie gelijk moet zijn aan de verzendende rol in de subtransactie. De definitie van verzendende en ontvangende rol is niet op berichtniveau. De rollen staan gedefinieerd als initiator en executor op type (hoofd en sub)transactie. 
Transactietype
id: 		Accorderen_Wijziging 
description:	Accorderen wijziging
initiator rol: Opdrachtnemende_contractueel
executor rol:	Opdrachtgevende_contractueel
Transactietype
id: 		Adviseren_Wijziging 
description:	Adviseren wijziging
initiator rol: Opdrachtgevende_contractueel
executor rol:	Adviserende_contractueel
Voor een type bericht in een type transactie (bericht in transactie) staat een richting gedefinieerd. De richting is van initiator naar executor of van executor naar initiator. Deze richting gaat dan respectievelijk van initiërende rol naar uitvoerende rol (van een type transactie).
Bericht in Transactie
Unieke identificatie: _a7e9fa9c-13ce-49f7-bbd6-f5eeb4688228
Vorig:		 	_666f01b3-6714-44cc-8865-0a9ae1f938ce
Eerste bericht:	Waar
Richting:		Van initiator naar executor
Bericht:		Verzoek_Advies_Wijziging
Transactie:		Adviseren_Wijziging
IS DIT WEL EEN REGEL??? Initiator to Exector is optional in raamwerk
Regel 2: de richting van de berichten dient over een te komen overeenkomen.
Met richting wordt bedoeld de waarde of een bericht van initiator naar executor van een transactie, of van executor naar initiator.
Bericht in Transactie
Unieke identificatie: _666f01b3-6714-44cc-8865-0a9ae1f938ce
Vorig:		 	
Bericht:		Voorstel_tot_Wijziging
Transactie:		Accorderen_Wijziging
Bericht in Transactie
Unieke identificatie: _a7e9fa9c-13ce-49f7-bbd6-f5eeb4688228
Vorig:		 	_666f01b3-6714-44cc-8865-0a9ae1f938ce
Eerste bericht:	Waar
Bericht:		Verzoek_Advies_Wijziging
Transactie:		Adviseren_Wijziging
Indien een instantie van bericht in transactie verstuurd wordt, moet openSecondaryTransactionsAllowed meegestuurd worden.
Er is een bericht nodig die niet voorkomt als vorig, zodat duidelijk is dat een transactie afgerond is. laatste bericht om transactie af te sluiten

### Bericht in transactie beperkingen (MessageInTransactionTypeCondition)
Soms is het nodig om te zorgen dat je berichten pas kunt versturen nadat andere
berichten zijn ontvangen, dat berichten alleen verstuurd mogen worden wanneer andere berichten
nog niet zijn ontvangen of dat een bericht slechts één keer verzonden mag worden.
Dit doen we door de volgordelijkheid van te versturen berichten af te dwingen.
Doel is het inperken van mogelijke voorzettingen uitgaande van een bepaalde toestand in de
berichtenflow binnen een transactie en haar subtransacties. Er zijn drie oorzaken waarom bepaalde
voortzettingen niet aangeboden mogen worden:
1. Een bericht mag pas verzonden worden nadat één of meerdere specifieke berichten
aanwezig zijn (reeds ontvangen of verzonden) in de transactie of zijn subtransacties, er is dus
een afhankelijkheid tussen twee (of meer) al aanwezige berichten.
2. Een bericht mag alleen verzonden worden wanneer één of meerdere specifieke berichten
niet aanwezig zijn (nog niet ontvangen of verzonden) in de transactie of zijn subtransacties,
er is dus een afhankelijkheid tussen twee (of meer) nog niet aanwezige berichten.
3. Een bericht dat maar één keer verzonden mag worden is reeds verzonden, er is dus een
restrictie op het aantal keren dat een bericht verzonden mag worden.

In te stellen globale eigenschappen:
id
state
dateLaMu
userLaMu
helpinfo
Voor bericht in transactie beperkingen is nog geen toepassing bekend voor de helpinfo.
In te stellen specifieke eigenschappen:
Geen
Verwijzingen vanuit bericht in transactie beperkingen:
Bij meerdere van onderstaande verwijzingen in een conditie, is er een OF - situatie. Dus als één van de benoemde berichten gevonden wordt, wordt voldaan aan de conditie en mag het bericht gekozen worden.
Door aan een bericht meerdere condities te koppelen met bijvoorbeeld maar 1 berichttype in onderstaande opties, onstaat een EN - situatie. Alle benoemde condities moet aan voldaan zijn voordat je dit bericht mag gebruiken.

sendAfter bericht in transactie
Zie situatie 1 hierboven	
sendBefore bericht in transactie
Zie situatie 2 en 3 hierboven	
Voor situatie 3: 
Het effect om een bericht slechts één keer te mogen versturen wordt bereikt door de MiTT van het betreffende bericht in de sendBefore lijst van diezelfde MITT te plaatsen. In dit specifieke geval mag een bericht dus niet naar meerdere executors worden verzonden.
Toegestane verwijzingen bij "sendAfter" en "sendBefore "zijn "Bericht in transactie types" die ontvangen kunnen worden in de actuele transactie of van de aangesloten transacties, waarbij de  persoon die het actuele bericht behandelt initiator of executor is. Met aangesloten transacties worden de transactie waaruit een transactie geïnitieerd is en de directe subtransacties bedoeld. Met  directe subtransacties worden transacties bedoeld die vanuit de actuele transactie geïnitieerd zijn, dus niet subtransacties van subtransacties. 
Deze beperking bestaat omdat een VISI Raamwerk plus PSB zich altijd op dezelfde manier moet gedragen, onafhankelijk of alle actoren op dezelfde VISI server werken, of dat iedere actor op een andere VISI server werkt. Op deze manier ziet de betreffende actor ook altijd de berichten die zijn keuzes beïnvloeden, doordat hij ze verstuurt of ontvangt.
Als voorbeeld: de kok mag alleen maar Before of After relaties gebruiken met transacties waarin hij zelf als initiator of executor meewerkt en deze transacties moeten direct gekoppeld zijn aan de transactie die de kok op dit moment wil behandelen.

Verwijzingen naar bericht in transactie beperkingen:
Bericht in transactie
In het bericht in transactie type wordt ingesteld dat deze beperkt wordt, door te verwijzen naar de beperkende mittconditie.
MessageInTransactionTypeCondition
id: 		mtc1
sendAfter: mit_VTWoordeelpositief_1

### Type rol (RoleType)
Door het toekennen van rollen aan personen in projecten en het koppelen van rollen aan transacties, regelen we wie bepaalde transacties mag starten en initieel ontvangen.
In te stellen globale eigenschappen:
id
description
startDate
endDate
state
dateLaMu
userLaMu
language
category
helpinfo
Voor rollen is nog geen toepassing bekend voor de helpinfo. Soms is er wel een uitleg over een rol te vinden in een raamwerk, maar weergave hiervan in VISI software bestaat nog niet.
code
			
In te stellen specifieke eigenschappen: 
Voor alle vier de onderstaande eigenschappen geldt dat de verschillende VISI software pakketten tot op heden nooit iets hiermee gedaan hebben. Dus als een raamwerkschrijver iets in dit veld invult, komt dit nooit in beeld bij de gebruiker. 
responsibilityScope	
Bij het opstellen van de standaard was het doel voor dit veld het uitleggen/uitschrijven van: 
Scope/kader waarbinnen de verantwoordelijkheden behorende bij de betreffende rol zijn gedefinieerd
			
responsibilityTask
Bij het opstellen van de standaard was het doel voor dit veld het uitleggen/uitschrijven van:
Taken die voortkomen uit de verantwoordelijkheden van de betreffende rol		
responsibilitySupportTask
Bij het opstellen van de standaard was het doel voor dit veld het uitleggen/uitschrijven van:
Taken die worden uitgevoerd om andere rollen te ondersteunen. Denk hierbij bijvoorbeeld aan gedelegeerde verantwoordelijkheden				
responsibilityFeedback	
Bij het opstellen van de standaard was het doel voor dit veld het uitleggen/uitschrijven van:
Terugkoppeling die vanuit de verantwoordelijkheid van de rol wordt verwacht richting andere rollen
Verwijzingen vanuit rollen: 
Geen
Verwijzingen naar rollen:
Transactie: initiator
Hiermee krijgt de houder van de rol het recht die transactie te starten.
Transactie: executor
Hiermee krijgt de houder van de rol het recht die transactie te ontvangen en op reageren.
RoleType
id: 		AdviseurIntern
description: Adviseur intern


### Type bijlage (AppendixType)
In ieder VISI bericht kunnen bestanden bijgevoegd worden. Een bestand moet wel altijd aan een bijlage type gekoppeld worden. Een raamwerk moet daarom altijd minimaal één bijlage type hebben. Als een raamwerk meerdere bijlage types heeft en er geen specifiek bijlage type op een bericht ingesteld staat, kan er gekozen worden aan welk bijlage type een bijlage in een bericht gekoppeld wordt. 
Een bijlage type is meestal gekoppeld aan een berichthoofdstuk, zodat er bij het invoeren van een bijlage metadata velden beschikbaar zijn, om bijbehorende gegevens bij de bijlage in te vullen.
In te stellen globale eigenschappen:
id
description
Met deze naamgeving kiezen gebruikers welk bijlage type ze de bijlage aan koppelen. 
startDate
endDate
state
dateLaMu
userLaMu
language
category
helpinfo
Voor bijlage types is nog geen toepassing bekend voor de helpinfo.
code
In te stellen specifieke eigenschappen:
geen
Verwijzingen vanuit bijlage types:
Berichthoofdstuk
Het berichthoofdstuk verzorgt de berichtvelden waarmee de metadata aan de bijlage gekoppeld worden.

Verwijzingen naar bijlage types:
Het is mogelijk om het aantal bijlage types in een bericht te beperken als het raamwerk meer dan één bijlage type bevat. Als er niets op het bericht ingesteld staat, moet de gebruiker uit alle beschikbare types kiezen.  
Transactie types
Een bijlage type dat op dit niveau gekoppeld is, wordt aangeboden in alle berichten in die transactie.
Bericht types
Een bijlage type dat op dit niveau gekoppeld is, wordt aangeboden in dit bericht type in alle transacties (waar dit bericht in voorkomt).
Bericht in transactie
Een bijlage type dat op dit niveau gekoppeld is, wordt alleen in dit specifieke bericht op deze plek in de transactie aangeboden.
AppendixType
id: 			AT_WijzigingGereed
description:		 Bijlagen bij gereedmelding wijziging
ComplexElementType: CE_BijlagenBijWijzigingGereed


### Type organisatie (OrganisationType)
In ieder raamwerk is een organisatie type nodig. Deze wordt gebruikt bij het aanmaken van organisaties in het project specifieke bericht. Normaal gesproken bevat een raamwerk maar 1 organisatie type. Raamwerken met meer dan 1 variant zijn nog niet toegepast. 
In te stellen globale eigenschappen:		
id
description
startDate
endDate
state
dateLaMu
userLaMu
language
category
helpinfo
Voor organisatie types is nog geen toepassing bekend voor de helpinfo.
code

In te stellen specifieke eigenschappen:
Geen
Verwijzingen vanuit organisatie types: 
complexElements
Een organisatie type kan metadata elementen bevatten, zoals adres, telefoonnummer enz.
Voor projecten met SOAP-communicatie moet minimaal het Berichtveld met het exacte Id “SOAPServerURL” via een berichthoofdstuk aan het organisatie type gekoppeld zijn, zodat het soap-adres ingesteld kan worden.
Verwijzingen naar organisatie types:
geen
OrganisationType
id: 		StandaardOrganisatie
description:	 Standaard organisatie
ComplexElementType: CeOrganisatieSOAPServer

### Type persoon (PersonType)
In ieder raamwerk is een persoon type nodig. Deze wordt gebruikt bij het aanmaken van personen in het project specifieke bericht. Normaal gesproken bevat een raamwerk maar 1 persoon type. Raamwerken met meer dan 1 variant zijn nog niet toegepast.
De basis velden van een persoon in een project specifiek bericht, zoals Naam, gebruikersnaam en Id afkorting enz. staan niet in het raamwerk. Zie#verwijzing naar psb werking#…….
In te stellen globale eigenschappen:					
id
description
startDate
endDate
state
dateLaMu
userLaMu
language
category
helpinfo
Voor persoon types is nog geen toepassing bekend voor de helpinfo.
code
			
					
In te stellen specifieke eigenschappen:
Verwijzingen vanuit persoon types: 
complexElements
Een persoon type kan metadata elementen bevatten, zoals adres, telefoonnummer enz. Onder andere als gevolg van nieuwe privacy wetgeving wordt hier steeds minder in ingevuld.

Verwijzingen naar persoon types:
Geen 
PersonType 
id: 		StandaardPersoon
description:	 Standaard persoon
ComplexElementType: CE_Persoonspecifieke_informatie

### Type project (ProjectType)
In ieder raamwerk is een project type nodig. Deze wordt gebruikt voor het vastleggen van bijvoorbeeld de projectnaam en de raamwerk namespace in het project specifieke bericht. Raamwerken met meer dan 1 variant zijn niet toegestaan.
De basis velden van een projecttype in een project specifiek bericht, zoals de projectnaam, project Id enz. staan niet in het raamwerk. 
In te stellen globale eigenschappen:
id
description
startDate
endDate
state
dateLaMu
userLaMu
language
category
helpinfo
Bij project type wordt de help info soms door raamwerkbouwers gebruikt voor aantekeningen of uitleg over het raamwerk. Er is geen toepassing verder in VISI software van bekend.
code

JEROENJEROEN

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
namespace:	http://www.visi.nl/schemas/20160331/RaamwerkUAVGCGemLutjebroek_v2<br>
description:	 Standaard raamwerk UAV GC Gemeente Lutjebroek
</p></aside>

### TransactieFaseType

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
Voor transactie fases is nog geen toepassing bekend voor de helpinfo.<br>
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
  
  
### GroepTypes
  
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


#### <dfn>`Description`
  
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
