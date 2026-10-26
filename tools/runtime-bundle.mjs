import path from 'node:path';
import {build, version as esbuildVersion} from 'esbuild';

export const RUNTIME_BUNDLE = 'src/game.bundle.js';
export const RUNTIME_BUNDLE_MAP = `${RUNTIME_BUNDLE}.map`;
// No property mangling, API polyfills, dropped calls, or storage-key rewriting.
// Names remain available to diagnostics and code inspecting class/function names.
export const runtimeBundleOptions = Object.freeze({
  bundle:true, format:'esm', platform:'browser', target:'es2022',
  minify:true, keepNames:true, treeShaking:true, charset:'utf8',
  legalComments:'inline', sourcemap:'external', sourcesContent:true,
});
export const runtimeBundleIdentity = {esbuild:esbuildVersion, ...runtimeBundleOptions};

/** Bundle the exact source snapshot already validated by the cache refresher. */
export async function createRuntimeBundle({projectDir, entry, files, resolveImport, revision}) {
  const result = await build({
    ...runtimeBundleOptions,
    absWorkingDir:projectDir,
    entryPoints:[entry],
    outfile:path.join(projectDir, RUNTIME_BUNDLE),
    write:false, metafile:true, logLevel:'silent',
    plugins:[{
      name:'validated-game-modules',
      setup(plugin) {
        plugin.onResolve({filter:/.*/}, args => {
          const relative = args.kind === 'entry-point' ? entry :
            resolveImport(args.path, path.relative(projectDir, args.importer).split(path.sep).join('/'));
          if (!files.has(relative)) throw new Error(`Module missing from validated snapshot: ${relative}`);
          return {path:path.join(projectDir, relative)};
        });
        plugin.onLoad({filter:/.*/}, args => {
          const relative = path.relative(projectDir, args.path).split(path.sep).join('/');
          const contents = files.get(relative);
          if (!contents) throw new Error(`Module missing from validated snapshot: ${relative}`);
          return {contents:contents.toString('utf8'), loader:'js', resolveDir:path.dirname(args.path)};
        });
      },
    }],
  });
  const js = result.outputFiles.find(file => file.path === path.join(projectDir, RUNTIME_BUNDLE));
  const map = result.outputFiles.find(file => file.path === path.join(projectDir, RUNTIME_BUNDLE_MAP));
  if (!js || !map) throw new Error('Runtime bundle or source map was not generated.');
  if (Object.values(result.metafile.outputs).some(output => output.imports.length)) {
    throw new Error('Runtime bundle unexpectedly needs external JavaScript modules.');
  }
  // Browsers fetch this only when debugging. It shares the bundle's revision.
  const code = Buffer.from(`${js.text}\n//# sourceMappingURL=game.bundle.js.map?v=${revision}\n`);
  return {
    code, sourceMap:Buffer.from(map.contents),
    modules:Object.keys(result.metafile.inputs).sort(),
    inputBytes:Object.values(result.metafile.inputs).reduce((total,input) => total + input.bytes,0),
    bytes:code.length,
  };
}
