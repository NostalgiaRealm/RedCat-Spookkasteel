// The Hoofdmenu and its pages, from ../RCSPOOK_NEW/source/original-menu.js. Screen text and
// artwork come from the original MenuRcs and Settings/menu.ini as that project recovered them.
// Changed here: difficulty is the game's own number (0, 1, 2), the Griezelplek cards are drawn by
// this class (the old project did that in its main.js), there is no separate "Level Spelen"
// button, and with no player Volgende leads to the Spelerlijst.
//
// getState() returns {
//   name, hasPlayer,            the current player
//   returning,                  true: an adventure is under way (Avontuur goes straight to Startinfo)
//   difficulty,                 0..2, the choice on the Moeilijkheid page
//   level, unlocked,            Snelspel: chosen world index 0..4 and how many worlds are open
//   savedLevel, savedDifficulty, savedScore,   the adventure under way
//   resumeNote,                 a line for Startinfo when continuing, or ''
//   worldRestart,               Meer opties: the label of "start this world again" when the adventure has a saved place, else ''
//   recovery,                   Meer opties: true when older saved places can be offered (recovery points)
//   canStart, touchEnabled, controllerActive, levels: [{name}]
// }
export const DIFFICULTIES = Object.freeze([
  Object.freeze({ id: 0, label: 'Makkelijk', voice: 'mn_red02.wav' }),
  Object.freeze({ id: 1, label: 'Normaal', voice: 'mn_red03.wav' }),
  Object.freeze({ id: 2, label: 'Moeilijk', voice: 'mn_red04.wav' }),
]);
const TITLES = {
  home:'Hoofdmenu', quickplay:'Snelspel',
  difficulty:'Moeilijkheid', startinfo:'Startinfo', highscores:'Highscores',
};
const DESCRIPTIONS = {
  home:name=>name?`Hallo ${name}. Kies hieronder wat je wilt gaan doen: verder met het Avontuur, even snel een Snelspel spelen, of de beste spokenjagers bekijken in de Highscores? Maak je keuze en klik op Volgende om verder te gaan.`:
    'Hallo! Kies eerst in de Spelerlijst met wie je wilt spelen. Kies daarna hieronder wat je wilt gaan doen en klik op Volgende om verder te gaan.',
  quickplay:name=>`${name}, welke Griezelplek wil je bezoeken? Kies een Griezelplek en druk op Volgende. Succes!`,
  difficulty:name=>`${name}, kies hier hoe moeilijk je het spel wilt maken. Klik op het spook van jouw keuze en klik dan op Volgende om door te gaan.`,
  startinfo:()=> 'Hier zie je de instellingen van het spel dat je gaat spelen. Staat alles goed? Klik dan op Start.',
  highscores:()=> 'Welkom bij de Highscores! Hier zie je, wie de beste spokenjagers zijn!',
};

/** Original card resources 040N000S.png: 0 free idle, 1 free hover, 2 free selected, 3 chained idle, 4 chained hover. */
export function chapterArtwork(index,{unlocked=false,hovered=false,selected=false,pressed=false}={}) {
  const state=unlocked?(pressed||selected?2:hovered?1:0):(hovered?4:3);
  return `assets/menu/040${index}000${state}.png`;
}

export class OriginalMenu {
  constructor({document=globalThis.document, audio, getState, setDifficulty, setLevel, launch, scores, help, needPlayer}) {
    Object.assign(this,{document,audio,getState,setDifficulty,setLevel,launch,scores,help,needPlayer});
    this.$=id=>document.getElementById(id);
    this.page='home';this.choice='adventure';this.flow='adventure';this.adventure='continue';
    this.busy=false;this.generation=0;
    for(const button of this.$('menu').querySelectorAll('[data-menu-choice]')){
      button.onclick=()=>this.choose(button.dataset.menuChoice);
    }
    this.$('start-over').onclick=()=>{
      if(this.busy)return;
      this.audio.say(['rcmn29.wav']);
      this.launch({kind:'restart',origin:this.$('start-over')});
    };
    // Meer opties: the world again from its beginning (the original's own way to continue), and an older saved place
    this.$('start-world-over').onclick=()=>{if(!this.busy)this.launch({kind:'restart-world',origin:this.$('start-world-over')});};
    this.$('open-recovery').onclick=()=>{if(!this.busy)this.launch({kind:'recovery',origin:this.$('open-recovery')});};
    this.$('native-next').onclick=()=>this.next();
    this.$('native-previous').onclick=()=>this.back();
    this.$('native-start').onclick=()=>this.start(this.$('native-start'));
    this.$('native-help').onclick=()=>this.help(this.page);
    this.renderDifficulties();this.renderLevels();this.refresh();
  }

  choose(choice) {
    if(this.busy)return;
    this.choice=choice;
    this.audio.say([{adventure:'rcmn10.wav',quickplay:'rcmn11.wav',highscores:'rcmn12.wav'}[choice]]);
    this.refresh();
  }

  renderDifficulties() {
    const selected=this.getState().difficulty;
    this.$('native-difficulties').replaceChildren(...DIFFICULTIES.map(({id,label,voice},index)=>{
      const button=this.document.createElement('button');
      button.type='button';button.className='native-difficulty';button.dataset.difficulty=id;
      button.setAttribute('aria-label',label);button.setAttribute('aria-pressed',String(selected===id));
      const image=this.document.createElement('img');image.alt='';image.width=180;image.height=245;
      const caption=this.document.createElement('span');caption.textContent=label;
      let hovered=false;
      const paint=()=>{image.src=`assets/menu/030${index}000${this.getState().difficulty===id?2:hovered?1:0}.png`;};
      button.onpointerenter=button.onfocus=()=>{hovered=true;paint();};
      button.onpointerleave=button.onblur=()=>{hovered=false;paint();};
      button.onclick=()=>{
        if(this.busy)return;
        this.setDifficulty(id);this.audio.say([voice]);
        this.renderDifficulties();this.$('native-difficulties').querySelector(`[data-difficulty="${id}"]`).focus({preventScroll:true});
      };
      button.append(image,caption);paint();return button;
    }));
  }

  // Griezelplek cards. Browsing them never starts anything; a locked card cannot be chosen.
  renderLevels() {
    const state=this.getState(),selected=state.level;
    this.$('level-list').replaceChildren(...state.levels.map((level,i)=>{
      const unlocked=i<state.unlocked,b=this.document.createElement('button');
      b.type='button';b.className='level-card'+(selected===i?' selected':'')+(unlocked?'':' locked');
      b.disabled=!unlocked;b.dataset.level=String(i);
      b.setAttribute('aria-pressed',String(selected===i));
      b.setAttribute('aria-label',`${level.name}${unlocked?'':' · Vergrendeld'}`);
      if(!unlocked)b.title=`Voltooi ${state.levels[i-1]?.name||'het vorige level'} om dit level vrij te spelen.`;
      const img=this.document.createElement('img');img.alt='';img.width=150;img.height=171;
      const info=this.document.createElement('div');info.className='card-info';
      const name=this.document.createElement('b');name.textContent=level.name;info.append(name);
      b.append(img,info);
      let hovered=false,pressed=false;
      const paint=()=>{img.src=chapterArtwork(i,{unlocked,hovered,pressed,selected:selected===i});};
      b.onpointerenter=()=>{hovered=true;paint();};b.onpointerleave=()=>{hovered=false;pressed=false;paint();};
      b.onfocus=()=>{hovered=true;paint();};b.onblur=()=>{hovered=false;pressed=false;paint();};
      b.onpointerdown=()=>{pressed=true;paint();};b.onpointerup=()=>{pressed=false;paint();};
      b.onclick=()=>{
        if(!unlocked||this.busy)return;
        this.setLevel(i);this.audio.selectLevel(i);this.renderLevels();
        this.$('level-list').querySelector(`[data-level="${i}"]`).focus({preventScroll:true});
      };paint();return b;
    }));
  }

  show(page,{announce=true,focus=true}={}) {
    this.page=page;this.generation++;this.busy=false;
    this.$('native-start-extras').open=false;          // Meer opties starts folded whenever a page comes up
    if(page==='difficulty')this.renderDifficulties();
    if(page==='quickplay')this.renderLevels();
    if(page==='highscores')this.renderScores();
    this.refresh();
    if(announce)this.audio.say(page==='difficulty'?['rcmn5.wav','rcmn30.wav']:['rcmn5.wav']);
    if(focus){
      const active=this.$('menu').querySelector(`[data-menu-page="${page}"] [aria-pressed="true"]`);
      (active||this.$(page==='startinfo'?'native-start':page==='highscores'?'native-previous':'native-next')).focus({preventScroll:true});
    }
  }

  home({focus=false,choice='adventure'}={}) {
    this.flow='adventure';this.choice=choice;
    this.adventure=this.getState().returning?'continue':'new';
    this.show('home',{announce:false,focus});
  }

  refresh() {
    const state=this.getState(),page=this.page;
    if(!state.returning)this.adventure='new';
    this.$('menu').querySelector('.native-menu-frame').dataset.page=page;
    this.$('native-menu-title').textContent=TITLES[page];
    this.$('native-menu-description').textContent=DESCRIPTIONS[page](state.name);
    this.$('current-player').textContent=state.name?`Speler: ${state.name}`:'Geen speler gekozen';
    for(const panel of this.$('menu').querySelectorAll('[data-menu-page]'))panel.hidden=panel.dataset.menuPage!==page;
    for(const button of this.$('menu').querySelectorAll('[data-menu-choice]'))button.setAttribute('aria-pressed',String(button.dataset.menuChoice===this.choice));
    const continuing=this.flow==='adventure'&&this.adventure==='continue'&&state.returning;
    // Meer opties: always there on Startinfo for "Bekijk de originele intro"; the choices about a saved adventure only for one that is continued
    this.$('native-start-extras').hidden=false;
    this.$('start-over').hidden=!continuing;
    this.$('start-world-over').hidden=!continuing||!state.worldRestart;this.$('start-world-over').textContent=state.worldRestart||'';
    this.$('open-recovery').hidden=!continuing||!state.recovery;
    this.$('native-previous').hidden=page==='home';
    this.$('menu').querySelector('.native-footer-left').hidden=page!=='home';
    this.$('native-next').hidden=['startinfo','highscores'].includes(page);
    this.$('native-start').hidden=page!=='startinfo';
    this.$('native-start').disabled=!state.canStart;
    if(page==='startinfo'){
      const level=continuing?state.savedLevel:this.flow==='quickplay'?state.level:0;
      this.$('native-start-player').textContent=state.name;
      this.$('native-start-mode').textContent=this.flow==='quickplay'?'Snelspel':'Avontuur';
      this.$('native-start-level').textContent=state.levels[level].name;
      this.$('native-start-difficulty').textContent=DIFFICULTIES.find(d=>d.id===(continuing?state.savedDifficulty:state.difficulty))?.label||'Normaal';
      this.$('native-start-picture').src=`assets/menu/100${level}0000.png`;
      this.$('native-start-picture').alt=state.levels[level].name;
      this.$('native-start-score').textContent=String(continuing?state.savedScore||0:0);
      const note=continuing?state.resumeNote:'';
      this.$('native-start-note').textContent=note||'';this.$('native-start-note').hidden=!note;
      // Describe the enabled input, including mobile auto-detection and a
      // user's explicit touch override. An actively used controller wins.
      const device=state.controllerActive?'gamepad':state.touchEnabled?'touch':'keyboard';
      const controls={
        keyboard:{image:'assets/menu/11020000.png',label:'Muis en toetsenbord'},
        gamepad:{image:'assets/menu/11010000.png',label:'Gamepad'},
        touch:{image:'assets/icons/kde-touchscreen.svg',label:'Aanraakscherm'},
      };
      const control=controls[device];
      this.$('native-start-control-picture').src=control.image;
      this.$('native-start-control-picture').alt=control.label;
      this.$('native-start-control-label').textContent=control.label;
    }
  }

  next() {
    if(this.busy)return;
    if(this.page==='home'){
      if(this.choice==='highscores'){this.flow=this.choice;return this.show('highscores');}
      // Nobody to play with yet: the Spelerlijst comes first.
      if(!this.getState().hasPlayer)return this.needPlayer();
      this.flow=this.choice;
      if(this.choice==='quickplay')return this.show('quickplay');
      this.adventure=this.getState().returning?'continue':'new';
      return this.show(this.getState().returning?'startinfo':'difficulty');
    }
    if(this.page==='quickplay')return this.show('difficulty');
    if(this.page==='difficulty')return this.show('startinfo');
  }

  back() {
    if(this.busy)return;
    if(this.page==='home')return false;
    const page=this.page==='startinfo'?(this.flow==='adventure'&&this.adventure==='continue'?'home':'difficulty'):
      this.page==='difficulty'?(this.flow==='quickplay'?'quickplay':'home'):'home';
    this.audio.say(page==='home'?['rcmn6.wav','rcmn9.wav']:['rcmn6.wav']);
    this.show(page,{announce:false});
    return true;
  }

  async start(origin) {
    if(this.busy)return;
    const generation=++this.generation;
    this.busy=true;origin.disabled=true;
    try{await this.launch({kind:this.flow==='quickplay'?'quickplay':this.adventure,origin});}
    finally{if(generation===this.generation)this.busy=false;origin.disabled=!this.getState().canStart;}
  }

  renderScores() {
    const body=this.$('native-score-table').querySelector('tbody');
    body.replaceChildren(...this.scores().slice(0,10).map(entry=>{
      const row=this.document.createElement('tr');
      for(const value of [entry.name,entry.score,entry.level||'']){
        const cell=this.document.createElement('td');cell.textContent=String(value);row.append(cell);
      }
      return row;
    }));
  }
}
