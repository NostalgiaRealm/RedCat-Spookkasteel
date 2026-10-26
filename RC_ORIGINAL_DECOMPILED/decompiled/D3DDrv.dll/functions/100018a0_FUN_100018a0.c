/*
 * FUN_100018a0 at 100018a0
 * undefined __stdcall FUN_100018a0(void)
 * Address ranges: 100018a0-100018f9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100018a0(void)

{
  (**(code **)(*DAT_100274c8 + 0xa0))(DAT_100274c8,0,0x11,2);
  (**(code **)(*DAT_100274c8 + 0xa0))(DAT_100274c8,0,0x10,2);
  if (DAT_10038e74 != 0) {
    (**(code **)(*DAT_100274c8 + 0xa0))(DAT_100274c8,1,0x11,2);
    (**(code **)(*DAT_100274c8 + 0xa0))(DAT_100274c8,1,0x10,2);
  }
  return;
}

