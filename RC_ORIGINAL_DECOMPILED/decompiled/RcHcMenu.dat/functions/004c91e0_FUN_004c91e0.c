/*
 * FUN_004c91e0 at 004c91e0
 * int * __register FUN_004c91e0(int * param_1, char param_2, int * param_3)
 * Address ranges: 004c91e0-004c92c8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4c6350 slot 11 for TDaviButton. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4c6350 slot 11 for
   TDaviButton. Original bytes unchanged; names and types still inferred. */

int * FUN_004c91e0(int *param_1,char param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
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
  FUN_0042b9b8(param_1,'\0',param_3);
  piVar2 = FUN_004c6ee4((int *)&DAT_004c6be0,'\x01',extraout_ECX_00);
  param_1[0x81] = (int)piVar2;
  iVar1 = param_1[0x81];
  *(int **)(iVar1 + 0x2c) = param_1;
  *(code **)(iVar1 + 0x28) = FUN_004c98c8;
  piVar2 = FUN_0041c468((int *)&PTR_FUN_0041a794,'\x01',extraout_ECX_01);
  param_1[0x80] = (int)piVar2;
  *(undefined1 *)(param_1 + 0x86) = 0;
  *(undefined1 *)(param_1 + 0x82) = 0;
  *(undefined1 *)((int)param_1 + 0x209) = 0;
  FUN_0041bb48((int *)param_1[0x16],-0x7fffffee,extraout_ECX_02);
  param_1[0x85] = 4;
  param_1[0x83] = 4;
  FUN_00431f78(param_1,0x68);
  FUN_00431f98(param_1,0x18);
  if (cVar3 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

