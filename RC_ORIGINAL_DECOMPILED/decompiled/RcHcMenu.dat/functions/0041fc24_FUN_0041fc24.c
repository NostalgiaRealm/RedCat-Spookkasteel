/*
 * FUN_0041fc24 at 0041fc24
 * undefined __register FUN_0041fc24(int * param_1, int param_2, undefined4 param_3)
 * Address ranges: 0041fc24-0041fc5c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041fc24(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  if (param_1[8] == 0) {
    FUN_0041f7e8((int)param_1);
    param_3 = extraout_ECX;
  }
  iVar1 = param_1[8];
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  if (param_2 != *(int *)(iVar1 + 0xc)) {
    FUN_0041fd38((int)param_1,0,param_3);
    *(int *)(param_1[8] + 0xc) = param_2;
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}

