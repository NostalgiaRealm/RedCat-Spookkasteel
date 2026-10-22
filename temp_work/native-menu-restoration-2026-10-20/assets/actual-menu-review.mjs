import {chromium} from 'playwright';
import {mkdir,writeFile} from 'node:fs/promises';
import {resolve} from 'node:path';
const out=resolve('temp_work/native-menu-restoration-2026-10-20/assets');
const report={scenes:[],errors:[],badResponses:[],checks:[]};
await mkdir('temp_work/menu-ui-tmp',{recursive:true});process.env.TMPDIR='temp_work/menu-ui-tmp';
for(const [name,width,height,isMobile] of [['desktop',800,600,false],['phone',390,844,true],['small-phone',320,568,true]]){
 const context=await chromium.launchPersistentContext(resolve(out,'actual-'+name+'-profile'),{executablePath:'/usr/bin/google-chrome',headless:true,viewport:{width,height},isMobile,hasTouch:isMobile,args:['--no-sandbox','--use-angle=swiftshader','--enable-unsafe-swiftshader'],env:{...process.env}});
 try{
  await context.addInitScript(()=>{
   localStorage.setItem('redcat.settings.v1',JSON.stringify({autoIntro:false,fullscreen:false,touchControls:'auto'}));
   localStorage.setItem('redcat.players.v1',JSON.stringify({version:1,activeId:'legacy',players:[{id:'legacy',name:'Rick'}]}));
   localStorage.setItem('redcat.save.v1',JSON.stringify({version:1,level:'lvl02a',position:[0,0,0],yaw:0,pitch:0,game:{version:1,level:'lvl02a',state:{health:10,score:800,lives:3},difficulty:'Normal'}}));
   localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:2}));
  });
  const page=context.pages()[0]||await context.newPage();
  page.on('pageerror',e=>report.errors.push({name,error:e.stack}));
  page.on('response',r=>{if(r.status()>=400)report.badResponses.push({name,status:r.status(),url:r.url()});});
  await page.goto('http://127.0.0.1:4388/?skipIntro');await page.waitForFunction(()=>window.__redcat,{timeout:20000});
  const shot=async(scene)=>{await page.evaluate(async()=>{await document.fonts.ready;const urls=new Set([...document.querySelectorAll('*')].flatMap(e=>[...getComputedStyle(e).backgroundImage.matchAll(/url\("([^"]+)"\)/g)].map(m=>m[1])));await Promise.all([...urls].map(async url=>{const i=new Image();i.src=url;try{await i.decode();}catch{}}));});await page.screenshot({path:out+`/actual-${name}-${scene}.png`});report.scenes.push({name,scene,metrics:await page.evaluate(()=>({viewport:[innerWidth,innerHeight],horizontalOverflow:document.querySelector('#menu').scrollWidth>innerWidth,frame:getComputedStyle(document.querySelector('.native-menu-frame')).fontFamily,fatal:!document.querySelector('#fatal').hidden}))});};
  await shot('home');
  if(!isMobile){const choice=page.locator('[data-menu-choice="quickplay"]');const normal=await choice.evaluate(e=>getComputedStyle(e).backgroundImage);await choice.hover();const hover=await choice.evaluate(e=>getComputedStyle(e).backgroundImage);await page.mouse.down();const pressed=await choice.evaluate(e=>getComputedStyle(e).backgroundImage);await page.mouse.up();report.checks.push({name,choiceStates:{normal,hover,pressed}});await page.locator('[data-menu-choice="adventure"]').click();}
  await page.locator('#native-next').click();await shot('startinfo');await page.locator('#native-start-extras summary').click();await shot('startinfo-extras');await page.locator('#native-start-extras summary').click();
  report.checks.push({name,extraBounds:await page.evaluate(()=>{const box=id=>{const r=document.getElementById(id).getBoundingClientRect();return {x:r.x,y:r.y,width:r.width,height:r.height,bottom:r.bottom};};return {details:document.querySelector('.native-start-details').getBoundingClientRect().toJSON(),extra:document.querySelector('.native-extra-actions').getBoundingClientRect().toJSON(),footer:document.querySelector('.native-footer').getBoundingClientRect().toJSON(),start:box('native-start')};})});
  await page.locator('#native-help').click();await page.waitForSelector('#native-help-content h2');await shot('help-context');
  await page.locator('#native-help-search').fill('toets');await shot('help-search');
  const topic=page.locator('#native-help-topics button').first();if(await topic.count()){await topic.click();await shot('help-topic');}
  await page.locator('#native-help-close').click();
  await page.evaluate(()=>window.__redcat.originalMenu.home());
  await page.locator('#open-players').click();await shot('players');await page.locator('#native-player-help').click();await page.waitForSelector('#native-help-content h2');await shot('players-help');await page.locator('#native-help-close').click();await page.locator('#player-cancel').click();
  await page.locator('#open-settings').click();await shot('settings');await page.locator('#native-settings-help').click();await page.waitForSelector('#native-help-content h2');await shot('settings-help');await page.locator('#native-help-close').click();
  await page.locator('#open-key-settings').click();await shot('key-settings');await page.locator('#cancel-key-settings').click();
  await page.evaluate(()=>{document.querySelector('#native-settings-advanced').open=true;document.querySelector('#native-settings-advanced').scrollIntoView();});await shot('settings-advanced');
 }catch(e){report.errors.push({name,error:e.stack});}finally{await context.close();}
}
await writeFile(out+'/actual-menu-review.json',JSON.stringify(report,null,2));console.log(JSON.stringify({scenes:report.scenes.length,errors:report.errors,badResponses:report.badResponses,checks:report.checks},null,2));
