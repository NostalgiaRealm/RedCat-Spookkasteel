/*
 * FUN_005f15b0 at 005f15b0
 * undefined FUN_005f15b0(void)
 * Address ranges: 005f15b0-005f15f6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005f15b0(int param_1,int param_2)

{
  uint uVar1;
  
  do {
    uVar1 = *(uint *)(param_1 + 0x10);
    *(uint *)(param_1 + 0x10) = uVar1 + 1;
    if ((*(int *)(param_2 + 8) == 0) ||
       ((uint)(*(int *)(param_2 + 0xc) - *(int *)(param_2 + 8) >> 2) <= uVar1)) {
      FUN_005f1470();
    }
    (**(code **)(**(int **)(*(int *)(param_2 + 8) + uVar1 * 4) + 0x2c))(param_1);
  } while (*(int *)(param_1 + 0x10) != -2);
  return;
}

