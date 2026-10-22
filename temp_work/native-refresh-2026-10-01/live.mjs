import {writeFile,readFile} from 'node:fs/promises';
const root=new URL('./',import.meta.url),[target]=await(await fetch('http://127.0.0.1:9229/json/list')).json();
const socket=new WebSocket(target.webSocketDebuggerUrl);await new Promise((resolve,reject)=>{socket.addEventListener('open',resolve,{once:true});socket.addEventListener('error',reject,{once:true});});
let id=0;const pending=new Map();
socket.addEventListener('message',event=>{const message=JSON.parse(event.data);if(message.id){const p=pending.get(message.id);pending.delete(message.id);message.error?p.reject(message.error):p.resolve(message.result);}});
function send(method,params={}){return new Promise((resolve,reject)=>{const n=++id;pending.set(n,{resolve,reject});socket.send(JSON.stringify({id:n,method,params}));});}
async function evaluate(expression){const result=await send('Runtime.evaluate',{expression,awaitPromise:true,returnByValue:true});if(result.exceptionDetails)throw new Error(JSON.stringify(result.exceptionDetails));return result.result.value;}
const command=process.argv[2]||'snapshot';
try {
 if(command==='snapshot') {
  const main=await evaluate(`(async()=>{const E=process.mainModule.require('electron'),w=E.BrowserWindow.getAllWindows()[0];return {pid:process.pid,display:E.screen.getDisplayMatching(w.getBounds()),bounds:w.getBounds(),fullscreen:w.isFullScreen(),focused:w.isFocused(),visible:w.isVisible(),gpu:await E.app.getGPUInfo('complete'),features:E.app.getGPUFeatureStatus()};})()`);
  const state=await evaluate(`process.mainModule.require('electron').BrowserWindow.getAllWindows()[0].webContents.executeJavaScript(${JSON.stringify(`(()=>{const a=window.__redcat,w=a.world,g=a.gameplay,gl=w.renderer.getContext(),extension=gl.getExtension('WEBGL_debug_renderer_info');return {mode:a.mode,level:w.id,time:g.time,settings:a.settings,position:w.player.position,camera:w.camera.position.toArray(),cameraTarget:w.camera.getWorldDirection(new w.camera.position.constructor()).toArray(),resolution:[gl.drawingBufferWidth,gl.drawingBufferHeight],screen:[screen.width,screen.height,devicePixelRatio],gpu:extension?gl.getParameter(extension.UNMASKED_RENDERER_WEBGL):null,context:gl.getContextAttributes(),stream:w.geometryStream?.stats,actors:w.actorResidency?.stats,render:w.renderer.info.render,memory:w.renderer.info.memory,objects:g.objects.length,save:g.snapshot()};})()`)} )`);
  await writeFile(new URL('live-snapshot.json',root),JSON.stringify({main,state},null,2));
  await evaluate(`process.mainModule.require('electron').BrowserWindow.getAllWindows()[0].webContents.capturePage().then(image=>process.mainModule.require('node:fs').writeFileSync(${JSON.stringify(new URL('live-screen.png',root).pathname)},image.toPNG()))`);
  const {save,...summary}=state;console.log(JSON.stringify({main:{pid:main.pid,display:main.display,bounds:main.bounds,fullscreen:main.fullscreen,focused:main.focused,gpu:main.gpu.gpuDevice,features:main.features},state:summary},null,2));
 } else if(command==='eval') {
  const expression=await readFile(process.argv[3],'utf8');console.log(JSON.stringify(await evaluate(expression),null,2));
 }
} finally {socket.close();}
