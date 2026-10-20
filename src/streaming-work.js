// Fetching is asynchronous; copying decoded images and allocating graphics
// buffers still run on the main thread. Share one bounded queue across world
// and actor preparation instead of letting every loader spend a whole frame.
export class StreamingWorkQueue {
  constructor({budgetMs=1.5,maxJobs=3,clock=()=>performance.now(),yieldFrame=()=>new Promise(resolve=>setTimeout(resolve,4))}={}) {
    this.budgetMs=budgetMs;this.maxJobs=maxJobs;this.clock=clock;this.yieldFrame=yieldFrame;
    this.jobs=[];this.disposed=false;this.error=null;this.lastFrame=null;
    this.stats={frames:0,jobs:0,cancelled:0,maxJobs:0,maxMs:0,pending:0};
  }
  enqueue(run,{valid=()=>true,priority=()=>0}={}) {
    if(this.disposed)return Promise.resolve(null);
    const promise=new Promise((resolve,reject)=>this.jobs.push({run,valid,priority,resolve,reject}));
    this.stats.pending=this.jobs.length;return promise;
  }
  pump(frame=null) {
    if(this.disposed||frame!==null&&frame===this.lastFrame)return;
    this.lastFrame=frame;
    if(!this.jobs.length)return;
    const start=this.clock();let count=0;
    // Cancel stale rooms before sorting, without spending an upload slot.
    this.jobs=this.jobs.filter(job=>{
      if(job.valid())return true;job.resolve(null);this.stats.cancelled++;return false;
    });
    this.jobs.sort((a,b)=>b.priority()-a.priority());
    while(this.jobs.length&&count<this.maxJobs&&(count===0||this.clock()-start<this.budgetMs)) {
      const job=this.jobs.shift();
      if(!job.valid()){job.resolve(null);this.stats.cancelled++;continue;}
      try {job.resolve(job.run());}catch(error){this.error??=error;job.reject(error);}
      count++;
    }
    const ms=this.clock()-start;this.stats.frames++;this.stats.jobs+=count;
    this.stats.maxJobs=Math.max(this.stats.maxJobs,count);this.stats.maxMs=Math.max(this.stats.maxMs,ms);this.stats.pending=this.jobs.length;
  }
  async waitFor(promise) {
    // Explicit loading/settle paths must make progress even before the game
    // owns an animation frame. Yield between budgets so menus can still paint.
    let complete=false;const result=Promise.resolve(promise).finally(()=>complete=true);
    // Attach the rejection handler before yielding; propagate it below.
    result.catch(()=>{});
    while(!complete&&!this.disposed){this.pump();await this.yieldFrame();}
    return result;
  }
  dispose() {
    this.disposed=true;for(const job of this.jobs)job.resolve(null);this.jobs=[];this.stats.pending=0;
  }
}
