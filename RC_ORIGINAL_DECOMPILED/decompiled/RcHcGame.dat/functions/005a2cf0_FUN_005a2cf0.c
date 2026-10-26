/*
 * FUN_005a2cf0 at 005a2cf0
 * undefined FUN_005a2cf0(void)
 * Address ranges: 005a2cf0-005a2cfc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * __fastcall FUN_005a2cf0(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 0x18);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = &DAT_0064a3b4;
  }
  return puVar1;
}

