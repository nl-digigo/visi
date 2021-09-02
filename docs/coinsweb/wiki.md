# <a>Background information</a> 

## Introduction

Building information modelling provides a digital technology for describing and displaying information required in the planning, design, construction and operation of constructed facilities. Increasingly, this modelling approach is expanding to encompass all aspects of the built environment, including civil infrastructure, utilities and public space and all disciplines. These are collectively referred to as construction processes. This approach to managing information brings together the diverse sets of information used during the life cycle of the built environment into a common information environment - reducing, and often eliminating, the need for the many types of paper documentation currently in use.
This approach is commonly referred to as BIM (building information modelling, reflecting its initial application in the architectural domain), while the same acronym is used to refer to the product of the process, the information model itself, or BIM (Building Information Model).

The introduction of BIM leads to an increasing need to describe the information deliveries (data drops) on the interface between actors in the process. In practice these data drops are a combination of data sets according to multiple formats and differing standards, as well as proprietary formats. Available BIM standards are not equipped to support this practical situation.

This standard provides an information model and exchange format by means of a container for BIM related data.

The importance of this standard is the integration of open data based on differing standards (as well as proprietary formats, where needed), but packaged up in a way that makes explicit links between multiple representations of the same object. For example, a construction component such as a road abutment may be defined in a BIM library (as a type), linked to text specification or meta data, and include a 3D representation in a IFC file and/or a 2D representation in a GIS file.

The current version is ICDD; this document describes the previous version, COINS 2.0.

![Visualisation of information exchange in the life cycle](http://www.github.com/bimloket/COINS_2.0/blob/master/docs/coinsweb/media/600px-Exchange_during_project.jpg "Information exchange in the life cycle")

## Reader's guide

Essentials; In the Essentials section the general concepts of COINS are explained
Core Model; The Coins 2.0 Core Model section specifies the classes and relations defined in this standard.
Semantics; The page Semantics give some initial concepts and explaination about semantics, triples, OWL, RDF and ontologies. For more detailed information there will be links available to external resources.

## Mandate

Since it's first publication in 2010, the Coins standard was tested and implemented in medium and large scale infrastructural projects.
Based on these experiences, the standard was evaluated in workpackage3 “Rethinking the standard” of 'Projectplan COINS' by the Dutch "Bouw Informatie Raad" (14th of January, 2014).

This resulted in a specification for Coins 2.0. It has been documented in "Rethinking COINS" (15th of June, 2014) The important specifications are:

Coins 2.0 should not impose a working method, it must focus on exchange of information
In Coins 1.0 it was possible to create just one type of relations between objects. With Coins 2.0 multiple relations between objects can be created.
The concept of information exchange must not be limited to the maintain phase of a project. It mus be used through the whole life-cycle (design, built, operate and maintain, demolish)
The implementation of Coins 2.0 must be simplified. Besides, Coins must be independent of language and sustainable
The 'core model' of Coins 2.0 must be configurable and extensible (e.g. by using Reference Frameworks), without changing the core itself
The definition (semantics) of the exchanged information must be unambiguously by using references to Reference Frameworks or accepted objecttype libraries.
The document "Rethinking COINS" resulted in a number of reports:

Concepts of collaboration; principles of how and when we want to exchange information.
Versionmanagement; what kind of versionmanagement will be supported by Coins 2.0.
Data Description Language (DDL); create insight in OWL, RDF, RDFS and type of serialisations.
Coins core model; what classes have to be added to/removed from the core model.
These findings are used as input for the definition of Coins 2.0. This definition has been presented at the 7th of April, 2016.

## Introduction COINS 2.0 (April 2016)
The COINS standard provides an information model and exchange format by means of a container for BIM related data.

The standard is an answer to the increasing need to describe and enable the information deliveries (data drops) between actors in the construction process.  This standard supports the situation in practice that these data drops are a combination of data sets according to multiple formats en differing standards, as well as proprietary formats. Available BIM standards are not equipped to support this practical situation.

The importance of this standard is the integration of open data based on differing standards (as well as proprietary formats, where needed), but packaged up in a way that makes explicit links between multiple representations of the same object. For example, a construction component such as a road abutment may be defined in a BIM library (as a type), linked to text specification or meta data, and include a 3D representation in a IFC file and/or a 2D representation in a GIS file.

Its main characteristics are summarized:

A small core model -  Applicable for many purposes
Based on OWL (Ontology Web Language - W3C standard)
Extendibility - The core model can be can be extended with specialized models (reference frameworks) for various disciplines. These sub-models may address various areas of interest (company-wide, building sector, national) and therefore can be applied as semi-standards in itself
Dynamic semantics - Semantics are typically recorded in libraries forming a dynamic means to add semantics to instance models. Since version 1.0 library structuring mechanisms form an integral part of COINS
Integrating document oriented information with object oriented information - The boundary between document oriented information and object oriented information areas can be moved over time. Offering parties an evolutionary path to develop in BIM maturity level.
Integrating adjacent standards - COINS delegates specific modelling areas to existing standards as GML (GIS data) and IFC (3D building data). More general every relevant standard (open or not) may be used if parties involved agree mutually on using it in data exchanges
Library model - The COINS 2.0 library model is fully OWL-class based and in line with standard OWL modeling features
Integration with off-line transaction-based information exchange - COINS information exchange can be integrated with transaction-based information exchange as for instance supported by the IDM part 2 standard for process modelling
Version management - COINS offers features to record the history of the BIM
COINS 1.0 was released in 2010. A first minor update COINS 1.1 was released in 2014. Documentation of those releases can be found by following this link: http://www.coinsweb.nl/wiki/index.php/Hoofdpagina.

COINS 2.0 is a major update. In this edition the core model is even smaller and it makes more use of OWL features. The development of COINS 2.0 is finalized in January 2016. Final documentation is expected May 2016. 

## Specifications

Materials are now available to give a good idea of the specification of 2.0 COINS. This can be found in:

1 - Specification of COINS 2.0 core model (overview) in UML format,
follow this link: 
https://github.com/bimloket/COINS_2.0/blob/master/docs/coinsweb/UML_Cbim-2.0_DEFINITIEF_v1.0.pdf 

1a – Specification of COINS 2.0 core model (detailed), follow this link:
http://www.buildingbits.nl/coins/2.0/uml/

1 b – Visualization of COINS 2.0 core model based on WebVOWL, follow this link:
http://www.buildingbits.nl/coins/2.0

2 - Specification of COINS 2.0 core model in OWL format, follow this link: 
https://github.com/bimloket/COINS_2.0/blob/master/cbim-2.0.1.rdf

3 - Specification of Window of Autorization file in OWL format,
follow this link: 
https://github.com/bimloket/COINS_2.0/blob/master/COINSWOA.rdf

4 - Specification of Units Ontlogy in OWL format,
follow this link:
https://github.com/bimloket/COINS_2.0/blob/master/units-2.0.rdf

5 - Presentation sheets Introduction COINS 2.0,
follow this link: 
https://github.com/bimloket/COINS_2.0/blob/master/docs/coinsweb/5_Introduction_COIN_standard_V5_Nov2015.pdf

6 - Starter kit COINS 2.0, Illustrative examples and exercises,
follow this link: 
https://github.com/bimloket/COINS_2.0/blob/master/docs/coinsweb/6_Starter_kit_COINS_2.0_RC19_v0_4_UK.pdf

7 - COINS Navigator, a reference implementation to demonstrate the principles, follow this link:
http://www.https://github.com/bimloket/COINS_2.0/blob/master/COINS_2.0_Navigator.jar

8 – COINS 2.0 API Software development kit for Java and .NET, follow this link:
https://github.com/sysunite/coins-2-sdk

## Presentations

See for presentations from the introduction of COINS in 2016
https://https://github.com/bimloket/COINS_2.0/tree/master/docs/coinsweb/presentaties_introductie_COINS_2016



