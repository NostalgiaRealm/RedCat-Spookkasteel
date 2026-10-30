// Pixel comparison of two folders of frames, using a browser canvas.
import {chromium} from 'playwright';
import {readdirSync,readFileSync} from 'node:fs';
const [a,b]=process.argv.slice(2);
const browser=await chromium.launch({executablePath:process.env.CHROME_PATH,headless:true});const page=await browser.newPage();
const url=f=>'data:image/png;base64,'+readFileSync(f).toString('base64');
for(const n of readdirSync(a).filter(f=>f.endsWith('.png')).sort()){
  console.log(n,JSON.stringify(await page.evaluate(async([x,y])=>{
    const load=async u=>{const i=new Image();i.src=u;await i.decode();const c=new OffscreenCanvas(i.width,i.height),g=c.getContext('2d');g.drawImage(i,0,0);return g.getImageData(0,0,i.width,i.height);};
    const p=await load(x),q=await load(y);if(p.width!==q.width)return {size:[p.width,q.width]};
    let any=0,over8=0,over32=0,max=0;const t=p.width*p.height;
    for(let i=0;i<t*4;i+=4){const d=Math.max(Math.abs(p.data[i]-q.data[i]),Math.abs(p.data[i+1]-q.data[i+1]),Math.abs(p.data[i+2]-q.data[i+2]));if(d)any++;if(d>8)over8++;if(d>32)over32++;if(d>max)max=d;}
    return {changedPct:+(100*any/t).toFixed(2),over8Pct:+(100*over8/t).toFixed(3),over32Pct:+(100*over32/t).toFixed(3),max};
  },[url(`${a}/${n}`),url(`${b}/${n}`)])));
}
await browser.close();
