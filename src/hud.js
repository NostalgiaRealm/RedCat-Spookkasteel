// Layout and masked artwork are imported directly from HUDIcon.ini/HUDicon.bmp.
export const ENEMY_PORTRAITS={bat:0,ghost:3,spider:6,brutusm:9,brutusb:9,maxj:10,maxd:11,skeleton:12,zombie:13,guardian:15,knight:14,witch:16,gargoyle:17,frog:18,plant:19};
export function enemyPortrait(enemy){
  const base=ENEMY_PORTRAITS[enemy?.enemyType]??0;
  return ['spider','ghost','bat'].includes(enemy?.enemyType)?base+Math.max(0,Math.min(2,(Number(enemy.variant??enemy.entity?.SubType)||1)-1)):base;
}
export function hudCommands(manifest,state,totalPotions,enemy,width=640,height=480) {
  const out=[],right=width-manifest.width,bottom=height-manifest.height;
  const sprite=(name,frame=0,dx=0)=>{
    const p=manifest.positions[name];if(!p||p.disabled)return;
    const s=manifest.sprites[p.sprite];
    out.push({name,frame,sx:s.BaseX+frame%s.TotalPerLine*s.SizeX,sy:s.BaseY+Math.floor(frame/s.TotalPerLine)*s.SizeY,w:s.SizeX,h:s.SizeY,
      x:p.x+dx+(p.x>=500?right:0),y:p.y+(p.y>=400?bottom:0)});
  };
  const number=(name,value)=>String(Math.max(0,Math.floor(Number(value)||0))).split('').forEach((digit,i)=>sprite(name,Number(digit),i*manifest.sprites[manifest.positions[name].sprite].SizeX));
  const hearts=(name,health,max)=>{
    const count=Math.max(1,Math.ceil(max/2));
    for(let i=0;i<count;i++)sprite(name,health>=i*2+2?0:health>i*2?1:2,i*manifest.sprites[manifest.positions[name].sprite].SizeX);
  };
  sprite('HealthIcon');hearts('HealthContainer',state.health,state.maxHealth||10);
  sprite('LifeIcon');number('LifeNumber',state.lives);
  sprite('PotionIcon');number('PotionNumber',state.potions);
  // Preserve the native two-digit spacing, extending it for cheat supplies.
  const extra=Math.max(0,String(Math.max(0,state.potions||0)).length-2)*14;
  sprite('Slash',0,extra);
  const start=out.length;number('TotalPotionNumber',totalPotions);for(let i=start;i<out.length;i++)out[i].x+=extra;
  sprite('ScoreIcon');number('ScoreNumber',state.score);
  if(enemy&&(enemy.kind===undefined||enemy.kind==='enemy')&&enemy.health>0){sprite('EnemyPortrait',enemyPortrait(enemy));hearts('EnemyHealth',enemy.health,enemy.maxHealth||enemy.health);}
  return out;
}

// Fit the original HUD in both dimensions: height-only scaling overflows
// portrait phones. Touch controls reserve space below the enemy health meter.
export function hudViewport(manifest,width,height,viewWidth,viewHeight,{bottomInset=0,pixelRatio=1}={}) {
  const fit=Math.min(width/viewWidth,height/viewHeight),drawWidth=viewWidth*fit,drawHeight=viewHeight*fit;
  const scale=Math.min(drawHeight/manifest.height,drawWidth/manifest.width);
  const inset=Math.min(Math.max(0,bottomInset*pixelRatio),Math.max(0,drawHeight-scale*150));
  return {scale,x:(width-drawWidth)/2,y:(height-drawHeight)/2,logicalWidth:drawWidth/scale,logicalHeight:(drawHeight-inset)/scale};
}
export class OriginalHud {
  constructor(canvas){this.canvas=canvas;this.context=canvas.getContext('2d');this.ready=this.load();}
  async load(){
    const response=await fetch('assets/hud/manifest.json');if(!response.ok)throw new Error('Originele HUD ontbreekt. Voer tools/import_hud.py uit.');
    this.manifest=await response.json();this.atlas=new Image();this.atlas.src='assets/hud/'+this.manifest.atlas;await this.atlas.decode();
  }
  render(state,totalPotions,enemy,viewWidth,viewHeight,{bottomInset=0}={}){
    if(!this.atlas?.complete||!this.manifest)return;
    const canvas=this.canvas,rect=canvas.getBoundingClientRect(),pixelRatio=window.devicePixelRatio||1;
    const width=Math.max(1,Math.round(rect.width*pixelRatio)),height=Math.max(1,Math.round(rect.height*pixelRatio));
    if(canvas.width!==width||canvas.height!==height){canvas.width=width;canvas.height=height;}
    const ctx=this.context;ctx.setTransform(1,0,0,1,0,0);ctx.clearRect(0,0,width,height);
    // The game canvas is fitted without stretching, including fixed 4:3 modes.
    const {scale,x,y,logicalWidth,logicalHeight}=hudViewport(this.manifest,width,height,viewWidth,viewHeight,{bottomInset,pixelRatio});
    ctx.setTransform(scale,0,0,scale,x,y);ctx.imageSmoothingEnabled=true;
    for(const c of hudCommands(this.manifest,state,totalPotions,enemy,logicalWidth,logicalHeight))ctx.drawImage(this.atlas,c.sx,c.sy,c.w,c.h,c.x,c.y,c.w,c.h);
  }
}
