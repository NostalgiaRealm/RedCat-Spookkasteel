import path from 'node:path';
import {createHash} from 'node:crypto';
import {mkdir, readFile, readdir, writeFile} from 'node:fs/promises';
import {fileURLToPath} from 'node:url';
import {createRuntimeBundle, runtimeBundleIdentity, RUNTIME_BUNDLE, RUNTIME_BUNDLE_MAP} from './runtime-bundle.mjs';

const defaultProject = fileURLToPath(new URL('../', import.meta.url));
const siteBase = 'https://redcat.invalid/';
const moduleExtension = /\.(?:m?js)$/;

// Only module declarations need parsing. Tokenize first so documentation,
// shader strings, regular expressions and comments cannot become dependencies.
function tokens(source) {
  const result = [];
  let i = 0;
  function quoted(quote) {
    let value = '';
    i++;
    while (i < source.length) {
      const char = source[i++];
      if (char === quote) return value;
      if (char !== '\\') { value += char; continue; }
      const escape = source[i++];
      if (escape === '\n') continue;
      if (escape === '\r') { if (source[i] === '\n') i++; continue; }
      const simple = {n:'\n', r:'\r', t:'\t', b:'\b', f:'\f', v:'\v', '0':'\0'};
      if (Object.hasOwn(simple, escape)) { value += simple[escape]; continue; }
      if (escape === 'x' || escape === 'u') {
        let digits;
        if (escape === 'u' && source[i] === '{') {
          const end = source.indexOf('}', ++i);
          if (end < 0) throw new Error('Unclosed Unicode escape');
          digits = source.slice(i, end); i = end + 1;
        } else {
          const count = escape === 'x' ? 2 : 4;
          digits = source.slice(i, i + count); i += count;
        }
        if (!/^[0-9a-f]+$/i.test(digits)) throw new Error('Invalid module string escape');
        value += String.fromCodePoint(parseInt(digits, 16));
      } else value += escape;
    }
    throw new Error('Unclosed JavaScript string');
  }
  function template() {
    result.push({type:'template', value:'`'});
    i++;
    while (i < source.length) {
      if (source[i] === '\\') { i += 2; continue; }
      if (source[i] === '`') { i++; return; }
      if (source[i] === '$' && source[i + 1] === '{') {
        i += 2;
        result.push({type:'punct', value:'('});
        scan(true);
        result.push({type:'punct', value:')'});
      } else i++;
    }
    throw new Error('Unclosed JavaScript template');
  }
  function regexpEnd() {
    const previous = result.at(-1);
    const expressionStart = !previous ||
      (previous.type === 'word' && /^(?:return|throw|case|delete|void|typeof|yield|await|in|of|instanceof)$/.test(previous.value)) ||
      (previous.type === 'punct' && /^[({[=,:;!?&|+\-*%^~<>}]$/.test(previous.value));
    if (!expressionStart) return -1;
    let inClass = false;
    for (let end = i + 1; end < source.length; end++) {
      const char = source[end];
      if (char === '\n' || char === '\r') return -1;
      if (char === '\\') { end++; continue; }
      if (char === '[') inClass = true;
      if (char === ']') inClass = false;
      if (char === '/' && !inClass) {
        end++;
        while (/[a-z]/i.test(source[end] || '') && end < source.length) end++;
        return end;
      }
    }
    return -1;
  }
  function scan(templateExpression = false) {
    let braces = 0;
    while (i < source.length) {
      const char = source[i], next = source[i + 1];
      if (/\s/.test(char)) { i++; continue; }
      if (char === '/' && next === '/') {
        const end = source.indexOf('\n', i + 2);
        i = end < 0 ? source.length : end + 1; continue;
      }
      if (char === '/' && next === '*') {
        const end = source.indexOf('*/', i + 2);
        if (end < 0) throw new Error('Unclosed JavaScript comment');
        i = end + 2; continue;
      }
      if (char === "'" || char === '"') { result.push({type:'string', value:quoted(char)}); continue; }
      if (char === '`') { template(); continue; }
      if (char === '/') {
        const end = regexpEnd();
        if (end >= 0) { i = end; result.push({type:'regexp', value:'/'}); continue; }
      }
      if (/[a-z_$]/i.test(char)) {
        const start = i++;
        while (i < source.length && /[\w$]/.test(source[i])) i++;
        result.push({type:'word', value:source.slice(start, i)}); continue;
      }
      if (char === '{') braces++;
      if (char === '}') {
        if (templateExpression && braces === 0) { i++; return; }
        braces--;
      }
      result.push({type:'punct', value:char}); i++;
    }
    if (templateExpression) throw new Error('Unclosed JavaScript template expression');
  }
  scan();
  return result;
}

export function moduleSpecifiers(source, filename = 'JavaScript module') {
  const parsed = tokens(source), imports = [];
  for (let i = 0; i < parsed.length; i++) {
    const token = parsed[i], next = parsed[i + 1];
    if (token.type !== 'word' || !['import', 'export'].includes(token.value) || parsed[i - 1]?.value === '.') continue;
    if (token.value === 'import' && next?.value === '.') continue; // import.meta
    if (token.value === 'import' && next?.value === '(') {
      const argument = parsed[i + 2], following = parsed[i + 3];
      if (argument?.type !== 'string' || ![')', ','].includes(following?.value)) {
        throw new Error(`${filename}: dynamic imports must use a literal module path for cache versioning.`);
      }
      imports.push(argument.value); continue;
    }
    if (token.value === 'import' && next?.type === 'string') { imports.push(next.value); continue; }
    // A named declaration export (function, class, const...) has no source.
    if (token.value === 'export' && !['{', '*'].includes(next?.value)) continue;
    let cursor = i + 1;
    if (next?.value === '{') {
      while (cursor < parsed.length && parsed[cursor].value !== '}') cursor++;
      cursor++;
    }
    for (; cursor < parsed.length; cursor++) {
      const current = parsed[cursor];
      if (current.type === 'word' && current.value === 'from' && parsed[cursor + 1]?.type === 'string') {
        imports.push(parsed[cursor + 1].value); break;
      }
      if (current.value === ';' || (cursor > i + 1 && ['import', 'export'].includes(current.value))) break;
      if (token.value === 'export' && next?.value === '{') break;
    }
  }
  return [...new Set(imports)];
}

function attribute(tag, name) {
  return tag.match(new RegExp(`\\b${name}\\s*=\\s*(["'])(.*?)\\1`, 'i'))?.[2];
}

function replaceAttribute(tag, name, value) {
  return tag.replace(new RegExp(`(\\b${name}\\s*=\\s*)(["'])(.*?)\\2`, 'i'), `$1"${value}"`);
}

function withoutVersion(value) {
  const url = new URL(value, siteBase);
  url.searchParams.delete('v');
  return value.startsWith('http:') || value.startsWith('https:') ? url.href :
    `.${url.pathname}${url.search}${url.hash}`;
}

function localPath(value, parent = 'index.html') {
  const url = new URL(value, new URL(parent, siteBase));
  if (url.origin !== new URL(siteBase).origin || url.search || url.hash) {
    throw new Error(`Module and stylesheet paths must be local and unqualified: ${value}`);
  }
  const relative = decodeURIComponent(url.pathname).slice(1);
  if (!relative || relative.includes('\\')) throw new Error(`Invalid runtime path: ${value}`);
  return relative;
}

function permittedModule(relative) {
  return moduleExtension.test(relative) && (relative.startsWith('source/') || relative.startsWith('node_modules/three/'));
}

async function sourceModules(projectDir, relative = 'source') {
  const paths = [];
  for (const entry of (await readdir(path.join(projectDir, relative), {withFileTypes:true})).sort((a,b) => a.name.localeCompare(b.name, 'en'))) {
    const name = `${relative}/${entry.name}`;
    if (entry.isSymbolicLink()) throw new Error(`Runtime source symlinks are not supported: ${name}`);
    if (entry.isDirectory()) paths.push(...await sourceModules(projectDir, name));
    else if (entry.isFile() && moduleExtension.test(name) && name !== RUNTIME_BUNDLE) paths.push(name);
  }
  return paths;
}

export async function refreshWebCache({projectDir = defaultProject, bundle = true} = {}) {
  projectDir = path.resolve(projectDir);
  const indexPath = path.join(projectDir, 'index.html');
  const original = await readFile(indexPath, 'utf8');
  const maps = [...original.matchAll(/<script\b[^>]*\btype\s*=\s*(["'])importmap\1[^>]*>[\s\S]*?<\/script\s*>/gi)];
  if (maps.length !== 1) throw new Error('index.html must contain exactly one import map.');
  const oldMapTag = maps[0][0];
  const config = JSON.parse(oldMapTag.slice(oldMapTag.indexOf('>') + 1).replace(/<\/script\s*>$/i, ''));
  if (!config.imports || typeof config.imports !== 'object' || Array.isArray(config.imports)) throw new Error('The game import map must contain imports.');
  if (config.scopes && Object.keys(config.scopes).length) throw new Error('Scoped import maps are not supported by the game cache generator.');
  const aliases = {};
  for (const [name, target] of Object.entries(config.imports)) {
    if (typeof target !== 'string') throw new Error(`Invalid import-map target: ${name}`);
    // Recreate generated URL entries and exact addon aliases from current files.
    if (name.startsWith('./source/') || name.startsWith('./src/') || name.startsWith('./node_modules/three/') ||
        (name.startsWith('three/addons/') && name !== 'three/addons/')) continue;
    aliases[name] = withoutVersion(target);
  }
  const resolveImport = (specifier, parent) => {
    let target = specifier, base = parent;
    if (!specifier.startsWith('.') && !specifier.startsWith('/') && !specifier.includes(':')) {
      const key = Object.keys(aliases).filter(key => key === specifier || (key.endsWith('/') && specifier.startsWith(key))).sort((a,b) => b.length - a.length)[0];
      if (!key) throw new Error(`${parent}: unmapped module ${specifier}`);
      target = aliases[key] + (key.endsWith('/') ? specifier.slice(key.length) : '');
      base = 'index.html';
    }
    const resolved = localPath(target, base);
    if (!permittedModule(resolved)) throw new Error(`${parent}: module outside source/ or Three.js: ${specifier}`);
    return resolved;
  };
  const files = new Map(), usedAliases = new Map();
  const pending = await sourceModules(projectDir);
  // Keep the primary Three alias complete even when a small fixture has no imports.
  if (aliases.three) pending.push(resolveImport('three', 'index.html'));
  while (pending.length) {
    const relative = pending.pop();
    if (files.has(relative)) continue;
    const bytes = await readFile(path.join(projectDir, relative));
    files.set(relative, bytes);
    for (const specifier of moduleSpecifiers(bytes.toString('utf8'), relative)) {
      const dependency = resolveImport(specifier, relative);
      if (!specifier.startsWith('.') && !specifier.startsWith('/') && !specifier.includes(':')) usedAliases.set(specifier, dependency);
      pending.push(dependency);
    }
  }
  const styles = [...original.matchAll(/<link\b[^>]*>/gi)].map(match => match[0]).filter(tag => attribute(tag, 'rel')?.toLowerCase() === 'stylesheet');
  for (const tag of styles) {
    const href = attribute(tag, 'href');
    if (!href) throw new Error('Every stylesheet needs a local href.');
    const relative = localPath(withoutVersion(href));
    if (!relative.startsWith('src/') || !relative.endsWith('.css')) throw new Error(`Stylesheet outside src/: ${href}`);
    files.set(relative, await readFile(path.join(projectDir, relative)));
  }
  const scripts = [...original.matchAll(/<script\b[^>]*>/gi)].map(match => match[0]).filter(tag => attribute(tag, 'type') === 'module' && attribute(tag, 'src'));
  if (scripts.length !== 1) throw new Error('index.html must contain exactly one external module entry script.');
  const entry = localPath(withoutVersion(attribute(scripts[0], 'data-source') || attribute(scripts[0], 'src')));
  if (!entry.startsWith('source/') || !files.has(entry)) throw new Error(`Entry module is not in source/: ${entry}`);
  const hash = createHash('sha256').update(JSON.stringify(Object.entries(aliases).sort()));
  if (bundle) hash.update(JSON.stringify(runtimeBundleIdentity));
  for (const [relative, bytes] of [...files].sort(([a],[b]) => a < b ? -1 : a > b ? 1 : 0)) hash.update(relative).update('\0').update(bytes).update('\0');
  const version = hash.digest('hex').slice(0, 24);
  // Generate from the same immutable buffers used for the revision. Publish
  // HTML last so a failed build cannot point it at a missing/partial bundle.
  const built = bundle ? await createRuntimeBundle({projectDir,entry,files,resolveImport,revision:version}) : null;
  let bundleChanged = false;
  if (built) {
    for (const [relative,bytes] of [[RUNTIME_BUNDLE,built.code],[RUNTIME_BUNDLE_MAP,built.sourceMap]]) {
      let previous;
      try { previous = await readFile(path.join(projectDir,relative)); }
      catch (error) { if (error.code !== 'ENOENT') throw error; }
      if (!previous?.equals(bytes)) {
        await mkdir(path.dirname(path.join(projectDir,relative)), {recursive:true});
        await writeFile(path.join(projectDir,relative),bytes);
        bundleChanged = true;
      }
    }
  }
  const versioned = relative => `./${relative}?v=${version}`;
  const imports = {...aliases};
  for (const relative of [...files.keys()].filter(name => moduleExtension.test(name)).sort()) imports[`./${relative}`] = versioned(relative);
  for (const [name, relative] of usedAliases) imports[name] = versioned(relative);
  if (aliases.three) imports.three = versioned(resolveImport('three', 'index.html'));
  const map = {...config, imports:Object.fromEntries(Object.entries(imports).sort(([a],[b]) => a < b ? -1 : a > b ? 1 : 0))};
  const mapTag = `<script type="importmap" id="game-importmap">\n${JSON.stringify(map, null, 2)}\n</script>`;
  let updated = original.replace(oldMapTag, mapTag);
  for (const tag of styles) updated = updated.replace(tag, replaceAttribute(tag, 'href', versioned(localPath(withoutVersion(attribute(tag, 'href'))))));
  let entryTag = replaceAttribute(scripts[0], 'src', versioned(bundle ? RUNTIME_BUNDLE : entry));
  if (!attribute(entryTag,'data-source')) entryTag = entryTag.replace(/>$/,` data-source="./${entry}">`);
  updated = updated.replace(scripts[0],entryTag);
  if (updated !== original) await writeFile(indexPath, updated);
  return {version, changed:updated !== original || bundleChanged, modules:[...files.keys()].filter(name => moduleExtension.test(name)).sort(), stylesheets:styles.length,
    ...(built ? {bundle:{path:RUNTIME_BUNDLE, modules:built.modules.length,inputBytes:built.inputBytes,bytes:built.bytes}} : {})};
}

if (process.argv[1] && path.resolve(process.argv[1]) === fileURLToPath(import.meta.url)) {
  try {
    const result = await refreshWebCache();
    console.log(`Web cache ${result.version}: ${result.modules.length} modules, ${result.stylesheets} stylesheets${result.changed ? ' updated' : ' unchanged'}.`);
    if (result.bundle) console.log(`Runtime bundle: ${result.bundle.modules} modules → 1 request, ${result.bundle.inputBytes} → ${result.bundle.bytes} bytes.`);
  } catch (error) {
    console.error(`Web cache refresh failed: ${error.message}`);
    process.exitCode = 1;
  }
}
