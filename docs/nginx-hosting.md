# Host RedCat Spookkasteel with Nginx

Target address: **https://games.nostalgiarealm.com/redcatspookkasteel/**.

Version **0.9.1** runs directly as a static website. Upload its prepared source,
imported game data and Three.js dependency. Nginx serves the files; visitors run
the game in their browsers. No Electron package, build command, Node server,
PHP or database is needed on the webhost. These are instructions for you to
carry out; no server or DNS changes have been made.

## 1. Prepare the files on your computer

Use `/home/rick/RCSPOOK_NEW`, including its complete imported `assets/` and
`data/` directories. A source-only checkout is insufficient because those
directories are ignored by Git. See [building.md](building.md) for importing
missing original assets. Do not upload the older `dist/` desktop packages.

The web directory should contain:

```text
redcatspookkasteel/
├── index.html
├── src/
├── assets/
├── data/
└── node_modules/
    └── three/
        ├── LICENSE
        ├── build/             # Includes three.module.js AND three.core.js
        └── ...                # Keep the complete installed Three.js directory
```

If `node_modules/three/` is missing, run `npm ci` in the project on your
development computer using the prerequisites in [building.md](building.md).
Otherwise, you can use the dependency already installed there.

To prepare a separate upload directory, run these commands **on your computer**:

```sh
cd /home/rick/RCSPOOK_NEW
test -f node_modules/three/build/three.module.js
test -f node_modules/three/build/three.core.js
test -f assets/media/intronl.webm
test -f data/levels/lvl00a/level.json

REDCAT_STAGE=$(mktemp -d /tmp/redcat-web-0.9.1.XXXXXX)
mkdir -p "$REDCAT_STAGE/redcatspookkasteel/node_modules"
cp -a index.html src assets data "$REDCAT_STAGE/redcatspookkasteel/"
cp -a node_modules/three "$REDCAT_STAGE/redcatspookkasteel/node_modules/"
du -sh "$REDCAT_STAGE/redcatspookkasteel"
```

Continue only if the checks succeed. The current files need approximately
180 MB of disk space. This is a file copy, not a desktop build. The published
tree does not need the rest of `node_modules`, `electron/`, development tools,
tests, screenshots, logs, original Windows executables or the ISO.

## 2. Upload into the subdirectory

This guide uses this filesystem layout **on the server**:

```text
/var/www/games.nostalgiarealm.com/redcatspookkasteel/index.html
```

If your hosting panel gives you a different document root, use that path and
adjust the `root` in the Nginx snippet to its parent directory. For example, a
file at `/srv/games/redcatspookkasteel/index.html` needs `root /srv/games;`.

Use SFTP or your file manager to upload the contents of the staged
`redcatspookkasteel` directory. Alternatively, with an SSH deployment account
that can write to the destination, run **on your computer**:

```sh
rsync -av "$REDCAT_STAGE/redcatspookkasteel/" \
  DEPLOY_USER@SERVER:/var/www/games.nostalgiarealm.com/redcatspookkasteel/
```

Replace `DEPLOY_USER` and `SERVER`. Have the administrator create the destination
and grant that account write access first. Keep the trailing slash on the source
so that you do not create `redcatspookkasteel/redcatspookkasteel/` by accident.
Nginx needs read access to files and traversal access to their directories;
usual static-file permissions are 0644 for files and 0755 for directories.
The running game does not write files on the server.

On an SELinux-enforcing host, files under the normal webroot also need the
web-content label; after uploading, the administrator can run
`sudo restorecon -Rv /var/www/games.nostalgiarealm.com/redcatspookkasteel`.
For a custom path outside the webroot, configure its persistent web-content
label rather than disabling SELinux.

## 3. Add the Nginx location configuration

The ready-to-copy [nginx-redcatspookkasteel.conf](nginx-redcatspookkasteel.conf)
contains only two `location` blocks. Upload this configuration separately,
outside the public web directory, for example as:

```text
/etc/nginx/snippets/redcatspookkasteel.conf
```

Create `/etc/nginx/snippets/` if your distribution does not provide it. Add this
line **inside the existing HTTPS `server` block for
`games.nostalgiarealm.com`**, preserving its certificates and other locations:

```nginx
include /etc/nginx/snippets/redcatspookkasteel.conf;
```

The included file is:

```nginx
location = /redcatspookkasteel {
    return 301 /redcatspookkasteel/$is_args$args;
}

location ^~ /redcatspookkasteel/ {
    root /var/www/games.nostalgiarealm.com;
    index index.html;
    include /etc/nginx/mime.types;
    default_type application/octet-stream;
    try_files $uri $uri/ =404;
    autoindex off;
    expires -1;
}
```

The first location adds the required slash while preserving a query such as
`?skipIntro`. `root` includes the URL path when choosing the file. Missing
resources must return 404, rather than an SPA fallback page. The MIME mapping
lets browsers recognize JavaScript modules, JSON, images and media. See the
official [Nginx root, location, types and try_files documentation](https://nginx.org/en/docs/http/ngx_http_core_module.html).

`expires -1` makes clients revalidate cached content. The game currently uses
stable filenames, so long-lived immutable caching could mix old code and new
assets after an update. This setting also avoids replacing an existing site's
`add_header` inheritance. See [Nginx response-header directives](https://nginx.org/en/docs/http/ngx_http_headers_module.html).

Do not place these locations directly at the top of `nginx.conf` or create a
second server with the same hostname if one already exists. If a hosting panel
manages the configuration, use its custom-location/snippet facility.

## 4. DNS and HTTPS, if the subdomain is not configured yet

If the existing `games.nostalgiarealm.com` site already has HTTPS, skip creating
a new virtual host. Otherwise, point its DNS A record at the webhost's IPv4
address; add an AAAA record only if the same server is reachable over IPv6.
Allow the host's HTTP/HTTPS traffic through the applicable firewall.

For a new host, a minimal initial HTTP configuration is:

```nginx
server {
    listen 80;
    server_name games.nostalgiarealm.com;
    include /etc/nginx/snippets/redcatspookkasteel.conf;
}
```

Save it in a file loaded by your Nginx installation, commonly
`/etc/nginx/conf.d/games.nostalgiarealm.com.conf`. Ensure no existing virtual host
already claims the same name. Test and reload as described below, then enable
TLS through your hosting panel or your certificate management tool.

For a host using Certbot with its Nginx plugin installed, one option is:

```sh
sudo certbot --nginx -d games.nostalgiarealm.com --redirect
sudo certbot renew --dry-run
```

The plugin can configure the certificate and HTTP-to-HTTPS redirect. Preserve
a copy of your site configuration before letting it edit the file. See the
official [Certbot Nginx plugin instructions](https://eff-certbot.readthedocs.io/en/stable/using.html#nginx).
Keep the game locations included in the resulting HTTPS server block. Use
HTTPS as the final address before players start saving progress.

## 5. Validate and open the game

On the server, validate the complete configuration before reloading:

```sh
sudo nginx -t
```

Only if validation succeeds:

```sh
sudo systemctl reload nginx
```

If your host does not use systemd, use its normal Nginx reload mechanism. The
[Nginx beginner's guide](https://nginx.org/en/docs/beginners_guide.html) describes
configuration validation and graceful reloading.

Then check the public URLs from your computer:

```sh
curl -I 'https://games.nostalgiarealm.com/redcatspookkasteel?skipIntro'
curl -I https://games.nostalgiarealm.com/redcatspookkasteel/
curl -I https://games.nostalgiarealm.com/redcatspookkasteel/src/main.js
curl -I https://games.nostalgiarealm.com/redcatspookkasteel/node_modules/three/build/three.core.js
curl -I https://games.nostalgiarealm.com/redcatspookkasteel/data/levels/lvl00a/level.json
curl -I https://games.nostalgiarealm.com/redcatspookkasteel/does-not-exist.js
curl -sS -D - -o /dev/null -H 'Range: bytes=0-1023' \
  https://games.nostalgiarealm.com/redcatspookkasteel/assets/media/intronl.webm
```

Expect a redirect to `/redcatspookkasteel/?skipIntro`, 200 responses for the
existing files, a JavaScript MIME type for `.js`, 404 for the nonexistent file,
and a 206 byte-range response for the video. Avoid a catch-all rewrite or proxy
that returns `index.html` for missing `.js`, `.json` or binary files.

Open **https://games.nostalgiarealm.com/redcatspookkasteel/** in a desktop browser
with WebGL 2. Check the **0.9.1** menu badge, start the forest, and verify image,
sound, mouse look and pause. Click the page if the browser asks for a gesture to
start audio/video, mouse capture or fullscreen. Browser window controls differ
from the Electron desktop app; mobile controls are still future work.

## Updates, saves and troubleshooting

- For updates, copy matching `index.html`, `src/`, `assets/`, `data/` and Three.js
  files from the same source version. Keep a previous release for rollback.
  Upload a complete replacement directory first and switch it into place when
  ready; avoid changing individual files while people are loading the game.
- Saves, unlocked levels and settings live in each visitor's browser storage,
  not in the server's `data/` directory. They are not shared between devices or
  synchronized with desktop saves. HTTPS and HTTP use different storage origins.
  Keep the hostname and protocol stable across updates. Another copy of this
  game on the same origin shares the same RedCat storage keys, even at another
  URL path.
- If the badge still shows 0.2.5, check that you uploaded current source rather
  than a prepared desktop package. Revalidate browser/CDN caches after updates.
- If the console reports a module MIME error or `Unexpected token '<'`, inspect
  the failing URL: a missing file is likely being replaced by an HTML error or
  fallback page. Also check the Nginx MIME configuration and Three.js core file.
- Keep all URLs under the trailing-slash directory. Relative paths in the
  game's HTML, import map and asset requests already support this subpath; no
  hardcoded hostname or `<base href="/">` is needed.
- If you use a CDN or reverse proxy, preserve byte-range responses for media,
  forward the complete path, and avoid minification/rewrite rules that modify
  ES modules or the inline import map. Existing server CSP headers must permit
  the application's import map and same-origin assets; its own policy is in
  `index.html`.
- For 403 errors, check the Nginx error log, file/directory permissions and, on
  SELinux hosts, content labels. A black 3D view with successful asset requests
  calls for a browser WebGL/graphics-driver check.

## Focused local check

```sh
node tests/web-subpath-scenes.mjs
```

This checks the `/redcatspookkasteel/` prefix with a temporary local HTTP fixture.
It does not contact your domain, publish files, or replace `nginx -t` and browser
verification on your actual host. No Nginx binary is available in the current
development environment, so the actual server configuration has not been run
here. The focused local check passed with 215 browser resource URLs remaining
under the prefix, the 0.9.1 menu, original forest, scripts, intro/effect/voice
playback, redirect/query handling, missing-file 404s and media range responses.
No release packages were generated for these instructions.
