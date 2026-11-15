// WebGL 2 renderer behind the host's Genesis3D driver (source/host/gdriver.js). It only draws
// what the driver hands it, in the order given: the driver has already applied the original's
// queueing, sorting, mip choice and fog rules. It runs in the render worker (source/web/
// render-worker.js), which replays the driver's calls as the game thread wrote them down
// (remote.js): textures and lightmaps come by their handle's id, and all vertices and indices of
// a frame arrive together. State per draw follows the original Direct3D
// driver (docs/research/genesis-driver.md, section 8):
//   textured and Gouraud polygons: blend SRC_ALPHA / ONE_MINUS_SRC_ALPHA, depth LEQUAL, bilinear,
//   no culling, no alpha test; lightmap modulates 1x; fog maps are added (ONE / ONE);
//   decals are 1:1 copies with a colour key and no depth.
// Coordinates arrive in the game's screen pixels (for example 640x480). The canvas may be any
// size: the picture is scaled, so a larger canvas gives sharper edges without changing the game.
// The size is given in pixels, width and height apart: the page fits the picture to the window,
// whose shape may be a fraction off the game's screen (854x480 in a 16:9 window).
import { VERTEX_FLOATS } from '../host/gdriver.js';

const VS = `#version 300 es
in vec3 a_pos; in vec2 a_uv; in vec2 a_luv; in vec4 a_color; in float a_fog; in float a_lod;
uniform vec2 u_screen;
out vec2 v_uv; out vec2 v_luv; out vec4 v_color; out float v_fog; out float v_lod;
void main() {
  // Direct3D transformed vertex: sx, sy in pixels, rhw = 1/z, sz = 1 - 1/z (z = camera depth x ZScale).
  // The original does not clip or clamp sz; here it is clamped so nothing is cut at the near plane.
  float w = a_pos.z;
  float sz = clamp(1.0 - 1.0 / w, 0.0, 1.0);
  // Direct3D of that time samples pixels at whole coordinates, WebGL at half ones: shift by half a pixel.
  gl_Position = vec4(((a_pos.x + 0.5) / u_screen.x * 2.0 - 1.0) * w, (1.0 - (a_pos.y + 0.5) / u_screen.y * 2.0) * w, (sz * 2.0 - 1.0) * w, w);
  v_uv = a_uv; v_luv = a_luv; v_color = a_color; v_fog = a_fog; v_lod = a_lod;
}`;
const FS = `#version 300 es
precision mediump float;
in vec2 v_uv; in vec2 v_luv; in vec4 v_color; in float v_fog; in float v_lod;
uniform sampler2D u_tex; uniform sampler2D u_lm; uniform vec3 u_fogColor;
out vec4 o;
void main() {
  vec4 c = textureLod(u_tex, v_uv, v_lod) * v_color;
  c.rgb *= texture(u_lm, v_luv).rgb;
  c.rgb = mix(u_fogColor, c.rgb, v_fog);
  o = c;
}`;
const DVS = `#version 300 es
in vec2 a_pos; in vec2 a_uv;
uniform vec2 u_screen;
out vec2 v_uv;
void main() { gl_Position = vec4(a_pos.x / u_screen.x * 2.0 - 1.0, 1.0 - a_pos.y / u_screen.y * 2.0, 0.0, 1.0); v_uv = a_uv; }`;
const DFS = `#version 300 es
precision mediump float;
in vec2 v_uv; uniform sampler2D u_tex; out vec4 o;
void main() { vec4 c = texture(u_tex, v_uv); if (c.a < 0.5) discard; o = vec4(c.rgb, 1.0); }`;

// copies the resolved picture to the canvas
const CVS = `#version 300 es
out vec2 v_uv;
void main() { vec2 p = vec2(float((gl_VertexID << 1) & 2), float(gl_VertexID & 2)); v_uv = p; gl_Position = vec4(p * 2.0 - 1.0, 0.0, 1.0); }`;
const CFS = `#version 300 es
precision mediump float;
in vec2 v_uv; uniform sampler2D u_tex; out vec4 o;
void main() { o = vec4(texture(u_tex, v_uv).rgb, 1.0); }`;

export function createRenderer(canvas, options = {}) {
  // Anti-aliasing is done in a multisampled frame buffer of our own, so the sample count can be chosen.
  // A worker's first ask can fail once after the page made a WebGL context of its own (seen in
  // WebKit's Linux build; asking again at once stays null, after 50 ms it succeeds): up to ten asks.
  // A browser that gives the context the first time, which is every other one seen, does not wait.
  let gl = null;
  for (let n = 0; n < 10 && !(gl = canvas.getContext('webgl2', { alpha: false, antialias: false, depth: true, stencil: false, preserveDrawingBuffer: false, powerPreference: 'high-performance' })); n++) {
    try { Atomics.wait(new Int32Array(new SharedArrayBuffer(4)), 0, 0, 50); } catch (e) { break; }
  }
  if (!gl) throw new Error('WebGL 2 is not available');
  const compile = (type, src) => { const s = gl.createShader(type); gl.shaderSource(s, src); gl.compileShader(s); if (!gl.getShaderParameter(s, gl.COMPILE_STATUS)) throw new Error(gl.getShaderInfoLog(s)); return s; };
  const link = (vs, fs, attribs) => {
    const p = gl.createProgram();
    gl.attachShader(p, compile(gl.VERTEX_SHADER, vs)); gl.attachShader(p, compile(gl.FRAGMENT_SHADER, fs));
    attribs.forEach((a, k) => gl.bindAttribLocation(p, k, a));
    gl.linkProgram(p);
    if (!gl.getProgramParameter(p, gl.LINK_STATUS)) throw new Error(gl.getProgramInfoLog(p));
    return p;
  };
  const sampler = (wrap) => {
    const s = gl.createSampler();
    gl.samplerParameteri(s, gl.TEXTURE_MIN_FILTER, gl.LINEAR_MIPMAP_NEAREST);
    gl.samplerParameteri(s, gl.TEXTURE_MAG_FILTER, gl.LINEAR);
    gl.samplerParameteri(s, gl.TEXTURE_WRAP_S, wrap); gl.samplerParameteri(s, gl.TEXTURE_WRAP_T, wrap);
    return s;
  };

  const textures = new Map();     // handle id -> { tex, dim: size of each level as uploaded }
  const lightmaps = new Map();    // handle id -> [{ tex, dim }, the same for the fog map]
  const dim = (w, h) => w * 65536 + h;
  let W = 640, H = 480;
  // multisampled target: { fbo, color, depth, w, h, samples } or null when anti-aliasing is off
  let target = null;
  let pending = null;             // { width, height, msaa } asked for since the last frame began
  let lost = false;               // the WebGL context is gone: nothing can be drawn until it is back
  // The context is back but holds none of the game's textures yet: the game thread hears of it at
  // its next frame and then sends FORGET and everything again (remote.js). Frames that were
  // already on their way would be drawn white and unlit, so nothing is drawn until that FORGET.
  let stale = false;
  let fence = null, fenceAt = 0, fenceMore = false, fenceTimer = 0, busyMs = 0;       // see mark() below
  let bound = 0;                  // 1: program and vertex array of the polygons are in use
  // Everything that lives in the WebGL context. Made again when a lost context comes back: the
  // objects of the old one are gone with it.
  let prog, dprog, cprog, U, DU, CU, vao, dvao, cvao, vbo, ibo, sWrap, sClamp, white, maxSamples = 0, limit = 0;
  const build = () => {
    prog = link(VS, FS, ['a_pos', 'a_uv', 'a_luv', 'a_color', 'a_fog', 'a_lod']);
    dprog = link(DVS, DFS, ['a_pos', 'a_uv']);
    cprog = link(CVS, CFS, []);
    CU = { tex: gl.getUniformLocation(cprog, 'u_tex') };
    cvao = gl.createVertexArray();
    U = { screen: gl.getUniformLocation(prog, 'u_screen'), tex: gl.getUniformLocation(prog, 'u_tex'), lm: gl.getUniformLocation(prog, 'u_lm'), fog: gl.getUniformLocation(prog, 'u_fogColor') };
    DU = { screen: gl.getUniformLocation(dprog, 'u_screen'), tex: gl.getUniformLocation(dprog, 'u_tex') };

    // One vertex and one index buffer hold a whole frame (geometry()). Decals are four of the same
    // vertices, read by their own vertex array: position x, y and the texture coordinate.
    vao = gl.createVertexArray(); vbo = gl.createBuffer(); ibo = gl.createBuffer();
    gl.bindVertexArray(vao);
    gl.bindBuffer(gl.ARRAY_BUFFER, vbo);
    gl.bindBuffer(gl.ELEMENT_ARRAY_BUFFER, ibo);
    const stride = VERTEX_FLOATS * 4;
    [[0, 3, 0], [1, 2, 12], [2, 2, 20], [3, 4, 28], [4, 1, 44], [5, 1, 48]].forEach(([loc, n, off]) => { gl.enableVertexAttribArray(loc); gl.vertexAttribPointer(loc, n, gl.FLOAT, false, stride, off); });
    dvao = gl.createVertexArray();
    gl.bindVertexArray(dvao);
    gl.bindBuffer(gl.ARRAY_BUFFER, vbo);
    gl.enableVertexAttribArray(0); gl.vertexAttribPointer(0, 2, gl.FLOAT, false, stride, 0);
    gl.enableVertexAttribArray(1); gl.vertexAttribPointer(1, 2, gl.FLOAT, false, stride, 12);
    gl.bindVertexArray(null);

    sWrap = sampler(gl.REPEAT); sClamp = sampler(gl.CLAMP_TO_EDGE);
    white = gl.createTexture();
    gl.bindTexture(gl.TEXTURE_2D, white);
    gl.texImage2D(gl.TEXTURE_2D, 0, gl.RGBA, 1, 1, 0, gl.RGBA, gl.UNSIGNED_BYTE, new Uint8Array([255, 255, 255, 255]));
    gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MIN_FILTER, gl.NEAREST); gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MAG_FILTER, gl.NEAREST);
    gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MAX_LEVEL, 0);
    maxSamples = gl.getParameter(gl.MAX_SAMPLES);
    limit = Math.min(gl.getParameter(gl.MAX_RENDERBUFFER_SIZE), gl.getParameter(gl.MAX_TEXTURE_SIZE), 8192);
    gl.pixelStorei(gl.UNPACK_ALIGNMENT, 1);
    textures.clear(); lightmaps.clear(); target = null; bound = 0; fence = null;
  };
  build();
  const dropTarget = () => { if (!target) return; gl.deleteFramebuffer(target.fbo); gl.deleteRenderbuffer(target.color); gl.deleteRenderbuffer(target.depth); gl.deleteFramebuffer(target.resolve); gl.deleteTexture(target.tex); target = null; };
  const makeTarget = () => {
    const samples = Math.min(options.msaa | 0, maxSamples);
    if (target && target.w === canvas.width && target.h === canvas.height && target.samples === samples) return;
    dropTarget();
    if (samples < 2) return;
    // The samples are resolved into a texture of the same format, which is then copied to the canvas:
    // a multisampled blit straight to the canvas needs identical formats, and the canvas' is not ours to choose.
    const t = { fbo: gl.createFramebuffer(), color: gl.createRenderbuffer(), depth: gl.createRenderbuffer(), resolve: gl.createFramebuffer(), tex: gl.createTexture(), w: canvas.width, h: canvas.height, samples };
    gl.bindTexture(gl.TEXTURE_2D, t.tex);
    gl.texImage2D(gl.TEXTURE_2D, 0, gl.RGBA8, t.w, t.h, 0, gl.RGBA, gl.UNSIGNED_BYTE, null);
    gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MIN_FILTER, gl.NEAREST); gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MAG_FILTER, gl.NEAREST); gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MAX_LEVEL, 0);
    gl.bindFramebuffer(gl.FRAMEBUFFER, t.resolve);
    gl.framebufferTexture2D(gl.FRAMEBUFFER, gl.COLOR_ATTACHMENT0, gl.TEXTURE_2D, t.tex, 0);
    gl.bindRenderbuffer(gl.RENDERBUFFER, t.color);
    gl.renderbufferStorageMultisample(gl.RENDERBUFFER, samples, gl.RGBA8, t.w, t.h);
    gl.bindRenderbuffer(gl.RENDERBUFFER, t.depth);
    gl.renderbufferStorageMultisample(gl.RENDERBUFFER, samples, gl.DEPTH_COMPONENT24, t.w, t.h);
    gl.bindFramebuffer(gl.FRAMEBUFFER, t.fbo);
    gl.framebufferRenderbuffer(gl.FRAMEBUFFER, gl.COLOR_ATTACHMENT0, gl.RENDERBUFFER, t.color);
    gl.framebufferRenderbuffer(gl.FRAMEBUFFER, gl.DEPTH_ATTACHMENT, gl.RENDERBUFFER, t.depth);
    if (gl.checkFramebufferStatus(gl.FRAMEBUFFER) !== gl.FRAMEBUFFER_COMPLETE) { gl.bindFramebuffer(gl.FRAMEBUFFER, null); target = t; dropTarget(); return; }
    gl.bindFramebuffer(gl.FRAMEBUFFER, null);
    target = t;
  };
  const stats = { frames: 0, draws: 0, uploads: 0 };
  // How long the graphics chip is at work on what it was sent: a fence after a frame's last call,
  // asked every few milliseconds whether the chip got there (a sync object only changes between
  // two tasks of this thread). While one fence is out no second is made; the next follows when it
  // is reached, so the time adds up to the time the chip had something to do. The page uses it on a
  // phone to tell a chip that cannot keep up from a display that gives few ticks (game.js `quality`).
  const mark = () => {
    fenceMore = false;
    fence = gl.fenceSync(gl.SYNC_GPU_COMMANDS_COMPLETE, 0);
    if (!fence) return;
    gl.flush();
    fenceAt = performance.now();
    clearTimeout(fenceTimer); fenceTimer = setTimeout(poll, 4);
  };
  const poll = () => {
    if (!fence) return;
    if (lost) { fence = null; return; }           // gone with its context
    const s = gl.clientWaitSync(fence, 0, 0);
    if (s === gl.TIMEOUT_EXPIRED) { fenceTimer = setTimeout(poll, 4); return; }
    const now = performance.now();
    busyMs += now - fenceAt;
    gl.deleteSync(fence); fence = null;
    if (fenceMore) mark();
  };

  const r = {
    gl, stats, canvas,
    /** Called when the WebGL context is lost, and when it is back: every texture must then be uploaded again. */
    onLost: null, onRestored: null,
    get lost() { return lost; },
    init(w, h) {
      W = w; H = h;
      r.resize();
    },
    /** Sets the drawing buffer to the size asked for; before one is, to the game's own screen. */
    resize() {
      if (lost) return;
      const w = options.width || W, h = options.height || H, k = Math.min(1, limit / w, limit / h);
      const cw = Math.max(1, Math.round(w * k)), ch = Math.max(1, Math.round(h * k));
      if (canvas.width !== cw || canvas.height !== ch) { canvas.width = cw; canvas.height = ch; }
      makeTarget();
    },
    /** Changes the drawing size in pixels and the anti-aliasing samples (0, 2, 4, 8) from the next frame on. A second change before that frame adds to the first. */
    configure(width, height, msaa) { const base = pending || options; pending = { width: width === undefined ? base.width : width, height: height === undefined ? base.height : height, msaa: msaa === undefined ? base.msaa : msaa }; },
    /** Milliseconds the graphics chip was at work since the last call of this. */
    takeBusy() { const now = performance.now(); let ms = busyMs; busyMs = 0; if (fence) { ms += now - fenceAt; fenceAt = now; } return ms; },
    info: () => ({ width: canvas.width, height: canvas.height, samples: target ? target.samples : 0, maxSamples }),
    shutdown() {},
    /** A new game on the same canvas: nothing of the previous one is kept, and the picture is black until its first frame. */
    reset(width, height, msaa) {
      r.forget(); dropTarget();
      pending = null; options.width = width; options.height = height; options.msaa = msaa;
      if (lost) return;
      gl.bindFramebuffer(gl.FRAMEBUFFER, null);
      gl.clearColor(0, 0, 0, 1);
      gl.clear(gl.COLOR_BUFFER_BIT);
    },
    /** One level of a handle's texture. three: a 3D handle, square with `mips` levels of `size`; otherwise a 2D one of a single level. */
    uploadTexture(id, three, mips, size, level, w, h, rgba) {
      if (lost) return;
      let e = textures.get(id);
      if (!e) {
        e = { tex: gl.createTexture(), dim: [] };
        textures.set(id, e);
        gl.bindTexture(gl.TEXTURE_2D, e.tex);
        gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MAX_LEVEL, three ? mips - 1 : 0);
        gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MIN_FILTER, three ? gl.LINEAR_MIPMAP_NEAREST : gl.NEAREST);
        gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MAG_FILTER, three ? gl.LINEAR : gl.NEAREST);
        gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_WRAP_S, gl.CLAMP_TO_EDGE); gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_WRAP_T, gl.CLAMP_TO_EDGE);
        // every level exists from the start, so the texture is complete before the engine has filled all of them
        if (three) for (let k = 0; k < mips; k++) { const s = Math.max(1, size >> k); gl.texImage2D(gl.TEXTURE_2D, k, gl.RGBA, s, s, 0, gl.RGBA, gl.UNSIGNED_BYTE, null); e.dim[k] = dim(s, s); }
      } else gl.bindTexture(gl.TEXTURE_2D, e.tex);
      // a level that keeps its size is filled in place instead of being made anew
      if (e.dim[level] === dim(w, h)) gl.texSubImage2D(gl.TEXTURE_2D, level, 0, 0, w, h, gl.RGBA, gl.UNSIGNED_BYTE, rgba);
      else { gl.texImage2D(gl.TEXTURE_2D, level, gl.RGBA, w, h, 0, gl.RGBA, gl.UNSIGNED_BYTE, rgba); e.dim[level] = dim(w, h); }
      stats.uploads++;
    },
    uploadLightmap(id, layer, w, h, rgba) {
      if (lost) return;
      let e = lightmaps.get(id);
      if (!e) { e = [null, null]; lightmaps.set(id, e); }
      let l = e[layer];
      if (!l) {
        l = e[layer] = { tex: gl.createTexture(), dim: 0 };
        gl.bindTexture(gl.TEXTURE_2D, l.tex);
        gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MAX_LEVEL, 0);
        gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MIN_FILTER, gl.LINEAR); gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MAG_FILTER, gl.LINEAR);
        gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_WRAP_S, gl.CLAMP_TO_EDGE); gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_WRAP_T, gl.CLAMP_TO_EDGE);
      } else gl.bindTexture(gl.TEXTURE_2D, l.tex);
      // the lightmaps of moving lights come again every frame, at the same size
      if (l.dim === dim(w, h)) gl.texSubImage2D(gl.TEXTURE_2D, 0, 0, 0, w, h, gl.RGBA, gl.UNSIGNED_BYTE, rgba);
      else { gl.texImage2D(gl.TEXTURE_2D, 0, gl.RGBA, w, h, 0, gl.RGBA, gl.UNSIGNED_BYTE, rgba); l.dim = dim(w, h); }
      stats.uploads++;
    },
    destroyTexture(id) {
      const e = textures.get(id);
      if (e) { gl.deleteTexture(e.tex); textures.delete(id); }
      const l = lightmaps.get(id);
      if (l) { for (const x of l) if (x) gl.deleteTexture(x.tex); lightmaps.delete(id); }
    },
    /** All vertices and indices of the frame that follows, uploaded once. */
    geometry(verts, indices) {
      if (lost) return;
      gl.bindVertexArray(vao);
      gl.bindBuffer(gl.ARRAY_BUFFER, vbo);
      gl.bufferData(gl.ARRAY_BUFFER, verts, gl.STREAM_DRAW);
      gl.bindBuffer(gl.ELEMENT_ARRAY_BUFFER, ibo);
      gl.bufferData(gl.ELEMENT_ARRAY_BUFFER, indices, gl.STREAM_DRAW);
      gl.bindVertexArray(null);
      bound = 0;
    },
    beginScene(clear, clearZ, fog) {
      if (pending) { options.width = pending.width; options.height = pending.height; options.msaa = pending.msaa; pending = null; r.resize(); }
      if (lost || stale) return;
      gl.bindFramebuffer(gl.FRAMEBUFFER, target ? target.fbo : null);
      gl.viewport(0, 0, canvas.width, canvas.height);
      gl.depthMask(true);
      // the original clears through a viewport whose background is the fog colour while fog is on
      if (fog) gl.clearColor(fog.r / 255, fog.g / 255, fog.b / 255, 1); else gl.clearColor(0, 0, 0, 1);
      gl.clearDepth(1);
      const bits = (clear ? gl.COLOR_BUFFER_BIT : 0) | (clearZ ? gl.DEPTH_BUFFER_BIT : 0);
      if (bits) gl.clear(bits);
      gl.useProgram(prog);
      gl.uniform2f(U.screen, W, H);
      gl.uniform1i(U.tex, 0); gl.uniform1i(U.lm, 1);
      gl.uniform3f(U.fog, fog ? fog.r / 255 : 0, fog ? fog.g / 255 : 0, fog ? fog.b / 255 : 0);
      gl.disable(gl.CULL_FACE);
      gl.enable(gl.BLEND);
      gl.depthFunc(gl.LEQUAL);
      bound = 0;
    },
    /** `count` indices from `first` on, as triangles. tex, lm: handle ids, 0 for none. */
    draw(first, count, tex, lm, lmLayer, mode, ztest, zwrite, clamp) {
      if (lost || stale) return;
      if (!bound) { gl.useProgram(prog); gl.bindVertexArray(vao); bound = 1; }
      const e = tex ? textures.get(tex) : null;
      gl.activeTexture(gl.TEXTURE0);
      gl.bindTexture(gl.TEXTURE_2D, e ? e.tex : white);
      gl.bindSampler(0, e ? (clamp ? sClamp : sWrap) : null);
      const l = lm ? lightmaps.get(lm) : null;
      gl.activeTexture(gl.TEXTURE1);
      gl.bindTexture(gl.TEXTURE_2D, l && l[lmLayer] ? l[lmLayer].tex : white);
      // mode 1: added on top (fog maps). mode 2: the texture's alpha is not used, every texel is drawn (gdriver.js, the
      // Graveyard's wall trim: a fix of source/host/fixes.js, not something the original driver does). Else blended.
      if (mode === 1) gl.blendFunc(gl.ONE, gl.ONE); else if (mode === 2) gl.blendFunc(gl.ONE, gl.ZERO); else gl.blendFunc(gl.SRC_ALPHA, gl.ONE_MINUS_SRC_ALPHA);
      if (ztest) gl.enable(gl.DEPTH_TEST); else gl.disable(gl.DEPTH_TEST);
      gl.depthMask(zwrite);
      gl.drawElements(gl.TRIANGLES, count, gl.UNSIGNED_INT, first * 4);
      stats.draws++;
    },
    /** A 1:1 copy with a colour key and no depth: the four vertices from `first` on, as a strip. */
    decal(tex, first) {
      if (lost || stale) return;
      const e = textures.get(tex);
      if (!e) return;
      gl.useProgram(dprog);
      gl.uniform2f(DU.screen, W, H);
      gl.uniform1i(DU.tex, 0);
      gl.activeTexture(gl.TEXTURE0);
      gl.bindTexture(gl.TEXTURE_2D, e.tex);
      gl.bindSampler(0, null);
      gl.disable(gl.DEPTH_TEST); gl.depthMask(false); gl.disable(gl.BLEND);
      gl.bindVertexArray(dvao);
      gl.drawArrays(gl.TRIANGLE_STRIP, first, 4);
      gl.enable(gl.BLEND); gl.depthMask(true);
      bound = 0;
      stats.draws++;
    },
    endScene() {
      stats.frames++;
      if (lost || stale) return;
      if (target) {
        // resolve the samples into the canvas
        gl.bindFramebuffer(gl.READ_FRAMEBUFFER, target.fbo);
        gl.bindFramebuffer(gl.DRAW_FRAMEBUFFER, target.resolve);
        gl.blitFramebuffer(0, 0, target.w, target.h, 0, 0, target.w, target.h, gl.COLOR_BUFFER_BIT, gl.NEAREST);
        gl.bindFramebuffer(gl.FRAMEBUFFER, null);
        gl.viewport(0, 0, canvas.width, canvas.height);
        gl.useProgram(cprog);
        gl.uniform1i(CU.tex, 0);
        gl.activeTexture(gl.TEXTURE0);
        gl.bindTexture(gl.TEXTURE_2D, target.tex);
        gl.bindSampler(0, null);
        gl.disable(gl.DEPTH_TEST); gl.disable(gl.BLEND);
        gl.bindVertexArray(cvao);
        gl.drawArrays(gl.TRIANGLES, 0, 3);
        gl.enable(gl.BLEND);
      }
      gl.bindSampler(0, null);
      bound = 0;
      if (fence) { fenceMore = true; gl.flush(); } else mark();
    },
    /** Forgets every texture: the driver uploads them again (drv.reupload) after a context loss or a restored save state. */
    forget() {
      stale = false;
      for (const e of textures.values()) gl.deleteTexture(e.tex);
      for (const l of lightmaps.values()) for (const x of l) if (x) gl.deleteTexture(x.tex);
      textures.clear(); lightmaps.clear();
    },
  };
  // A WebGL context can be taken away (a phone under memory pressure, a driver reset). The browser
  // only gives it back when the loss event's default is prevented. Nothing is drawn in between.
  canvas.addEventListener('webglcontextlost', (e) => { e.preventDefault(); lost = true; if (r.onLost) r.onLost(); });
  canvas.addEventListener('webglcontextrestored', () => { build(); lost = false; stale = true; r.resize(); if (r.onRestored) r.onRestored(); });
  return r;
}
