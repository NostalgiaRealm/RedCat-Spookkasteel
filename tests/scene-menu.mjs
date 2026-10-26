import {mkdirSync} from 'node:fs';
import path from 'node:path';
import {fileURLToPath} from 'node:url';

// Shared navigation for current full-application scene checks. Use the public
// menu controls, including touch taps, rather than calling its controller or
// reviving removed flat-menu buttons. This module performs no storage writes.
export async function activateMenuControl(page, selector, {touch = false} = {}) {
  const target = page.locator(selector);
  await target.waitFor({state: 'visible'});
  if (touch) await target.tap();
  else await target.click();
}

export async function showMainMenu(page, options = {}) {
  await page.locator('#menu').waitFor({state: 'visible'});
  for (let back = 0; back < 4; back++) {
    if (await page.locator('.native-menu-frame').getAttribute('data-page') === 'home') return;
    await activateMenuControl(page, '#native-previous', options);
  }
  throw new Error('Original menu did not return to Hoofdmenu');
}

export async function showAdventureStart(page, options = {}) {
  await showMainMenu(page, options);
  await activateMenuControl(page, '[data-menu-choice="adventure"]', options);
  await activateMenuControl(page, '#native-next', options);
  if (await page.locator('.native-menu-frame').getAttribute('data-page') === 'difficulty') {
    await activateMenuControl(page, '#native-next', options);
  }
  await page.locator('#native-start').waitFor({state: 'visible'});
}

export async function startAdventure(page, options = {}) {
  await showAdventureStart(page, options);
  await activateMenuControl(page, '#native-start', options);
}

export async function showQuickplay(page, options = {}) {
  await showMainMenu(page, options);
  await activateMenuControl(page, '[data-menu-choice="quickplay"]', options);
  await activateMenuControl(page, '#native-next', options);
  await page.locator('[data-menu-page="quickplay"]').waitFor({state: 'visible'});
}

export async function finishLevelSelection(page, options = {}) {
  await activateMenuControl(page, '#native-next', options);
  await page.locator('[data-menu-page="difficulty"]').waitFor({state: 'visible'});
  await activateMenuControl(page, '#native-next', options);
  await page.locator('[data-menu-page="startinfo"]').waitFor({state: 'visible'});
}

export async function showLevelStart(page, level, options = {}) {
  if (!/^lvl0[0-4]a$/.test(level)) throw new Error(`Invalid scene chapter ${level}`);
  await showQuickplay(page, options);
  await activateMenuControl(page, `.level-card[data-level="${level}"]`, options);
  await finishLevelSelection(page, options);
}

export async function showAdventureExtras(page, options = {}) {
  await showAdventureStart(page, options);
  if (!await page.locator('#native-start-extras').evaluate(element => element.open)) {
    await activateMenuControl(page, '#native-start-extras > summary', options);
  }
}

export async function showMoreSettings(page, {paused = false, ...options} = {}) {
  if (!paused) await showMainMenu(page, options);
  await activateMenuControl(page, paused ? '#pause-settings' : '#open-settings', options);
  await activateMenuControl(page, '#open-more-settings', options);
}

// Keep disposable browser state and retained reports in the designated project
// workspace. The short Linux alias avoids Chromium's Unix-socket path limit.
export function createSceneOutput(name) {
  if (!/^[a-z0-9-]+$/.test(name)) throw new Error('Invalid scene output name');
  const root = fileURLToPath(new URL('../', import.meta.url));
  const output = path.join(root, 'temp_work', name, `run-${Date.now()}`);
  const scratch = path.join(root, 'temp_work', 'scene-tmp');
  mkdirSync(output, {recursive: true});
  mkdirSync(scratch, {recursive: true});
  const temporary = process.platform === 'linux' && path.resolve(process.cwd()) === path.resolve(root)
    ? '/proc/self/cwd/temp_work/scene-tmp' : scratch;
  process.env.TMPDIR = temporary;
  process.env.TMP = temporary;
  process.env.TEMP = temporary;
  return output;
}
