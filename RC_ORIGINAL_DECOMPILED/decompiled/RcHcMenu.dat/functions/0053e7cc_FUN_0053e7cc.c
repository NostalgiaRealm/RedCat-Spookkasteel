/*
 * FUN_0053e7cc at 0053e7cc
 * int * __register FUN_0053e7cc(int * param_1, char param_2, int * param_3)
 * Address ranges: 0053e7cc-0053e890
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0053e7cc(int *param_1,char param_2,int *param_3)

{
  int *piVar1;
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
  FUN_004f875c(param_1,'\0',param_3);
  param_1[0xf1] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  piVar1 = FUN_004b5b0c((int *)&DAT_004b28a0,'\x01',5,0,'\x01');
  param_1[0x86] = (int)piVar1;
  param_1[0x87] = 0;
  *(undefined1 *)(param_1 + 0x88) = 0;
  *(undefined1 *)((int)param_1 + 0x3b9) = 0;
  param_1[0xf0] = 0;
  piVar1 = FUN_0048ea9c((int *)&PTR_FUN_0048e30c,'\x01',extraout_ECX_00);
  param_1[0xef] = (int)piVar1;
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

