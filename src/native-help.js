// WinHelp was a Windows component. Keep its original Dutch topics, context
// mappings and navigation in a local dialog instead of launching an OS viewer.
export class NativeHelp {
  constructor({document=globalThis.document,audio,fetch=globalThis.fetch}={}) {
    Object.assign(this,{document,audio});
    this.$=id=>document.getElementById(id);
    this.dialog=this.$('native-help-viewer');this.history=[];this.current=null;
    this.ready=fetch('assets/help/manifest.json').then(response=>{
      if(!response.ok)throw new Error('De originele helpteksten konden niet worden geladen.');
      return response.json();
    }).then(manifest=>{this.manifest=manifest;return manifest;});
    this.ready.catch(()=>{});
    this.$('native-help-close').onclick=()=>this.close();
    this.dialog.addEventListener('cancel',event=>{event.preventDefault();this.close();});
    this.$('native-help-back').onclick=()=>this.back();
    this.$('native-help-search').oninput=()=>this.renderIndex();
    this.$('native-help-contents').onclick=()=>{
      this.$('native-help-search').value='';this.renderIndex();
      this.$('native-help-topics').querySelector('button')?.focus();
    };
  }

  async open(context='home'){
    this.origin=this.document.activeElement;
    if(!this.dialog.open)this.dialog.showModal();
    this.audio?.say(['mn_red21.wav']);
    this.$('native-help-content').textContent='Help laden…';
    this.$('native-help-search').value='';this.history=[];this.current=null;
    try{
      await this.ready;if(!this.dialog.open)return;
      this.renderIndex();this.show(this.manifest.contexts[context]||context);
    }catch(error){this.$('native-help-content').textContent=error.message;}
    this.$('native-help-content').focus({preventScroll:true});
  }

  renderIndex(){
    if(!this.manifest)return;
    const query=this.$('native-help-search').value.trim().toLocaleLowerCase('nl');
    const topics=this.manifest.topics;
    const groups=this.manifest.groups.map(group=>{
      const matches=group.topics.map(id=>topics.find(topic=>topic.nativeId===id)).filter(Boolean)
        .filter(topic=>!query||[topic.title,...topic.paragraphs].join(' ').toLocaleLowerCase('nl').includes(query));
      if(!matches.length)return null;
      const section=this.document.createElement('section'),heading=this.document.createElement('h3');
      heading.textContent=group.title;section.append(heading);
      for(const topic of matches){
        const button=this.document.createElement('button');button.type='button';button.textContent=topic.title;button.dataset.topic=topic.id;
        button.setAttribute('aria-current',String(topic.id===this.current));
        button.onclick=()=>{this.show(topic.id);this.$('native-help-content').focus({preventScroll:true});};
        section.append(button);
      }
      return section;
    }).filter(Boolean);
    this.$('native-help-topics').replaceChildren(...groups);
    if(!groups.length)this.$('native-help-topics').textContent='Geen onderwerpen gevonden.';
  }

  show(id,{remember=true}={}){
    const topic=this.manifest.topics.find(item=>item.id===id)||this.manifest.topics[0];
    if(remember&&this.current&&this.current!==topic.id)this.history.push(this.current);
    this.current=topic.id;
    const heading=this.document.createElement('h2');heading.textContent=topic.title;
    const paragraphs=topic.paragraphs.map((text,index)=>{
      const paragraph=this.document.createElement('p');
      const links=(topic.links||[]).filter(link=>link.paragraph===index&&
        this.manifest.topics.some(item=>item.id===link.target))
        .map(link=>({...link,offset:text.indexOf(link.label)})).filter(link=>link.offset>=0).sort((a,b)=>a.offset-b.offset);
      let offset=0;
      for(const link of links){
        if(link.offset<offset)continue;
        paragraph.append(this.document.createTextNode(text.slice(offset,link.offset)));
        const button=this.document.createElement('button');button.type='button';button.className='help-topic-link';button.textContent=link.label;
        button.dataset.helpTarget=link.target;button.onclick=()=>{this.show(link.target);this.$('native-help-content').focus({preventScroll:true});};
        paragraph.append(button);offset=link.offset+link.label.length;
      }
      paragraph.append(this.document.createTextNode(text.slice(offset)));return paragraph;
    });
    this.$('native-help-content').replaceChildren(heading,...paragraphs);
    this.$('native-help-content').scrollTop=0;this.$('native-help-back').disabled=this.history.length===0;
    for(const button of this.$('native-help-topics').querySelectorAll('[data-topic]'))button.setAttribute('aria-current',String(button.dataset.topic===topic.id));
  }

  back(){if(this.history.length)this.show(this.history.pop(),{remember:false});else this.close();}
  close(){if(!this.dialog.open)return;this.dialog.close();this.audio?.say(['rcmn2.wav']);this.origin?.focus?.({preventScroll:true});}
}
