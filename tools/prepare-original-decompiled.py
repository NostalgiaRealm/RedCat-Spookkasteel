#!/usr/bin/env python3
"""Retain the complete native-code research folder in source and release archives."""
import argparse
import gzip
import hashlib
import json
from pathlib import Path
import shutil
import tarfile

ROOT = Path(__file__).resolve().parents[1]
NAME = "RC_ORIGINAL_DECOMPILED"


def digest(path):
    with path.open("rb") as stream:
        return hashlib.file_digest(stream, "sha256").hexdigest()


def inventory(folder):
    result = {}
    for path in sorted(folder.rglob("*")):
        if path.is_symlink():
            raise SystemExit(f"Refusing an unexpected symbolic link: {path}")
        if path.is_file():
            result[path.relative_to(folder).as_posix()] = {
                "bytes": path.stat().st_size, "sha256": digest(path)
            }
    return result


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--source", type=Path, help="Research folder; defaults to the sibling folder or this checkout's retained copy")
    parser.add_argument("--version", required=True, help="Release version, e.g. 1.0.3")
    args = parser.parse_args()
    if not args.version or any(c not in "0123456789.-abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" for c in args.version):
        parser.error("Use a filename-safe version")
    destination = ROOT / NAME
    sibling = ROOT.parent / NAME
    source = (args.source or (sibling if sibling.is_dir() else destination)).resolve()
    if not source.is_dir() or not (source / "VERIFICATION.json").is_file():
        raise SystemExit(f"Missing complete decompilation folder: {source}")
    expected = inventory(source)
    if source != destination.resolve():
        shutil.copytree(source, destination, dirs_exist_ok=True, copy_function=shutil.copy2)
    actual = inventory(destination)
    if actual != expected:
        raise SystemExit("Source/copy inventory differs; inspect stale or changed files before publishing")
    out = ROOT / "dist" / "original-decompiled"
    out.mkdir(parents=True, exist_ok=True)
    stem = f"{NAME}-{args.version}"
    archive = out / f"{stem}.tar.gz"
    # Preserve every file, including research logs and saved analysis databases.
    # Fixed gzip metadata makes an unchanged snapshot reproducible.
    with archive.open("wb") as raw:
        with gzip.GzipFile(fileobj=raw, mode="wb", filename="", mtime=0) as zipped:
            with tarfile.open(fileobj=zipped, mode="w|") as tar:
                def metadata(info):
                    info.uid = info.gid = 0
                    info.uname = info.gname = ""
                    info.mtime = 0
                    return info
                tar.add(destination, arcname=NAME, filter=metadata)
    archived = {}
    with tarfile.open(archive, "r|gz") as tar:
        for member in tar:
            if member.isfile():
                relative = member.name.removeprefix(NAME + "/")
                stream = tar.extractfile(member)
                archived[relative] = {"bytes": member.size, "sha256": hashlib.file_digest(stream, "sha256").hexdigest()}
    if archived != expected:
        raise SystemExit("Archive contents differ from the complete research folder")
    archive_digest = digest(archive)
    checksum = out / f"{stem}.sha256"
    checksum.write_text(f"{archive_digest}  {archive.name}\n")
    report = {
        "version": args.version, "source": str(source), "repositoryFolder": NAME,
        "files": len(expected), "totalBytes": sum(f["bytes"] for f in expected.values()),
        "archive": archive.name, "archiveBytes": archive.stat().st_size,
        "archiveSha256": archive_digest, "copyAndArchiveMatch": True, "inventory": expected,
    }
    (out / f"{stem}.manifest.json").write_text(json.dumps(report, indent=2) + "\n")
    print(json.dumps({k: v for k, v in report.items() if k != "inventory"}, indent=2))


if __name__ == "__main__":
    main()
