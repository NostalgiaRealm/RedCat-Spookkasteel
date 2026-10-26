/*
 * FUN_0042a774 at 0042a774
 * int * __register FUN_0042a774(int * param_1, char param_2, int * param_3)
 * Address ranges: 0042a774-0042a867
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x426c74 slot 11 for TCustomComboBox. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x426c74 slot 11 for
   TCustomComboBox. Original bytes unchanged; names and types still inferred. */

int * FUN_0042a774(int *param_1,char param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  char extraout_DL;
  char cVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar4 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar4 = extraout_DL;
  }
  FUN_004348a0(param_1,'\0',param_3);
  if (*PTR_DAT_005722c4 == '\0') {
    param_1[0x10] = 0x42b2;
  }
  else {
    param_1[0x10] = 0x42a2;
  }
  FUN_00431f78(param_1,0x91);
  FUN_00431f98(param_1,0x19);
  FUN_00438bb4((int)param_1,'\x01');
  FUN_004328c4((int)param_1,'\0');
  iVar1 = FUN_00403064((int *)&PTR_FUN_00428934,'\x01',extraout_ECX_00);
  param_1[0x7c] = iVar1;
  *(int **)(iVar1 + 0xc) = param_1;
  piVar2 = FUN_0041c468((int *)&PTR_FUN_0042dc98,'\x01',extraout_ECX_01);
  param_1[0x7d] = (int)piVar2;
  param_1[0x7f] = 0x10;
  *(undefined1 *)((int)param_1 + 0x1fa) = 0;
  puVar3 = FUN_004484b8();
  param_1[0x84] = (int)puVar3;
  puVar3 = FUN_004484b8();
  param_1[0x85] = (int)puVar3;
  param_1[0x81] = 8;
  param_1[0x8a] = -1;
  if (cVar4 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

