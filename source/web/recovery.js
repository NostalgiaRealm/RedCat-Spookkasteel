// Recovery points: which older save states of an adventure are kept next to the newest one, as the
// JavaScript port offered them ("Zit je vast? Ga terug naar ongeveer 2, 5 of 10 minuten speeltijd
// geleden"). That port kept eleven states, one per minute; a state of this port is 45 to 68 MB
// (stored: 23 MB in world 1, 39 MB right after the change to world 2), so here three older ones
// are kept and passed down a ladder. Pure
// functions: the storage itself is in game.js, and the rule is also run under Node
// (tools/savestate-check.mjs).
//
// Ages are seconds of playing time (a paused or closed game does not age a point). Whenever a new
// state replaces the newest one, plan() says which records move one slot down first:
//   slot 1 takes the outgoing newest state when it is empty or its own state is U[0] old;
//   slot 2 takes slot 1's state when that is ripe (L[1] old) and slot 2 is empty or U[1] old;
//   slot 3 takes slot 2's state when that is ripe (L[2] old), slot 3 is empty or U[2] old, and
//          slot 2 can be filled again at once.
// L[k] equals U[k-1], so a state that moves down is always replaced in the same step: no two slots
// ever hold the same state. With a state every minute the three slots are, just before the next
// state, 2 to 3, 4 to 7 and 8 to 15 minutes old; every three minutes (a phone) 6, 9 and 12 to 15.
// A menu shows the real age, never a promised one.
export const RECOVERY = {
  slots: ['r1', 'r2', 'r3'],
  L: [0, 170, 420],
  U: [170, 420, 780],
  // The room all recovery points of all players together may take, in bytes of stored (compressed)
  // data: eight to thirteen points on a desktop, two or three on a phone. Beyond it the oldest
  // points of other players go first (game.js trimRecovery).
  budget: (phone) => (phone ? 80 : 320) * 1048576,
  // With less free room than this the ladder stands still: the newest state always comes first.
  spare: 150 * 1048576,
};

/**
 * ages: [newest, slot 1, slot 2, slot 3] in seconds of playing time, null for an empty slot, at
 * the moment a new state is about to replace the newest. Returns the copies to make, [from, to]
 * as indices into ages, in the order to carry them out (the oldest slot first).
 */
export function planRotation(ages) {
  const [a0, a1, a2, a3] = ages.map((a) => (Number.isFinite(a) ? Math.max(0, a) : null));
  const { L, U } = RECOVERY;
  const ripe1 = a1 !== null && a1 >= L[1], ripe2 = a2 !== null && a2 >= L[2];
  const t3 = ripe2 && ripe1 && (a3 === null || a3 >= U[2]);
  const t2 = ripe1 && (a2 === null || a2 >= U[1] || t3);
  const t1 = a0 !== null && (a1 === null || a1 >= U[0] || t2);
  const out = [];
  if (t3) out.push([2, 3]);
  if (t2) out.push([1, 2]);
  if (t1) out.push([0, 1]);
  return out;
}

/** An age in seconds as the minutes a menu shows: at least 1. */
export const minutesAgo = (seconds) => Math.max(1, Math.round(seconds / 60));
