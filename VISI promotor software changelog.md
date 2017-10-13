**Versie 0.7 d.d. 24 febr. 2012**
=================================
List of Fixes
* ComplexElements starting with lowercase now supported correctly.  

List of known bugs
* In some rare cases schemas can loose there simple elements within complex elements completely (PLEASE SEND AN EXAMPLE RAAMWERK IF YOU FIND THIS ERROR)
	
**Versie 0.63 d.d. 24 febr. 2012**
=================================
List of Fixes
* VISI icons instead of TNO icons.  

List of known bugs
* In some rare cases schemas can loose there simple elements within complex elements completely (PLEASE SEND AN EXAMPLE RAAMWERK IF YOU FIND THIS ERROR)

**Versie 0.62 d.d. 23 febr. 2012**
=================================
List of Fixes
* Small fix on endless loop.  

List of known bugs
* In some rare cases schemas can loose there simple elements within complex elements completely (PLEASE SEND AN EXAMPLE RAAMWERK IF YOU FIND THIS ERROR)

**Versie 0.61 d.d. 22 febr. 2012**
=================================
List of Fixes
* ‘version’ in URI aangepast in ‘namespace’ + afvangen URI == NULL.  

List of known bugs
* In some rare cases schemas can loose there simple elements within complex elements completely (PLEASE SEND AN EXAMPLE RAAMWERK IF YOU FIND THIS ERROR)

**Versie 0.6 d.d. 21 febr. 2012**
=================================
List of Fixes
* In geval de DLL geen URI (danwel een lege URI) binnenkrijgt zal de functie de URI proberen te halen uit het raamwerk (een instance van ‘version’).  

List of known bugs
* In some rare cases schemas can loose there simple elements within complex elements completely (PLEASE SEND AN EXAMPLE RAAMWERK IF YOU FIND THIS ERROR)

**Versie 0.5 d.d. 16 nov. 2009**
=================================
List of Fixes
* In geval van gebruik van keywords voor XML (xs) in een tekstveld bij een restrictie werd er een incorrect schema gegenereerd.  

List of known bugs
* In some rare cases schemas can loose there simple elements within complex elements completely (PLEASE SEND AN EXAMPLE RAAMWERK IF YOU FIND THIS ERROR)

**Versie 0.4 d.d. 4 febr. 2009**
=================================
List of Fixes
* Er zat een kleine denkfout in de afhandeling van &, daar van conversie van raamwerk naar schema het teken ‘&gt;’ aangepast wordt in ‘>’ is het te verwachten dat ‘&amp;’ aangepast wordt in ‘&’. We willen eigenlijk juist ‘&amp;’ in het schema zien, dit betekend dat we in het raamwerk ‘&amp;amp;’ zullen moeten gebruiken. Gelijk hieraan is de aanpassing van ‘&quot;’ naar ‘’’ in het schema.  

List of known bugs
* In some rare cases schemas can loose there simple elements within complex elements completely (PLEASE SEND AN EXAMPLE RAAMWERK IF YOU FIND THIS ERROR)

**Versie 0.3 d.d. 3 febr. 2009**
=================================
List of Fixes
* De executable promote.exe onthoudt nu ook zijn laatste door de gebruiker ingevulde settings. Er is een button toegevoegd om indien noodzakelijk terug te gaan naar de oorspronkelijke settings (VISI versie 1.1a)
* Indien een promote voor het eerst op een PC wordt gestart worden de settings teruggezet naar versie 1.1a
* & en “ in raamwerk gaat nu goed (&amp; en &quot;). Let wel in het raamwerk al invullen &amp;, de applicaties zullen dit ook als zodanig moeten parsen
* Base Types hoeven niet meer UPPER CASE te zijn, maar zijn case insensitive, de DLL ondersteund op dit moment de volgende types:
	* BOOLEAN (trigger op bool en boolean)
	* DATE (trigger op date)
	* DATETIME (trigger op datetime)
**	TIME (trigger op time)
**	DECIMAL (trigger op decimal)
**	INTEGER (trigger op int en integer)
**	REAL (trigger op real)
**	STRING (trigger op string)

List of known bugs
* In some rare cases schemas can loose there simple elements within complex elements completely (PLEASE SEND AN EXAMPLE RAAMWERK IF YOU FIND THIS ERROR)

**Versie 0.2 d.d. 16 juni 2008**
=================================
List of fixes
* A Complex Element with id=”Xyz” will be promoted in a way that instances can be created as Xyz called by its owner using xyz:
      <xyz>
         <Xyz>…</Xyz>
         …
         <Xyz>…</Xyz>
      </xyz>
The problem starts when an id of an complex element starts with a lower case letter. Nevertheless this sometimes happens, in these cases we upgrade the first letter to upper case. This means that id=”xyz” and id=”Xyz” will both result in the same use in the promoted schema. It is not allowed to both have existing id=”xyz” and id=”Xyz” in the same raamwerk.
Note: because the promotor is generic, this behavior is NOT restricted to Complex Elements, but to all elements that are build this way in the exp files (for VISI only Complex Element).
* Support for the term template in schema exp, practically this means that new functionality from VISI schema 1.1a and 1.2 is supported.

List of known bugs
* In some rare cases schemas can loose there simple elements within complex elements completely
* & in raamwerk gaat fout
* Lijstje met mogelijke base types weergeven



**Versie 0.1 d.d. 10 oktober 2006**
=================================

Eerste versie die als concept gepubliceerd werd.