/*
 * FUN_004a88f4 at 004a88f4
 * int * __register FUN_004a88f4(int * param_1, char param_2, int * param_3)
 * Address ranges: 004a88f4-004a89bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_004a88f4(int *param_1,char param_2,int *param_3)

{
  int iVar1;
  int *extraout_ECX;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  FUN_00439a24(param_1,'\0',param_3);
  param_1[0x10] = param_1[0x10] & 0xffffffbf;
  iVar1 = FUN_004348a0((int *)&PTR_FUN_0042ebec,'\x01',param_1);
  param_1[0x4a] = iVar1;
  *(uint *)(param_1[0x4a] + 0x40) = *(uint *)(param_1[0x4a] + 0x40) & 0xffffffbf;
  iVar1 = FUN_004a8f84((int)param_1);
  param_1[0x4c] = *(int *)(iVar1 + 0x28);
  param_1[0x4d] = *(int *)(iVar1 + 0x2c);
  iVar1 = FUN_004a8f84((int)param_1);
  *(int **)(iVar1 + 0x2c) = param_1;
  *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(*param_1 + 0x88);
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

