## Phasing out versions of the VISI Standard

### Binding Directive

The management organization of the VISI Standard supports the current
and two previous versions of the VISI Standard for a maximum period of
five years. The choice to support three versions over a period of five
years is motivated by the facts a) that the maximum release frequency of
a new version is once a year, but b) it also happens that no new version
is released for several years is becoming.\
\
For ongoing projects, stakeholders (users, consultants and software
suppliers) can choose to continue using a version of the VISI Standard
older than 5 years, but this version is **not** supported by the
management organization.\
\
There is no choice for new projects. New projects must be started with
the current (or one of the two previous versions) of the VISI Standard
with a maximum period of five years.

### Background

VISI is an open standard that appears on the
\[\"Pas-toe-of-explain-lijst\"\](https://www.forumstandardisatie.nl/open-standarden/lijst/vermand)
of the Forum for Standardization (FvS ). One of the management
requirements of FvS is backwards compatibility, and during intake by FvS
of the VISI Standard, the subject of backwards compatibility was added
to the documentation. In the \[change
list\](https://github.com/bimloket/visi/wiki/2.-The-important-changes-in-the-VISI-system)
for version 1.4, backwards compatibility is defined as follows: The
\"backwards compatibility\" of a new VISI standard means that the
operation of the new VISI standard (and/or a framework according to this
standard) has at least the same operation as the previous version of the
VISI standard (and /or a framework according to this standard). With
others, if functionality is lost, or if behavior changes, there is no
backwards compatibility.

### Practical situations

This note first describes what this means for stakeholders, and then how
the phasing out of old versions can be handled. This concerns advice for
active projects.\
\
To apply the VISI Standard in practice, two components are crucial,
namely 1) the framework and 2) the software. Both comply with/are
certified for a certain version of the standard.\
\
The impact of a new version (and the phasing out of a version) is
elaborated on the basis of three situations in which an organization
uses a combination of framework and software, where:

1.  framework and software are an old and the same version;

2.  framework and software concern an old and the same version, and the
    organization will apply the latest version of the software;

3.  framework and software concern an old and the same version, and the
    organization will apply the latest version of the framework (in
    accordance with the current version of the VISI standard).

#### 1. No upgrade - framework and software according to an old version of the VISI Standard

If the applied version of VISI Standard is not supported by the
management organization, \*\*no new\*\* projects may be started with the
framework and software, but situation 2 or 3 applies. It is possible to
continue existing, active projects with framework and software, but
without support from a management organization.\
\
If the applied version of VISI Standard is supported by the management
organization, new projects may be started and existing projects may be
continued with the framework and software. No actions are necessary.

#### 2. Upgrade framework - framework according to the current version of the VISI Standard

Upgrading the framework to the current version of the VISI Standard
means that the software must also be upgraded to the certified version.
New projects start with the upgraded framework and certified software.\
\
When a new version of the VISI Standard is released, implementation
guidelines are provided on what needs to be done in existing projects to
switch (upgrade) to a framework in accordance with the current version
of the VISI Standard.\
\
The case that an existing project applies an unsupported version of the
VISI Standard needs to be further elaborated. Questions that apply to
this situation are: Should and/or can messages be upgraded to the
current version? Or should a VISI archive (file export) be created? A
sent message (with attachments), the confirmation and the associated
framework must be kept and archived in the original format. Converting
this sent information to a supported version of the VISI Standard is not
simply possible and cannot be guaranteed without loss of information.
For audit trail and legal validity, the information must be submitted in
the original format. Archiving an existing project - which uses an
unsupported version of the VISI Standard - provides a backup of the
original data. In addition, you are free to convert the data to another
format for other purposes. Consider converting XML to HTML for
readability. However, the backup of the original data is leading in
disputes.

#### 3. Upgrade software - software according to the current version of the VISI Standard

If, in addition to the current version, the software also supports the
two previous versions (with a maximum period of five years), a software
upgrade is sufficient - provided the framework conforms to a supported
version of the VISI Standard.\
\
If the framework does not conform to a supported version of the VISI
Standard, the framework must be upgraded (see situation 2) to start new
projects.\
\
If the applied version of VISI Standard is supported by the management
organization, new projects may be started and existing projects may be
continued with the framework and software. No actions are necessary.

### Certification and management

A software supplier is certified for one (1) version of the VISI
standard. For new software suppliers this will be the current version.
This software is not certified for the two previous versions.\
\
Of the three situations described, 1) is not important for the
management organization. Situation 2 represents the desired situation in
which the management of the VISI Standard is designed. Situation 3 does
not pose a problem.\
\
Allowing old versions is necessary from an administrative perspective to
ensure that users have a transition period and are not forced to
immediately switch to the current version of the VISI Standard.

### Implementation

When starting new projects, the framework and software must fit within
one of the supported versions of the standard.\
\
The versions of the VISI Standard that are no longer supported by the
management organization remain valid. The management organization only
supports the current and the two immediately preceding versions.
Software suppliers may choose to support older versions.\
\
It is important that the management organizations encourage stakeholders
to switch to the current version. The five-year version support period
is ample to upgrade existing framework and software.\
\
Upgrading existing projects is a different story. Implementation
guidelines are provided with the release of each new version of the VISI
Standard. These implementation guidelines describe what should be done
with the existing projects with regard to framework and project specific
message.
