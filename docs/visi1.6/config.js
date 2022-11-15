//-------------------------------------------------------------------------------------
//-- vervang of verwijder het <section> element met id = 'sotd'
//-------------------------------------------------------------------------------------
function changeSOTD()
{
  //console.log("\tStart changeSOTD");

  let sstat = "";
  if(respecConfig.specStatus != null) sstat = respecConfig.specStatus;

  var srch = "sotd";
  var tag = document.getElementById(srch);
  //console.log("\t\tsection is [" + tag.innerHTML + "] is gevonden");

  // if(respecParams.noSOTD || sstat == "")   //-- SOTD helemaal weghalen
  // {
  //   tag.parentNode.removeChild(tag);
  //   console.log("\t\tsection is [" + srch + "] is verwijderd");
  // }
  // else                                  //-- SOTD Aanpassen
  // {

    tag.innerHTML = "<h2>Status van dit document</h2>";
    tag.innerHTML += "<p>";
   
    switch(respecConfig.specStatus)
    {
      case "WV":
        tag.innerHTML +=  "Dit is de werk versie van het document '" + document.title + "'. "; 
        break;
      case "CV":
        tag.innerHTML +=  "Dit is een door de werkgroep goedgekeurde consultatieversie van het document '" + document.title + "'. " + 
                          "Commentaar over dit document kan gestuurd worden naar <a href='" + respecConfig.emailComments + "'></a>" + ".";
        break;
      case "VV":
        tag.innerHTML +=  "Dit is een definitief concept van de nieuwe versie van het document '" + document.title + "'. " + 
                          "Wijzigingen naar aanleiding van consultaties zijn doorgevoerd.";
        break;
      case "DF":
        tag.innerHTML +=  "Dit is de definitieve versie van het document '" + document.title + "'. " + 
                          "Wijzigingen naar aanleiding van consultaties zijn doorgevoerd.";
          break;
      case "BASIS":
        tag.innerHTML +=  "Dit is een document zonder officiële status.";
          break;
    }
    //Dit is een document zonder officiële status.

    tag.innerHTML += "<p>";
  //}

  //console.log("\tEinde changeSOTD");
}

var respecConfig = {
    // this template doesn't use all possible config parameters
    // see https://github.com/Logius-standaarden/respec/wiki for all options
  
    // specStatus currently supported
    // WW, GN-WV: Werkversie
    // CV, GN-CV: Consultatie versie
    // VV, GN-VV: Vastgestelde versie (of Versie ter vaststelling)
    // DEF, GN-DEF: Definitieve versie
    // EO: Einde ondersteuning, verouderde versie, vervangen door nieuwe versie
    // TG: Versie teruggetrokken
    // BASIS, GN-BASIS: 'geen status'
    specStatus: "WW",
    postProcess:[changeSOTD],       //-- Deze roept de postprocessor aan
  
    // SpecType currently supported
    // NO: "Norm"
    // ST: "Standaard"
    // IM: "Informatiemodel"
    // PR: "Praktijkrichtlijn"
    // HR: "Handreiking"
    // WA: "Werkafspraak"
    // AL: "Algemeen"
    // BD: "Beheerdocumentatie"
    // BP: "Best Practice"
    specType: "ST",
  
    // subtitle will be shown below title, can be omitted 
    // subtitle: "Hier komt een subtitle",
  
    // specify format: "markdown" when multiple markdown files are included 
    // format: "markdown",                
  
    // The specification's "short name", which is the name used in NL_Respec URLs
    shortName: "visi1.6",
  
    // A YYYY-MM-DD date. The publication date of the present document. 
    // Als er geen publishDate is opgegeven, genereert ReSpec de dataum o.b.v. de laatste wijzigingen
    // Belangrijk: als publishDate niet opgegeven is, wordt bij de link "Laatst gepubliceerde versie" "geen" gezet. Anders wordt een link opgebouwd voor de laatste versie, met het formaat:
    publishDate: "2021-07-27",
  
    // A YYYY-MM-DD date. When there is a previous release of a given specification, (W3C)
    // previousPublishDate: "2021-07-27",
  
    // Zie https://github.com/w3c/respec/wiki/previousMaturity. Dit moet een
    // A YYYY-MM-DD date. When a previousPublishDate is specified, this is typically required as well in order to generate the "Previous Version"
    previousMaturity: "VV",
  
    // Link naar vorige vastgestelde versie van het document. Gedocumenteerd op https://github.com/w3c/respec/wiki/prevRecURI
    //prevRecURI: "https://www.w3.org/TR/2014/example-20140327/",
  
    // license can be one of the following: cc0, cc-by or cc-by-nd((default)) (see https://github.com/Geonovum/respec/wiki/license )
    license: 'cc-by-nd',
  
    // Overrides the standard logo with one or more other logos. (see https://respec.org/docs/#logos)
    // Geef een lege array op als er geen <default> logo moet staan
    // logos: [], 
  
    //Adds a JSON-LD script element containing schema.org information, which can be useful for search engines.
    doJsonLd: true,
  
    // An array of person objects describing the editors of the document
    // this can be simple or more elaborated
    editors: [
        {
          name:       "N/A",
          company:    "CROW",
          companyURL: "https://www.crow.nl"
        },
      ],
    // An array of person objects describing the authors of the document
    // this can be simple or more elaborated
    authors:  [
        {
          name:       "Arne Bruinse",
          company:    "Bakker & Spees",
          companyURL: "https://www.bakkerspees.nl/visi/"
        },
        {
          name:       "Jeroen Hiemstra",
          company:    "Technia",
          companyURL: "https://www.alfamail.nl"
        },
            {
          name:       "Jos Hamilton",
          company:    "Hamilton Consult",
          companyURL: "https://www.hamilton-consult.nl"
        },
       {
          name:       "Mark Mulder",
          company:    "TEEC2",
          companyURL: "https://teec2.nl/"
        },
       {
          name:       "Niek Pluijmert",
          company:    "Inqa Quality Consultants" ,
          companyURL: "https://inqa.nl"
        },
       {
          name:       "Tessa de Roos",
          company:    "Gobar Adviseurs",
          companyURL: "https://gobar.nl/"
        },
             {
          name:       "Jeroen van Geijlswijk",
          company:    "N/A",
          companyURL: "https://www.bimloket.nl"
        },
       {
          name:       "Michon Maas",
          company:    "N/A",
          companyURL: "https://www.bimloket.nl"
        },
      ],
    // The github option allows you associate your specification with a repository on GitHub.
    github: "https://github.com/bimloket/visi",
  
    // The URL of your test suite, gets included in the specification's headers.
    // testSuiteURI: "https://portaal.digikoppeling.nl/CV/home.html",
  
    // With long algorithms in a specification, it can be useful to allow readers to click on variables marked up with <var> (e.g., Let <var>elem</var> be ...).
    // highlightVars: true,
  
    // Controls if linked "§" section markers are added to a document
    // addSectionLinks: true,
  
    // Lints for accessibility issues using axe-core
    a11y: false,
  
    // A number indicating the maximum depth of the table of contents. Defaults to 0 which includes all levels.
    maxTocLevel: 4,
  
    // Shows links to alternate formats (such as PDF, ePub) in the document header.
    // alternateFormats: [{
    //     label: "html",
    //     uri: "https://publicatie.centrumvoorstandaarden.nl/api/oauth/static.html",
    //   },
    //   {
    //     label: "pdf",
    //     uri: "https://publicatie.centrumvoorstandaarden.nl/api/oauth/static.pdf",
    //   },
    // ],
  
    // You can use markdown to write ReSpec based documents.
    // format: "markdown",
    // <section data-format="markdown" data-include="<filename>.md"></section>
  
    // The specification's publish domain, which is used to publish the specification
    // the url in the header thisVersion is generated like `<conf.nl_organisationPublishURL>/<conf.pubDomain>/<specStatus>-<specType.toLowerCase()>-<conf.shortName>}-conf.publishDate>/`
    //pubDomain: "disgeo",
  
    // Based on the example settings Respec will generate the following links in the header:
    // https://publicatie.centrumvoorstandaarden.nl/dk/ebms/
    // https://{nl_organisationPublishURL}/{pubDomain}/{pubSubDomain}/
    // pubSubDomain: "ebms",
  
    // this parameter will add the tag_name of the latest release to the document Title
    // only set this parameter when a release has been set
    nl_addReleaseTagTitle: false,
  
    // For Consultatieversies (specStatus="GN-CV") there is a default text in the section "Status of this document" that contains an emailaddress for feedback and comments on the document.
    //nl_emailComments: "consultatie@geonovum.nl",
  
    // if you use a single document for your spec, which uses more than one markdown H1 header, e.g. '# inleiding'
    // this configuration can be set to make sure that the alle H1 headers and navigation bars are preserved
    nl_markdownSplitH1sections: true,
  
    // in some cases the Repository of a Specification document and the Issue- and PR bases are split
    // this scan be configured below
    // if not set, the url's will be generated on the respecConfig.github automatically  
    nl_github: {
    //   issueBase: "https://github.com/Geonovum/TstRespec/issues",
    //   revision: "https://github.com/Geonovum/TstRespec/commits",
    //   pullrequests: "https://github.com//Geonovum/TstRespec/pulls"
    },
  
    // nl_organisationName is used for some company specific values in the header (and Sotd)
    // currently supported: Logius and Geonovum (default)  
    nl_organisationName: "Bimloket",
  
    // prefix for the names of company specific css, svg and ico prefixes
    // defaults to "GN-"  
    nl_organisationPrefix: "BL-",
  
    // class style can be automatically insertd in generated markdown tables
    // currently defaults to simple, but this may change
    // options 'simple', 'data', the style css in this template uses 'dkkvs'
    nl_markdownTableClass: "simple",
  
    // if nl_markdownEmbedImageInFigure is set to true images in markdown generated content will be surrounded with <figures> element
    // so that figures can be linked are be a part of table of figures
    nl_markdownEmbedImageInFigure: true,
  
    // this url points to the folder where organsation specific css files are stored
    // defaults to https://tools.geostandaarden.nl/respec/style/ if not set
    // nl_organisationStylesURL: "https://publicatie.centrumvoorstandaarden.nl/respec/style/",
    nl_organisationStylesURL: "media/",
    // nl_organisationStylesURL: "http://localhost:8081/respec/style/",
  
    // nl_organisationPublishURL points to organisation specific publication page, used in header
    // defaults to  https://docs.geostandaarden.nl/"
    nl_organisationPublishURL: "https://bimloket.github.io/",
  
    // nl_logo refers to company logo
    // defaults to https://tools.geostandaarden.nl/respec/style/logos/Geonovum.svg
    nl_logo: {
      //  src: "https://tools.geostandaarden.nl/respec/style/logos/OmgevingswetLogo.svg",
      src: "media/logo_BIM_Loket.jpg",
      alt: "BIM Loket",
      id: "TopLogo",
      //height: 20,
      //width: 100,
      //url: "https://www.geobasisregistraties.nl/basisregistraties/doorontwikkeling-in-samenhang"
    },
  
    // If you need to include a one-off reference that isn't in the SpecRef database or 
    // if you need to override an existing reference with specific content, then you can use this configuration option.
    localBiblio: {

    }
  };
  
