/*
 * FUN_004ca63c at 004ca63c
 * int * __register FUN_004ca63c(int * param_1, char param_2, undefined4 param_3)
 * Address ranges: 004ca63c-004ca6cc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_004ca63c(int *param_1,char param_2,undefined4 param_3)

{
  byte bVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
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
  FUN_00403064(param_1,'\0',param_3);
  piVar2 = FUN_00420f24((int *)&PTR_FUN_0041acd8,'\x01',extraout_ECX_00);
  param_1[1] = (int)piVar2;
  piVar2[3] = (int)param_1;
  piVar2[2] = (int)FUN_004ca774;
  param_1[7] = 0x8080;
  *(undefined1 *)(param_1 + 8) = 1;
  bVar1 = 0;
  do {
    param_1[bVar1 + 3] = -1;
    bVar1 = bVar1 + 1;
  } while (bVar1 != 4);
  if (DAT_00571d08 == (int *)0x0) {
    DAT_00571d08 = FUN_004ca53c((int *)&DAT_004ca3c0,'\x01',extraout_ECX_01);
  }
  if (cVar3 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

