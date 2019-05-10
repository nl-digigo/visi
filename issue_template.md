## Format voor (intake en afhandeling van) issues	GC180508-09
GC / 8 mei 2018

Wat komt er binnen (vraag /opmerking)
(uitgangspunt: de vraagsteller is ‘bewust onbekwaam’)

1.	Omschrijving van de vraag/opmerking zelf (bij voorkeur in het format van ‘userstory’):
“Als  <gebruiker/rol>  wil ik  <behoefte>  zodat ik  <resulterend voordeel>  krijg” 
2.	Naam, functie (soort gebruiker/rol), diens organisatie, en de soort organisatie van de vraagsteller (stakeholder)
3.	Datum en oorsprong van het verzoek*
4.	Waarop heeft de vraag betrekking: 
a.	Open Standaard (VISI / COINS)
b.	VISI-raamwerk / COINS referentiekader
c.	Software (VISI / COINS)
5.	Wat is de urgentie  )
‘M’	(must have; hindert de dagelijkse procesgang/doorgang van een project; moet zo spoedig mogelijk worden opgelost)
‘S’	(should have; hinder kan worden omzeild in dagelijks werk; moet binnen redelijke termijn worden opgelost)
‘C’	(could have; geen directe hinder; kan een keer worden opgepakt)
‘W’	(won’t have, c.q. nice to have; komt nu niet aan bod maar kan in de toekomst, bij een vervolgproject, wellicht mogelijk interessant zijn)
6.	Toelichting op de urgentie*


## ‘Open Standaard’

1.	Stel vast of het een ‘bug’ is, of een ‘verbetervoorstel’, of een ‘ander verzoek’

2.	Bug
a.	Beschrijf het bestaande gedrag
b.	Beschrijf het gewenste gedrag 
c.	Benoem de stappen om het probleem te reproduceren

3.	Verbetervoorstel
a.	Maak de userstory expliciet; mogelijk valt die uiteen in meerdere user stories 
(“a list of the types of users who can engage in the activities described in the use case. Actor names should not correspond to job titles”).
b.	Beschrijf de randvoorwaarden 
(“anything the solution can assume to be true when the use case begins”).
c.	Completeer de ‘definiton of ‘done’ 
(“anything that must be true when the use case is complete”).
d.	Beschrijf het verbetervoorstel / of gewenst gedrag 
(“the set of steps the actors take to accomplish the goal of the use case. A clear description of what the system should do in response to each user action.”)
e.	Beschrijf de voordelen van de verbetering
f.	Beschrijf eventuele “Alternate Flows” 
(“capture the less common user/system interactions, such as being on a new computer and answering a security question).
g.	Beschrijf eventuele “Exception Flows”  
(“things that can happen that prevent the user from achieving their goal, such as providing an incorrect username and password).

4.	Ander verzoek
a.	Beschrijf de vraag zo gedetailleerd mogelijk
b.	Beschrijf de voordelen van het voldoen aan het verzoek

5.	Plaats de gedocumenteerde bug, verbetervoorstel of ander verzoek op de verzamellijst ter prioritering in het kader van de release cyclus (ook op github??)


## ‘VISI Raamwerk’ of ‘COINS Referentiekader’

1.	Stel vast of het een ‘bug’ is of een ‘verbetervoorstel’ in de standaard, of een probleem bij het gebruik van de standaard (bij VISI: het maken van raamwerken; bij COINS: het gebruik van een referentiekader) 

2.	Indien ‘Bug’ of ‘verbetervoorstel’ voor de Standaard
a.	Verplaats de vraag naar het bakje ‘Standaard’ en handel daar af conform procedure

3.	Indien probleem bij gebruik
a.	Beschrijf de vraag zo gedetailleerd mogelijk (indien alsnog een probleem met de standaard blijkt: zie 2.)
b.	Beschrijf de voordelen van het voldoen aan het verzoek
c.	Plaats op lijst ter afhandeling (door beheerder van de OS, helpdesk of adviseur) 


## ‘Software’

1.	Betreft het VISI-software of COINS-software
a.	Is het een generiek probleem -> zie punt 2
b.	Is het een specifiek probleem: informeer (de helpdesk) van de desbetreffende softwareleverancier 
c.	Informeer eventueel de desbetreffende Expertcommissie en Gebruikerscommissie

2.	 Generiek probleem voor de Standaard
a.	Verplaats naar het bakje ‘Standaard’ en handel daar af 

 
P.S. Definition of ‘DONE’ (checklist):

De ‘definition of done’ is de checklist van dingen die gedaan moeten zijn voordat je klaar bent met een issue. Er is een generieke definitie, maar ‘done’ moet goed aansluiten bij de vraag. Het kan dus voorkomen dat er nog specifieke dingen aan moeten worden toegevoegd. Dat moet dan gebeuren voordat het oplossen van de vraag start. 
•	Generieke ‘definition of ‘done’ is helder
•	Eventuele specifieke dingen die ook moeten zijn gedaan, moeten aan de generieke definition of ‘done’ worden toegevoegd

De check van de oplossing is dan (voor zover relevant):
•	Alle ‘to do’ items voor de User Story zijn voldaan, inclusief de specifiek toegevoegde dingen.
•	Relevante gebruikersdocumentatie is gemaakt of aangepast.
•	Relevante technische documentatie is bijgewerkt en geactualiseerd.
•	De ‘reporter’ heeft het werk geaccepteerd.
•	Er is feedback van eindgebruiker(s)/vraagsteller gevraagd/gekregen op het opgeleverde product.
•	Alle unit- (bouwer), integratie (productowner) functionele (key users) testen zijn succesvol gedraaid.
•	Indien hiervan afgeweken wordt dan is dit opgenomen in de userstory (afwijkingen opgenomen in userstory).
