/*
 * FUN_004237a0 at 004237a0
 * undefined __register FUN_004237a0(void)
 * Address ranges: 004237a0-004237d6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004237a0(void)

{
  if (DAT_005736b8 == (HMODULE)0x0) {
    DAT_005736b8 = GetModuleHandleA("comctl32.dll");
    if (DAT_005736b8 != (HMODULE)0x0) {
      DAT_005736bc = GetProcAddress(DAT_005736b8,"InitCommonControlsEx");
    }
  }
  return;
}

