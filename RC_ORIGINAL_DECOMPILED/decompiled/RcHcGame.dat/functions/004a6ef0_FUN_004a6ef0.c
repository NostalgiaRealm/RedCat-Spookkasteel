/*
 * FUN_004a6ef0 at 004a6ef0
 * undefined FUN_004a6ef0(void)
 * Address ranges: 004a6ef0-004a6efc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * __fastcall FUN_004a6ef0(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 4);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = &DAT_0064a3b4;
  }
  return puVar1;
}

