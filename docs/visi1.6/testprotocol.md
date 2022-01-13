# Testprotocol

De figuren van onderstaande scenario's zijn opgesteld in Microsoft Visio 2003. Het bronbestand is [Scenario's](media/scenarios.vsd).


## Testraamwerk Pizzeria

Het raamwerk bevat vier transactietypen:
* t1_OpnameBestelling;
* t2_VraagOberAanKok;
* t3_OpdrachtKok;
* t4_VraagKokAanKeukenhulp.


En vier rollen: Klant, Ober, Kok en Keukenhulp.

![Testscenario Raamwerk met keukenhulp](media/Testscenario's_Raamwerkmetkeukenhulp.jpg "Testscenario Raamwerk met keukenhulp")

## Scenario 1

*Doel*

Testen op de functionaliteit voor:
1. het starten van een transactie
2. het beantwoorden van een bericht
3. het gebruik van verschillende soorten gegevensvelden

![Scenario 1](media/Testscenario's_Scenario_1.gif "Scenario 1")

*Beschrijving*

Ober A vraagt aan Klant K of hij/zij de kaart wil zien.
Bij het invullen van de vraag of de klant de kaart wil zien, worden alle verschillende Base Type velden aangeboden.


Test of de volgende velden als volgt werken:

| Veld         | Werking    | 
| :--------------- | :--------------- | 
| Boolean | Hier moet een vinkjes veldje  of 0 - 1 of true-false of waar-onwaar staan (verplicht) | 
| Date / Datum | Een datum moet ingevoerd worden (verplicht) | 
| Datetime / Datum en tijd | Datum en tijd moeten ingevuld worden (verplicht) | 
| Time / Tijd | Een tijdstip moet ingevoerd worden (verplicht) | 
| Decimal / Decimaal | Een getal, al dan niet met decimale waarden moet ingevoerd worden (verplicht) | 
| Integer / Geheel getal | Een geheel getal moet ingevoerd worden (verplicht) | 
| Keuzelijst | Een van de waarden "Keuze 1", "Keuze 2" of "Keuze 3" moet ingevoerd worden (verplicht) | 
| String / Vrije tekst | Willekeurige tekens kunnen ingevoerd worden (niet verplicht): Klant K beantwoordt de vraag met Nee.  | 

## Scenario 2a

*Doel*
voor a) het starten van een (sub)transactie en b) het terugkeren naar een (hoofd)transactie.

![Afbeelding](media/Testscenario's_Scenario_2a_-_serie.gif)

*Beschrijving*
Ober A vraagt aan Klant K of hij/zij de kaart wil zien. Klant K beantwoordt de vraag met Ja, en geeft aan welke kaart hij/zij wil zien.

Ober A biedt de menukaart aan die Klant K gevraagd heeft. Ober A kan het menukaarttype **niet** wijzigen. Klant K krijgt de gevraagde menukaart. 
Klant K plaatst een bestelling bij Ober A bestaande uit een tabel met per rij de naam van een gerecht en eventueel een bijbehorende opmerking.


Ober A plaatst dezelfde bestelling bij Kok X en bij Kok Y. Ober A kan de bestelling van Klant K niet aanpassen, en ook niet aanvullen.


Kok Y geeft Ober A een akkoord. Kok Y kan de bestelling van Ober A niet aanpassen, en ook niet aanvullen.


Ober A geeft Klant K een akkoord. Ober A kan het akkoord van Kok Y niet aanpassen, en ook niet aanvullen.


Nadat Ober A naar Klant K heeft communiceerd geeft Kok X alsnog een akkoord aan Ober A. Ober A kan met de ontvangen melding van Kok X
**helemaal niets**, dus niet communiceren richting Kok x of Klant K. 


## Scenario 2c

<div class="issue" data-number="134"></div>

*Doel*

<p>Testen op de functionaliteit voor a) het starten van twee (sub)transactie en b) het terugkeren van 1 (sub)transactie naar de (hoofd)transactie.</p>

![Afbeelding](media/Testscenario's_Scenario_2c_-_parallel.gif)

*Beschrijving*

Ober A vraagt aan Klant K of hij/zij de kaart wil zien. Klant K beantwoordt de vraag met Ja, en geeft aan welke kaart hij/zij wil zien.


Ober A biedt de menukaart aan die Klant K gevraagd heeft. Ober A kan het menukaarttype
*niet* wijzigen. Klant K krijgt de gevraagde menukaart. 


Klant K plaatst een bestelling bij Ober A bestaande uit een tabel met per rij de naam van een gerecht en eventueel een bijbehorende opmerking.


Ober A plaatst dezelfde bestelling bij Kok X en bij Kok Y. Ober A kan de bestelling van Klant K niet aanpassen, en ook niet aanvullen.


Kok Y geeft Ober A een akkoord. Kok Y kan de bestelling van Ober A niet aanpassen, en ook niet aanvullen.


Ober A geeft Klant K een akkoord. Ober A kan het akkoord van Kok Y niet aanpassen, en ook niet aanvullen.


Nadat Ober A naar Klant K heeft gecommuniceerd geeft Kok X alsnog een niet akkoord aan Ober A. Ober A kan met de ontvangen melding van Kok X
*helemaal niets*, dus niet communiceren richting Kok X of Klant K. 


## Scenario 3a

*Doel*
<p>Testen op de functionaliteit voor het starten van een bepaald type (sub)transactie, terugkeren naar de (hoofd)transactie, en weer starten van hetzelfde type (sub)transactie.</p>

![Afbeelding](media/Testscenario's_Scenario_3a_-_serie.gif)

*Beschrijving*
Ober A vraagt aan Klant K of hij/zij de kaart wil zien. Klant K beantwoordt de vraag met Ja, en geeft aan welke kaart hij/zij wil zien.


Ober A biedt de menukaart aan die Klant K gevraagd heeft. Ober A kan het menukaarttype
<em>niet</em> wijzigen. Klant K krijgt de gevraagde menukaart.


Klant K plaatst een bestelling bij Ober A bestaande uit een tabel met per rij de naam van een gerecht en eventueel een bijbehorende opmerking.


Ober A plaatst dezelfde bestelling bij Kok X. Ober A kan de bestelling van Klant K niet aanpassen, en ook niet aanvullen.


Kok X geeft Ober A een niet akkoord. Kok X kan de bestelling van Ober A niet aanpassen, en ook niet aanvullen.


Ober A geeft Klant K een niet akkoord. Ober A kan het niet akkoord van Kok X niet aanpassen, en ook niet aanvullen.


Klant K plaatst een compleet nieuwe bestelling bij Ober A bestaande uit een tabel met per rij de naam van een gerecht en eventueel een bijbehorende opmerking. (Klant K kan de gehele tabel invullen.)


Ober A plaatst dezelfde bestelling bij Kok Y. Ober A kan de bestelling van Klant K niet aanpassen, en ook niet aanvullen.


Kok Y geeft Ober A een akkoord. Kok Y kan de bestelling van Ober A niet aanpassen, en ook niet aanvullen.


Ober A geeft Klant K een akkoord. Ober A kan het akkoord van Kok Y niet aanpassen, en ook niet aanvullen.


## Scenario 3b

*Doel:*
<p>Testen op de functionaliteit voor het starten van een bepaald type (sub)transactie, terugkeren naar de (hoofd)transactie, meerdere berichten in de hoofdtransactie, en weer starten van hetzelfde type (sub)transactie.</p>

![Afbeelding](media/Testscenario's_Scenario_3b_-_serie.gif)

*Beschrijving*

Ober A vraagt aan Klant K of hij/zij de kaart wil zien. Klant K beantwoordt de vraag met Ja, en geeft aan welke kaart hij/zij wil zien.


Ober A biedt de menukaart aan die Klant K gevraagd heeft. Ober A kan het menukaarttype
*niet* wijzigen. Klant K krijgt de gevraagde menukaart. 


Klant K plaatst een bestelling bij Ober A bestaande uit een tabel met per rij de naam van een gerecht en eventueel een bijbehorende opmerking.


Ober A plaatst dezelfde bestelling bij Kok X. Ober A kan de bestelling van Klant K niet aanpassen, en ook niet aanvullen.


Kok X geeft Ober A een niet akkoord. Kok X kan de bestelling van Ober A niet aanpassen, en ook niet aanvullen.


Ober A geeft Klant K een niet akkoord. Ober A kan het niet akkoord van Kok X niet aanpassen, en ook niet aanvullen.


Klant K stelt Ober A een vraag. 


Ober A beantwoordt de vraag van Klant K. (In de beantwoording kan Ober A de vraag van Klant K
*niet* aanpassen.) 


Klant K plaatst een compleet nieuwe bestelling bij Ober A bestaande uit een tabel met per rij de naam van een gerecht en eventueel een bijbehorende opmerking. (Klant K kan de gehele tabel invullen.)


Ober A plaatst dezelfde bestelling bij Kok Y. Ober A kan de bestelling van Klant K niet aanpassen, en ook niet aanvullen.


Kok Y geeft Ober A een akkoord. Kok Y kan de bestelling van Ober A niet aanpassen, en ook niet aanvullen.


Ober A geeft Klant K een akkoord. Ober A kan het akkoord van Kok Y niet aanpassen, en ook niet aanvullen.

## Scenario 4a

*Doel*

<p>Testen op de functionaliteit voor ElementConditions.</p>

![Afbeelding](media/Testscenario's_Scenario_4a_-_no_loop.gif)

*Beschrijving*

Ober A vraagt aan Klant K of hij/zij de kaart wil zien. Klant K beantwoordt de vraag met Ja, en geeft aan welke kaart hij/zij wil zien.


Ober A biedt de menukaart aan die Klant K gevraagd heeft. Ober A kan het menukaarttype
<em>niet</em> wijzigen. Klant K krijgt de gevraagde menukaart. 


Klant K stelt een vraag aan Ober A. 


Ober A beantwoordt de vraag van Klant K. (In de beantwoording kan Ober A de vraag van Klant K
*niet* aanpassen.) 


Klant K plaatst een compleet nieuwe bestelling bij Ober A bestaande uit een tabel met per rij de naam van een gerecht en eventueel een bijbehorende opmerking. (Klant K kan de gehele tabel invullen.)


Ober A plaatst dezelfde bestelling bij Kok X. Ober A kan de bestelling van Klant K niet aanpassen, en ook niet aanvullen.


Kok X geeft Ober A een akkoord. Kok X kan de bestelling van Ober A niet aanpassen, en ook niet aanvullen.


Ober A geeft Klant K een akkoord. Ober A kan het akkoord van Kok X niet aanpassen, en ook niet aanvullen.

## Scenario 4b

**Doel:**
<p>Testen op de functionaliteit voor ElementConditions.</p>

![Afbeelding](media/Testscenario's_Scenario_4b_-_loop.gif)

**Beschrijving**
Ober A vraagt aan Klant K of hij/zij de kaart wil zien. Klant K beantwoordt de vraag met Ja, en geeft aan welke kaart hij/zij wil zien.

  
  
Ober A biedt de menukaart aan die Klant K gevraagd heeft. Ober A kan het menukaarttype
*niet* wijzigen. Klant K krijgt de gevraagde menukaart. 
  
  
Klant K stelt een vraag aan Ober A. 
  
  
Ober A beantwoordt de vraag van Klant K. (In de beantwoording kan Ober A de vraag van Klant K
<em>niet</em> aanpassen.)
  
  
Klant K stelt een tweede vraag aan Ober A. (In de vraagstelling kan Klant K de vraag
*niet* invullen, omdat in het raamwerk de ElementCondition <em>geen</em> waarde voor condition heeft!!!)

  
Ober A beantwoordt de vraag van Klant K. (In de beantwoording kan Ober A de vraag van Klant K
*niet* aanpassen.) 
  
  
Klant K plaatst een compleet nieuwe bestelling bij Ober A bestaande uit een tabel met per rij de naam van een gerecht en eventueel een bijbehorende opmerking. (Klant K kan de gehele tabel invullen.)

  
Ober A plaatst dezelfde bestelling bij Kok X. Ober A kan de bestelling van Klant K niet aanpassen, en ook niet aanvullen.

  
Kok X geeft Ober A een akkoord. Kok X kan de bestelling van Ober A niet aanpassen, en ook niet aanvullen.

  
Ober A geeft Klant K een akkoord. Ober A kan het akkoord van Kok X niet aanpassen, en ook niet aanvullen.

