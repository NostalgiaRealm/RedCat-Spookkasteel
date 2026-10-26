/*
 * FUN_0042bacc at 0042bacc
 * undefined __register FUN_0042bacc(int * param_1, int * param_2)
 * Address ranges: 0042bacc-0042bafd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0042bacc(int *param_1,int *param_2)

{
  FUN_004358f8(param_1,param_2);
  FUN_00435824(param_1,(int)param_2,"BUTTON");
  param_2[1] = param_2[1] | *(uint *)(&DAT_0056f73c + (uint)*(byte *)(param_1 + 0x7e) * 4);
  return;
}

