/*
 * FUN_0055b124 at 0055b124
 * int * __register FUN_0055b124(int * param_1, char param_2, undefined4 param_3)
 * Address ranges: 0055b124-0055b4b6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x55af50 slot 11 for TfrmOptions. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x55af50 slot 11 for
   TfrmOptions. Original bytes unchanged; names and types still inferred. */

int * FUN_0055b124(int *param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar3 = extraout_DL;
  }
  FUN_0054ec44(param_1,'\0',param_3,*(int *)(*(int *)PTR_DAT_00572108 + 300));
  *(undefined1 *)(param_1[0xc2] + 0x1e8) = 1;
  *(undefined1 *)(param_1[0xc3] + 0x1e8) = 1;
  *(undefined1 *)(param_1[0xc4] + 0x1e8) = 1;
  *(undefined1 *)(param_1[0xc5] + 0x1e8) = 1;
  piVar2 = FUN_005570f8((int *)&PTR_FUN_00556ff0,'\x01',(int *)param_1[0xc2]);
  param_1[0xc6] = (int)piVar2;
  piVar2 = FUN_00557358((int *)&PTR_FUN_00557250,'\x01',(int *)param_1[0xc3]);
  param_1[199] = (int)piVar2;
  piVar2 = FUN_00559694((int *)&PTR_FUN_005595a0,'\x01',(int *)param_1[0xc4]);
  param_1[200] = (int)piVar2;
  piVar2 = FUN_00559870((int *)&PTR_FUN_00559784,'\x01',(int *)param_1[0xc5]);
  param_1[0xc9] = (int)piVar2;
  param_1[0xca] = *(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x118) + 0x10);
  piVar2 = FUN_004a3bec((int *)&PTR_FUN_0056aaf0,'\x01',extraout_ECX_00);
  param_1[0xcb] = (int)piVar2;
  (**(code **)(*(int *)param_1[0xcb] + 0xc))
            ((int *)param_1[0xcb],
             *(undefined4 *)(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x118) + 0x10) + 0xc));
  param_1[0xcc] = *(int *)(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x118) + 0x10) + 0x10);
  param_1[0xcd] = *(int *)(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x118) + 0x10) + 0x18);
  (**(code **)(**(int **)(param_1[200] + 0x1fc) + 0xd0))
            (*(int **)(param_1[200] + 0x1fc),param_1[0xcc]);
  (**(code **)(**(int **)(param_1[0xc9] + 0x1fc) + 0xd0))
            (*(int **)(param_1[0xc9] + 0x1fc),param_1[0xcd]);
  *(int *)(param_1[200] + 0x204) = param_1[0xcc];
  *(int *)(param_1[0xc9] + 0x204) = param_1[0xcd];
  (**(code **)(**(int **)(param_1[0xc6] + 0x218) + 0xbc))(*(int **)(param_1[0xc6] + 0x218),0);
  (**(code **)(**(int **)(param_1[0xc6] + 0x21c) + 0xbc))(*(int **)(param_1[0xc6] + 0x21c),0);
  (**(code **)(**(int **)(param_1[0xc6] + 0x220) + 0xbc))(*(int **)(param_1[0xc6] + 0x220),0);
  iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x118) + 0x10) + 0xc) +
                  0x24);
  if (iVar1 == 1) {
    (**(code **)(**(int **)(param_1[0xc6] + 0x218) + 0xbc))(*(int **)(param_1[0xc6] + 0x218),1);
  }
  else if (iVar1 == 2) {
    (**(code **)(**(int **)(param_1[0xc6] + 0x21c) + 0xbc))(*(int **)(param_1[0xc6] + 0x21c),1);
  }
  else if (iVar1 == 3) {
    (**(code **)(**(int **)(param_1[0xc6] + 0x220) + 0xbc))(*(int **)(param_1[0xc6] + 0x220),1);
  }
  (**(code **)(**(int **)(param_1[199] + 0x218) + 0xbc))(*(int **)(param_1[199] + 0x218),0);
  (**(code **)(**(int **)(param_1[199] + 0x21c) + 0xbc))(*(int **)(param_1[199] + 0x21c),0);
  (**(code **)(**(int **)(param_1[199] + 0x220) + 0xbc))(*(int **)(param_1[199] + 0x220),0);
  iVar1 = *(int *)(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x118) + 0x10) + 0x2c);
  if (iVar1 == 0) {
    (**(code **)(**(int **)(param_1[199] + 0x218) + 0xbc))(*(int **)(param_1[199] + 0x218),1);
  }
  else if (iVar1 == 1) {
    (**(code **)(**(int **)(param_1[199] + 0x21c) + 0xbc))(*(int **)(param_1[199] + 0x21c),1);
  }
  else if (iVar1 == 2) {
    (**(code **)(**(int **)(param_1[199] + 0x220) + 0xbc))(*(int **)(param_1[199] + 0x220),1);
  }
  else {
    (**(code **)(**(int **)(param_1[199] + 0x220) + 0xbc))(*(int **)(param_1[199] + 0x220),1);
  }
  if (cVar3 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

