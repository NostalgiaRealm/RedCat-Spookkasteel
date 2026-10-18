# Released HTML audio resources

On 2026-10-18, `GameAudio.release()` gained deterministic HTML media cleanup.
It still captures the music cursor first, clears completion/error/metadata
handlers, pauses the element, and disconnects its spatial nodes. A custom
voice with `dispose()` retains that disposal path. Other media elements now
have their `src` attribute removed and `load()` called, releasing the browser
player instead of waiting for garbage collection.

This happens at the existing release points: natural one-shot completion,
playback error, keyed replacement, explicit stop, and reset. It does not change
which sounds are active, gains, scheduling, fades, ordinary pause/resume, or
the resource retained by a delayed repeating sound. HTML fallback music still
captures its cursor before unloading and resumes that cursor when it returns.

Music, native slow portal audio, and pickups use `BufferedAudioVoice` when
Web Audio is available. Their custom disposal remains in charge. In particular,
the buffered pickup path introduced to preserve the coin recording's tail does
not enter HTML media cleanup or stop a naturally completed buffer early.

## Focused verification

`node --test tests/audio-release-lifetime.test.mjs` passes all nine tests
([test results](../temp_work/audio-media-lifetime-2026-10-18/focused-tests.log)). They
cover natural completion/error, replacement/stop/reset, spatial cleanup order,
unchanged active sounds and pause/replay behavior, fallback music cursor
preservation, custom/buffered disposal, the configured ICoinL pickup path, and
aborting a pending media play without reviving a released record.

A separate Chrome 155.0.8059.84 profile loaded only the audio module and a small
fixture page. It did not load gameplay, campaign saves, or personal storage.
The check retained strong JavaScript references to all 66 native audio elements
(65 shot sounds and one spatial looping sound). Each released element removed
its source and called `load()` once, emitted `emptied`, and reached
`NETWORK_EMPTY` / `HAVE_NOTHING`. Chrome DevTools Media events recorded exactly
66 `kWebMediaPlayerCreated` and 66 `kWebMediaPlayerDestroyed` events, paired by
player ID and audio URL. Thus this result demonstrates browser-player teardown
without depending on collection of the element objects.

The live loop preserved its position through pause/resume and remained loaded
while other sounds were replaced. After the releases, the unchanged
`outronl.webm` started normally: duration 55.047 seconds, observed playhead
0.104702 seconds, no media error. This small check verifies startup only; it
does not replay the whole outro or campaign. The fixture recorded no page
errors, failed HTTP responses, or browser-console messages.

Retained evidence is under `temp_work/audio-media-lifetime-2026-10-18/`:

- [Focused test results](../temp_work/audio-media-lifetime-2026-10-18/focused-tests.log)
  and [test source](../tests/audio-release-lifetime.test.mjs).
- `browser-check.mjs`, `harness.html`, `browser-check.log`, and the isolated `profile/`.
- [Browser report](../temp_work/audio-media-lifetime-2026-10-18/browser-report.json),
  including raw native media events.
- [Native player summary](../temp_work/audio-media-lifetime-2026-10-18/native-player-lifecycle-summary.json),
  pairing creation and destruction IDs.
- `browser-attempt1.log`, `browser-attempt2.log`, and
  `browser-attempt2-report.json`, retaining the earlier fixture failures. Those
  required `currentSrc` to become empty; this Chrome retains the historical URL
  after unloading. The final check uses source absence and the empty media
  states, supported independently by native destruction events.

Only the focused lifetime tests and isolated browser fixture were run for this
change. No full campaign rerun or release build was made after the cleanup edit.

## Original outro incident and limits

The earned campaign initially reached its completed debriefing, then the first
outro request failed before metadata with
`MEDIA_ELEMENT_ERROR: Player load failure: error creating media player`.
An ordinary browser reload, Continue from the unchanged completed save, and
debrief continuation immediately played the same asset to its natural end at
55.047 seconds and returned to the menu. That successful full outro predates
the cleanup change above. Evidence is retained under
`temp_work/campaign-validation-2026-10-15/playthrough-1792088801065/` in
`earned-outro-start-2026-10-18.json`, `earned-outro-load-failure-2026-10-18.json`,
`earned-outro-retry-start-2026-10-18.json`, and
`earned-outro-complete-2026-10-18.json`; the normal reload is command 528 in
`live-commands.jsonl`.

Source inspection found that the single movie element already removes `src`
and calls `load()` in `IntroPlayback.stop()`. Gameplay `audio.reset()` already
runs before debriefing. There is no evidence that accumulating movie elements
caused the failure. The failure snapshot's one DOM video and zero DOM audio
elements cannot count the game's off-DOM `new Audio()` elements.

The earlier `GameAudio.release()` paused native elements and removed its own
records, but left their media sources loaded. Ordinary footsteps, shots,
impacts and enemy voices can create many such elements. The controlled-frame
runner advances gameplay frames independently of native audio/video wall time,
so increased concurrent media work is a plausible contributor. No native
player count, heap snapshot, or console intervention log was captured at the
original failure; its driver captured page exceptions rather than console
messages. This is not proof of a persistent JavaScript leak, a player-limit
hit, or a failure that would occur at ordinary real-time game speed.

[Chromium's media factory](https://chromium.googlesource.com/chromium/src.git/+/refs/heads/main/content/renderer/media/media_factory.cc)
can reject creation when its player limit is reached, but it also returns a
null player if its media task runner cannot be created. The inspected main
branch uses a default limit of 1000; this is source context, not a measured
limit or count in the failed campaign session.
[Blink's media-element error path](https://chromium.googlesource.com/chromium/src/+/6612b939a314c187639c9a366bcd8df664a9f278/third_party/blink/renderer/core/html/media/html_media_element.cc)
reports the observed text for null player creation. The text alone therefore
does not distinguish those causes.

The change is justified as explicit resource lifecycle cleanup, with native
destruction demonstrated above. It is not presented as a proven diagnosis or
reproduction-based fix for the original outro failure. Menu voice playback
has a separate pause-only cleanup path in `src/menu-audio.js`; it was reviewed
but remains outside this change. The original generic movie error also suggests
missing imported media even for this creation failure; that message was not
changed here.
