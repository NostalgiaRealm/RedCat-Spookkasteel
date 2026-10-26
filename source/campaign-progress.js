// Native quick-play availability follows the adventure's reached chapter.
// Keep portable unlocks separate from the single checkpoint, so replaying an
// earlier chapter cannot erase already earned menu access.
export const LEVEL_IDS=Object.freeze(['lvl00a','lvl01a','lvl02a','lvl03a','lvl04a']);
export const CHAPTER_ART_SIZE=Object.freeze({width:150,height:171});
const validIndex=value=>Number.isInteger(value)&&value>=0&&value<LEVEL_IDS.length;
const highest=progress=>progress?.version===1&&validIndex(progress.highestUnlocked)?progress.highestUnlocked:0;
const validSkills=value=>Number.isInteger(value)&&value>=0&&value<=31?value:0;

export function campaignSkills(progress) {
  return progress?.version===1?validSkills(progress.earnedSkills):0;
}

export function earnCampaignSkill(progress,skill) {
  const result=readCampaignProgress(progress);
  if(Number.isInteger(skill)&&skill>=0&&skill<=4)result.earnedSkills=campaignSkills(result)|(1<<skill);
  return result;
}

export function validAdventureSave(save) {
  return save?.version===1&&LEVEL_IDS.includes(save.level)&&Array.isArray(save.position)&&save.position.length===3&&
    save.position.every(Number.isFinite)&&Number.isFinite(save.yaw)&&Number.isFinite(save.pitch)&&
    !!save.game&&typeof save.game==='object'&&!Array.isArray(save.game)&&save.game.version===1&&save.game.level===save.level&&
    !!save.game.state&&typeof save.game.state==='object'&&!Array.isArray(save.game.state)&&Number.isFinite(save.game.state.health);
}

export function readCampaignProgress(stored,legacySave=null) {
  let unlocked=highest(stored);
  let skills=campaignSkills(stored);
  const played=new Set(stored?.version===1&&Array.isArray(stored.playedLevels)?stored.playedLevels.filter(id=>LEVEL_IDS.includes(id)):[]);
  // Earlier source releases exposed every chapter. Keep a valid existing
  // adventure playable; its current chapter is the available migration proof.
  // Inventory cheats, difficulty choice and a mere menu selection are not proof.
  if(validAdventureSave(legacySave)) {
    played.add(legacySave.level);
    skills|=validSkills(legacySave.game.state.skill);
    const index=LEVEL_IDS.indexOf(legacySave.level);
    unlocked=Math.max(unlocked,Math.min(LEVEL_IDS.length-1,index+(legacySave.game.completed===true?1:0)));
  }
  return {version:1,highestUnlocked:unlocked,...(skills?{earnedSkills:skills}:{}),...(played.size?{playedLevels:LEVEL_IDS.filter(id=>played.has(id))}:{})};
}

// Access to a chapter is not evidence of having played it: completion unlocks
// the next unvisited chapter, and the explicit cheat can unlock all five.
export function isCampaignLevelReplay(progress,index,{save=null,newAdventure=false}={}) {
  if(!validIndex(index)||newAdventure)return false;
  if(save)return validAdventureSave(save)&&save.level===LEVEL_IDS[index]&&save.game.scripts?.replayLevel===true;
  return readCampaignProgress(progress).playedLevels?.includes(LEVEL_IDS[index])===true;
}

export function recordPlayedCampaignLevel(progress,levelId,{newAdventure=false}={}) {
  const result=readCampaignProgress(progress);
  if(!LEVEL_IDS.includes(levelId))return result;
  const played=new Set(newAdventure?[]:result.playedLevels||[]);played.add(levelId);
  result.playedLevels=LEVEL_IDS.filter(id=>played.has(id));return result;
}

export function canStartCampaignLevel(progress,index) {
  return validIndex(index)&&index<=highest(progress);
}

export function completeCampaignLevel(progress,levelId) {
  const result=readCampaignProgress(progress),index=LEVEL_IDS.indexOf(levelId);
  if(canStartCampaignLevel(result,index)) {
    result.highestUnlocked=Math.max(result.highestUnlocked,Math.min(LEVEL_IDS.length-1,index+1));
    return recordPlayedCampaignLevel(result,levelId);
  }
  return result;
}

export function chapterArtwork(index,{unlocked=false,hovered=false,selected=false,pressed=false}={}) {
  if(!validIndex(index))return null;
  // 00 = free grayscale idle; 01/02 = free colour hover/down;
  // 03/04 = chained idle/hover. A grayscale card alone is not locked.
  const state=unlocked?(pressed||selected?2:hovered?1:0):(hovered?4:3);
  return `assets/menu/040${index}000${state}.png`;
}
