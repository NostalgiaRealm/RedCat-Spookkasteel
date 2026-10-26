/*
 * FUN_004f6c9c at 004f6c9c
 * int * __register FUN_004f6c9c(int * param_1, char param_2, int * param_3)
 * Address ranges: 004f6c9c-004f6d69
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_004f6c9c(int *param_1,char param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  char extraout_DL;
  char cVar3;
  undefined4 extraout_EDX;
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
  param_1[0x10] = 0;
  FUN_00431d2c(param_1,CONCAT31((int3)((uint)extraout_EDX >> 8),1),extraout_ECX_00);
  FUN_00431f98(param_1,0x11);
  piVar1 = FUN_004f6c08((int *)&LAB_004f3b70,'\x01',(int)param_1);
  param_1[0x7c] = (int)piVar1;
  piVar1 = FUN_0041c468((int *)&PTR_FUN_0042dc98,'\x01',extraout_ECX_01);
  param_1[0x7f] = (int)piVar1;
  FUN_004314a8(piVar1,(int)param_1);
  iVar2 = FUN_00403064((int *)&DAT_0043e038,'\x01',extraout_ECX_02);
  param_1[0x83] = iVar2;
  *(int **)(iVar2 + 0xc) = param_1;
  *(undefined1 **)(iVar2 + 8) = &LAB_004f7c44;
  *(undefined1 *)(param_1 + 0x82) = 1;
  *(undefined1 *)((int)param_1 + 0x20a) = 0;
  *(undefined1 *)((int)param_1 + 0x1f9) = 0;
  *(undefined1 *)(param_1 + 0x7e) = 0;
  param_1[0x7d] = 0;
  if (cVar3 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

