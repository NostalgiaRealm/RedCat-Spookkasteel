/*
 * FUN_0054ec44 at 0054ec44
 * int * __register FUN_0054ec44(int * param_1, char param_2, undefined4 param_3, int param_4)
 * Address ranges: 0054ec44-0054ed82
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0054ec44(int *param_1,char param_2,undefined4 param_3,int param_4)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  char extraout_DL;
  char cVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  FUN_004af0b8(param_1,'\0',param_3);
  FUN_00431d2c((int *)param_1[0xba],CONCAT31((int3)((uint)extraout_EDX >> 8),5),extraout_ECX_00);
  (**(code **)(**(int **)(param_1[0xba] + 300) + 8))(*(int **)(param_1[0xba] + 300),param_4);
  FUN_00431d2c((int *)param_1[0xbf],CONCAT31((int3)((uint)extraout_EDX_00 >> 8),5),extraout_ECX_01);
  (**(code **)(**(int **)(param_1[0xbf] + 300) + 8))
            (*(int **)(param_1[0xbf] + 300),*(undefined4 *)(*(int *)PTR_DAT_00572108 + 0xf8));
  (**(code **)(*(int *)param_1[0xbf] + 0x98))((int *)param_1[0xbf],1);
  FUN_00432bec((int *)param_1[0xbf],extraout_EDX_01,extraout_ECX_02);
  FUN_00431f78(param_1,*(undefined4 *)(param_4 + 0x8c));
  FUN_00431f98(param_1,*(undefined4 *)(param_4 + 0x40));
  FUN_0054ed84((int)param_1);
  FUN_0054d628(param_1);
  FUN_00432744(param_1[0xbc],*(uint **)(PTR_DAT_00572404 + 0xe8));
  FUN_00432744(param_1[0xbd],*(uint **)(PTR_DAT_00572404 + 0xe4));
  FUN_00432744(param_1[0xbb],*(uint **)(PTR_DAT_00572404 + 0xa0));
  if (cVar1 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

