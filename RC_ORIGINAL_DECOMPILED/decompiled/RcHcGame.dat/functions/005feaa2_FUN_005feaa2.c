/*
 * FUN_005feaa2 at 005feaa2
 * undefined FUN_005feaa2(void)
 * Address ranges: 005feaa2-005feac3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005feaa2(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  for (puVar1 = *(undefined4 **)(param_1 + 0x1c); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    (*(code *)puVar1[2])(param_2,param_1,puVar1[1]);
  }
  return;
}

