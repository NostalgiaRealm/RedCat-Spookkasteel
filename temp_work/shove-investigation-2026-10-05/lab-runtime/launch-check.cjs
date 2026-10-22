if (process.argv[1]?.endsWith('/node_modules/.bin/electron')) {
  const { EventEmitter } = require('node:events');
  require('node:child_process').spawn = (binary, args) => {
    const expected = require('node:path').resolve(process.cwd(), 'node_modules/electron/dist/electron');
    if (binary !== expected || args.join(' ') !== '. --ozone-platform=wayland') throw new Error('Launcher arguments were changed');
    if (!process.env.TMPDIR.includes('shove-investigation-2026-10-05/lab-runtime/tmp')) throw new Error('Wrong temporary directory');
    console.log('PASS: npm start uses the independent Electron binary, unchanged Wayland arguments, and designated temp path. No GUI process started.');
    return new EventEmitter();
  };
}
