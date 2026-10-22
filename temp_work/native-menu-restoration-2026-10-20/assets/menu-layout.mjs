import {chromium} from 'playwright';
import {readFile,writeFile} from 'node:fs/promises';
import {resolve,extname} from 'node:path';
import http from 'node:http';
const root=process.cwd(),out=resolve(root,'temp_work/native-menu-restoration-2026-10-20/assets');
const html=(await readFile('index.html','utf8')).replace(/<script\b[^>]*>[\s\S]*?<\/script>/g,'');
const types={'.css':'text/css','.png':'image/png','.jpg':'image/jpeg','.ico':'image/x-icon','.js':'text/javascript'};
const server=http.createServer(async(req,res)=>{try{const url=new URL(req.url,'http://local');const p=resolve(root,'.'+decodeURIComponent(url.pathname));if(!p.startsWith(root+'/')&&p!==root)throw Error('path');if(url.pathname==='/'){res.setHeader('Content-Type','text/html');res.end(html)}else{res.setHeader('Content-Type',types[extname(p)]||'application/octet-stream');res.end(await readFile(p));}}catch{res.writeHead(404);res.end();}});
await new Promise(r=>server.listen(0,'127.0.0.1',r));
const browser=await chromium.launch({executablePath:'/usr/bin/google-chrome',headless:true,args:['--no-sandbox']});
try{
 const reports=[];
 for(const [width,height] of [[800,600],[1920,1080],[390,844],[320,568],[844,390]]){
  const page=await browser.newPage({viewport:{width,height}});await page.goto('http://127.0.0.1:'+server.address().port);
  await page.evaluate(()=>{document.querySelector('.native-menu-frame').dataset.page='home';document.querySelector('#native-menu-title').textContent='Hoofdmenu';document.querySelector('#native-menu-description').textContent='Hallo Rick. Kies hieronder wat je wilt gaan doen: verder met het Avontuur, even snel een Snelspel spelen, of de beste spokenjagers bekijken in de Highscores? Maak je keuze en klik op Volgende om verder te gaan.';});
  await page.screenshot({path:out+`/home-${width}x${height}.png`});
  const metrics=await page.evaluate(()=>{const f=document.querySelector('.native-menu-frame').getBoundingClientRect();return {font:getComputedStyle(document.querySelector('#native-menu-description')).fontFamily,frame:{x:f.x,y:f.y,w:f.width,h:f.height},horizontalOverflow:document.querySelector('#menu').scrollWidth>innerWidth,verticalScroll:document.querySelector('#menu').scrollHeight>innerHeight};});
  reports.push({width,height,...metrics});
  await page.evaluate(async()=>{
    const {OriginalMenu}=await import('/src/original-menu.js');
    window.previewMenu=new OriginalMenu({audio:{playVoice(){},playVoiceSequence(){}},getState:()=>({name:'Rick',hasSave:true,level:0,savedLevel:2,difficulty:'Normal',savedDifficulty:'Normal',levels:['Het Bos','Het Kasteel','Het Kerkhof','De Grotten','De Kasteeltoren'].map(name=>({name}))}),setDifficulty(){},launch(){},scores:()=>[{name:'Rick',score:98765},{name:'RedCat',score:15000}],help(){}});
    const list=document.querySelector('#level-list');for(let i=0;i<5;i++){const b=document.createElement('button');b.className='level-card';b.innerHTML=`<img src="assets/menu/040${i}0001.png"><span class="card-info"><b>${['Het Bos','Het Kasteel','Het Kerkhof','De Grotten','De Kasteeltoren'][i]}</b></span>`;list.append(b);}
  });
  for(const name of ['difficulty','quickplay','startinfo','highscores']){
    await page.evaluate(name=>window.previewMenu.show(name,{announce:false,focus:false}),name);
    await page.screenshot({path:out+`/${name}-${width}x${height}.png`});
  }
  await page.evaluate(()=>{document.querySelector('#settings').hidden=false;});
  await page.screenshot({path:out+`/settings-${width}x${height}.png`});
  await page.evaluate(()=>{document.querySelector('#native-settings-advanced').open=true;document.querySelector('#native-settings-advanced').scrollIntoView();});
  await page.screenshot({path:out+`/settings-advanced-${width}x${height}.png`});
  await page.close();
 }
 await writeFile(out+'/layout-report.json',JSON.stringify(reports,null,2));console.log(reports);
}finally{await browser.close();await new Promise(r=>server.close(r));}
