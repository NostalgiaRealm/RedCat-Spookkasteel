/*
 * FUN_0043d888 at 0043d888
 * undefined __register FUN_0043d888(int param_1, int * param_2, int param_3)
 * Address ranges: 0043d888-0043d8b6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043d888(int param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_004123e0(*(int *)(param_1 + 0x24),(int)param_2);
  if (-1 < iVar1) {
    iVar1 = FUN_00403224(param_2,(int)&LAB_0043d1d4);
    FUN_0043d610(iVar1,param_3);
  }
  return;
}

