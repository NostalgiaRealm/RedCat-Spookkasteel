/*
 * FUN_004f3220 at 004f3220
 * undefined FUN_004f3220(void)
 * Address ranges: 004f3220-004f3249
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f3220(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 4);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = &DAT_0064a3b4;
  }
  FUN_005acdb0(puVar1);
  FUN_005ad1a0();
  return;
}

