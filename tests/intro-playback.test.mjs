import test from 'node:test';
import assert from 'node:assert/strict';
import {IntroPlayback} from '../src/intro-playback.js';

const mediaError=name=>Object.assign(new Error(name),{name});
function pendingPlay() {
  let resolve,reject;
  const promise=new Promise((yes,no)=>{resolve=yes;reject=no;});
  return {promise,resolve,reject};
}
function fixture(outcomes=[],options={}) {
  const calls=[],errors=[],button={hidden:true,textContent:''};
  let inClick=false;
  const video={
    muted:false,volume:1,currentTime:0,controls:true,paused:true,
    play() {
      calls.push({source:this.src,muted:this.muted,volume:this.volume,time:this.currentTime,inClick});
      const outcome=outcomes.shift();
      if(outcome instanceof Error)return Promise.reject(outcome);
      if(outcome)return outcome;
      this.paused=false;
      return Promise.resolve();
    },
    pause(){this.paused=true;},
    removeAttribute(name){delete this[name];},
    load(){this.currentTime=0;},
  };
  const player=new IntroPlayback(video,button,{mutedAutoplay:true,onError:error=>errors.push(error),...options});
  const click=()=>{
    inClick=true;
    try{return button.onclick();}finally{inClick=false;}
  };
  return {video,button,player,calls,errors,click};
}

test('allowed autoplay starts with the selected volume and needs no action',async()=>{
  const {video,button,player,calls,errors}=fixture();
  await player.start('intro.webm',.6);
  assert.deepEqual(calls,[{source:'intro.webm',muted:false,volume:.6,time:0,inClick:false}]);
  assert.equal(video.paused,false);
  assert.equal(video.controls,false);
  assert.equal(button.hidden,true);
  assert.deepEqual(errors,[]);
});

test('blocked audible autoplay retries muted and offers sound without rewinding',async()=>{
  const {video,button,player,calls,errors,click}=fixture([mediaError('NotAllowedError')]);
  await player.start('intro.webm',.35);
  assert.deepEqual(calls.map(call=>call.muted),[false,true]);
  assert.equal(video.paused,false);
  assert.equal(button.hidden,false);
  assert.equal(button.textContent,'Geluid inschakelen');
  video.currentTime=14.5;
  const activation=click();
  assert.deepEqual(calls.at(-1),{source:'intro.webm',muted:false,volume:.35,time:14.5,inClick:true},'unmute and play run within the click handler');
  await activation;
  assert.equal(video.currentTime,14.5);
  assert.equal(button.hidden,true);
  assert.deepEqual(errors,[]);
});

test('blocking both attempts leaves a play action that starts unmuted from the click',async()=>{
  const {video,button,player,calls,errors,click}=fixture([mediaError('NotAllowedError'),mediaError('NotAllowedError')]);
  await player.start('intro.webm',.42);
  assert.equal(calls.length,2);
  assert.equal(video.paused,true);
  assert.equal(button.hidden,false);
  assert.equal(button.textContent,'Afspelen');
  video.currentTime=8;
  const activation=click();
  assert.deepEqual(calls.at(-1),{source:'intro.webm',muted:false,volume:.42,time:8,inClick:true});
  await activation;
  assert.equal(video.paused,false);
  assert.equal(button.hidden,true);
  assert.deepEqual(errors,[]);
});

test('a rejected click remains recoverable without another automatic muted attempt',async()=>{
  const {button,player,calls,click}=fixture(Array.from({length:3},()=>mediaError('NotAllowedError')));
  await player.start('intro.webm',.6);
  await click();
  assert.equal(calls.length,3);
  assert.equal(calls.at(-1).muted,false);
  assert.equal(button.hidden,false);
  assert.equal(button.textContent,'Afspelen');
});

test('stopping while initial autoplay is pending prevents a late retry',async()=>{
  const pending=pendingPlay();
  const {video,button,player,calls,errors,click}=fixture([pending.promise]);
  const playback=player.start('intro.webm',.6);
  player.stop();
  pending.reject(mediaError('NotAllowedError'));
  await playback;
  await click();
  assert.equal(calls.length,1);
  assert.equal(video.paused,true);
  assert.equal(video.src,undefined);
  assert.equal(video.muted,false);
  assert.equal(button.hidden,true);
  assert.deepEqual(errors,[]);
});

test('stopping during the muted retry ignores its late failure',async()=>{
  const pending=pendingPlay();
  const {video,button,player,calls,errors}=fixture([mediaError('NotAllowedError'),pending.promise]);
  const playback=player.start('intro.webm',.6);
  await Promise.resolve();
  assert.equal(calls.length,2,'muted retry has begun');
  player.stop();
  pending.reject(mediaError('NotSupportedError'));
  await playback;
  assert.equal(video.muted,false);
  assert.equal(button.hidden,true);
  assert.deepEqual(errors,[]);
});

test('a late success from an older intro cannot hide a newer blocked movie action',async()=>{
  const pending=pendingPlay();
  const {video,button,player,calls}=fixture([pending.promise,mediaError('NotAllowedError'),mediaError('NotAllowedError')]);
  const previous=player.start('intro.webm',.6);
  await player.start('outro.webm',.25);
  assert.equal(button.textContent,'Afspelen');
  pending.resolve();
  await previous;
  assert.equal(video.src,'outro.webm');
  assert.equal(video.volume,.25);
  assert.equal(button.hidden,false);
  assert.equal(button.textContent,'Afspelen');
  assert.equal(calls.length,3);
});

test('a late rejection from an older intro cannot mute or restart its replacement',async()=>{
  const pending=pendingPlay();
  const {video,button,player,calls,errors}=fixture([pending.promise]);
  const previous=player.start('intro.webm',.6);
  await player.start('outro.webm',.25);
  pending.reject(mediaError('NotAllowedError'));
  await previous;
  assert.equal(calls.length,2);
  assert.equal(video.src,'outro.webm');
  assert.equal(video.muted,false);
  assert.equal(video.volume,.25);
  assert.equal(button.hidden,true);
  assert.deepEqual(errors,[]);
});

test('a new movie resets mute state left by the automatic browser fallback',async()=>{
  const {video,button,player,calls}=fixture([mediaError('NotAllowedError')]);
  await player.start('intro.webm',.6);
  assert.equal(video.muted,true);
  await player.start('outro.webm',.6);
  assert.equal(calls.at(-1).muted,false);
  assert.equal(video.muted,false);
  assert.equal(button.hidden,true);
});

test('zero volume stays silent and does not offer a misleading sound action',async()=>{
  const {video,button,player,calls,click}=fixture([mediaError('NotAllowedError')]);
  await player.start('intro.webm',0);
  assert.equal(button.hidden,true);
  assert.equal(video.volume,0);
  await click();
  assert.equal(video.volume,0);
  assert.ok(calls.every(call=>call.volume===0));
  assert.equal(button.hidden,true);
});

test('desktop playback does not automatically fall back to muted audio',async()=>{
  const {video,button,player,calls,click}=fixture([mediaError('NotAllowedError')],{mutedAutoplay:false});
  await player.start('intro.webm',.7);
  assert.equal(calls.length,1);
  assert.equal(video.muted,false);
  assert.equal(button.hidden,false);
  assert.equal(button.textContent,'Afspelen');
  await click();
  assert.equal(calls.length,2);
  assert.equal(calls.at(-1).muted,false);
  assert.equal(video.volume,.7);
  assert.equal(button.hidden,true);
});

test('unsupported media reports its error without an automatic retry',async()=>{
  const error=mediaError('NotSupportedError');
  const {video,button,player,calls,errors}=fixture([error]);
  await player.start('unsupported.webm',.6);
  assert.equal(calls.length,1);
  assert.equal(video.muted,false);
  assert.equal(button.hidden,true);
  assert.deepEqual(errors,[error]);
});
