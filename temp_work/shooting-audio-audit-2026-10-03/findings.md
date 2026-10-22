# Shooting sound inspection, 2026-10-03

Read-only audit; no game source changes or tests.

The imported rcshoot1.wav, rcshoot4.wav, rcshoot3.wav and VoiceNL RcGen1/2/3
are byte-identical (SHA-256 comparison) to the installed original game files.

Native ordinary shots call sound selection at 0x434d4a after the .46 animation
threshold and before projectile creation. Remake releasePlayerAttack emits its
attack event at that same normalized threshold, using rcshoot1.wav. Ordinary
impacts use rcshoot4.wav on contact, not on ordinary lifetime expiration.

Native sound selector 0x436b40 chooses:
- Ordinary: global 0x6b5330, rcshoot1.WAV at 0x690294.
- Power (factory type 8): global 0x6b5308, rcshoot2.WAV at 0x6902a4;
  initialized at 0x430865.
- Super (factory type 11): global 0x6b52e0, rcshoot3.WAV for charging.
  At release 0x434d3c selects stop 0x436a30 instead of ordinary firing audio.

Power impact factory 0x44af00 passes global 0x6b69d8 at 0x44af48.
Initialization 0x44a235 copies rcshoot5.wav from 0x6914d0.
Super impact factory 0x450f30 passes global 0x6b6fc8 at 0x450f78.
Initialization 0x450275 copies rcshoot6.wav from 0x691850.

Current GameplayAudio.handle ignores attack/impact event.kind and always uses
rcshoot1.wav / rcshoot4.wav. Thus ordinary shots match, but upgraded shot
sounds do not: power uses the wrong release/impact, and super adds an ordinary
release sound and uses the wrong impact despite its correct charge loop.

The source still uses the intentionally user-tuned spatial hearing distances;
this audit does not claim original attenuation or an audible end-to-end check.
