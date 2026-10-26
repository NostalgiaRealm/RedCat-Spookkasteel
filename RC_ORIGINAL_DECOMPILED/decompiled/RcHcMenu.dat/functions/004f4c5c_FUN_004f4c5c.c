/*
 * FUN_004f4c5c at 004f4c5c
 * int * __register FUN_004f4c5c(int * param_1, char param_2, int * param_3)
 * Address ranges: 004f4c5c-004f4d14
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_004f4c5c(int *param_1,char param_2,int *param_3)

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
  FUN_004348a0(param_1,'\0',param_3);
  FUN_00431f78(param_1,0x121);
  FUN_00431f98(param_1,0xc1);
  FUN_00438bb4((int)param_1,'\x01');
  param_1[0x10] = 0x81;
  iVar1 = FUN_00403064((int *)&PTR_FUN_004f463c,'\x01',extraout_ECX_00);
  param_1[0x84] = iVar1;
  *(int **)(iVar1 + 0xc) = param_1;
  piVar2 = FUN_0041c468((int *)&PTR_FUN_0042dc98,'\x01',extraout_ECX_01);
  param_1[0x7c] = (int)piVar2;
  FUN_004314a8(piVar2,(int)param_1);
  iVar1 = FUN_00403064((int *)&DAT_0043e038,'\x01',extraout_ECX_02);
  param_1[0x7e] = iVar1;
  *(int **)(iVar1 + 0xc) = param_1;
  *(undefined1 **)(iVar1 + 8) = &LAB_004f50c0;
  if (cVar3 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

