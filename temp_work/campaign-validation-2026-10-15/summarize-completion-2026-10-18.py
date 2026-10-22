"""Summarize retained campaign evidence; does not run or mutate the game."""
import hashlib
import json
import re
from datetime import datetime, timezone
from pathlib import Path
from urllib.parse import unquote, urlsplit

ROOT = Path(__file__).resolve().parents[2]
WORK = ROOT / "temp_work/campaign-validation-2026-10-15"
RUN = WORK / "playthrough-1792088801065"
final_path = RUN / "earned-outro-complete-2026-10-18.json"
final = json.loads(final_path.read_text())
save = json.loads(final["save"])
events = final["events"]
assert final["completed"] and final["menuVisible"] and final["mode"] == "menu"
assert final["noClip"] is False and final["state"]["mirror"] == 5
assert final["errors"] == [] and final["unsupported"] == [] and not final["fatal"]
assert any(e["type"] == "pause" and e["time"] == e["duration"] == 55.047 for e in events)
assert any(e["type"] == "ended" and e["mode"] == "menu" for e in events)

before = json.loads((WORK / "source-manifest-2026-10-18.json").read_text())
files = []
changed = []
for entry in before["files"]:
    content = (ROOT / entry["path"]).read_bytes()
    digest = hashlib.sha256(content).hexdigest()
    files.append({"path": entry["path"], "bytes": len(content), "sha256": digest})
    if digest != entry["sha256"]:
        changed.append({"path": entry["path"], "campaignSha256": entry["sha256"], "finalSha256": digest})

docs = ["README.md", "RELEASE_NOTES_0.9.9", "docs/campaign-validation-2026-10-18.md",
        "docs/release-source-validation-2026-10-15.md", "docs/native-parity-audit.md",
        "docs/enemy-actor-animations-native.md", "docs/redcat-animations-native.md",
        "docs/gameplay-reconstruction.md", "docs/audio-media-lifetime.md", "docs/audio.md",
        "docs/intentional-fixes-and-findings.md"]
links = 0
missing = []
for name in docs:
    path = ROOT / name
    for match in re.finditer(r"\[[^\]]*\]\((<[^>]+>|[^\s)]+)\)", path.read_text()):
        href = match.group(1).strip("<>")
        url = urlsplit(href)
        if url.scheme or not url.path:
            continue
        links += 1
        if not (path.parent / unquote(url.path)).exists():
            missing.append({"document": name, "link": href})
assert not missing, missing

report = {
    "recordedAt": datetime.now(timezone.utc).isoformat(),
    "scope": "Retained evidence and file/link verification only; no game/test/build rerun. See campaign report for instrumentation, retries and separate fixture boundaries.",
    "campaignEvidence": str(final_path.relative_to(ROOT)),
    "difficulty": save["game"]["difficulty"],
    "completed": final["completed"], "menuVisible": final["menuVisible"],
    "state": final["state"], "noClip": final["noClip"],
    "debriefing": save["game"]["debriefing"], "outroEvents": events,
    "scriptErrors": final["errors"], "unsupported": final["unsupported"],
    "sourceBaselineCapturedAt": before["capturedAt"],
    "postCampaignSourceChanges": changed,
    "sourceFiles": files,
    "localDocumentationLinksChecked": links,
    "missingLinks": missing,
    "newBuilds": False,
}
target = WORK / "final-validation-summary-2026-10-18.json"
target.write_text(json.dumps(report, indent=2) + "\n")
print(json.dumps({"report": str(target.relative_to(ROOT)), "completed": True,
                  "sourceFiles": len(files), "postCampaignSourceChanges": changed,
                  "linksChecked": links, "missingLinks": missing}, indent=2))
