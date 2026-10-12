/** Original exit confirmation, with injected platform closure for browser/app use. */
export class QuitMenu {
  constructor({dialog,openButton,yesButton,noButton,status,audio,closeGame,browser=false}) {
    Object.assign(this,{dialog,openButton,yesButton,noButton,status,audio,closeGame,browser});
    this.closing=false;
    openButton.addEventListener('click',()=>this.open());
    yesButton.addEventListener('click',()=>this.confirm());
    noButton.addEventListener('click',()=>this.cancel());
    dialog.addEventListener('cancel',event=>{event.preventDefault();this.cancel();});
  }
  open(){
    if(this.dialog.open||this.closing)return;
    this.status.textContent='';this.dialog.showModal();this.noButton.focus();
    this.audio.say(['mn_red23.wav']);
  }
  cancel(){
    if(this.closing||!this.dialog.open)return;
    this.audio.say(['rcmn4.wav']);this.dialog.close();this.openButton.focus();
  }
  async confirm(){
    if(this.closing||!this.dialog.open)return;
    this.closing=true;this.yesButton.disabled=true;this.noButton.disabled=true;
    this.audio.stopMusic();
    try {
      await this.audio.say(['rcmn3.wav','mn_red28.wav']);
      await this.closeGame();
      // Browsers refuse window.close() on most manually opened tabs. This
      // message only remains visible when the requested closure was blocked.
      if(this.browser)this.status.textContent='Je kunt dit tabblad nu sluiten.';
    } catch {
      this.status.textContent='Afsluiten is niet gelukt. Je kunt het venster zelf sluiten.';
    } finally {
      this.closing=false;this.yesButton.disabled=false;this.noButton.disabled=false;
      if(this.browser||this.status.textContent)this.audio.startMusic();
    }
  }
}
