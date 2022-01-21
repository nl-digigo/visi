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

