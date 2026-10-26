/*
 * FUN_0042be1c at 0042be1c
 * undefined __register FUN_0042be1c(int * param_1, int * param_2)
 * Address ranges: 0042be1c-0042be68
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0042be1c(int *param_1,int *param_2)

{
  uint uVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  FUN_004358f8(param_1,param_2);
  FUN_00435824(param_1,(int)param_2,"BUTTON");
  uVar1 = FUN_00403270(param_1,extraout_EDX,extraout_ECX);
  param_2[1] = *(uint *)(&DAT_0056f744 + (uint)*(byte *)(param_1 + 0x7e) * 4 + (uVar1 & 0x7f) * 8) |
               param_2[1] | 4U;
  return;
}

