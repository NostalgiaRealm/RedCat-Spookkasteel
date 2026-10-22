export class OriginalLoadingScreen {
  constructor(element) {
    this.element=element;this.index=0;this.value=0;
    this.title=element.querySelector('#loading-title');
    this.mode=element.querySelector('#loading-mode');
    this.message=element.querySelector('#loading-detail');
    this.picture=element.querySelector('#loading-picture');
    this.bar=element.querySelector('[role="progressbar"]');
    this.fill=this.bar.firstElementChild;
    this.ready=this.load();
  }
  async load() {
    const response=await fetch('assets/loading/manifest.json');
    if(!response.ok)throw new Error('Het originele laadscherm ontbreekt. Voer tools/import_loading.py uit.');
    this.manifest=await response.json();
    // Prepare small original UI textures up front; a new level must not
    // briefly show the previous level's picture while its image decodes.
    this.images=await Promise.all(['background','logo','progress',...Array.from({length:5},(_,i)=>'level'+(i+1))].map(async name=>{
      const image=new Image();image.src=`assets/loading/${name}.png`;await image.decode();return image;
    }));
    this.applyLevel();
  }
  applyLevel() {
    if(!this.manifest)return;
    const {text,levels}=this.manifest;
    this.title.textContent=text.WaitText;
    this.mode.textContent=text['GameType0.msg'];
    this.message.textContent=`${text.LoadingTXT} ${levels[this.index]}`;
    this.picture.src=`assets/loading/level${this.index+1}.png`;
    this.picture.alt=levels[this.index];
  }
  show(index,{streaming=false}={}) {
    this.index=index;this.value=0;this.applyLevel();
    this.setProgress(streaming?null:0);this.element.hidden=false;
  }
  setProgress(value) {
    const indeterminate=value===null;
    this.bar.classList.toggle('indeterminate',indeterminate);
    if(indeterminate){this.bar.removeAttribute('aria-valuenow');this.fill.style.width='';return;}
    this.value=Math.max(this.value,Math.min(1,Math.max(0,value)));
    this.fill.style.width=`${this.value*100}%`;
    this.bar.setAttribute('aria-valuenow',String(Math.round(this.value*100)));
  }
  hide(){this.element.hidden=true;}
}
