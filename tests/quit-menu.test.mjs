import test from 'node:test';
import assert from 'node:assert/strict';
import {QuitMenu} from '../src/quit-menu.js';
const element=()=>({open:false,disabled:false,textContent:'',addEventListener(){},showModal(){this.open=true;},close(){this.open=false;},focus(){}});
function setup(){
 const calls=[];let ended,closes=0;
 const audio={say(files){calls.push(files);if(files.length===2)return new Promise(r=>ended=r);return Promise.resolve();},stopMusic(){},startMusic(){}};
 const menu=new QuitMenu({dialog:element(),openButton:element(),yesButton:element(),noButton:element(),status:element(),audio,browser:true,closeGame:async()=>{closes++;}});
 return {menu,calls,finish:()=>ended(),closes:()=>closes};
}
test('Stoppen and Nee play their original voices and dismiss without quitting',()=>{
 const {menu,calls,closes}=setup();menu.open();assert.ok(menu.dialog.open);menu.cancel();
 assert.deepEqual(calls,[['mn_red23.wav'],['rcmn4.wav']]);assert.equal(menu.dialog.open,false);assert.equal(closes(),0);
});
test('Ja waits for both clips and prevents double quit or cancellation',async()=>{
 const {menu,calls,closes,finish}=setup();menu.open();const pending=menu.confirm();menu.confirm();menu.cancel();
 assert.equal(closes(),0);assert.ok(menu.dialog.open);assert.ok(menu.yesButton.disabled);
 assert.deepEqual(calls.at(-1),['rcmn3.wav','mn_red28.wav']);assert.equal(calls.length,2);
 finish();await pending;assert.equal(closes(),1);assert.equal(menu.status.textContent,'Je kunt dit tabblad nu sluiten.');
 assert.equal(menu.noButton.disabled,false);
});
