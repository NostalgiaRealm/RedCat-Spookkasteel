# Hosting this port

How to build the folder a web server needs, what the server has to send with it, and how to put
it in the place of the JavaScript port at **https://games.nostalgiarealm.com/redcatspookkasteel/**
without anybody losing a saved game. Nothing in this project uploads or changes anything on a
server: the steps under "Putting it on the site" are for you to carry out.

What visitors of the JavaScript port keep, and why the address must stay the same, is in
[`legacy-saves.md`](legacy-saves.md).

## Build and check

```bash
npm run package
```

```bash
npm run package:check
```

`npm run package` (`tools/package.mjs`, a few seconds) writes `dist/site/` and copies the three
server configuration files next to it. `npm run package:check` (`tools/package-check.mjs`, about
three minutes) serves that folder below `/redcatspookkasteel/` and uses it as a browser would;
see "Checked" at the end. Both read the original game files and the menu's assets from
`../RCSPOOK_NEW` (`RC_ORIGINALS`, `RC_MENU_ASSETS` name other folders) and write only under
`dist/` and `tools/out/`.

Before packaging, when they are out of date:

| Command | Needed after |
|---|---|
| `npm run recompile` | a change in `tools/recomp/` |
| `node tools/build-manifest.mjs` | a change in which original files exist |
| `npm run preload` (`tools/build-preload.mjs`, 15 seconds) | either of the two above, or a change in how the host reads files |

## What is in `dist/site/`

```text
site/
├── index.html, build.json    the page; what was built (revision, date, sizes)
├── app/<revision>/
│   ├── source/               the scripts and style sheets of the page and of the game thread
│   └── game/                 spook.wasm (the recompiled game module), its tables, files.json, preload.json
├── assets/                   the menu's artwork, voices, music, the three movies, the help text
└── data/                     the original game files the game module reads (1,435 files)
```

About 141 MB, 184 MB on disk with the `.gz` copies. No program of the original game is in it
(`RedCat.exe`, the DLLs, `RcHcGame.dat` and `RcHcMenu.dat` are not needed and not copied), and no
tool, test or note of this project.

- **`app/<revision>/`**. The revision is twelve hex digits made from the content of everything
  below it. Another script or another game module gives another folder name; `index.html` names
  the folder it belongs to. So a browser can never combine the scripts of two builds (the fault
  that broke a saved game on the site on 20 October 2026, see the JavaScript port's
  `docs/nginx-hosting.md`), files below `app/` can be kept by browsers for good, and a page that
  is open while a new build is uploaded keeps finding its own files as long as its folder is
  left on the server. A visitor's save state belongs to the build that made it: after a
  build with another game module (`spook.meta.json`) or another `STATE_ABI` his saved place is
  dropped and he starts the world his adventure is at, with a line that says so
  (`docs/LLM_GUIDE.md`, "Save states"); players, progress and scores are not affected.
- **`.gz` copies**. Next to every file that gzip makes at least a tenth smaller lies `<file>.gz`
  (1,460 of them). nginx sends the copy to a browser that accepts it (`gzip_static`). The game
  module goes from 13 MB to 1.8 MB, what a world needs at its start from 17–23 MB to 11–14 MB
  (measured for the smallest and the largest, worlds 1 and 3).
- **`assets/`** holds only what this port's menu uses (27.5 MB of the JavaScript port's 114 MB).

## How the game's files reach the browser

The game module reads its files as the original did: it opens one, reads it, goes on. In a
browser every first read is a request, and the game thread waits for the answer. A world reads
526 to 615 files when it starts, so over a network that was one request after the other.

- **At the start of a world** the game thread first fetches the files that world reads when it
  starts, sixteen at a time, and only then starts the game (`source/web/worker.js`; the status
  line shows "Het spel laden… 40%"). The lists are in `game/preload.json`, measured by running
  each world for 90 seconds of game time in the Node runner (`tools/build-preload.mjs`).
- **Later** the game asks for more: mostly the voices of the story. The page fetches the sounds
  and voices that the world's level files name, one after the other in the background, so that
  the game's own request is answered from the browser's cache. That list is inferred from names
  in the level files, not measured.
- **Anything else** is fetched whole on its first use, with the game waiting. This is also what
  happens without `preload.json`, and when a file of a list cannot be fetched.
- **A file is not kept in memory** after the game has read it (the game has its own copy; on a
  phone the 17 to 24 MB matter). Should the game read it again, it is fetched again with the game
  waiting, and kept from then on. That second fetch is answered from the browser's cache only
  when the server lets `data/` be kept (the `Cache-Control` rule below); with `no-cache` it is a
  request to the server each time.

Changing world inside one adventure (world 1 finished, world 2 loads) is the third case: the
next world's own files (55 to 144 of them) are fetched one after the other behind the game's
loading screen. Not measured.

## The server as it is, and what changes

Looked at on 13 November 2026, from outside and from the location block of the live server:

| | Now |
|---|---|
| Server | nginx 1.26.3, HTTP/2 |
| The game's location | `location /redcatspookkasteel/` with `alias /var/www/games.nostalgiarealm.com/redcatspookkasteel/redcat-website/` (written in the server block itself, not in a snippet) |
| Headers | `Cache-Control: no-cache` on every answer, 404s included (set above the location); nothing else: no isolation headers, no security headers |
| Compression | the page only (`gzip on` for `text/html`); scripts go out as they are |
| The live build | `index.html` and `src/game.bundle.js` are byte for byte the ones in `../RCSPOOK_NEW` |
| The address above it | `https://games.nostalgiarealm.com/` sends on to `/redcatspookkasteel/` |

What this port needs on top of that:

| Change | Why |
|---|---|
| `Cross-Origin-Opener-Policy: same-origin` and `Cross-Origin-Embedder-Policy: require-corp` on every answer of this port | The page, the game thread and the render thread share memory, which a browser allows only on an isolated page. **Without them the game does not start**; the page says so |
| `Cache-Control` by folder: `app/` and `data/` a year and `immutable`, `assets/` a day, the rest `no-cache` as now | `index.html` must be asked for at every visit; what it names never changes under its name. A second visit then needs one request before the game starts |
| `gzip_static on` | Sends the `.gz` copies (optional: the site works without) |

The old version needs nothing new: it gets its own location and is answered exactly as today.
No `Cross-Origin-Resource-Policy` header is sent: everything the page loads is its own origin's,
and the header would stop other sites of yours from showing a picture that lives here.

Nothing is moved on the server. The new port goes into a folder of its own beside the old one:

```text
/var/www/games.nostalgiarealm.com/redcatspookkasteel/
├── redcat-website/     the JavaScript port, where it is now      ->  /redcatspookkasteel/classic/
└── redcat-recomp/      this port (the content of dist/site)      ->  /redcatspookkasteel/
```

The switch is a change of the nginx configuration and a reload; going back is the old
configuration and a reload. The JavaScript port's own `tools/deploy-website.sh` keeps working on
`redcat-website/` (set `REDCAT_DEPLOY_URL=https://games.nostalgiarealm.com/redcatspookkasteel/classic/`
in `~/.config/redcat-spookkasteel/deploy.env`, or its check of the public address reports a
difference).

Three configuration files, all in `dist/` after packaging (their sources are in this folder):

| File | Goes to | What it is |
|---|---|---|
| `nginx-redcatspookkasteel-cache.conf` | `/etc/nginx/conf.d/redcatspookkasteel-recomp-cache.conf` (the `http` block) | What a browser may keep, by folder |
| `nginx-redcatspookkasteel-test.conf` | `/etc/nginx/snippets/redcatspookkasteel-recomp-test.conf` | A temporary address, `/redcatspookkasteel-test/`, to try the upload on the real server |
| `nginx-redcatspookkasteel.conf` | `/etc/nginx/snippets/redcatspookkasteel-recomp.conf` | The two final locations: this port, and the old one at `classic/` |

**Not run through nginx here**: none is installed on the development machine. The package was
checked behind a stand-in server that answers as these files describe (`tools/serve-site.mjs`),
which says nothing about nginx accepting them. That is what the temporary address is for:
`npm run site:check -- --url …` (`tools/site-check.mjs`) asks the real server for every file of
the package and compares status, size, headers and, for the scripts and the game module, bytes.

## Putting it on the site

`SERVER` is your SSH name for the web server. Commands marked *server* are run there, the others
in this project's folder on your computer.

**1. A folder for the new port** (*server*). It gets the owner of the folder that is live now.

```bash
cd /var/www/games.nostalgiarealm.com/redcatspookkasteel && sudo install -d -m 755 redcat-recomp && sudo chown --reference=redcat-website redcat-recomp && df -h . && ls -ld redcat-website redcat-recomp
```

The package needs 185 MB there.

**2. Upload.**

```bash
npm run package && rsync -a --chmod=D755,F644 --info=progress2 dist/site/ SERVER:/var/www/games.nostalgiarealm.com/redcatspookkasteel/redcat-recomp/
```

```bash
rsync -a dist/nginx-redcatspookkasteel-cache.conf dist/nginx-redcatspookkasteel-test.conf dist/nginx-redcatspookkasteel.conf SERVER:
```

If the first is refused for lack of permission, the live folder is not owned by your account:
add `--rsync-path="sudo rsync"` to it.

**3. The temporary address** (*server*). The live game is not touched.

```bash
ls /etc/nginx/conf.d/ /etc/nginx/snippets/ | grep -i recomp; sudo cp ~/nginx-redcatspookkasteel-cache.conf /etc/nginx/conf.d/redcatspookkasteel-recomp-cache.conf && sudo cp ~/nginx-redcatspookkasteel-test.conf /etc/nginx/snippets/redcatspookkasteel-recomp-test.conf && sudo cp ~/nginx-redcatspookkasteel.conf /etc/nginx/snippets/redcatspookkasteel-recomp.conf
```

```bash
sudo grep -rln 'redcat-website' /etc/nginx/
```

The first part of the first command lists files that would be overwritten: it should print
nothing. The second command names the file with the server block (`SITEFILE` below). Keep a copy
and open it:

```bash
sudo cp SITEFILE ~/games-site.before-recomp.conf
```

Add one line directly above `include /etc/nginx/snippets/barbiepaardrijclub.conf;`:

```nginx
    include /etc/nginx/snippets/redcatspookkasteel-recomp-test.conf;
```

```bash
nginx -V 2>&1 | grep -o http_gzip_static_module; grep -n 'conf.d' /etc/nginx/nginx.conf; sudo nginx -t && sudo systemctl reload nginx
```

- `nginx -t` says `unknown directive "gzip_static"`: remove the `gzip_static on;` line from both
  snippets.
- `nginx -t` says `unknown "redcat_cache_control" variable`: `conf.d` is not read by your
  `nginx.conf` (the `grep` then printed nothing); add
  `include /etc/nginx/conf.d/redcatspookkasteel-recomp-cache.conf;` inside its `http { }` block.

**4. Check the real server.**

```bash
npm run site:check -- --url https://games.nostalgiarealm.com/redcatspookkasteel-test/
```

```bash
node tools/browser-check.mjs --url https://games.nostalgiarealm.com/redcatspookkasteel-test/ --world 1 --out tools/out/live-test
```

The first must end with `all checks passed`; a `note` is something that works but could be
better (it says what). The second starts world 1 from the real server in headless Chromium and
saves two pictures. Then open the address in your own browser and play a minute: this is the
first time the port runs from the real server in a real browser, with sound. Use a private
window for it: your normal window would take over your own old players at this temporary address
already, and you would not see the notice at the real one.

Before going on, look for anything on the server that counts requests: a world start is about
600 requests in two or three seconds from one address.

```bash
sudo grep -rn 'limit_req\|limit_conn' /etc/nginx/ ; sudo fail2ban-client status 2>/dev/null
```

No output, or no jail that watches the web server's request rate: nothing to do. Otherwise try
it from your own address first, `npm run site:check -- --url … --burst` (a world's start, twice),
and raise the limit if it refuses.

**5. The switch** (*server*). In `SITEFILE`:

- remove the line added in step 3;
- replace the whole block `location /redcatspookkasteel/ { … }` (the one with `alias …/redcat-website/;`)
  by the single line

```nginx
    include /etc/nginx/snippets/redcatspookkasteel-recomp.conf;
```

  and leave the two locations above it (`location = /redcatspookkasteel` and the one against
  dotfiles) as they are.

```bash
sudo nginx -t && sudo systemctl reload nginx
```

Do it at a quiet moment. A reload drops no connection, but somebody who has the old game open
at that moment keeps only what the page has loaded: the next file it asks for (another world, a
sound not heard yet) is no longer at its old address, and the game stops until the page is
loaded again, which brings this port. The saved game is in the browser, not in that page, and is
taken over. Everybody else gets this port at the next visit, because the old page was always
sent with `no-cache`.

**6. Check the public address.**

```bash
npm run site:check -- --url https://games.nostalgiarealm.com/redcatspookkasteel/ --classic
```

```bash
node tools/legacy-check.mjs --url https://games.nostalgiarealm.com/redcatspookkasteel/
```

The second runs the whole take-over on the real address in a throwaway headless browser: old
storage of every generation, then the old version itself at `classic/`, its save, this port
taking it over, and the old version loading its own save again. It writes nothing on the server.
Then, in a browser that played the JavaScript port there: the notice names the players that were
taken over, **Verder spelen** starts their world, and the link in the notice (also under
Instellingen → Meer instellingen) opens the old version with its own saved game.

**Going back** (*server*):

```bash
sudo cp ~/games-site.before-recomp.conf SITEFILE && sudo nginx -t && sudo systemctl reload nginx
```

Nothing in a visitor's browser has to be undone: this port never changes the old version's data.
Files a browser kept from this port lie under other addresses than the old port's and are not
used by it.

## A later build

```bash
npm run package && npm run package:check
```

```bash
rsync -a --chmod=D755,F644 --info=progress2 --exclude index.html --exclude index.html.gz --exclude build.json dist/site/ SERVER:/var/www/games.nostalgiarealm.com/redcatspookkasteel/redcat-recomp/
```

```bash
rsync -a --chmod=D755,F644 dist/site/index.html dist/site/index.html.gz dist/site/build.json SERVER:/var/www/games.nostalgiarealm.com/redcatspookkasteel/redcat-recomp/
```

```bash
npm run site:check -- --url https://games.nostalgiarealm.com/redcatspookkasteel/ --classic
```

The first `rsync` adds the new `app/<revision>/` beside the one in use and sends only what
changed in `assets/` and `data/`; the second is the switch. `index.html` and `index.html.gz` must
go together: nginx sends the `.gz` copy without comparing it with the file.

- **No `--delete`**: it would remove the revision that open pages are using. Old revisions can be
  removed by hand later: everything under `app/` except the folder that `build.json` names.

## Checked

On 13 November 2026, on the development machine, package revision `4a03abf07c8a`:

- **The folder** (`npm run package:check`): the revision is its content's; every file that
  `index.html`, the 48 scripts reachable from it (the game thread and the host among them), the
  style sheets and the game's two lists refer to is there, at the listed size for the 1,435 game
  files; the `.gz` copies unpack to exactly their files; no program, tool or hidden file is in
  it. File names: letters, digits, space, `_`, `-` and `.` only; no two differ only in case.
- **The stand-in server's answers**: the redirect, the two isolation headers, the cache rule of
  each folder, `.gz` to a client that accepts it and the file itself to one that does not, 304
  for a copy that is still good, byte ranges for a movie, 404 without a cache rule for a missing
  script, nothing outside the prefix; `classic/` answered as the site answers today.
- **Headless Chromium, 25 ms before every answer** (software rendering): the menu comes up with
  every picture; each of the five worlds runs, 3.1 to 3.5 s after opening the address; its start
  files (526 to 615) are fetched before the game thread starts and the game thread itself waits
  for none in its first twelve seconds; nothing is asked for that is missing or outside
  `/redcatspookkasteel/`. A second visit fetches no script, game module or game file again and
  reaches the running game in 0.5 s. Without the lists the same world's start files arrive one
  after the other: the last after about 16 s instead of 3 s.
- **A server that refuses requests**: with every game file answered 503 once, the start files
  are asked for again and the world runs; the same for files the waiting game thread asks for
  itself, and for the player template the page fetches when it opens.
- **The menu and the take-over on the package**, with the JavaScript port served at `classic/`
  below the same prefix as the site serves it today (`node tools/serve-site.mjs --port 4196
  --classic ../RCSPOOK_NEW`): `tools/menu-check.mjs` on a desktop, a phone, a portrait phone,
  without isolation (the notice and its link to the old version) and with sound refused before
  a click; `tools/legacy-check.mjs`, 100 checks, with the old port driven at
  `/redcatspookkasteel/classic/` and loading its own save there afterwards.
- **The server check itself** (`tools/site-check.mjs`): passes against the stand-in server, and
  reports a server that sends no isolation headers and one that refuses `.ini` files (196 of
  them, named by extension).
- **The live site, from outside**: what the table under "The server as it is" says; that no file
  type of the package is answered 403 there today; that the main site's front page neither
  frames the game nor shows a picture from it.

Not checked:

- **nginx** with the three configuration files, and the public site with this port on it.
  Nothing was uploaded. Steps 3 to 6 are how that gets checked.
- **Firefox and Safari**: neither was run. Playwright's Firefox 146 and its Linux build of WebKit 26
  (Safari's engine, not Safari) were, once, against the development server and the packaged site
  behind `tools/serve-site.mjs` (2026-11-14): both got the page isolated and a world on screen from
  the package. To do on a real Mac and a real iPhone before the site goes live: **every world for
  ten minutes with the memory watched**. Three things were left as they are until then, because
  they were only seen in that Linux build: its web process dying while a world is drawn, its
  game-thread memory growing to about 1.7 GB before it is collected (a 32 MB allocation per second
  made it collect sooner there; not applied), and WebGL 2 in a worker being switched off in it
  (Safari 17 and later should have it). Details: `PLAN.md`, "Not verified".
- **A page that waits for its `load` event** before starting a game: do not add that. In Firefox
  the event can stay away after a page that just stopped a game, and the game then never starts.
- **The development port**: 4190 cannot be opened by Firefox or Safari (a restricted port); the
  development server now uses 4221. The public site on 443 is not affected.
- **A real network**. The delay was a fixed 25 ms per answer on one machine, with no limit on
  speed. About 11 to 14 MB have to arrive before a world starts.
- **Whether the server limits requests** (`limit_req`, fail2ban): not visible from outside.
- **Later in a world, and the change to the next world**: which files the game then waits for.
- This port has no page with the privacy text, the donation addresses and the links to website,
  YouTube and GitHub that the JavaScript port shows under Over. The old version keeps it.
