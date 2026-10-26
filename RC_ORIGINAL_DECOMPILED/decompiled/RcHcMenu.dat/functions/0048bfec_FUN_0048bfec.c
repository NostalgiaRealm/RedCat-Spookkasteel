/*
 * FUN_0048bfec at 0048bfec
 * undefined __register FUN_0048bfec(int * param_1, undefined4 param_2, int * param_3)
 * Address ranges: 0048bfec-0048c00e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0048bfec(int *param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x70))();
  FUN_00409bd8(uVar1,param_3);
  return;
}

