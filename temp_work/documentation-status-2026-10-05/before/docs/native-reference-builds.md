# Native executable reference versions

The initial executable inventory in `data/scripts/native-runtime.json` records
SHA-256 `d2f651c80ccf9acc17463365e3f6f8ff2b6052cd77b7b93c59a3df8be7f4bd74`.
The installation's `RcHcGame.dat`, checked on 2026-09-20, instead has SHA-256
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`
(size 2,842,624 bytes; embedded file timestamp 2001-04-17).

Address-based investigation notes must be matched to the exact analyzed build.
Some addresses in the earlier notes do not map to the described functions in the
currently installed executable. Treat those native addresses as provisional until
remapped; do not use them to patch either binary. The portable runtime does not
load or call either executable.

All five installed DSO hashes still match the fully parsed `data/davi` programs.
Their complete structural decoding, linked references and original-data execution
tests remain applicable. Motion samples and puzzle/scene tests use the exported
original data directly. Exact native camera easing and boss combat behavior remain
open fidelity work; script-event test coverage is not a substitute for verifying
those native systems.
