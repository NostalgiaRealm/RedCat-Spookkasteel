#!/usr/bin/env python3
"""Convert an owned RedCat Spookkasteel installation's menu art and CD movies.

The source files are only read. Pillow is required; ffmpeg is optional unless
movie conversion is requested. See docs/menu-media.md for the archive format.
"""
from __future__ import annotations

import argparse
import hashlib
import io
import json
from pathlib import Path
import re
import shutil
import struct
import subprocess
import sys

try:
    from PIL import Image
except ImportError:
    raise SystemExit("Pillow is required. Install it with: python -m pip install Pillow")


def archive_entries(index: bytes, blob_size: int) -> list[dict]:
    """Validate the index before using offsets or untrusted archive filenames."""
    if len(index) < 2:
        raise ValueError("Menu archive index is truncated")
    count = struct.unpack_from("<H", index)[0]
    if len(index) != 2 + count * 24:
        raise ValueError("Menu archive index has an unexpected record length")
    entries = []
    used_names = set()
    for number in range(count):
        raw_name, offset = struct.unpack_from("<20sI", index, 2 + number * 24)
        name = raw_name.split(b"\0", 1)[0].decode("ascii")
        if not 0 <= offset < blob_size:
            raise ValueError(f"Menu archive offset {number} is outside the image file")
        if entries and offset <= entries[-1]["offset"]:
            raise ValueError("Menu archive offsets are not strictly increasing")
        # Several records deliberately share '*empty resitem*'. Preserve every
        # one, using names that are also legal on Windows and cannot escape output.
        stem = name.rsplit(".", 1)[0]
        if not re.fullmatch(r"[A-Za-z0-9_-]+", stem) or stem.lower() in used_names:
            stem = f"resource_{number:03d}"
        used_names.add(stem.lower())
        entries.append({"index": number, "original_name": name, "offset": offset,
                        "file": stem + ".png"})
    for number, entry in enumerate(entries):
        end = entries[number + 1]["offset"] if number + 1 < count else blob_size
        entry["length"] = end - entry["offset"]
    return entries


def extract_menu(installation: Path, output: Path) -> dict:
    """Extract all archived art and the separate menu logo as browser PNGs."""
    index_path = installation / "MenuRcs.Ind"
    image_path = installation / "MenuRcs.Img"
    index = index_path.read_bytes()
    blob = image_path.read_bytes()
    entries = archive_entries(index, len(blob))
    output.mkdir(parents=True, exist_ok=True)
    for entry in entries:
        start = entry["offset"]
        with Image.open(io.BytesIO(blob[start:start + entry["length"]])) as original:
            original.load()
            entry["width"], entry["height"] = original.size
            entry["source_mode"] = original.mode
            original.convert("RGBA").save(output / entry["file"])
    extras = []
    logo = installation / "MenuGfx" / "00030000.tga"
    if logo.is_file():
        with Image.open(logo) as original:
            original.convert("RGBA").save(output / "menu-logo.png")
            extras.append({"file": "menu-logo.png", "source": "MenuGfx/00030000.tga",
                           "width": original.width, "height": original.height})
    manifest = {
        "format": "redcat-menu-v1", "archive_count": len(entries),
        "sources": {"MenuRcs.Ind": hashlib.sha256(index).hexdigest(),
                    "MenuRcs.Img": hashlib.sha256(blob).hexdigest()},
        "images": entries, "extras": extras,
        "recommended": {"background": "mainscre.png", "logo": "menu-logo.png",
                        "chapter_previews": [f"100{i}0000.png" for i in range(5)]},
    }
    (output / "manifest.json").write_text(json.dumps(manifest, indent=2) + "\n", encoding="utf-8")
    return manifest


def import_cover(album_dir: Path, output: Path) -> None:
    candidates = sorted(album_dir.glob("*Small Case Front.jpg"))
    if not candidates:
        candidates = sorted(album_dir.glob("*Big Case Front.tif"))
    if candidates:
        with Image.open(candidates[0]) as image:
            # Keep the original scan's resolution and aspect ratio.
            image.convert("RGB").save(output / "cover.jpg", quality=94)


def convert_movies(cd_root: Path, output: Path, formats: list[str], force: bool = False) -> dict:
    ffmpeg = shutil.which("ffmpeg")
    if not ffmpeg:
        raise RuntimeError("ffmpeg is required for CD movie conversion; use --skip-media to omit it")
    source_dir = cd_root / "Data" / "Media"
    if not source_dir.is_dir():
        raise FileNotFoundError(f"CD movie directory does not exist: {source_dir}")
    output.mkdir(parents=True, exist_ok=True)
    manifest_path = output / "manifest.json"
    previous = json.loads(manifest_path.read_text(encoding="utf-8")) if manifest_path.exists() else {}
    movies = {}
    for filename in ["Davilex.mpg", "IntroNL.mpg", "OutroNL.mpg"]:
        source = source_dir / filename
        if not source.is_file():
            continue
        digest = hashlib.sha256(source.read_bytes()).hexdigest()
        stem = source.stem.lower()
        sources = []
        for fmt in formats:
            target = output / f"{stem}.{fmt}"
            cached = previous.get("movies", {}).get(stem, {})
            if force or not target.is_file() or cached.get("sha256") != digest:
                # No upscaling: the original art is 320x240. Fit it without
                # stretching inside the application's selected display mode.
                codec = (["-c:v", "libvpx-vp9", "-crf", "28", "-b:v", "0",
                          "-deadline", "good", "-cpu-used", "4", "-row-mt", "1",
                          "-c:a", "libopus", "-b:a", "96k"] if fmt == "webm" else
                         ["-c:v", "libx264", "-crf", "19", "-preset", "medium",
                          "-c:a", "aac", "-b:a", "128k", "-movflags", "+faststart"])
                temporary = target.with_name(target.stem + ".part." + fmt)
                command = [ffmpeg, "-hide_banner", "-loglevel", "error", "-y", "-i", str(source),
                           "-map", "0:v:0", "-map", "0:a:0?", "-threads", "4",
                           "-pix_fmt", "yuv420p", *codec, str(temporary)]
                print(f"Converting {filename} -> {target.name}", flush=True)
                try:
                    subprocess.run(command, check=True)
                    temporary.replace(target)
                finally:
                    temporary.unlink(missing_ok=True)
            sources.append({"file": target.name,
                            "type": "video/webm" if fmt == "webm" else "video/mp4",
                            "bytes": target.stat().st_size})
        movies[stem] = {"original": f"Data/Media/{filename}", "sha256": digest, "sources": sources}
    manifest = {"format": "redcat-media-v1", "movies": movies}
    manifest_path.write_text(json.dumps(manifest, indent=2) + "\n", encoding="utf-8")
    return manifest


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--installation", type=Path, required=True, help="Folder containing MenuRcs.Ind/.Img")
    parser.add_argument("--cd", type=Path, help="Mounted/extracted RedCat CD root (contains Data/Media)")
    parser.add_argument("--album-dir", type=Path, help="Optional folder containing the user's cover scans")
    parser.add_argument("--output", type=Path, default=Path(__file__).resolve().parents[1] / "assets")
    parser.add_argument("--skip-media", action="store_true")
    parser.add_argument("--video-format", choices=["webm", "mp4", "both"], default="webm")
    parser.add_argument("--force-media", action="store_true", help="Re-encode movies even if source hashes match")
    args = parser.parse_args()
    try:
        menu = extract_menu(args.installation, args.output / "menu")
        print(f"Extracted {menu['archive_count']} menu images into {args.output / 'menu'}")
        if args.album_dir:
            import_cover(args.album_dir, args.output / "menu")
        if args.cd and not args.skip_media:
            formats = ["webm", "mp4"] if args.video_format == "both" else [args.video_format]
            media = convert_movies(args.cd, args.output / "media", formats, args.force_media)
            print(f"Converted {len(media['movies'])} CD movies into {args.output / 'media'}")
    except (OSError, ValueError, RuntimeError, subprocess.CalledProcessError) as exc:
        print(f"Import failed: {exc}", file=sys.stderr)
        return 1
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
