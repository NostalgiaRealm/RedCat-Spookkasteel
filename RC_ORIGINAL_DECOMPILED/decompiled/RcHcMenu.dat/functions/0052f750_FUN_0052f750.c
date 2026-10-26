/*
 * FUN_0052f750 at 0052f750
 * int * __register FUN_0052f750(int * param_1, char param_2, int * param_3)
 * Address ranges: 0052f750-0052f7ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0052f750(int *param_1,char param_2,int *param_3)

{
  int iVar1;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
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
  FUN_00532cc8(param_1,'\0',param_3);
  param_1[0xb2] = 0;
  *(undefined1 *)((int)param_1 + 0x2d9) = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  *(undefined1 *)(param_1 + 0xb9) = 0;
  *(undefined1 *)(param_1 + 0xb6) = 0;
  param_1[0xba] = 0;
  FUN_00532f2c((int)param_1,0);
  iVar1 = FUN_00403064((int *)&PTR_FUN_0041077c,'\x01',extraout_ECX_00);
  param_1[0xb3] = iVar1;
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

