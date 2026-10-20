import {DIFFICULTIES} from './difficulty.js';

// Screen text and artwork come from MenuRcs and Settings/menu.ini. Portable
// recovery saves/settings share the existing stores; Snelspel is a menu route,
// not a second campaign with a different save format.
const TITLES = {
  home:'Hoofdmenu', quickplay:'Snelspel',
  difficulty:'Moeilijkheid', startinfo:'Startinfo', highscores:'Highscores',
};
const DESCRIPTIONS = {
  home:name=>`Hallo ${name}. Kies hieronder wat je wilt gaan doen: verder met het Avontuur, even snel een Snelspel spelen, of de beste spokenjagers bekijken in de Highscores? Maak je keuze en klik op Volgende om verder te gaan.`,
  quickplay:name=>`${name}, welke Griezelplek wil je bezoeken? Kies een Griezelplek en druk op Volgende. Succes!`,
  difficulty:name=>`${name}, kies hier hoe moeilijk je het spel wilt maken. Klik op het spook van jouw keuze en klik dan op Volgende om door te gaan.`,
  startinfo:()=> 'Hier zie je de instellingen van het spel dat je gaat spelen. Staat alles goed? Klik dan op Start.',
  highscores:()=> 'Welkom bij de Highscores! Hier zie je, wie de beste spokenjagers zijn!',
};
const DIFFICULTY_VOICES = {Easy:'mn_red02.wav', Normal:'mn_red03.wav', Hard:'mn_red04.wav'};

export class OriginalMenu {
  constructor({document=globalThis.document, audio, getState, setDifficulty, launch, scores, help}) {
    Object.assign(this,{document,audio,getState,setDifficulty,launch,scores,help});
    this.$=id=>document.getElementById(id);
    this.page='home';this.choice='adventure';this.flow='adventure';this.adventure='continue';
    this.busy=false;this.generation=0;
    for(const button of this.$('menu').querySelectorAll('[data-menu-choice]')){
      button.onclick=()=>this.choose(button.dataset.menuChoice);
    }
    this.$('start-over').onclick=()=>{
      if(this.busy)return;
      this.audio.say(['rcmn29.wav']);
      this.launch({kind:'new',origin:this.$('start-over')});
    };
    this.$('native-next').onclick=()=>this.next();
    this.$('native-previous').onclick=()=>this.back();
    for(const id of ['native-start','play-level'])this.$(id).onclick=()=>this.start(this.$(id));
    this.$('native-help').onclick=()=>this.help(this.page);
    this.renderDifficulties();this.refresh();
  }

  choose(choice) {
    if(this.busy)return;
    this.choice=choice;
    this.audio.say([{adventure:'rcmn10.wav',quickplay:'rcmn11.wav',highscores:'rcmn12.wav'}[choice]]);
    this.refresh();
  }

  renderDifficulties() {
    const selected=this.getState().difficulty;
    this.$('native-difficulties').replaceChildren(...DIFFICULTIES.map(({value,label},index)=>{
      const button=this.document.createElement('button');
      button.type='button';button.className='native-difficulty';button.dataset.difficulty=value;
      button.setAttribute('aria-label',label);button.setAttribute('aria-pressed',String(selected===value));
      const image=this.document.createElement('img');image.alt='';image.width=180;image.height=245;
      const caption=this.document.createElement('span');caption.textContent=label;
      let hovered=false;
      const paint=()=>{image.src=`assets/menu/030${index}000${this.getState().difficulty===value?2:hovered?1:0}.png`;};
      button.onpointerenter=button.onfocus=()=>{hovered=true;paint();};
      button.onpointerleave=button.onblur=()=>{hovered=false;paint();};
      button.onclick=()=>{
        if(this.busy)return;
        this.setDifficulty(value);this.audio.say([DIFFICULTY_VOICES[value]]);
        this.renderDifficulties();this.$('native-difficulties').querySelector(`[data-difficulty="${value}"]`).focus({preventScroll:true});
      };
      button.append(image,caption);paint();return button;
    }));
  }

  show(page,{announce=true,focus=true}={}) {
    this.page=page;this.generation++;this.busy=false;
    if(page==='difficulty')this.renderDifficulties();
    if(page==='highscores')this.renderScores();
    this.refresh();
    if(announce)this.audio.say(page==='difficulty'?['rcmn5.wav','rcmn30.wav']:['rcmn5.wav']);
    if(focus){
      const active=this.$('menu').querySelector(`[data-menu-page="${page}"] [aria-pressed="true"]`);
      (active||this.$(page==='startinfo'?(this.$('native-start').hidden?'play-level':'native-start'):page==='highscores'?'native-previous':'native-next')).focus({preventScroll:true});
    }
  }

  home({focus=false}={}) {
    this.flow='adventure';this.choice='adventure';
    this.adventure=this.getState().hasSave?'continue':'new';
    this.show('home',{announce:false,focus});
  }

  refresh() {
    const state=this.getState(),page=this.page;
    if(!state.hasSave)this.adventure='new';
    this.$('menu').querySelector('.native-menu-frame').dataset.page=page;
    this.$('native-menu-title').textContent=TITLES[page];
    this.$('native-menu-description').textContent=DESCRIPTIONS[page](state.name);
    for(const panel of this.$('menu').querySelectorAll('[data-menu-page]'))panel.hidden=panel.dataset.menuPage!==page;
    for(const button of this.$('menu').querySelectorAll('[data-menu-choice]'))button.setAttribute('aria-pressed',String(button.dataset.menuChoice===this.choice));
    this.$('start-over').hidden=!state.hasSave||this.flow!=='adventure';
    this.$('native-previous').hidden=page==='home';
    this.$('menu').querySelector('.native-footer-left').hidden=page!=='home';
    this.$('native-next').hidden=['startinfo','highscores'].includes(page);
    const replay=page==='startinfo'&&this.flow==='quickplay'&&state.hasSave;
    this.$('native-start').hidden=page!=='startinfo'||replay;
    this.$('play-level').hidden=!replay;
    if(page==='startinfo'){
      const continuing=this.flow==='adventure'&&this.adventure==='continue'&&state.hasSave;
      const level=continuing?state.savedLevel:this.flow==='quickplay'?state.level:0;
      this.$('native-start-player').textContent=state.name;
      this.$('native-start-mode').textContent=this.flow==='quickplay'?'Snelspel':'Avontuur';
      this.$('native-start-level').textContent=state.levels[level].name;
      this.$('native-start-difficulty').textContent=DIFFICULTIES.find(d=>d.value===(continuing?state.savedDifficulty:state.difficulty))?.label||'Normaal';
      this.$('native-start-picture').src=`assets/menu/100${level}0000.png`;
      this.$('native-start-picture').alt=state.levels[level].name;
      this.$('native-start-score').textContent=String(continuing?state.savedScore||0:0);
      // Describe the enabled input, including mobile auto-detection and a
      // user's explicit touch override. An actively used controller wins.
      const device=state.controllerActive?(state.controlDevice==='joystick'?'joystick':'gamepad'):
        state.touchEnabled?'touch':state.controlDevice;
      const controls={
        keyboard:{image:'assets/menu/11020000.png',label:'Muis en toetsenbord'},
        gamepad:{image:'assets/menu/11010000.png',label:'Gamepad'},
        joystick:{image:'assets/menu/11030000.png',label:'Joystick'},
        touch:{image:'assets/icons/kde-touchscreen.svg',label:'Aanraakscherm'},
      };
      const control=controls[device]||controls.keyboard;
      this.$('native-start-control-picture').src=control.image;
      this.$('native-start-control-picture').alt=control.label;
      this.$('native-start-control-label').textContent=control.label;
    }
  }

  next() {
    if(this.busy)return;
    if(this.page==='home'){
      this.flow=this.choice;
      if(this.choice==='highscores')return this.show('highscores');
      if(this.choice==='quickplay')return this.show('quickplay');
      this.adventure=this.getState().hasSave?'continue':'new';
      return this.show(this.getState().hasSave?'startinfo':'difficulty');
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
    try{await this.launch({kind:this.flow==='quickplay'?'replay':this.adventure,origin});}
    finally{if(generation===this.generation)this.busy=false;origin.disabled=false;}
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
