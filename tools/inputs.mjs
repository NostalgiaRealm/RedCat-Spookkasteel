// Where the tools find what they read but do not own: the original game files and the
// decompilation (RC_ORIGINAL_DECOMPILED/) and the menu's assets (assets/). In the published
// repository both lie in the repository itself; in a checkout where this port is a folder of its
// own they are taken from the JavaScript port's folder beside it (../RCSPOOK_NEW).
// The JavaScript port itself (for the checks that run it as classic/) is always the folder beside
// this one: a checkout of the branch javascript-port, or RC_CLASSIC.
import fs from 'node:fs';
import path from 'node:path';
import { fileURLToPath } from 'node:url';

const ROOT = path.resolve(path.dirname(fileURLToPath(import.meta.url)), '..');
/** The path of `rel` (e.g. 'RC_ORIGINAL_DECOMPILED/originals', 'assets') in this repository, else beside it. */
export const input = (rel) => { const here = path.join(ROOT, rel); return fs.existsSync(here) ? here : path.resolve(ROOT, '../RCSPOOK_NEW', rel); };
