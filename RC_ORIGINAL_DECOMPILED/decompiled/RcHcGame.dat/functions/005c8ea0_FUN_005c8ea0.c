/*
 * FUN_005c8ea0 at 005c8ea0
 * undefined FUN_005c8ea0(void)
 * Address ranges: 005c8ea0-005c8ec4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005c8ea0(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  iVar1 = (**(code **)(*(int *)*param_1 + 0x24))((int *)*param_1);
  if (iVar1 != 0) {
    return 0;
  }
  return 0;
}

