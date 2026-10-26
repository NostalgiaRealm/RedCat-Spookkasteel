/*
 * FUN_100019b0 at 100019b0
 * undefined FUN_100019b0(void)
 * Address ranges: 100019b0-100019ce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100019b0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  while (puVar1 = param_1, puVar1 != (undefined4 *)0x0) {
    param_1 = (undefined4 *)*puVar1;
    *puVar1 = 0;
    *param_2 = puVar1;
    param_2 = puVar1;
  }
  return;
}

