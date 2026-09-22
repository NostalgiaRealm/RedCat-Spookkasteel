# Original menu and movie import

`tools/extract_menu.py` reads the user's installed copy and mounted/extracted CD,
without changing either source. Python 3 and Pillow are required. Movie conversion
also needs ffmpeg with VP9/Opus support (or H.264/AAC for the MP4 option).

```sh
python3 tools/extract_menu.py \
  --installation '/path/to/RedCat Spookkasteel' \
  --cd '/path/to/RedCat-CD' \
  --album-dir '/path/to/cover-scans' \
  --video-format both
```

On Windows, use `python` and quoted Windows paths. `--output` selects the assets
folder; its default is this project's `assets`. `--skip-media` avoids ffmpeg.
`--video-format` accepts `webm` (default), `mp4`, or `both`. Existing movie outputs
are reused when the manifest's source hash matches. `--force-media` re-encodes.
These extracted assets originate in the user's commercial game installation;
keep source-only distributions separate from the imported game data.

## Archive layout

The installed `MenuRcs.Ind` is 2,978 bytes: little-endian uint16 count (124), then
124 records of 24 bytes. Each record contains a NUL-padded 20-byte ASCII name and
a little-endian uint32 byte offset into `MenuRcs.Img` (19,276,426 bytes). Data from
one offset to the next is an ordinary TGA or BMP image, with no extra compression
layer. The extractor validates record length, offsets, and safe output names.
Several records are named `*empty resitem*`; these are preserved as distinct
`resource_NNN.png` files because the original name is neither unique nor legal
on Windows. No images are discarded. TGA transparency is preserved.

`assets/menu/manifest.json` records each original name, archive offset and length,
output filename, dimensions, and SHA-256 checksums of both source archives.

## Useful imported assets

| Path under `assets/menu/` | Purpose | Size |
|---|---|---|
| `menu-logo.png` | Transparent original title from `MenuGfx/00030000.tga` | 128 × 60 |
| `mainscre.png` | Original blue menu backdrop with RedCat and friends | 800 × 600 |
| `adventur.png`, `difficul.png`, `quickpla.png`, `startgam.png` | Other original menu backdrops | 800 × 600 |
| `10000000.png` | Forest chapter preview, Het Bos | 200 × 200 |
| `10010000.png` | Castle chapter preview, Het Kasteel | 200 × 200 |
| `10020000.png` | Graveyard chapter preview, Het Kerkhof | 200 × 200 |
| `10030000.png` | Caves chapter preview, De Grotten | 200 × 200 |
| `10040000.png` | Tower chapter preview, De Kasteeltoren | 200 × 200 |
| `03000000.png` through `03020002.png` | Three difficulty cards, normal/hover/selected | 180 × 245 |
| `04000000.png` through `04040003.png` | Chapter cards in several selection states | 150 × 171 |
| `11010000.png`, `11020000.png`, `11030000.png` | Gamepad, keyboard, joystick art | 200 × 200 |
| `cover.jpg` | Optional original front cover scan, uncropped | 1600 × 1613 on this copy |

The game was authored for a 4:3 presentation. The new launcher can place these
assets in a responsive widescreen layout; preserve the aspect ratio of each image.
The original logo and illustrations are low resolution, so high definition output
does not create additional source-art detail.

## Movies

`assets/media/manifest.json` maps the original CD movies to their converted files:
`davilex.webm`, `intronl.webm`, `outronl.webm` and optional matching `.mp4` files.
WebM uses VP9 video and Opus audio. MP4 uses H.264 video and AAC audio with the
index moved to the start for streaming. Converted movies retain their native
dimensions and aspect ratio. Use a video element with `object-fit: contain`.

The supplied `IntroNL.mpg` is approximately 73.94 seconds, 320 × 240, MPEG-1 video
and MP2 audio. ffmpeg reports an existing damaged MPEG frame near its end during
both conversions; it conceals the damaged frame and completes successfully.
The three outputs were probed and fully decoded with ffmpeg after conversion.
