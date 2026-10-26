/*
 * FUN_005b6e90 at 005b6e90
 * undefined FUN_005b6e90(void)
 * Address ranges: 005b6e90-005b6ed9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005b6e90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  
  iVar1 = FUN_005b6d60(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  if (iVar1 == 0) {
    return;
  }
  *(undefined4 *)(iVar1 + 0xb8) = **(undefined4 **)(param_1 + 0xbc4);
  **(int **)(param_1 + 0xbc4) = iVar1;
  return;
}

