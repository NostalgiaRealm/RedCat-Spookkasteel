/*
 * FUN_00418ee4 at 00418ee4
 * undefined __register FUN_00418ee4(void)
 * Address ranges: 00418ee4-00418eff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00418ee4(void)

{
  if (DAT_0057364c != (HWND)0x0) {
    DestroyWindow(DAT_0057364c);
    DAT_0057364c = (HWND)0x0;
  }
  return;
}

