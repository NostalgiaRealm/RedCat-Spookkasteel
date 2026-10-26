/*
 * FUN_004a1f1c at 004a1f1c
 * int * __register FUN_004a1f1c(int * param_1, char param_2, int * param_3)
 * Address ranges: 004a1f1c-004a201f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4a1a64 slot 11 for TDaviGraphicDef. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4a1a64 slot 11 for
   TDaviGraphicDef. Original bytes unchanged; names and types still inferred. */

int * FUN_004a1f1c(int *param_1,char param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar3;
  undefined4 extraout_ECX_02;
  char extraout_DL;
  char cVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffdc;
  undefined4 in_stack_ffffffe0;
  byte local_11;
  
  cVar4 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffdc,in_stack_ffffffe0);
    param_3 = extraout_ECX;
    cVar4 = extraout_DL;
  }
  FUN_00418f00(param_1,'\0',param_3);
  local_11 = 0;
  do {
    piVar1 = FUN_004a0e64((int *)&PTR_FUN_004a0d80,'\x01',param_1);
    param_1[local_11 + 9] = (int)piVar1;
    if (local_11 == 5) {
      FUN_004a18e0(param_1[0xe],param_1,param_1,&LAB_004a23b8,param_1);
      uVar3 = extraout_ECX_01;
    }
    else {
      FUN_004a18e0(param_1[local_11 + 9],param_1,param_1,&LAB_004a22d8,param_1);
      iVar2 = param_1[local_11 + 9];
      *(int **)(iVar2 + 0x1c) = param_1;
      *(undefined1 **)(iVar2 + 0x18) = &LAB_004a22f8;
      uVar3 = extraout_ECX_00;
    }
    local_11 = local_11 + 1;
  } while (local_11 != 7);
  iVar2 = FUN_00403064((int *)&PTR_FUN_0041077c,'\x01',uVar3);
  param_1[0x13] = iVar2;
  param_1[0x11] = 0x68;
  param_1[0x12] = 0x18;
  param_1[0x10] = 0;
  piVar1 = FUN_0041b974((int *)&PTR_FUN_0041a454,'\x01',extraout_ECX_02);
  param_1[0x14] = (int)piVar1;
  if (cVar4 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffdc;
  }
  return param_1;
}

