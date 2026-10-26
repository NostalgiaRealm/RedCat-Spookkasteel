# RC Coin Test

Een apart testveld waarin je met RedCat drie ongebruikte muntmodellen en de drie oorspronkelijke geldzakjes kunt vergelijken en verzamelen. Het gebruikt de beweging, speleranimaties en HUD van de reconstructie.

De munt en geldzak van dezelfde waarde staan naast elkaar op een gekleurd vloervak. Beide gebruiken de bestaande `ItemCoin`-logica; alleen de muntmodellen worden voor deze proef opnieuw toegewezen. De geldzakjes behouden hun gewone modelkeuze. Het testveld is nieuw gemaakt; het is geen teruggevonden oorspronkelijk level.

| Paar | Ongebruikte munt | Oorspronkelijke geldzak | Geld per voorwerp | Score per voorwerp | Oorspronkelijk geluid |
| --- | --- | --- | ---: | ---: | --- |
| Klein | `ICoinS.act` (hout) | `ImoneyS.act` | 1 | 5 | `ICoinS.wav` |
| Middel | `ICoinM.act` (zilver) | `ImoneyM.act` | 5 | 25 | `ICoinM.wav` |
| Groot | `ICoinL.act` (goud) | `ImoneyL.act` | 10 | 50 | `ICoinL.wav` |

Alle zes samen leveren **32 geld en 160 punten** op. De drie oorspronkelijke geldzakbestanden hebben dezelfde geometrie, texturen en schaal: hun onderscheid zit in de waarde en het geluid. De labels tonen daarom de geldwaarde en score afzonderlijk. Alle voorwerpen draaien met hun eigen originele actorinstellingen. Aanraken geeft het oorspronkelijke pickup-effect en de zwevende score. R zet alle zes terug en wist de testscore; de gekozen camerastand blijft behouden.

## Starten

Start vanuit deze map:

```sh
./Start-Coin-Test.sh
```

De starter gebruikt `npm start -- --ozone-platform=wayland` en de aanwezige Electron-installatie van het bovenliggende project. Je hoeft daarvoor geen pakketten opnieuw te installeren. De meegeleverde bestanden in `vendor/` bevatten Three.js voor de browser.

Of rechtstreeks vanuit deze map:

```sh
npm start -- --ozone-platform=wayland
```

Op Windows of macOS gebruik je `npm start` zonder de Wayland-optie. Die platforms zijn hier niet getest. Wanneer je deze map naar een andere plek kopieert zonder het hoofdproject, installeer je eerst de eigen Electron-afhankelijkheid met `npm ci`.

## Besturing

| Toets of muis | Actie |
| --- | --- |
| W / S of pijl omhoog / omlaag | Vooruit / achteruit |
| A / D | Zijwaarts bewegen |
| Pijl links / rechts | Draaien |
| Spatie | Springen |
| Shift | Lopen |
| Muis | Rondkijken na een klik in het spel |
| Ctrl | Schieten |
| V | Wisselen tussen eerste en derde persoon |
| R | Testveld en score opnieuw beginnen |
| Esc | Pauzeren en muis loslaten |
| F11 | Volledig scherm aan / uit |

Sluit het venster om te stoppen. Deze app heeft een eigen profiel en gebruikt geen opgeslagen avonturen van het hoofdspel. Tijdelijke bestanden, caches, logs en het profiel staan onder `../temp_work/coin-test-2026-10-13/runtime/`.

## Herkomst en isolatie

`src/native/` bevat ongewijzigde kopieën van de benodigde portmodules. `source-snapshot.json` bevat hun SHA-256-controlesommen en die van de gekopieerde assets. De kamer en het opnieuw toewijzen van de modellen staan uitsluitend in `src/room.js` en `src/main.js`. Er wordt geen bestaand level, menu of opgeslagen spel aangepast. De drie ongebruikte muntmodellen gebruiken de nog werkende oorspronkelijke `ItemCoin`-logica; hun precieze gedrag in een oudere ontwikkelversie is niet aangetoond. De originele geldzakmodellen en hun drie texturen per model zijn bytegetrouw gekopieerd. Het snapshot bevat ook de controlesommen van de geselecteerde manifestgegevens.

De koppeling van type 1/2/3 aan `imoneys`/`imoneym`/`imoneyl`, geld 1/5/10 en score 5/25/50 komt uit de gekopieerde `src/native/gameplay.js` en de oorspronkelijke INI-gegevens in `src/native/gameplay-settings.js`. `src/native/gameplay-audio.js` kiest het passende S/M/L-geluid. De eerdere native controle is vastgelegd in `../docs/fairy-dialogue-pickup-lifecycle.md`, bij “Pickup and BIG BENG recordings” (selectie op `0x43c850`).

## Gerichte controle

Met de Playwright-installatie van het bovenliggende project:

```sh
node tests/scene.mjs --comparison
```

Deze gerichte controle vergelijkt de gekopieerde modellen en texturen met de bron, verzamelt alle zes via de echte contactlogica en controleert per voorwerp de geldwaarde, score, geluid en effecten. Ook V, R en de zes herstelde labels worden gecontroleerd. Nieuwe resultaten en schermafbeeldingen worden geschreven naar `../temp_work/coin-bag-comparison-2026-10-13/verification/`; browserprofielen, caches en tijdelijke bestanden blijven in die eigen werkmap. Oude rapporten zijn bewaard, maar de tijdelijke profielen en schermafbeeldingen van eerdere controles zijn bij de [opruiming van 22 oktober](../temp_work/cleanup-2026-10-22/README.md) verwijderd. Linux-browsersockets gebruiken een korte `/proc/self/cwd`-alias vanwege de maximale socketpadlengte.

Zonder `--comparison` bevat dezelfde kamercontrole ook lopen, springen en landen. `node tests/desktop.mjs` is de aparte Electron-startcontrole. Voor deze uitbreiding is alleen de gerichte vergelijking uitgevoerd, zonder oude volledige testsuite of releasebuild.
