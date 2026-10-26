/*
 * FUN_00580bb0 at 00580bb0
 * undefined FUN_00580bb0(void)
 * Address ranges: 00580bb0-00580bcd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00580bb0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    iVar1 = param_2[1];
    param_1[1] = iVar1;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
    }
  }
  return;
}

