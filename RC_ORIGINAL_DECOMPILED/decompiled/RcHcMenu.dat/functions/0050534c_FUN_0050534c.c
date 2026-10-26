/*
 * FUN_0050534c at 0050534c
 * undefined __register FUN_0050534c(int * param_1, undefined4 param_2, int * param_3)
 * Address ranges: 0050534c-0050536e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0050534c(int *param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x70))();
  FUN_00409bd8(uVar1,param_3);
  return;
}

