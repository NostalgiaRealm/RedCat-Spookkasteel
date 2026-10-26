/*
 * FUN_1000e1a0 at 1000e1a0
 * undefined FUN_1000e1a0(void)
 * Address ranges: 1000e1a0-1000e1bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000e1a0(int param_1)

{
  undefined4 *puVar1;
  
  for (puVar1 = *(undefined4 **)(param_1 + 0xc); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    FUN_1000df70(param_1,puVar1);
  }
  return;
}

