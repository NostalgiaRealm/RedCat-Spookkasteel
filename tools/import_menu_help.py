#!/usr/bin/env python3
"""Import the shipped Dutch WinHelp topics using a caller-supplied helpdeco.

This imports Agent/REDCAT.HLP, not the unrelated Urlaubs Raser Menu.hlp left
in the original installation. Keep the extraction directory for provenance.
"""
import argparse
import hashlib
import html
import json
from pathlib import Path
import re
import subprocess


def group_end(text, start):
    depth = 0
    index = start
    while index < len(text):
        char = text[index]
        if char == "\\":
            index += 2
            continue
        if char == "{":
            depth += 1
        elif char == "}":
            depth -= 1
            if not depth:
                return index + 1
        index += 1
    raise ValueError("Unterminated RTF group")


def remove_metadata(text):
    # Footnotes contain titles, context hashes and keywords, not displayed text.
    while match := re.search(r"\{\\(?:footnote|up)\b", text):
        end = group_end(text, match.start())
        text = text[:match.start()] + text[end:]
    return text


def visible_rtf(text):
    """Small deterministic reader for the formatting used in this help file."""
    result, stack = [], []
    font, hidden = 1, False
    index = 0
    while index < len(text):
        char = text[index]
        if char == "{":
            stack.append((font, hidden))
            index += 1
        elif char == "}":
            if stack:
                font, hidden = stack.pop()
            index += 1
        elif char == "\\":
            if index + 1 < len(text) and text[index + 1] in "\\{}":
                if not hidden:
                    result.append(text[index + 1])
                index += 2
                continue
            if text[index:index + 2] == "\\'":
                value = int(text[index + 2:index + 4], 16)
                decoded = bytes([value]).decode("cp1252")
                if font == 3:
                    decoded = {0xAC: "←", 0xAD: "↑", 0xAE: "→",
                               0xAF: "↓", 0xB7: "•"}.get(value, decoded)
                if not hidden:
                    result.append(decoded)
                index += 4
                continue
            match = re.match(r"\\([A-Za-z]+)(-?\d+)? ?", text[index:])
            if not match:
                index += 2
                continue
            word, parameter = match[1], match[2]
            if word == "f" and parameter:
                font = int(parameter)
            elif word == "v":
                hidden = parameter != "0"
            elif word == "plain":
                font, hidden = 1, False
            elif word in ("par", "line") and not hidden:
                result.append("\n")
            elif word == "tab" and not hidden:
                result.append("  ")
            index += len(match[0])
        else:
            if not hidden and char not in "\r\n":
                result.append(char)
            index += 1
    return "".join(result)


def import_topics(rtf, hpj, ghc):
    numeric = {match[1]: int(match[2]) for match in
               re.finditer(r"^(\S+)\s+(\d+)\s*$", hpj, re.M)}
    symbolic = {int(match[2]): match[1] for match in
                re.finditer(r"Global Const (\w+) = (\d+)", ghc)}
    topics = []
    for section in re.split(r"\\page\b", rtf):
        title_match = re.search(r"\{\\footnote\\pard\\plain\{\\up \$\} (.*?)\}", section)
        hash_match = re.search(r"\{\\footnote\\pard\\plain\{\\up #\} (.*?)\}", section)
        if not title_match or not hash_match:
            continue
        native_hash = hash_match[1]
        native_id = numeric.get(native_hash)
        if native_id is None:
            continue
        title = visible_rtf(title_match[1]).strip()
        # Start at the first displayed paragraph after topic footnotes.
        start = section.find(r"\pard\keepn")
        if start < 0:
            raise ValueError(f"No body for {native_hash}")
        body = visible_rtf(remove_metadata(section[start:]))
        # Two shipped links contain visibly leaked symbolic destinations.
        body = re.sub(r"h_startscreen_change_level_(Adv|Quick)>second", "", body)
        paragraphs = [re.sub(r" +", " ", part).strip()
                      for part in body.split("\n")]
        paragraphs = [part for part in paragraphs if part]
        if paragraphs and paragraphs[0] == title:
            paragraphs.pop(0)
        links = []
        for match in re.finditer(
                r"\\uldb\b(.*?)(?:\{\\v\s+([^}]+)\}|"
                r"h_startscreen_change_level_(Adv|Quick)>second)", section, re.S):
            label = visible_rtf(match[1]).strip()
            if match[2]:
                destination_hash = match[2].split(">")[0]
                target = symbolic[numeric[destination_hash]]
                source = "native-jump"
            else:
                target = "h_startscreen_change_level_" + match[3]
                destination_hash = next(
                    key for key, value in numeric.items() if symbolic.get(value) == target)
                source = "repaired-native-destination"
            matches = [index for index, paragraph in enumerate(paragraphs)
                       if label in paragraph]
            if len(matches) != 1:
                raise ValueError(f"Ambiguous link {label!r} in {native_hash}")
            links.append({
                "paragraph": matches[0], "label": label, "target": target,
                "nativeHash": destination_hash, "source": source,
            })
        topics.append({
            "id": symbolic[native_id],
            "nativeId": native_id,
            "nativeHash": native_hash,
            "title": title,
            "paragraphs": paragraphs,
            "html": "".join("<p>" + html.escape(part) + "</p>" for part in paragraphs),
            "links": links,
        })
    if len(topics) != 38:
        raise ValueError(f"Expected 38 mapped Dutch topics, got {len(topics)}")
    return topics


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--native-root", type=Path, required=True)
    parser.add_argument("--helpdeco", type=Path, required=True)
    parser.add_argument("--work-dir", type=Path, required=True)
    parser.add_argument("--output", type=Path, default=Path("assets/help/manifest.json"))
    args = parser.parse_args()
    work = args.work_dir.resolve()
    work.mkdir(parents=True, exist_ok=True)
    original = args.native_root.resolve() / "Agent/REDCAT.HLP"
    with (work / "extraction.log").open("w") as log:
        subprocess.run([str(args.helpdeco.resolve()), str(original), "-g", "-y"],
                       cwd=work, stdout=log, stderr=subprocess.STDOUT, check=True)
    rtf = (work / "REDCAT.rtf").read_text(encoding="cp1252")
    hpj = (work / "REDCAT.hpj").read_text(encoding="cp1252")
    ghc = (original.parent / "REDCAT.ghc").read_text(encoding="cp1252")
    topics = import_topics(rtf, hpj, ghc)
    result = {
        "version": 1,
        "title": "Help RedCat Spookkasteel",
        "source": {
            "path": "Agent/REDCAT.HLP",
            "sha256": hashlib.sha256(original.read_bytes()).hexdigest(),
            "topicCount": len(topics),
            "bitmapCount": 0,
            "notes": [
                "Extracted from the original Dutch WinHelp file; original wording preserved.",
                "Symbol-font arrows and bullets converted to Unicode.",
                "Two leaked link-destination identifiers removed from visible text.",
                "Six native topic jumps preserved; two malformed level jumps repaired from their shipped destinations.",
                "RoboHelp infrastructure topics without a mapped help topic omitted.",
                "Menu.hlp is unrelated German Urlaubs Raser help and is deliberately excluded.",
            ],
        },
        "contexts": {
            "home": "h_mainmenu", "adventure": "h_adventure_menu",
            "levels": "h_quickplaymenu", "quickplay": "h_quickplaymenu",
            "difficulty": "h_chose_difficulty_normal",
            "start": "h_startscreenmenu_advent",
            "start-adventure": "h_startscreenmenu_advent",
            "start-quickplay": "h_startscreenmenu_quickplay",
            "highscores": "h_highscores_show",
            "players": "h_playerlistmenu", "settings": "h_settingsmenu",
            "controls": "h_controls", "keys": "h_set_keys",
        },
        "groups": [
            {"title": "Hoofdmenu", "topics": [5, 6, 7, 8, 9, 39]},
            {"title": "Spelerlijst", "topics": [27, 2, 3, 4]},
            {"title": "Avontuur en Snelspel", "topics": [10, 15, 11, 31]},
            {"title": "Moeilijkheid", "topics": [33, 34, 35, 42]},
            {"title": "Startinfo", "topics": [14, 41, 40, 43, 44, 45, 46]},
            {"title": "Instellingen", "topics": [29, 23, 30, 28, 24, 32, 25, 26]},
            {"title": "Toetsen instellen", "topics": [13, 16, 17]},
            {"title": "Highscores", "topics": [1, 12]},
        ],
        "topics": topics,
    }
    args.output.parent.mkdir(parents=True, exist_ok=True)
    args.output.write_text(json.dumps(result, ensure_ascii=False, indent=2) + "\n")
    print(f"Imported {len(topics)} original Dutch help topics into {args.output}")


if __name__ == "__main__":
    main()
