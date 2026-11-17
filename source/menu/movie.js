// The original's movies: the Davilex leader and the intro at every program start, the outro
// after a finished adventure. What RcHcMenu.dat does (addresses are in that file):
//   - ShowIntroMovie 0x56405C creates the borderless 800 × 600 form TfrmIntro, parks the mouse
//     pointer in the bottom right corner (SetCursorPos) and shows the form modally.
//   - FormShow 0x564178 opens the file with MCI in that form and puts the picture over the whole
//     client area (MCI_PUT, destination = client rectangle, 0x563A00), then plays it. No MCI
//     volume command exists in the program: the sound track plays at its own level.
//   - Any key (FormKeyDown 0x564308) and any mouse button (FormMouseDown 0x564390) stop the
//     movie and close the form; at its end it closes by itself (MenuIntroNotify 0x564258).
//   - A movie that is not found (they stay on the CD) is passed over without a message
//     (ShowLeader 0x5649DC, ShowIntro 0x564B8C, ShowOutro 0x564D3C).
// Here: a <video> over the page, as large as the 800 × 600 menu and stretched over it, black
// around it, the pointer hidden. A browser may refuse sound before the first click or key
// press; then the black screen stays (the original's first screen is the black TfrmMain) with one
// line of text, and the first click, tap or key press starts the movie: it is never played muted.
const MOVIES = { davilex: 'assets/media/davilex', intronl: 'assets/media/intronl', outronl: 'assets/media/outronl' };

export class MoviePlayer {
  /** volume(): 0..1, the port's master volume. */
  constructor({ overlay, video, hint, volume = () => 1 }) {
    Object.assign(this, { overlay, video, hint, volume });
    this.current = null;       // { name, state: 'starting' | 'waiting' | 'playing', since, done }
    this.serial = 0;
    // a mouse button or a finger: stops a running movie; down or up may start one that waits
    overlay.addEventListener('pointerdown', (e) => { e.preventDefault(); this.press(true); });
    overlay.addEventListener('pointerup', (e) => { e.preventDefault(); this.press(false); });
    overlay.addEventListener('contextmenu', (e) => e.preventDefault());
  }
  get active() { return this.current !== null; }
  get name() { return this.current ? this.current.name : null; }
  get state() { return this.current ? this.current.state : null; }

  /** Plays the named movies one after another. Resolves when the last one has ended or was stopped. */
  async play(names) {
    for (const name of names) await this.one(name);
    this.overlay.hidden = true;
  }
  one(name) {
    return new Promise((resolve) => {
      const v = this.video, serial = ++this.serial;
      const done = () => {
        if (serial !== this.serial) return;
        this.serial++; this.current = null;
        v.onended = null; v.onerror = null;
        v.pause(); v.removeAttribute('src'); v.load();
        this.hint.hidden = true; this.overlay.classList.remove('waiting');
        resolve();
      };
      this.current = { name, state: 'starting', since: 0, done };
      this.hint.textContent = name === 'outronl' ? 'Klik of druk op een toets om verder te gaan' : 'Klik of druk op een toets om te beginnen';
      this.overlay.hidden = false; this.hint.hidden = true; this.overlay.classList.remove('waiting');
      v.muted = false;
      v.volume = Math.max(0, Math.min(1, this.volume()));
      v.onended = done;
      // "intro not found": the original goes on without the movie
      v.onerror = () => { console.warn(`[menu] het filmpje ${name} kan niet worden afgespeeld`); done(); };
      v.src = `${MOVIES[name]}.${v.canPlayType('video/webm; codecs="vp9, opus"') ? 'webm' : 'mp4'}`;
      this.start();
    });
  }
  /** Asks the browser to play, with sound. Call it from the click or key press when the movie waits. */
  start() {
    const cur = this.current, serial = this.serial;
    if (!cur) return;
    cur.state = 'starting'; cur.since = performance.now();
    let p;
    try { p = this.video.play(); } catch (error) { p = Promise.reject(error); }
    Promise.resolve(p).then(() => {
      if (serial !== this.serial) return;
      cur.state = 'playing'; this.hint.hidden = true; this.overlay.classList.remove('waiting');
    }, (error) => {
      if (serial !== this.serial) return;
      if (error && error.name === 'NotAllowedError') { cur.state = 'waiting'; this.hint.hidden = false; this.overlay.classList.add('waiting'); }
      else if (!error || error.name !== 'AbortError') cur.done();
      // interrupted from outside the page (as menu-audio.js describes): once more, when the movie still stands
      else if (!cur.interrupted && this.video.paused) { cur.interrupted = true; this.start(); }
    });
  }
  /**
   * A key, a mouse button, a finger or a controller button. `down` false: a button or finger
   * that was let go; that never stops a movie, but it may start one that waits (a tap only counts
   * for the browser when the finger lifts). Returns true while a movie is on.
   */
  press(down = true) {
    const cur = this.current;
    if (!cur) return false;
    if (cur.state === 'waiting' || (!down && cur.state === 'starting' && this.video.paused)) this.start();
    else if (down && cur.state === 'playing') cur.done();
    // a movie that does not get going (a slow or broken download) can be passed over as well
    else if (down && cur.state === 'starting' && performance.now() - cur.since > 1500) cur.done();
    return true;
  }
}
