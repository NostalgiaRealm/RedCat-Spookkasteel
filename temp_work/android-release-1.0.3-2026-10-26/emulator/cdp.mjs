export async function connect() {
  const pages=await (await fetch('http://127.0.0.1:9226/json/list')).json();
  const page=pages.find(p=>p.type==='page');
  if(!page) throw new Error('No debuggable WebView page');
  const socket=new WebSocket(page.webSocketDebuggerUrl);
  await new Promise((res,rej)=>{socket.onopen=res;socket.onerror=rej;});
  let id=0;const requests=new Map(),events=[];
  socket.onmessage=e=>{const m=JSON.parse(e.data);if(m.id){const r=requests.get(m.id);requests.delete(m.id);m.error?r.reject(new Error(JSON.stringify(m.error))):r.resolve(m.result);}else events.push(m);};
  const call=(method,params={})=>new Promise((resolve,reject)=>{requests.set(++id,{resolve,reject});socket.send(JSON.stringify({id,method,params}));});
  const evaluate=async(expression)=>{const r=await call('Runtime.evaluate',{expression,returnByValue:true,awaitPromise:true,userGesture:true});if(r.exceptionDetails)throw new Error(JSON.stringify(r.exceptionDetails));return r.result.value;};
  await call('Runtime.enable');
  return {call,evaluate,events,close:()=>socket.close()};
}
