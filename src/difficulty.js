// Original menu.ini entries 49..51 and native difficulty dispatch 0x4256b4:
// 0 -> Easy, 1 -> Normal, 2 -> Hard. PlayerDef.ini defaults to 1.
export const DIFFICULTIES=Object.freeze([
  Object.freeze({id:0,value:'Easy',label:'Makkelijk'}),
  Object.freeze({id:1,value:'Normal',label:'Normaal'}),
  Object.freeze({id:2,value:'Hard',label:'Moeilijk'}),
]);

export function normalizeDifficulty(value) {
  if(typeof value==='number')return DIFFICULTIES.find(option=>option.id===value)?.value||'Normal';
  if(typeof value==='string')return DIFFICULTIES.find(option=>option.value.toLowerCase()===value.trim().toLowerCase())?.value||'Normal';
  return 'Normal';
}
