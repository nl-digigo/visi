# SOAP

## Inleiding
Dit document bevat de richtlijn voor implementatie van VISI communicatie op basis van het SOAP protocol. Het doel van de richtlijn is om handreikingen te geven voor de implementatie van VISI communicatie waardoor gewaarborgd wordt dat het betreffende informatiesysteem in technische zin VISI-berichten met bijlagen kan uitwisselen met een ander informatiesysteem dat volgens de richtlijn is ingericht.


De maximale grootte van een VISI-bericht (inclusief attachments) is 10 GB. Deze oplossing is gebaseerd op de MTOM-SOAP implementatie van XOP (XML-binary Optimized Packaging) [Zie ook hier](http://www.w3.org/TR/soap12-mtom/). Dit wordt voor verdere optimalisatie gecombineerd met "chunking", een methode om bestanden in kleine stukken te versturen en vervolgens weer samen te voegen.

De VISI Standaard dient af te dwingen dat de communicatie tussen SOAP Servers plaatsvindt via https en SSL, waardoor de inhoud van ontvangen berichten niet onderschept kan worden.

Het gebruik van HTTPS (TLS 1.0 of hoger, met minimaal 128 bits encryptie) voor het ver-sturen van VISI berichten en bijlagen is verplicht. Het is niet toegestaan om de "parseMessage" SOAP service aan te bieden over een onbeveiligd http kanaal.

Verder dient alle communicatie (indien deze over internet verloopt) tussen een VISI gebruiker en een VISI applicatie gebruik te maken van HTTPS met dezelfde specificaties.

Overige beveiligingsmaatregelen kunnen desgewenst op infrastructuur niveau worden getroffen.VISI communicatie via internet mag niet mogelijk zijn zonder SSL beveiligingscertificaat, zowel voor communicatie tussen SOAP servers als voor de communicatie tussen gebruiker en VISI webapplicatie.

Verder kunnen SOAP Servers de techniek "whitelist" gebruiken, waardoor alleen geautori-seerde SOAP server berichten naar een SOAP Server kunnen sturen .

 
## Doel
Het doel van dit document is om een protocol vast te stellen waarmee we communicatie van VISI berichten tussen alle VISI ondersteunende software partijen kunnen beschrijven. Dit dient op een zodanige manier beschreven te zijn dat het protocol voor alle partijen implementeerbaar is, geen ongewone eisen aan implementatie en/of hardware worden vereist en het strikt genoeg is om communicatie mogelijk te maken.

De onderliggende eisen van dit protocol:
* strikt en eenduidig genoeg om communicatie tussen alle softwarepartijen, welke implementaties van dit protocol uitvoeren, mogelijk te maken.
* duidelijk en eenvoudig genoeg voor implementatie.
* geen eisen aan VISI compatibiliteit voor de nieuwe/extra software/servers.
* mogelijkheid een kopie van alle bilaterale communicatie op 1 of meerdere servers te plaatsen.


## Architectuur

De architectuur is simpel gehouden door slechts een scenario te ondersteunen. Het scenario bevat onderlinge communicatie tussen SOAP servers.

Het doel en de achtergrond van deze architectuur:
* de architectuur moet onderlinge communicatie tussen servers in een project kunnen ondersteunen zonder tussenkomst van andere servers,
* communicatie moet beveiligd uitgevoerd kunnen worden,
* berichten moeten eenduidig gecommuniceerd en opgeslagen kunnen worden,
* attachments moeten meegestuurd kunnen worden,
* de verzender moet te weten kunnen komen of een bericht goed is aangekomen,


Architectuur:
 
Figuur 1 Architectuur

![Afbeelding](media/fig-1-architectuur.png)
 

Scenario
In dit geschetste scenario zijn de volgende objecten te vinden:
* De SOAP Server (SOAP Server), dit is de server welke de afhandeling van VISI berichten volgens het in dit document beschreven pad afhandelt.
* Dit Informatie Systeem (IS), dit is de applicatie die VISI berichten verwerkt en genereert.
* De eindgebruiker (P van persoon), dit is een persoon die voor een bepaalde organisatie een bepaalde rol vervuld. 


