import test from 'node:test';
import assert from 'node:assert/strict';
import {FrameLimiter,fastSrgbOutput,RenderQuality,normalizeRenderScale,scaledRenderSize} from '../source/render-quality.js';
const run=(q,fps,seconds)=>{for(let i=0;i<fps*seconds;i++)q.sample(1/fps,true);};
test('100% default and proportional dimensions',()=>{
 assert.equal(normalizeRenderScale(undefined),100);
 assert.equal(normalizeRenderScale(NaN),100);
 assert.equal(normalizeRenderScale(0),25);
 assert.deepEqual(scaledRenderSize(1920,1080,.75),[1440,810]);
 assert.deepEqual(scaledRenderSize(1920,1080,.5),[960,540]);
 assert.deepEqual(scaledRenderSize(1920,1080,.25),[480,270]);
});
test('sustained slow rendering drops to 75%, 50%, then 25% and stops',()=>{
 const q=new RenderQuality();
 for(const scale of [.75,.5,.25]){run(q,20,6);assert.equal(q.scale(),scale);}
 run(q,20,20);assert.equal(q.scale(),.25);assert.equal(q.reductions,3);
 q.reset();assert.equal(q.scale(),1);
});
test('manual scale drops by percentage points and never below 25%',()=>{
 const q=new RenderQuality();
 for(let i=0;i<120;i++)q.sample(.05,true,60);
 assert.equal(q.scale(60),.35);
 for(let i=0;i<400;i++)q.sample(.05,true,60);
 assert.equal(q.scale(60),.25);assert.equal(q.reductions,2);
 q.reset();for(let i=0;i<400;i++)q.sample(.05,true,25);
 assert.equal(q.reductions,0);assert.equal(q.scale(25),.25);
});
test('healthy frames, isolated hitches and pause/loading do not lower quality',()=>{
 const q=new RenderQuality();run(q,60,10);assert.equal(q.reductions,0);
 q.sample(.8,true);run(q,60,5);assert.equal(q.reductions,0);
 for(let i=0;i<10;i++){run(q,20,2);q.sample(.05,false);}
 assert.equal(q.reductions,0);
 q.sample(10,true);assert.equal(q.fps,null);
});
test('recovered FPS prevents a second reduction',()=>{
 const q=new RenderQuality();run(q,20,6);run(q,60,15);
 assert.equal(q.reductions,1);assert.ok(q.fps>59);
});
test('supersampling permits 300% and reduces in 25-point steps to the floor',()=>{
 assert.equal(normalizeRenderScale(300),300);assert.equal(normalizeRenderScale(500),300);
 assert.equal(normalizeRenderScale(150),150);
 assert.deepEqual(scaledRenderSize(1920,1080,3),[5760,3240]);
 const q=new RenderQuality();assert.equal(q.scale(300),3);
 for(let step=1;step<=11;step++){
  let changed=false;
  for(let i=0;i<160&&!changed;i++)changed=q.sample(.05,true,300);
  assert.equal(changed,true);assert.equal(q.scale(300),3-step*.25);
 }
 for(let i=0;i<200;i++)q.sample(.05,true,300);
 assert.equal(q.scale(300),.25);assert.equal(q.reductions,11);
});

test('automatic settings changes commit exact 75/50/25 scales and disable MSAA without double reductions',()=>{
 const q=new RenderQuality(),settings={renderScale:100,msaa:8};
 for(const expected of [75,50,25]){
  let changed=false;
  for(let i=0;i<160&&!changed;i++)changed=q.updateSettings(.05,true,settings);
  assert.equal(changed,true);
  assert.equal(settings.renderScale,expected);
  assert.equal(q.scale(settings.renderScale),expected/100);
  assert.equal(settings.msaa,0);
  assert.equal(q.reductions,0);
 }
 for(let i=0;i<400;i++)assert.equal(q.updateSettings(.05,true,settings),false);
 assert.deepEqual(settings,{renderScale:25,msaa:0});
});

test('committed quality survives resets/reload; recovering FPS never re-enables MSAA',()=>{
 const q=new RenderQuality(),settings={renderScale:100,msaa:4};
 for(let i=0;i<120;i++)q.updateSettings(.05,true,settings);
 assert.deepEqual(settings,{renderScale:75,msaa:0});
 const saved=JSON.parse(JSON.stringify(settings));
 q.reset();for(let i=0;i<600;i++)q.updateSettings(1/60,true,settings);
 assert.deepEqual(settings,saved);
 assert.equal(q.scale(settings.renderScale),.75);
 const reloaded=new RenderQuality();assert.equal(reloaded.scale(saved.renderScale),.75);
 settings.msaa=4;q.reset(); // Manual OK can re-enable it.
 for(let i=0;i<600;i++)q.updateSettings(1/60,true,settings);
 assert.equal(settings.msaa,4);
});

test('low FPS at minimum scale can still disable MSAA, while pause/loading cannot',()=>{
 const q=new RenderQuality(),settings={renderScale:25,msaa:4};
 for(let i=0;i<200;i++)assert.equal(q.updateSettings(.05,false,settings),false);
 assert.equal(settings.msaa,4);
 let changes=0;
 for(let i=0;i<400;i++)if(q.updateSettings(.05,true,settings))changes++;
 assert.equal(changes,1);
 assert.deepEqual(settings,{renderScale:25,msaa:0});
});

test('committed manual and supersampling scales use 25 percentage-point steps',()=>{
 for(const [start,expected] of [[60,35],[35,25],[300,275]]){
  const q=new RenderQuality(),settings={renderScale:start,msaa:0};
  let changed=false;for(let i=0;i<160&&!changed;i++)changed=q.updateSettings(.05,true,settings);
  assert.equal(changed,true);assert.equal(settings.renderScale,expected);
  assert.equal(q.scale(settings.renderScale),expected/100);
 }
});

test('frame limiter keeps a 60 Hz display and halves a 120 Hz display',()=>{
  const run=(hz,count=240)=>{const limiter=new FrameLimiter();let ran=0;for(let i=0;i<count;i++)if(limiter.ready(1000+i*1000/hz))ran++;return ran;};
  assert.equal(run(60),240);
  assert.equal(run(120),120);
  assert.ok(Math.abs(run(90,270)-180)<=2);
});

test('fast sRGB output stays within about a byte of the exact curve and rejects an unknown chunk',()=>{
  const exact=x=>x<=.0031308?x*12.92:1.055*x**.41666-.055;
  const fast=x=>x<=.0031308?x*12.92:Math.max(.585122381*Math.sqrt(x)+.783140355*x**.25-.368262736*x**.125,0);
  for(let byte=0;byte<=255;byte++){const v=byte/255,x=v<=.04045?v/12.92:((v+.055)/1.055)**2.4;assert.ok(Math.abs(exact(x)-fast(x))*255<1.2,`byte ${byte}`);}
  const chunk='vec4( mix( pow( value.rgb, vec3( 0.41666 ) ) * 1.055 - vec3( 0.055 ), value.rgb * 12.92, vec3( lessThanEqual( value.rgb, vec3( 0.0031308 ) ) ) ), value.a )';
  assert.ok(!fastSrgbOutput(chunk).includes('pow('));
  assert.throws(()=>fastSrgbOutput('vec4 somethingElse;'));
});
