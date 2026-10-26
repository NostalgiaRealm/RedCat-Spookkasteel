/*
 * FUN_005c8980 at 005c8980
 * undefined FUN_005c8980(void)
 * Address ranges: 005c8980-005c899c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005c8980(int param_1)

{
  undefined4 *puVar1;
  
  for (puVar1 = *(undefined4 **)(param_1 + 0x20); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[8]) {
    (**(code **)(*(int *)*puVar1 + 0x48))((int *)*puVar1);
  }
  return;
}

