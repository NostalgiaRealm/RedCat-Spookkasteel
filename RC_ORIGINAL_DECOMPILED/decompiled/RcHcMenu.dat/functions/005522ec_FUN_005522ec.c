/*
 * FUN_005522ec at 005522ec
 * int * __register FUN_005522ec(int * param_1, char param_2, undefined4 param_3)
 * Address ranges: 005522ec-0055237f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x5520e4 slot 11 for TSingletonForm. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x5520e4 slot 11 for
   TSingletonForm. Original bytes unchanged; names and types still inferred. */

int * FUN_005522ec(int *param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  char extraout_DL;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffdc;
  undefined4 in_stack_ffffffe0;
  
  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffdc,in_stack_ffffffe0);
    param_3 = extraout_ECX;
    cVar3 = extraout_DL;
  }
  FUN_0056bd7c(param_1,'\0',param_3);
  iVar1 = FUN_00403064((int *)&LAB_00552254,'\x01',extraout_ECX_00);
  uVar2 = FUN_00402fdc(param_1);
  *(undefined4 *)(iVar1 + 4) = uVar2;
  *(int **)(iVar1 + 8) = param_1;
  if (DAT_00574848 == (int *)0x0) {
    DAT_00574848 = (int *)FUN_00403064((int *)&PTR_FUN_0041077c,'\x01',extraout_ECX_01);
  }
  FUN_004121d8(DAT_00574848,iVar1);
  if (cVar3 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffdc;
  }
  return param_1;
}

