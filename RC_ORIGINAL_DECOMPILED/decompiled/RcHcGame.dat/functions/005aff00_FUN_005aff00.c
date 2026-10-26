/*
 * FUN_005aff00 at 005aff00
 * undefined FUN_005aff00(void)
 * Address ranges: 005aff00-005aff17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005aff00(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 4);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = &DAT_0064a3b4;
  }
  FUN_005afe30(puVar1);
  return;
}

