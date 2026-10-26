# Android release: van releasebestand naar Google Play

Gecontroleerd op 26 oktober 2026. Dit document beschrijft deze offline
Android-uitgave. Voor het opnieuw bouwen, de ondertekening en de werkelijke
validatieresultaten: [ANDROID.md](../ANDROID.md). Een geslaagde build is geen
Google Play-goedkeuring en bewijst niet dat iedere telefoon, tablet of elk
level is getest.

## Wat je publiceert

| Onderdeel | Waarde / gebruik |
| --- | --- |
| App-ID | `com.nostalgiarealm.redcatspookkasteel` |
| Zichtbare versie | `1.0.4` |
| Android-versiecode | `6`; verhoog deze bij iedere volgende Play-upload |
| Minimum | Android 10 / API 29, met voldoende recente Android System WebView en WebGL 2 |
| Compile- en target-API | Android 16 / API 36 |
| Google Play-bestand | `dist/android/1.0.4/RedCat-Spookkasteel-1.0.4-android.aab` |
| Direct installeren | `dist/android/1.0.4/RedCat-Spookkasteel-1.0.4-android.apk`; een AAB installeer je niet rechtstreeks |
| Spelinhoud | De voorbereide spelruntime in `src/`, `assets/`, `data/` en Three.js; nieuwe builds gebruiken de gegenereerde JavaScriptbundel, zonder losse `source/`-modules |
| Apparchitectuur | Kotlin/Java Android-shell met AndroidX WebView; geen meegeleverde native `.so`-bibliotheken in de gecontroleerde release |

Versie 1.0.4 wordt op verzoek zonder nieuwe tests of pakketcontroles gebouwd. De huidige pakketten bevatten de bundeling en bronmapwijzigingen; onderstaande controles blijven historisch bewijs voor 1.0.3.

De hieronder vastgelegde 1.0.3-build van 26 oktober dateert van vóór de latere JavaScriptbundeling, optimalisaties en verplaatsing naar `source/`. Bouw opnieuw om die nieuwere broncodewijzigingen mee te leveren; de bestaande APK/AAB veranderen niet door broncode te verplaatsen. Die vastgelegde build bevat 3.086 gecontroleerde runtimebestanden. De geschatte Play-download is 108.196.436–108.197.556 bytes. De controles staan in `dist/android/1.0.3/release-verification.json` en `temp_work/android-release-1.0.3-2026-10-26/verification/`.

Controleer bij een nieuwe build de definitieve releasecontrole op de daadwerkelijke AAB/APK voor
de exacte bestandsnamen, hashes, manifestwaarden en inhoud. Gebruik geen oude
debug-APK, desktopzip of losse websitebestanden als Play-upload. Als deze
app-ID al in jouw Play Console bestaat, moeten de bestaande app-identiteit,
toegestane uploadcertificaten en een hogere versiecode worden aangehouden.

Nieuwe apps en updates moeten sinds 31 augustus 2026 ten minste API 36
targeten. `minSdk = 29` blijft daarbij toegestaan: target en minimum hebben
een andere functie. Controleer de eis opnieuw bij een latere release.
[Officiële target-API-eisen](https://developer.android.com/google/play/requirements/target-sdk).

## 1. Bewaar de ondertekening en kies Play App Signing

Bewaar de gegenereerde uploadkeystore, de bijbehorende wachtwoorden en het
alias op een veilige plaats met een aparte back-up. Ze horen niet in Git,
releasezips of het bestand dat je aan spelers geeft. De buildprocedure leest
ze buiten de checkout. Bewaar ook het openbare uploadcertificaat en de
bijbehorende SHA-256-fingerprint; dat certificaat bevat geen private sleutel.

Maak in Play Console een nieuwe game aan, of open de al bestaande game.
Voor een nieuwe uitgave gebruik je Play App Signing. Bij de standaardkeuze
beheert Google de app-ondertekeningssleutel; jouw ondertekende AAB gebruikt
de uploadsleutel. Bewaar die uploadsleutel voor volgende uploads. Bij een
bestaande app moet je het al geregistreerde uploadcertificaat gebruiken of
eerst de officiële herstelprocedure volgen.
[Play App Signing en upload keys](https://developer.android.com/studio/publish/app-signing).

De rechtstreeks gebouwde APK is met de lokale releasesleutel ondertekend.
Een door Google gegenereerde Play-installatie kan een ander certificaat
hebben. Gebruik voor het testen van updates vanaf Play daarom de Play-testtrack;
een lokale APK met een ander certificaat kan zo'n installatie niet bijwerken.
Exporteer opgeslagen voortgang voordat je tussen verschillend ondertekende
installaties wisselt.

## 2. Publiceer het privacybeleid en vul app-inhoud in

Publiceer [android-privacy-policy.md](android-privacy-policy.md) als een
openbare, leesbare webpagina op een site die je beheert. Gebruik de echte URL
in **Policy → App content → Privacy policy**. De tekst moet zonder login
bereikbaar zijn. Er is voor deze bouwtaak geen websitepagina gepubliceerd en
dus ook geen al werkende privacy-URL verzonnen. De Android-versie toont de
privacytekst ook in **Over**.

Ook een app zonder gegevensverzameling moet een privacybeleid en een
ingevulde Data safety-sectie hebben. Zorg dat de naam van de app en de
verantwoordelijke ontwikkelaar in beleid en winkelvermelding overeenkomen.
[User Data / privacybeleid](https://support.google.com/googleplay/android-developer/answer/10144311?hl=en).

Gebruik bij de Data safety-vragen deze gecontroleerde eigenschappen van de
huidige broncode; herzie ze zodra je SDK's of functies toevoegt:

| Vraag / onderwerp | Huidig gedrag |
| --- | --- |
| Gegevens verzamelen of delen door de app | Geen eigen netwerkdienst, tracking, advertenties of analytische/crashrapportage-SDK; de app vraagt geen INTERNET-permissie |
| Spelersnaam en voortgang | Alleen lokaal in WebView-opslag; lokale profielen zijn geen online accounts |
| Import/export | Alleen een door de speler gekozen bestand via Android's documentvenster; een gekozen clouddienst kan zelf synchroniseren |
| Externe websites | Alleen op verzoek in de externe browser; geen savebestand meegestuurd |
| Android-back-up | Cloudback-up en automatische apparaatoverdracht uitgeschakeld |
| Advertenties | De app bevat geen advertentie-SDK of advertentievertoning |
| App-toegang | Geen login of serveraccount nodig; de gebruiker maakt of kiest een lokale speler |

Lokale verwerking zonder overdracht telt volgens de Data safety-uitleg niet
als verzameling. Beoordeel de specifieke vragen over zelf gekozen overdracht
aan de hand van de documentexport en de geldende uitleg; vul niet automatisch
een online-account- of cloud-savefunctie in die de app niet heeft.
[Data safety-instructies](https://support.google.com/googleplay/android-developer/answer/10787469?hl=en).

Vul daarna de inhoudsvragen en de IARC-vragenlijst in, met de werkelijke
fantasiegevechten, griezelthema's en overige spelinhoud. Er is hier geen
leeftijdsclassificatie toegekend. Kies de beoogde leeftijdsgroepen eerlijk;
als kinderen tot je doelgroep behoren, zijn de Families-eisen van toepassing.
Dat wordt niet opgelost door alleen een hogere leeftijd in de winkel te
selecteren.
[Inhoudsclassificatie](https://support.google.com/googleplay/android-developer/answer/9859655?hl=en),
[doelgroepinstellingen](https://support.google.com/googleplay/android-developer/answer/9867159?hl=en).

De bestaande Over-pagina bevat vrijwillige bijdragen en externe links. De
Play-uitleg over directe bijdragen kent een uitzondering wanneer 100% naar
de maker gaat en er geen digitale inhoud of voordelen worden verstrekt.
Controleer dat jouw daadwerkelijke Ko-fi-aanbod daaraan voldoet; de broncode
kan jouw externe accountinstellingen niet vaststellen.
[Directe bijdragen en betalingen](https://support.google.com/googleplay/android-developer/answer/10281818?hl=en).

## 3. Maak een nauwkeurige winkelvermelding

Kies Nederlands als primaire taal, vul de spelnaam en beschrijving in en
gebruik de geverifieerde contactmogelijkheid `info@nostalgiarealm.com` en
de website `https://www.nostalgiarealm.com/`. Controleer zelf dat je deze
contactgegevens voor Play wilt gebruiken. De herkomst van het adres is de
[openbare NostalgiaRealm-website](https://www.nostalgiarealm.com/).

Lever een 512 × 512 winkelicoon, een 1024 × 500 feature graphic en minimaal
twee representatieve screenshots aan. Screenshots moeten het echte spel
tonen, JPEG of 24-bit PNG zonder alpha zijn, binnen 320–3840 pixels vallen
en geen verhouding boven 2:1 hebben. Gebruik Android-opnamen met de werkelijke
besturing; beweer geen tabletvalidatie als die niet is uitgevoerd.
[Vereisten voor winkelillustraties](https://support.google.com/googleplay/android-developer/answer/9866151?hl=en).

De port bundelt originele spelbeelden, audio, namen en modellen. De build
stelt geen rechten op die inhoud vast en geeft geen toestemming om die te
verspreiden. Bevestig als uitgever dat je de benodigde toestemming hebt voor
de app, de naam en de winkelillustraties; houd eventuele bewijsstukken gereed
voor de review. De technische documentatie verklaart niet dat NostalgiaRealm
de eigenaar van het oorspronkelijke spel is.
[Play-beleid over intellectuele eigendom](https://support.google.com/googleplay/android-developer/answer/9888072?hl=en).

## 4. Upload eerst naar een testtrack

Open **Test and release → Testing → Internal testing**, maak een release aan
en upload de release-AAB. Controleer dat Play Console app-ID, versiecode,
target-API en uploadcertificaat accepteert. Voeg release-opmerkingen toe en
controleer de gegenereerde downloadgrootte en device-compatibiliteit in App
Bundle Explorer. De Console-uitslag is leidend.

De huidige limiet voor een base module is **500 MB gecomprimeerde download**.
Dat is niet de ongecomprimeerde assetomvang en ook niet simpelweg de grootte
van de AAB. `bundletool get-size total` geeft een lokale schatting; Play
berekent de uiteindelijke waarde. Boven 200 MB verschijnt een niet-blokkerende
waarschuwing voor mobiele data. Alleen als de werkelijke modulelimiet wordt
overschreden is een andere assetverdeling, zoals Play Asset Delivery, nodig.
[Actuele Play-groottelimieten](https://support.google.com/googleplay/android-developer/answer/9859372?hl=en).

Controleer het uiteindelijke pakket op `.so`-bibliotheken. Deze WebView-app
heeft geen eigen native gamebibliotheek; Java/Kotlin-only apps zijn volgens
Android al geschikt voor 16 KB-paginagrootte. Dat is geen vervanging voor een
apparaatcontrole. Als later een SDK met native libraries wordt toegevoegd,
moet de 16 KB-uitlijning opnieuw worden gecontroleerd.
[16 KB-compatibiliteit](https://developer.android.com/guide/practices/page-sizes).

Laat de app via de testtrack installeren en controleer minstens: eerste
start/intro, touchbediening, een level laden/spelen, audio en hervatten na
achtergrond, menu/rotatie, lokale spelers, opslaan/herladen en import/export.
Controleer ook een update met behouden voortgang. Gebruik een fysiek Android
10-apparaat en een recent Android 16-apparaat waar mogelijk; noteer wat je
daadwerkelijk getest hebt. Bekijk en behandel de Play pre-launch report.

## 5. Doorloop de accountgebonden toegang en publiceer

Bij een **persoonlijk ontwikkelaarsaccount aangemaakt na 13 november 2023**
vereist Google een gesloten test met minstens 12 testers die minstens
14 dagen aaneengesloten aangemeld blijven. Daarna vraag je production access
aan en beschrijf je de werkelijke testervaring. Een interne test of lokaal
gebouwde APK vervangt deze gesloten test niet. Of dit jouw account betreft
is niet uit de projectbestanden af te leiden.
[Testvereisten voor nieuwe persoonlijke accounts](https://support.google.com/googleplay/android-developer/answer/14151465?hl=en).

Wanneer accountverificatie, app-inhoud, winkelvermelding, privacy-URL,
testtoegang en geconstateerde problemen zijn afgehandeld, maak je in
**Production** een release met de geteste AAB en dien je die ter beoordeling
in. Kies zelf landen, prijs en uitrolmoment. De eigenaar moet deze
accountgebonden verklaringen en publicatiestappen uitvoeren; de bouwtaak
heeft niets naar Play Console geüpload of ter review ingediend.

Voor een volgende release: verhoog `versionCode`, stel de zichtbare versie
in, bouw de nieuwste gedeelde spelbron met dezelfde uploadidentiteit en
controleer de nieuwe release opnieuw. De aanvullende desktop- en
browserinstellingen blijven in dezelfde gedeelde spelbron bestaan.
