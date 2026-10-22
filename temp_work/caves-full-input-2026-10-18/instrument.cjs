globalThis.instrument=async()=>page.evaluate(()=>{
 window.__evidence={events:[],inputs:[],samples:[]};
 window.__observe=()=>{const g=__redcat.gameplay;if(!g||g.__observed)return;const on=g.onEvent;g.onEvent=e=>{__evidence.events.push({t:g.time,event:{...e}});on(e)};g.__observed=true;};__observe();
 for(const type of ['keydown','keyup','mousedown','mouseup','mousemove'])document.addEventListener(type,e=>{const g=__redcat.gameplay;if(!g)return;if(type==='mousemove'&&!e.movementX&&!e.movementY)return;__evidence.inputs.push({t:g.time,type,code:e.code,button:e.button,dx:e.movementX,dy:e.movementY})});
 setInterval(()=>{__observe();const g=__redcat.gameplay,w=__redcat.world;if(g&&w&&__redcat.mode==='playing')__evidence.samples.push({t:g.time,p:[...w.player.position],state:{...g.state},altars:g.find('unlock_max')[0]?.triggerCount});},250);
});
