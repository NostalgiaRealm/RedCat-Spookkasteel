/*
 * FUN_004efb30 at 004efb30
 * int * __register FUN_004efb30(int * param_1, char param_2, int * param_3)
 * Address ranges: 004efb30-004efbdd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_004efb30(int *param_1,char param_2,int *param_3)

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
  FUN_004ef330(param_1,'\0',param_3);
  FUN_004328a0((int)param_1,-0x7ffffffb);
  *(undefined1 *)(param_1 + 0x81) = 1;
  FUN_004328c4((int)param_1,'\0');
  iVar1 = FUN_004ef790((int *)&PTR_FUN_004ef4dc,'\x01',param_1);
  param_1[0x80] = iVar1;
  *(undefined1 *)(param_1 + 0x88) = 1;
  *(undefined1 *)((int)param_1 + 0x206) = 0;
  FUN_00431f78(param_1,0x79);
  FUN_00431f98(param_1,0x15);
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

