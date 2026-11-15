// Highscores. The original keeps a table of eleven scores in Settings\menu.ini [HIGHSCORES]
// (shipped: Teun 100 ... Rene 10, Nineke 0) and shows ten of them. A score enters the table when
// an adventure is finished: after the outro the menu inserts the player's TotalScore
// (RcHcMenu.dat 0x564EEC with 0x551A9C) and saves the table (0x5516DC). Rows of the table show
// "Klaar!" (MENUSTRINGS 32).
// Here the table is kept by the menu (menu.js) with the same insertion rule, and the page shows
// ten rows: every player of the Spelerlijst with the TotalScore of the adventure he is in and
// its Griezelplek, filled up with the top of the table.
export const SHIPPED = [['Teun', 100], ['Gyda', 90], ['Paul', 80], ['Brian', 70], ['Pascal', 60], ['John', 50], ['Rob', 40], ['Tineke', 30], ['Harry', 20], ['Rene', 10], ['Nineke', 0]];
export const ROWS = 10;
export const shippedTable = () => SHIPPED.map(([name, score]) => ({ name, score }));
const valid = (table) => Array.isArray(table) && table.length === SHIPPED.length && table.every((e) => e && typeof e.name === 'string' && Number.isFinite(e.score));

/**
 * The original's insertion (0x551A9C): the entry replaces the tenth row when its score is at
 * least that row's, then moves up past every row whose score is not higher. Returns a new table.
 */
export function insertScore(table, entry) {
  const t = (valid(table) ? table : shippedTable()).map((e) => ({ name: e.name, score: e.score }));
  if (t[9].score > entry.score) return t;
  t[9] = { name: String(entry.name), score: entry.score };
  for (let k = 8; k >= 0; k--) if (t[k].score <= t[k + 1].score) { const x = t[k]; t[k] = t[k + 1]; t[k + 1] = x; }
  return t;
}

/** players: players.list(); levels: [{name}]; table: the stored table. Returns [{ name, score, level }] sorted by score. */
export function highscoreRows(players, levels, table) {
  const own = players.map((p) => ({ name: p.name, score: p.totalScore, level: p.adventureDone ? 'Klaar!' : levels[p.world - 1].name, player: p.number }));
  const stored = (valid(table) ? table : shippedTable()).slice(0, Math.max(0, ROWS - own.length)).map((e) => ({ name: e.name, score: e.score, level: 'Klaar!', player: 0 }));
  // a player goes before a table row with the same score, as a newly added score does in the original
  return [...own, ...stored].sort((a, b) => b.score - a.score || (b.player ? 1 : 0) - (a.player ? 1 : 0)).slice(0, ROWS);
}
