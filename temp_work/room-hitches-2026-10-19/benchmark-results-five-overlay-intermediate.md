# Focused room transition results

Final representative pair: normal camera collision, 1,306 manual frames along
the same eight Castle basement doorway/return targets.

| Measurement | Before | After |
| --- | ---: | ---: |
| Maximum world chunk activations in one frame | 47 | 3 |
| Maximum `bufferData` submissions in one frame | 66 | 12 |
| Maximum texture upload submissions in one frame | 4 | 3 |
| Streaming/render CPU slice p95 | 1.7 ms | 1.7 ms |
| Streaming/render CPU slice maximum | 4.9 ms | 4.3 ms |
| Frames retaining the previous completed view | 10 | 6 |
| Held frames with a known camera BSP area | 8 | 0 |
| Doorway targets ready at completion | 8/8 | 8/8 |
| Incomplete views presented | 0 | 0 |
| Browser script errors | 0 | 0 |

The remaining after holds occur only while the probe puts the camera in an
unknown/solid BSP area, where the existing conservative fallback intentionally
requires the wider admitted neighborhood. The longest such after hold is four
manual frames. Final world residency is identical: 3,429 vertices, 58 chunks,
10 world textures. The wider actor preparation margin retains 40 rather than
38 actors, with the same 20 actors drawn; resident actor geometries increase
from 15 to 16. This is graphics preparation, with no campaign state/profile
writes or builds.

The first queue-only implementation reduced upload bursts but increased held
frames. Diagnostics then identified closed neighboring rooms being counted as
critical, and ordinary opaque wooden doors incorrectly classified as
see-through merely because their imported material enabled alpha testing.
The final pair includes the required-view mask, actual authored texture
transparency metadata, and bounded camera lookahead, addressing those causes.
All intermediate reports remain retained here for comparison.

- Before: [report](before-walk-solid-camera-1792415389944/report.json).
- After: [report](after-walk-solid-camera-1792415832681/report.json).
- Structured comparison: [JSON](benchmark-comparison.json).
- Scope and limitations: [method](benchmark-method.md).

These measurements establish reduced preparation bursts and ready ordinary
camera views on this host. They do not establish a particular frame rate or
performance on the user's 2019 i3. The harness freezes gameplay and directly
probes positions; it is not a physical campaign walkthrough, and it does not
run native door auto-opening scripts while approaching each doorway.
