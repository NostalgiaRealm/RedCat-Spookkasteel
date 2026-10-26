import {LEVEL_IDS, validAdventureSave} from './campaign-progress.js';

export const HIGHSCORES_KEY='redcat.highscores.v1';
// Settings/menu.ini [HIGHSCORES], ten visible entries. The native table labels
// its existing rows "Klaar!" (0x55f4cc); a newly inserted score has a chapter.
const DEFAULT_NAMES=['Teun','Gyda','Paul','Brian','Pascal','John','Rob','Tineke','Harry','Rene'];
const seeds=()=>DEFAULT_NAMES.map((name,index)=>({id:`original:${index}`,name,score:100-index*10,level:null}));
const validEntry=entry=>entry&&typeof entry.id==='string'&&entry.id.length<=100&&
  typeof entry.name==='string'&&entry.name.length>0&&entry.name.length<=128&&
  Number.isSafeInteger(entry.score)&&entry.score>=0&&
  (entry.level===null||LEVEL_IDS.includes(entry.level));

export function readHighscores(value){
  if(value?.version!==1||!Array.isArray(value.entries)||value.entries.length>10||!value.entries.every(validEntry))return {version:1,entries:seeds()};
  const seen=new Set();
  return {version:1,entries:value.entries.filter(entry=>{if(seen.has(entry.id))return false;seen.add(entry.id);return true;})
    .map(entry=>({...entry})).sort((a,b)=>b.score-a.score)};
}

export function recordHighscore(value,player,save){
  const table=readHighscores(value);
  if(!player||typeof player.id!=='string'||typeof player.name!=='string'||!validAdventureSave(save))return table;
  const score=save.game.state.score;
  if(!Number.isSafeInteger(score)||score<0)return table;
  const id=`player:${player.id}`,old=table.entries.find(entry=>entry.id===id);
  // Retain a player's best entry across replays/recovery. Unlike native, merely
  // opening the Highscores page repeatedly cannot fill it with duplicate rows.
  if(old&&(old.score>score||(old.score===score&&LEVEL_IDS.indexOf(old.level)>=LEVEL_IDS.indexOf(save.level))))return table;
  const entry={id,name:player.name,score,level:save.level};
  table.entries=[entry,...table.entries.filter(item=>item.id!==id)].sort((a,b)=>b.score-a.score).slice(0,10);
  return table;
}
