import {playerInventoryLimits} from './player-inventory.js';

// Game.ini's Nr* values are the original debriefing denominators. Money is
// the number of bags found, not their monetary value or the campaign score.
export function levelSummary(game) {
  const settings=game.settings.game?.[`sublevel1_${Number(game.level.id.slice(3,5))+1}`]||{};
  const groups=[
    ['Potion', 'NrPotions', o=>o.subtype==='potion', o=>o.collected],
    ['Money', 'NrMoneyBags', o=>o.subtype==='coin', o=>o.collected],
    ['Enemy', 'NrEnemies', o=>o.kind==='enemy', o=>o.health<=0],
    ['Secret', 'NrSecrets', o=>Number(o.entity.IsSecret)>0, o=>o.secretFound||o.collected]
  ];
  const rows=groups.map(([kind,key,include,found])=>{
    const objects=game.objects.filter(include);
    return {kind,found:objects.filter(found).length,total:Number(settings[key]??objects.length)};
  });
  // Native 0x4912d5–0x49139e multiplies each found count by 15, then
  // adds all four row bonuses to the score. Inventory cheats do not count.
  const multiplier=15,oldScore=game.state.score;
  for(const row of rows)row.bonus=row.found*multiplier;
  const bonus=rows.reduce((sum,row)=>sum+row.bonus,0);
  return {version:1,level:game.level.id,rows,bonus,oldScore,newScore:Math.min(playerInventoryLimits(game.settings).score,oldScore+bonus)};
}

export function awardLevelSummary(game) {
  if(game.debriefing)return game.debriefing;
  const summary=levelSummary(game);game.state.score=summary.newScore;
  game.debriefing=summary;return summary;
}

export function restoreLevelSummary(value,level) {
  if(value?.version!==1||value.level!==level||!Array.isArray(value.rows)||value.rows.length!==4)return null;
  if(!['bonus','oldScore','newScore'].every(key=>Number.isFinite(value[key])&&value[key]>=0))return null;
  if(!value.rows.every((row,i)=>row.kind===['Potion','Money','Enemy','Secret'][i]&&['found','total','bonus'].every(key=>Number.isFinite(row[key])&&row[key]>=0)))return null;
  return structuredClone(value);
}

export class OriginalDebriefing {
  constructor(element,onContinue){
    this.element=element;this.canvas=element.querySelector('canvas');
    this.button=element.querySelector('button');this.button.onclick=onContinue;
    this.canvas.onclick=onContinue;
    this.ready=this.load();this.summary=null;this.elapsed=0;
  }
  async load(){
    const response=await fetch('assets/debriefing/manifest.json');
    if(!response.ok)throw new Error('Het originele overzicht ontbreekt. Voer tools/import_debriefing.py uit.');
    this.manifest=await response.json();
    [this.background,this.logo,this.icons]=await Promise.all(['assets/debriefing/background.png','assets/debriefing/logo.png','assets/hud/icons.png'].map(async src=>{const image=new Image();image.src=src;await image.decode();return image;}));
  }
  show(summary){
    this.summary=summary;this.elapsed=0;this.element.hidden=false;this.button.disabled=true;
    const t=this.manifest.text;
    this.button.textContent=t.ContinueTXT;
    this.element.querySelector('[role="status"]').textContent=[t.DebriefTXT,...summary.rows.map(r=>`${t[r.kind+'TXT']}: ${r.found} / ${r.total}`),`${t.TotalScoreTXT}: ${summary.bonus}`,`${t.NewTotalScoreTXT}: ${summary.newScore}`].join('. ');
    this.render();
  }
  hide(){this.element.hidden=true;this.summary=null;}
  canContinue(){return !!this.summary&&this.elapsed>=Number(this.manifest.layout.StartDelay);}
  update(dt){
    this.elapsed+=dt;
    if(this.button.disabled&&this.canContinue()){this.button.disabled=false;this.button.focus({preventScroll:true});}
    this.render();
  }
  render(){
    if(!this.summary||!this.background)return;
    const canvas=this.canvas,rect=canvas.getBoundingClientRect(),dpr=window.devicePixelRatio||1;
    const width=Math.max(1,Math.round(rect.width*dpr)),height=Math.max(1,Math.round(rect.height*dpr));
    if(canvas.width!==width||canvas.height!==height){canvas.width=width;canvas.height=height;}
    const c=canvas.getContext('2d'),{layout:l,text:t}=this.manifest,s=this.summary;
    c.setTransform(width/640,0,0,height/480,0,0);c.clearRect(0,0,640,480);
    c.drawImage(this.background,0,0,256,256,0,0,640,480);
    c.globalAlpha=Math.min(1,this.elapsed/Number(l.FadeInTime));
    c.textBaseline='top';c.fillStyle='white';c.shadowColor='#001b4d';c.shadowBlur=2;
    const label=(text,x,y,size=16,align='left')=>{c.font=`${size}px "Comic Sans MS", "Comic Neue", cursive`;c.textAlign=align;c.fillText(text,x,y);};
    label(t.DebriefTXT,320,Number(l['Title.Y']),Number(l['Title.Size']),'center');
    label(this.manifest.levels[Number(s.level.slice(3,5))],320,44,16,'center');
    const x=Number(l['ScoreBar.X']),y=Number(l['ScoreBar.Y']),h=Number(l['ScoreBar.Height']);
    s.rows.forEach((row,i)=>{
      const top=y+i*(h+12),prefix='Image'+row.kind;
      c.drawImage(this.icons,Number(l[prefix+'.BaseX']),Number(l[prefix+'.BaseY']),Number(l[prefix+'.BaseWidth']),Number(l[prefix+'.BaseHeight']),x,top,Number(l[prefix+'.Width']),Number(l[prefix+'.Height']));
      const baseline=top+Number(l['ScoreBar.OffsetY']);
      label(t[row.kind+'TXT'],x+Number(l['ScoreBar.TitleX']),baseline);
      label(String(row.found),x+Number(l['ScoreBar.FoundX']),baseline,16,'right');
      label('/',x+Number(l['ScoreBar.SlashX']),baseline);
      label(String(row.total),x+Number(l['ScoreBar.TotalX']),baseline,16,'right');
      label(String(row.bonus),x+Number(l['ScoreBar.ScoreX']),baseline,16,'right');
    });
    [[t.OldTotalScoreTXT,s.oldScore],[t.TotalScoreTXT,s.bonus],[t.NewTotalScoreTXT,s.newScore]].forEach(([text,value],i)=>{label(text,120,292+i*29);label(String(value),540,292+i*29,16,'right');});
    c.drawImage(this.logo,0,0,256,42,12,428,102,48);
    c.globalAlpha=1;
  }
}
