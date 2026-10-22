# Full-health healing heart collection — 2026-10-05

The user observed that the original game allows collection of healing hearts
while health is full. The remake explicitly returned early for that state in
`Gameplay.pickup`; removing that gate restores the requested behavior.

The normal health clamp, 5/15/25 points, secret count, reward effect, pickup
event/audio routing and `PickupCommand` all use the existing collection path.
Golden capacity hearts retain their separate +2 maximum-HP rule, and life
pickups retain their separate extra-life rule.

Existing native notes inspected:

- `docs/debriefing-and-hearts-native.md`
- `temp_work/health-extension-2026-09-28/native-heart-findings.md`
- `temp_work/pickup-native-findings.md`

These document medikit amounts, golden heart capacity and pickup effects; they
do not independently establish full-health collection eligibility. That part
of this change follows the user's original-game observation. No additional
native-disassembly or original-game visual comparison is claimed.

Verification:

```sh
node --test tests/heart-capacity.test.mjs tests/reward-effects.test.mjs tests/gameplay.test.mjs
git diff --check -- src/gameplay.js tests/heart-capacity.test.mjs tests/reward-effects.test.mjs tests/gameplay.test.mjs docs/debriefing-and-hearts-native.md docs/pickup-score-native.md
```

All 30 tests pass; whitespace validation passes. The full-health regression
covers all three sizes at 10 and 20 maximum HP, health/life/capacity limits,
one-time score/secret/effect/command, correct S/M/L sound routing and save/load
without duplicate collection. Existing tests cover fractional healing,
containers, disabled pickups and blocked line of sight.

`focused-tests.log` retains the initial test-fixture failure (the script stub
omitted its snapshot method); `focused-tests-final.log` records the passing
run after fixing the stub. No package build, release or website was produced.
