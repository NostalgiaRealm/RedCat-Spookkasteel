# Android native wrapper release review — 26 October 2026

## Scope

Reviewed `android/app/src/main/AndroidManifest.xml`, `MainActivity.kt`, `GameAssets.kt`, `GameUrls.kt`, `HttpByteRange.kt`, theme resources, and the current JavaScript Android adapter. This is source review, not a claim of physical-device campaign verification. The root build task runs Kotlin compilation, JVM checks, lint and isolated API-36 emulator checks.

## Corrections

- Bind the foreground Activity’s physical volume controls to `AudioManager.STREAM_MUSIC`, including menu silence and paused gameplay. This follows Android’s [audio-output guidance](https://developer.android.com/media/platform/output). It does not change mixer levels, WAV playback or scheduling.
- Remove the duplicate native audio-focus owner after a real API-36 emulator run exposed a level-start deadlock. WebView owns its HTML/media focus. Native Activity and window focus still drive game suspension, as does headphone removal. The obsolete native audio-focus retry panel is removed; normal game/menu Back routing is unchanged.

## Existing boundaries verified in source

- Stable HTTPS app-local origin; all assets remain packaged/offline. No INTERNET permission or native analytics/ads SDK.
- Main-frame/origin-restricted message endpoint; main navigation limited to the game entry; browser links explicitly allowlisted. File/content URL access and mixed content disabled. Native document providers use separate controlled content-resolver paths.
- Media supports bounded single-byte ranges and suffix ranges, with explicit 206/416 responses; malformed/path-traversal requests cannot fall through to network. Uncompressed media extensions are configured by the parent build configuration.
- AndroidX insets keep the actual WebView viewport clear of system bars/cutouts/mandatory gesture edges. No fixed orientation is imposed, preserving API-36 large-screen resizing.
- Activity background/window-focus loss pauses the web adapter and clears held input. Headphone removal requests a pause. Gameplay requires explicit resume. These lifecycle pauses preserve the underlying WebView and current save state.
- Export/import share a single bounded document operation; selected files are capped at 32 MiB, UTF-8 validated, and import results only reach the original page generation. Native read/write operations run on a worker thread. Shared JavaScript performs semantic save validation before confirmation/replacement.
- Release WebView inspection is disabled, debug inspection is enabled; renderer termination displays a recovery screen. Android backup/device transfer is disabled; manual export remains the transfer mechanism.
- Force Dark is disabled by the theme; algorithmic WebView darkening defaults off, so no additional color override is needed.

## Focused validation boundary

`git diff --check` passes for this native edit. No artificial unit tests were added for framework callbacks; the final Gradle compilation/lint and emulator run are recorded by the root task. The existing URL/range JVM tests remain the relevant pure-logic checks.

Physical Android 10 hardware, Bluetooth/USB controller combinations, real document-provider implementations and sustained low-end performance still need target-device validation; an API-36 emulator cannot establish those.

## Confirmed release blocker: the app competed with its own WebView

The root’s `emulator/audio-stalled.txt` recorded two focus owners with the same application UID 10217: the Activity’s `AUDIOFOCUS_GAIN` request and WebView’s `AudioFocusDelegate` request for `GAIN_TRANSIENT_MAY_DUCK`. Android delivered `LOSS_TRANSIENT_CAN_DUCK` to the Activity. The Activity treated this as an external interruption and suspended the same menu sound awaited by level startup; its native overlay then prevented progress.

A `setWillPauseWhenDucked(false)` change alone would not fix this: [AOSP FocusRequester](https://android.googlesource.com/platform/frameworks/base/+/master/services/core/java/com/android/server/audio/FocusRequester.java) explicitly dispatches same-UID focus changes instead of applying framework ducking. Ignoring only CAN_DUCK would also miss longer HTML media requests, which can request full GAIN and cause permanent LOSS. Android’s public callback does not identify the winning owner.

The correction uses one owner, WebView, rather than attempting to infer that identity or suppress every focus-loss event. The Activity no longer requests/abandons audio focus. It sends availability only while resumed and window-focused, and still sends the existing headphone-removal pause. Its WebView remains intact across interruptions.

Primary-source references, captured locally on 26 October 2026:

- [Chromium AudioFocusDelegate.java](https://chromium.googlesource.com/chromium/src/+/main/content/public/android/java/src/org/chromium/content/browser/AudioFocusDelegate.java): native Android focus requests, external ducking and suspend/resume handling.
- [Chromium audio_focus_delegate_android.cc](https://chromium.googlesource.com/chromium/src/+/main/content/browser/media/session/audio_focus_delegate_android.cc): bridges Android callbacks to the media session.
- [Chromium media_session_impl.cc](https://chromium.googlesource.com/chromium/src/+/main/content/browser/media/session/media_session_impl.cc): persistent media requests GAIN, shorter media may request MAY_DUCK. Captured files have the same filenames alongside this report.
- [Android audio-focus guidance](https://developer.android.com/media/optimize/audio-focus): a player already managing audio focus should not be paired with a second competing application focus implementation.

These current-source references explain the failure mechanism, but are not a byte-for-byte identification of the emulator’s WebView build. The actual two-owner deadlock is established by that emulator’s audio dump.

### Interruption boundary

Do not promise that every audio-only interruption suspends gameplay on every WebView provider. Chromium distinguishes HTML media from ambient/one-shot WebAudio; the latter is not guaranteed to emit `AudioContext.statechange` or suspend on focus-only loss. No speculative state-change hook was added. The native window/lifecycle signals cover external activities, system panels, calls that take focus, backgrounding, and headset removal; WebView handles its own media ducking. An external application taking only audio focus while the game window remains focused still requires target-device/provider validation.
