// The help page of what this port adds to the original: "Op avontuur", the JavaScript port's
// Besturing page, written for this port (its controls differ: the buttons and keys below are the
// ones of source/web/gamepad.js, touch.js, game.js and skip.js; keep them in step). Shown in the
// Help viewer (native-help.js) as a group of its own after the original's topics, and opened from
// Instellingen → Meer instellingen → Besturing. Plain paragraphs: the viewer shows nothing else.
export const PORT_HELP = {
  group: { title: 'Deze versie', topics: [9001, 9002, 9003, 9004] },
  contexts: { 'port-controls': 'port_controls' },
  topics: [
    { id: 'port_controls', nativeId: 9001, title: 'Op avontuur', links: [
      { paragraph: 4, label: 'Controller', target: 'port_controller' }, { paragraph: 4, label: 'Aanraakscherm', target: 'port_touch' }, { paragraph: 5, label: 'Opslaan en verder spelen', target: 'port_saving' },
    ], paragraphs: [
      'Deze versie speelt het originele spel in je browser. De toetsen van het spel zelf zijn die van het origineel; daar is het volgende bij gekomen.',
      'Toetsenbord en muis. Pijltjestoetsen of W, A, S, D: lopen en draaien. Muis: rondkijken (klik eerst in het beeld om de muis te vangen; Esc laat hem weer los). Spatie: springen. Ctrl of de linkermuisknop: schieten. Shift: rustig lopen. V: wisselen tussen de originele camera en eerste persoon. 1, 2 en 3: de originele camera dichtbij, verder weg of hoog.',
      'E: houd de toets twee seconden vast tijdens een scène om die over te slaan. Rechtsonder in beeld staat dan Overslaan met een cirkel die volloopt. Loslaten begint opnieuw.',
      'Esc: het menu van het spel. P: pauze. Tab: de scores. F5: nu opslaan. F9: je opgeslagen plek laden. F10 of het tandwiel rechts in beeld: de instellingen van deze versie, ook tijdens het spelen.',
      'Andere toetsen kiezen kan onder Instellingen → Meer instellingen → Toetsen, en tijdens het spelen in het menu van het spel onder Spelbesturing. Zie ook: Controller, Aanraakscherm.',
      'Na een wereld toont het spel het overzicht met je score. Druk op Schieten, of klik of tik in het beeld, om verder te gaan. Zie ook: Opslaan en verder spelen.',
    ] },
    { id: 'port_controller', nativeId: 9002, title: 'Controller', links: [{ paragraph: 5, label: 'Op avontuur', target: 'port_controls' }], paragraphs: [
      'Sluit een controller aan en druk op een knop. Knopnamen volgen de indeling van een Xbox- of PlayStation-controller; op andere controllers tellen de plaatsen van de knoppen.',
      'Linkerstick: lopen in elke richting; hoe verder je duwt, hoe sneller. Rechterstick: rondkijken. Richtingsknoppen: lopen en draaien, en kiezen in de menu’s van het spel.',
      'A / ×: springen en bevestigen. X / □, RT / R2 of RB / R1: schieten. B / ○: schieten; terug in de menu’s van deze versie. LB / L1: rustig lopen. Y / △: camera wisselen.',
      'X / □ twee seconden vasthouden tijdens een scène: de scène overslaan.',
      'Start / Options: het menu van het spel. Back / Share: pauze. Linkerstick indrukken (L3): de scores. Rechterstick indrukken (R3): de instellingen van deze versie.',
      'Bij vrij vliegen vlieg je met de linkerstick waarheen je kijkt, stijg je met A / × en daal je met B / ○, LB / L1 of LT / L2. Raakt de controller waarmee je speelt los, dan wacht het spel tot je verder wilt. Zie ook: Op avontuur.',
    ] },
    { id: 'port_touch', nativeId: 9003, title: 'Aanraakscherm', links: [{ paragraph: 4, label: 'Op avontuur', target: 'port_controls' }], paragraphs: [
      'Op een telefoon of tablet staan de knoppen vanzelf in beeld. Onder Instellingen → Meer instellingen → Aanraakbediening zet je ze altijd aan of uit.',
      'Beweeg met de stick links: RedCat loopt in de richting van de stick, en hoe verder je duwt, hoe sneller. Veeg over de rest van het beeld om rond te kijken.',
      'Spring en Schieten werken zolang je ze aanraakt. Lopen schakelt rustig lopen in of uit. Camera wisselt tussen de originele camera en eerste persoon. Menu opent het menu van het spel. Bij vrij vliegen heet Spring Omhoog en staat Omlaag op de plek van Lopen.',
      'Tijdens een scène staat linksonder Overslaan: houd die knop twee seconden vast om de scène over te slaan.',
      'Het tandwiel rechts in beeld opent de instellingen van deze versie. Zie ook: Op avontuur.',
    ] },
    { id: 'port_saving', nativeId: 9004, title: 'Opslaan en verder spelen', links: [{ paragraph: 4, label: 'Op avontuur', target: 'port_controls' }], paragraphs: [
      'Het spel bewaart je plek in een wereld vanzelf: elke minuut (op een telefoon of tablet elke drie minuten), als je naar de volgende wereld gaat en als je de pagina verlaat. Met F5 sla je meteen op. Zolang RedCat geen gezondheid heeft wordt er niet opgeslagen.',
      'Kies in het Hoofdmenu Avontuur om verder te spelen waar je was. F9, of Opgeslagen plek laden in de instellingen tijdens het spelen, zet je terug op je opgeslagen plek.',
      'Zit je vast? Onder Startinfo → Meer opties kun je terug naar ongeveer 2, 5 of 10 minuten speeltijd geleden (Herstelpunten, aan te zetten onder Meer instellingen), of de wereld opnieuw beginnen.',
      'Elke speler heeft één opgeslagen plek voor zijn avontuur. Een Snelspel kost die plek niet. In de Spelerlijst kun je een speler exporteren naar een bestand en weer importeren, ook op een ander apparaat.',
      'Een opgeslagen plek hoort bij deze versie van het spel. Na een vernieuwing van de site kan het zijn dat je de wereld opnieuw begint; je voortgang in het avontuur blijft. Zie ook: Op avontuur.',
    ] },
  ],
};
