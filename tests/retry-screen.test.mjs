import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {OriginalRetry,retrySelection,retryKeyAction,RETRY_YES,RETRY_NO} from '../source/retry-screen.js';
import {DEFAULT_CONTROL_BINDINGS,assignControlBinding} from '../source/control-bindings.js';

const manifest=JSON.parse(readFileSync(new URL('../assets/retry/manifest.json',import.meta.url)));
// A DOM-free stand-in for the #retry section; drawing is skipped without artwork.
function fixture() {
  const listeners=()=>({addEventListener(){}});
  const buttons=['1','0'].map(value=>({dataset:{retry:value},style:{},focused:false,setAttribute(){},focus(){this.focused=true;}}));
  const status={textContent:''};
  const element={hidden:true,ownerDocument:null,buttons,status,
    querySelector:selector=>selector==='canvas'?listeners():status,
    querySelectorAll:()=>buttons};
  const choices=[];
  class Retry extends OriginalRetry {load(){this.manifest=manifest;return Promise.resolve();}}
  return {retry:new Retry(element,yes=>choices.push(yes)),element,buttons,choices};
}

test('the imported layout and Dutch labels are the original Retry.ini and LanguageNL.ini values',()=>{
  assert.deepEqual(manifest.text,{RetryTitle:'Opnieuw proberen?',RetryText:'Wil je dit level opnieuw spelen?',YesText:'Ja',NoText:'Nee'});
  const l=manifest.layout;
  // Present in Retry.ini, but the original never reads them: the state has no fade.
  assert.equal(l.FadeInTime,'0.400000');assert.equal(l.FadeOutTime,'0.400000');
  assert.deepEqual(['X','Y','Width','Height','BaseY'].map(k=>l['ImageYesBtn.'+k]),['360','426','140','54','0']);
  assert.deepEqual(['X','Y','Width','Height','BaseY'].map(k=>l['ImageNoBtn.'+k]),['500','426','140','54','128']);
});

test('movement left selects Ja and right selects Nee, as 0x48ace0 reads the move vector',()=>{
  assert.equal(retrySelection(RETRY_NO,-1),RETRY_YES);
  assert.equal(retrySelection(RETRY_YES,1),RETRY_NO);
  assert.equal(retrySelection(RETRY_NO,0),RETRY_NO);
  const keys=code=>retryKeyAction(code,DEFAULT_CONTROL_BINDINGS);
  assert.deepEqual(['ArrowLeft','KeyA','ArrowRight','KeyD'].map(keys),['yes','yes','no','no']);
  assert.deepEqual(['ControlLeft','ControlRight','Space','Enter'].map(keys),['confirm','confirm','confirm','confirm']);
  assert.equal(keys('Escape'),'ignore','the original screen has no cancel');
  assert.equal(keys('KeyW'),null);
  // Custom bindings are followed.
  const remapped=assignControlBinding(DEFAULT_CONTROL_BINDINGS,'turnLeft','KeyJ').bindings;
  assert.equal(retryKeyAction('KeyJ',remapped),'yes');
});

test('Ja is selected by default; input works from the first frame and a confirm closes the screen on the next',()=>{
  const {retry,element,buttons,choices}=fixture();
  retry.show();
  assert.equal(element.hidden,false);assert.equal(retry.selection,RETRY_YES,'0x51cee0 selects Ja');
  assert.equal(buttons[0].focused,true);
  assert.equal(element.status.textContent,'Opnieuw proberen? Wil je dit level opnieuw spelen?');
  retry.key('Escape',DEFAULT_CONTROL_BINDINGS);assert.equal(retry.phase,'shown','Escape does nothing');
  // No fade (HasFade 0x53dc80): selection and confirm work at once.
  retry.key('ArrowRight',DEFAULT_CONTROL_BINDINGS);assert.equal(retry.selection,RETRY_NO);
  retry.key('ArrowLeft',DEFAULT_CONTROL_BINDINGS);assert.equal(retry.selection,RETRY_YES);
  retry.key('Space',DEFAULT_CONTROL_BINDINGS);assert.equal(retry.phase,'done');assert.deepEqual(choices,[]);
  retry.key('ArrowRight',DEFAULT_CONTROL_BINDINGS);assert.equal(retry.selection,RETRY_YES,'the choice is final');
  retry.update();assert.deepEqual(choices,[true]);assert.equal(element.hidden,true);
  retry.update();assert.deepEqual(choices,[true],'chosen once');
});

test('held input is read every frame: x < 0 Ja, x > 0 Nee, any mouse movement, and a held Fire confirms at once',()=>{
  const {retry,choices}=fixture();
  retry.show();retry.input({x:.02});assert.equal(retry.selection,RETRY_NO,'no threshold: a tiny sideways mouse movement flips it');
  retry.input({x:0});assert.equal(retry.selection,RETRY_NO,'no movement keeps the choice');
  retry.input({x:-1});assert.equal(retry.selection,RETRY_YES);
  // Fire still held from play confirms on the first frame.
  retry.show();retry.input({confirm:true});retry.update();assert.deepEqual(choices,[true]);
});
test('clicking or tapping Nee selects and confirms it; showing again starts on Ja',()=>{
  const {retry,buttons,choices}=fixture();
  retry.show();
  buttons[1].onclick();retry.update();
  assert.deepEqual(choices,[false]);
  retry.show();assert.equal(retry.selection,RETRY_YES);
  // A controller moving focus selects the focused button.
  buttons[1].onfocus();assert.equal(retry.selection,RETRY_NO);
});
