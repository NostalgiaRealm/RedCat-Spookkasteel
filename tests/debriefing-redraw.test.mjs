import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {OriginalDebriefing} from '../source/debriefing.js';

const manifest=JSON.parse(readFileSync(new URL('../assets/debriefing/manifest.json',import.meta.url)));
class LoadedDebriefing extends OriginalDebriefing {
  async load(){this.manifest=structuredClone(manifest);this.background={};this.logo={};this.icons={};}
}
function fixture(t){
  const previous=globalThis.window;globalThis.window={devicePixelRatio:1};
  t.after(()=>{if(previous===undefined)delete globalThis.window;else globalThis.window=previous;});
  const calls={clear:0,text:0,draw:0,focus:0,rect:0},listeners=new Map(),fonts=new Map(),rect={width:640,height:480};
  const context={setTransform(){},clearRect(){calls.clear++;},fillText(){calls.text++;},drawImage(){
    if(this.failNext){this.failNext=false;throw Error('draw failed');}calls.draw++;
  }};
  const canvas={width:640,height:480,getContext:()=>context,
    getBoundingClientRect(){calls.rect++;return {...rect};},addEventListener:(name,cb)=>listeners.set(name,cb)};
  const button={style:{},focus(){calls.focus++;}},status={};
  const element={hidden:true,ownerDocument:{fonts:{addEventListener:(name,cb)=>fonts.set(name,cb)}},
    querySelector:selector=>selector==='canvas'?canvas:selector==='button'?button:status};
  const scoreboard=new LoadedDebriefing(element,()=>{});
  const summary={level:'lvl00a',rows:['Potion','Money','Enemy','Secret'].map(kind=>({kind,found:2,total:5,bonus:30})),oldScore:100,bonus:120,newScore:220};
  scoreboard.show(summary);
  return {scoreboard,summary,canvas,context,button,status,element,rect,calls,listeners,fonts};
}

test('debriefing fade and continue delay advance, then 600 neutral frames retain pixels',t=>{
  const f=fixture(t),fade=Number(manifest.layout.FadeInTime);
  f.scoreboard.update(fade/2);const half=f.calls.clear;
  assert.equal(f.context.globalAlpha,1,'render restores canvas alpha');
  f.scoreboard.update(fade/2);assert.equal(f.calls.clear,half+1);
  if(!f.scoreboard.canContinue())f.scoreboard.update(Number(manifest.layout.StartDelay));
  assert.equal(f.button.disabled,false);assert.equal(f.calls.focus,1);
  const steady={...f.calls};
  for(let i=0;i<600;i++)f.scoreboard.update(1/120);
  assert.equal(f.calls.clear,steady.clear);assert.equal(f.calls.draw,steady.draw);assert.equal(f.calls.text,steady.text);
  assert.equal(f.calls.rect,steady.rect+600,'viewport changes are still observed each frame');
  assert.equal(f.calls.focus,1);
});

test('debriefing notices resize, DPR, target values and restored graphics/fonts',t=>{
  const f=fixture(t);f.scoreboard.update(2);
  const changes=[
    ()=>{f.rect.width=390;f.rect.height=844;},()=>{globalThis.window.devicePixelRatio=2;},
    ()=>{f.summary.rows[0].found++;},()=>{f.summary.rows[1].total++;},()=>{f.summary.rows[2].bonus++;},
    ()=>{f.summary.oldScore++;},()=>{f.summary.bonus++;},()=>{f.summary.newScore++;},()=>{f.summary.level='lvl01a';},
    ()=>{f.canvas.width=1;},()=>{f.listeners.get('contextlost')();},()=>{f.listeners.get('contextrestored')();},
    ()=>{f.fonts.get('loadingdone')();}
  ];
  for(const change of changes){const before=f.calls.clear;change();f.scoreboard.render();assert.equal(f.calls.clear,before+1);f.scoreboard.render();assert.equal(f.calls.clear,before+1);}
  assert.equal(f.canvas.width,780);assert.equal(f.canvas.height,1688);
});

test('a failed draw retries, and reopening the same summary starts its fade again',t=>{
  const f=fixture(t);f.scoreboard.update(2);f.summary.newScore++;f.context.failNext=true;
  assert.throws(()=>f.scoreboard.render(),/draw failed/);const before=f.calls.clear;
  f.scoreboard.render();assert.equal(f.calls.clear,before+1);
  f.scoreboard.hide();f.scoreboard.show(f.summary);assert.equal(f.scoreboard.elapsed,0);assert.equal(f.button.disabled,true);
  assert.equal(f.calls.clear,before+2);assert.match(f.status.textContent,/Magische flesjes/);
});
