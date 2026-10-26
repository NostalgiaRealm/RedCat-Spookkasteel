/*
 * FUN_00500a6c at 00500a6c
 * undefined __register FUN_00500a6c(int * param_1, undefined4 param_2, uint param_3)
 * Address ranges: 00500a6c-00500a9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00500a6c(int *param_1,undefined4 param_2,uint param_3)

{
  FUN_0043760c((int)param_1,param_2,param_3);
  (**(code **)(*param_1 + 0xdc))(param_1,param_2,param_3 & 0xff);
  return;
}

