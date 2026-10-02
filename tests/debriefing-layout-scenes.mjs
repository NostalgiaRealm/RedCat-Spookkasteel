import assert from 'node:assert/strict';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import {resolve} from 'node:path';
import {chromium} from 'playwright';

// Scoreboard layout only: no level simulation or unrelated control checks.
process.env.TMPDIR='current_work';
const output=`current_work/debriefing-layout-${Date.now()}`;
await mkdir(output,{recursive:true});
const port=Number(process.env.DEBRIEFING_TEST_PORT||4317);
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:String(port)},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let browser;
const report=[];
try{
  browser=await chromium.launchPersistentContext(resolve(output,'profile'),{executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,deviceScaleFactor:2,args:['--use-angle=gl']});
  const page=browser.pages()[0],errors=[];
  page.on('pageerror',e=>errors.push(String(e)));
  await page.goto(`http://127.0.0.1:${port}/?skipIntro`);
  await page.waitForFunction(()=>window.__redcat);
  await page.evaluate(async()=>{
    const {OriginalDebriefing}=await import('./src/debriefing.js');
    const d=window.layoutDebriefing=new OriginalDebriefing(document.querySelector('#debriefing'),()=>{},{mobile:true});
    await d.ready;
    // Desktop browser without orientation information exercises viewport fallback.
    Object.defineProperty(screen,'orientation',{configurable:true,value:undefined});
    d.show({level:'lvl04a',rows:['Potion','Money','Enemy','Secret'].map(kind=>({kind,found:150,total:150,bonus:2250})),oldScore:999999,bonus:9000,newScore:1008999});
    d.update(1);
    const c=d.canvas.getContext('2d'),draw=c.fillText.bind(c);
    c.fillText=(text,x,y)=>{
      const width=c.measureText(text).width,left=x-(c.textAlign==='right'?width:c.textAlign==='center'?width/2:0);
      window.layoutLabels.push({text,left,right:left+width,y,height:parseFloat(c.font)});
      draw(text,x,y);
    };
  });
  for(const [width,height,safe=false] of [[390,844],[844,390],[320,568],[768,1024],[800,600],[2560,1080],[480,270],[390,844,true]]){
    await page.setViewportSize({width,height});
    const result=await page.evaluate(safe=>{
      const d=window.layoutDebriefing;
      d.element.style.padding=safe?'24px 12px 30px 12px':'0';
      window.layoutLabels=[];d.render();
      const frame=d.canvas.getBoundingClientRect(),transform=d.canvas.getContext('2d').getTransform(),style=getComputedStyle(d.element),button=d.button.getBoundingClientRect();
      return {width:frame.width,height:frame.height,x:frame.x,y:frame.y,a:transform.a,d:transform.d,background:style.backgroundSize,image:style.backgroundImage,labels:window.layoutLabels,button:{bottom:button.bottom,right:button.right},bitmap:[d.canvas.width,d.canvas.height],dpr:devicePixelRatio};
    },safe);
    assert.equal(result.width,width-(safe?24:0));assert.equal(result.height,height-(safe?54:0));
    assert.equal(result.a,result.d,'glyphs use the same scale on each axis');
    assert.equal(result.background,'100% 100%');assert.match(result.image,/background\.png/);
    assert.equal(result.bitmap[0],result.width*result.dpr);assert.equal(result.bitmap[1],result.height*result.dpr);
    assert.ok(result.button.bottom<=height && result.button.right<=width);
    for(const label of result.labels)assert.ok(label.left>=0 && label.right<=result.width && label.y>=0 && label.y+label.height<=result.height,`text fits: ${label.text}`);
    for(const y of new Set(result.labels.map(l=>l.y))){
      const row=result.labels.filter(l=>l.y===y).sort((a,b)=>a.left-b.left);
      for(let i=1;i<row.length;i++)assert.ok(row[i-1].right<=row[i].left,`columns overlap at ${width}x${height}: ${row[i-1].text} / ${row[i].text}`);
    }
    report.push({viewport:[width,height],safe,...result});
    await page.screenshot({path:`${output}/${width}x${height}${safe?'-safe':''}.png`});
  }
  assert.deepEqual(errors,[]);
  console.log(`PASS ${report.length} fullscreen scoreboard layouts, uniform text scaling, large counts, viewport fallback and safe areas`);
}finally{
  await writeFile(`${output}/report.json`,JSON.stringify(report,null,2)+'\n');
  await browser?.close();server.kill();console.log(output);
}
