// The development server's port and address, in one place: tools/serve.mjs listens here by default
// and every check opens this address by default (--port and --url still override).
// Not 4190, which it was until 2026-11-14: that number (ManageSieve) is on the list of ports Firefox
// and WebKit (so Safari) refuse to open, whatever listens there; only Chromium opened the page.
// A page's storage belongs to its address including the port: players and save states made in a
// browser of your own under :4190 stay there (node tools/serve.mjs --port 4190 in Chromium shows them).
export const DEV_PORT = 4221;
export const DEV_URL = `http://127.0.0.1:${DEV_PORT}/`;
