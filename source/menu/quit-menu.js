// Original exit confirmation, from ../RCSPOOK_NEW/source/quit-menu.js. A web page cannot close
// itself, so after Ja the injected closeGame shows a plain closing state instead.
export class QuitMenu {
  constructor({dialog,openButton,yesButton,noButton,status,audio,closeGame}) {
    Object.assign(this,{dialog,openButton,yesButton,noButton,status,audio,closeGame});
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
    // the music plays on under the two clips: the original stops it when the program ends
    try {
      await this.audio.say(['rcmn3.wav','mn_red28.wav']);
      this.dialog.close();
      await this.closeGame();
    } catch {
      this.status.textContent='Afsluiten is niet gelukt. Je kunt het venster zelf sluiten.';
    } finally {
      this.closing=false;this.yesButton.disabled=false;this.noButton.disabled=false;
    }
  }
}
