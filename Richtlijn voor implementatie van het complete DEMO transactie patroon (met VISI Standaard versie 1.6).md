## Implementatie van het complete DEMO transactie patroon met de VISI Standaard 1.6

De VISI Standaard is gebaseerd op “Design and Engineering Methodology” (DEMO). 

DEMO wordt gebruikt om samenwerking/processen in en tussen organisaties op een eenduidige manier vast te leggen. Daarbij wordt gebruik gemaakt van rollen en transacties. Een transactie verloopt altijd tussen een initiator en een executor. Iedere afgeronde transactie levert een beslissings- of een productiefeit op. De communicatie die nodig is om deze feiten te realiseren wordt in DEMO beschreven in een aantal transactietoestanden. Een stap in de realisatie van een feit wordt daarbij vastgelegd als een verandering in transactietoestand.

VISI wordt gebruikt om de (formele) communicatie in en tussen organisaties vast te leggen. Ook in VISI wordt gewerkt met rollen en transacties, waarbij ook steeds slechts 2 personen betrokken zijn als initiator en executor. De communicatie die nodig is om de feiten die de transacties opleveren wordt niet vastgelegd in verandering van transactie toestanden maar in vrij te definiëren berichten. Een belangrijke afspraak daarbij is dat communicatie om en om plaatsvind. Dus als de initiator een bericht heeft verzonden dan moet eerst de executor antwoorden en pas daarna kan de initiator weer een bericht verzenden. Anders dan bij DEMO worden met VISI dus berichten verzonden van de ene naar de andere partij.

In VISI zijn, door het om en om sturen van berichten, enkele transactietoestanden die in DEMO worden gebruikt niet mogelijk. In DEMO wordt een transactietoestand PROMISE gebruikt waarmee de executor aangeeft dat hij belooft dat hij een transactiefeit zal gaan realiseren. Vervolgens wordt met een STATE het transactiefeit overgedragen aan de initiator. In VISI is dit niet mogelijk omdat dan de executor twee keer achter elkaar een bericht zou moeten verzenden. Daarnaast is het ook niet mogelijk om een herroeping van een transactietoestand te doen. De reden daarvoor is weer dat het in VISI niet is toegestaan dat initiator of executor tweemaal achter elkaar een bericht verzend.
 
Met name de mogelijkheid een bericht te herroepen is een wens die reeds lange tijd bij gebruikers leeft. Daarnaast leefde bij diverse stakeholders al langer de wens om het complete transactiepatroon in VISI te ondersteunen. Na een eerste poging om herroepingen mogelijk te maken [ https://visi.codeplex.com/workitem/955]( https://visi.codeplex.com/workitem/955)


