#!/bin/bash
# One start of the original game, on the host, under a memory limit and a timeout.
#   tools/reference-wine/run.sh --name idle-a
#   tools/reference-wine/run.sh --name walk-a --key Up --key-at 20 --key-for 10
# Every argument goes to refrun.py. Needs prepare.sh first. From the distrobox: prefix with
# distrobox-host-exec.
set -u
HERE="$(cd "$(dirname "$0")" && pwd)"
SCOPE="rcspook-refwine-$$"
# env.sh is sourced inside the scope: systemd-run itself needs the real XDG_RUNTIME_DIR.
timeout -k 10 "${REFWINE_TIMEOUT:-240}" systemd-run --user --scope -q --unit="$SCOPE" \
  -p MemoryMax=4G -p MemorySwapMax=0 "$HERE/inner.sh" "$@"
status=$?
# Whatever is still in this scope after a timeout goes with it. Nothing outside the scope is touched.
systemctl --user stop "$SCOPE.scope" 2>/dev/null
exit $status
