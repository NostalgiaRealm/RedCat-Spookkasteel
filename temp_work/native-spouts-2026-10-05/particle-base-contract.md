# CParticle contract used by CRcParticleSystem

Read-only binary research, 2026-10-05. Source is RcHcGame.dat from the original installation; instruction evidence is retained in `particle-base.asm`, `spout-particle-configuration.asm`, `spout-parameters.asm`, and `spout-render.asm` in this directory. Constants are retained in `particle-constants.json`.

## Motion equations

The spout initializer at 0x468730 configures mode 1, no collision, no wiggle, and acceleration `(0, -0.75 * Gravity, 0)`. The multiplier is the float 0.75 at 0x64da3c; its sign is negated at 0x4687c7. The shared particle physics at 0x47e090 uses the elapsed milliseconds argument as follows:

```
dt = elapsedMilliseconds * float32(0.001)
velocity += acceleration * (32 * dt)
position += velocity * dt
```

Consequently the spout equation is `velocity.y -= 24 * Gravity * dt`, followed by `position += velocity * dt`. This is semi-implicit Euler, not the analytic `v0*t - 0.5*g*t*t` trajectory. The factor 32 belongs to acceleration, not the initial velocity.

The CParticle friction coefficient at +0x94 defaults to float 2120 (0x47da9b), and the spout initializer does not change it. The shared friction branch only runs if `0 <= coefficient < 1`; hence it is skipped. Shared optional wiggle and collision branches are also skipped because the spout explicitly supplies false for both flags. No world wind or collision/bounce work is part of this path.

Evidence: delta conversion 0x47e124–0x47e137; copies of velocity/acceleration 0x47e142–0x47e174; disabled wiggle gate 0x47e178; acceleration scale 0x47e301–0x47e317; velocity addition 0x47e31c–0x47e329; optional friction 0x47e32e–0x47e394; new-position calculation 0x47e3a9–0x47e3e1; collision gate 0x47e3e6.

## Activation and timers

`CParticle::reset` at 0x47e710 refuses to reset an already active slot. Otherwise it sets active and moving, resets waypoint/collision counters, copies initial velocity +0x134 to current velocity +0x10, sets initial integer alpha, clears the fading flag, and resets timers via 0x47e7b0.

Timers contain duration milliseconds, deadline milliseconds, remaining fraction, and active. Initializer 0x4041b0 sets deadline to -1 and remaining fraction to 1. A timer's deadline is not established until its first update, when it becomes `nowMs + durationMs`.

For each timer update:

```
if durationMs == -1:
    active = true
elif deadlineMs == -1:
    deadlineMs = nowMs + durationMs
    remaining = 1
    active = true
elif nowMs > deadlineMs:
    remaining = 0
    active = false
else:
    remaining = durationMs > 0 ? (deadlineMs - nowMs) / durationMs : 0
    active = true
```

The strict greater-than comparison matters: the particle is still active at exactly its deadline. Lifetime/fade-delay durations are `trunc(seconds*1000)`; nonpositive seconds reset those timers to infinite (-1). Native float-to-int helper 0x60ab20 explicitly truncates.

`CParticle::tick` 0x47dd60 updates lifetime first. If expired it clears active and returns before alpha or movement. Otherwise it updates either the active fade timer or the fade-delay timer, then calls mode-1 physics with the frame's full elapsed milliseconds.

## Alpha and size timing

The spout supplies alpha start/end percentages, fade duration equal to the slot's randomized particle lifetime, and a 0.001-second fade delay. That delay is deliberately distinct from immediate fading:

1. First particle tick initializes lifetime and the 1 ms fade-delay deadline.
2. A later tick strictly after the delay deadline sets the fading flag and resets the fade timer, without yet updating its deadline.
3. The following particle tick initializes the fade deadline; later ticks advance its interpolation.

Initial alpha (0x47e71f onward) is `trunc(startPercent * float32(2.55))`. Fade alpha (0x47de45–0x47de6d) is `trunc(doubleConstant2_55 * (startPercent*remainingFade + endPercent*(1-remainingFade)))`. The stored double at 0x64e328 decodes as 2.5500000000000003; the initial float decodes as 2.549999952316284. Thus fully opaque initial alpha can be 254 rather than 255.

Spout rendering uses the lifetime remaining fraction at +0x24 for size interpolation, while opacity comes from the integer alpha at +0x70 through 0x5995d0. Alpha therefore lags size by the timer-start update steps. It is not exactly the same life-fraction interpolation.

## Complete initializer argument mapping

`0x47db60` takes 36 four-byte arguments, grouped vectors occupying three arguments. At callee entry after its two pushes, argument 0 is at `[esp+0xc]`.

| Argument | Particle field | Spout configuration |
|---|---|---|
| 0–2 | +0x04 position | Emitter origin, subsequently set for each birth |
| 3–5 | +0x134 initial velocity | Zero at construction, subsequently set per birth |
| 6 | +0xc0 lifetime seconds / +0x140 duration ms | One randomized lifetime per slot |
| 7 | +0x3c | 0 |
| 8 | +0x4c waypoint pointer | 0 |
| 9 | +0x50 waypoint count | 10; unused in mode 1 |
| 10 | +0x58 mode | 1 |
| 11–13 | +0x60 acceleration | `(0, -0.75*Gravity, 0)` |
| 14 | +0x7c alpha start | AlphaPercentageStart |
| 15 | +0x80 alpha end | AlphaPercentageEnd |
| 16 | +0xbc fade seconds | Same random lifetime as argument 6 |
| 17 | +0xe0 fade delay | 0.001 seconds |
| 18 | +0x98 collision enabled | false (push 0 at 0x468892) |
| 19–21 | +0xa0 collision extents | `(20,20,20)`; unused because collision disabled |
| 22 | +0xb8 additional collision flag | false (push 0 at 0x468873) |
| 23 | +0xc9 wiggle enabled | false (push 0 at 0x468871) |
| 24 | +0xfc color time | 0 |
| 25 | +0x104 | 1 |
| 26 | +0x108 | 10 |
| 27 | +0x110 | 1 |
| 28 | +0x114 | 2 |
| 29–31 | +0x118 color-related vector | Emitter origin; unused by spout rendering |
| 32–34 | +0x124 color-related vector | `(pi/2,0,0)`; unused by spout rendering |
| 35 | +0x10c/+0x130 color mode | 0 |

Do not interpret the unused color-related arguments as authored smoke color. The CRcParticleSystem renderer owns its separate color interpolation, independently of CParticle mode-2 behavior.
