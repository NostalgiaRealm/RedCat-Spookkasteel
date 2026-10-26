# Source layout and documentation review — 26 October 2026

The main game's 139 editable JavaScript modules now live in `source/`. They are
**not loaded individually by ordinary gameplay**. `src/` contains the generated
JavaScript bundle, its debugging source map and runtime CSS. Preparation reads
`source/` before development startup or packaging; a prepared game runs without
that directory. See [the source-folder explanation](../source/README.md) and
[the bundling guide](javascript-bundling.md).

Moving files did not change their contents, save formats, storage origins or
runtime asset URLs. Importers, tools and tests were updated to find the editable
files. The independent actor, coin and shove laboratories retain their own
source trees; their copied modules are intentionally separate from the game.

## Documentation changes

- Current implementation links and code references now point to `source/`.
  Bundle/CSS paths remain in `src/`; independent lab paths remain unchanged.
- README, build, Android and hosting instructions distinguish development
  inputs from deployable runtime files. Hosting checks request the actual
  bundle instead of removed `src/main.js` or actor modules.
- The build guide no longer claims that the restored menu needs optional
  `cover.jpg`. Its browser examples use current bundle/subpath harnesses; the
  old flat-menu smoke harness is identified as historical instead of being
  presented as a working release gate.
- Android's recorded APK/AAB sizes and emulator results now explicitly refer
  to the source snapshot that produced them. Those packages predate the later
  bundling, efficiency and folder changes. The documented emulator
  document-provider check is distinguished from outstanding physical-device
  checks.
- `PUBLISH_CURRENT_BUILD` now has complete, version-parameterized instructions
  for both hosts, staging `source/` and including the full original-code
  research in every source release and asset list. Its old incomplete GitLab
  command and obsolete checkout paths were replaced. No publishing command
  was executed during this review.
- Initial-import and local-start instructions use the current checkout.
  The server-side copy note uses the contents of a prepared runtime directory.
  Old menu/loading/audio request notebooks are labelled as historical requests,
  with current implementation references, rather than unfinished work.

## Audit scope

The complete Markdown inventory was scanned for file/heading links, current
source pointers, referenced npm commands, obsolete project paths and status
claims. Maintained root/docs documentation, the three recovered-code overview
files, the standalone labs, asset attribution and the retained-research index
were included. Extensionless setup/publishing/request notes were reviewed too.
The [audit record](../temp_work/source-layout-2026-10-26/documentation-audit.json)
lists every discovered document, category, checked reference and exclusion;
the [summary](../temp_work/source-layout-2026-10-26/documentation-summary.json)
distinguishes current references from archival findings.

Historical snapshots, release notes, measurements and retained upstream/license
text preserve what they said at the time. Their old source paths, removed test
profiles/screenshots and links relative to an earlier checkout are not current
instructions. They were inventoried and checked, but their evidence was not
rewritten to claim a new result. [The research index](../temp_work/README.md#historical-paths-and-findings)
explains how to interpret them. Generated builds/dependency installations and
the prohibited `RCSPOOK_WEBSITE` copy are excluded from maintained-document
changes. The original installation and recovered code were not modified.

Current local links and referenced npm scripts resolve. Remaining flagged
links belong to archival snapshots or staging copies and are listed with that
scope, rather than hidden or treated as active defects. External websites and
original-game facts were not exhaustively reverified; this was a documentation
consistency review, not another native-code investigation.

## Focused verification

The [consolidated verification record](../temp_work/source-layout-2026-10-26/verification-summary.json)
records unchanged module/bundle bytes, 30 affected checks, preparation without
editable modules, old-save continuity, all five distinct level loads and the
historical browser-cache regression. No release packages were built or
published. These checks do not replace a full campaign or hardware playthrough.
