/*
 * FUN_004c6ee4 at 004c6ee4
 * int * __register FUN_004c6ee4(int * param_1, char param_2, undefined4 param_3)
 * Address ranges: 004c6ee4-004c6f91
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_004c6ee4(int *param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  char extraout_DL;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  byte local_a;
  
  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe4,in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar3 = extraout_DL;
  }
  FUN_00403064(param_1,'\0',param_3);
  piVar2 = FUN_00420f24((int *)&PTR_FUN_0041acd8,'\x01',extraout_ECX_00);
  param_1[1] = (int)piVar2;
  iVar1 = param_1[1];
  *(int **)(iVar1 + 0xc) = param_1;
  *(code **)(iVar1 + 8) = FUN_004c7068;
  param_1[7] = 0x8080;
  *(undefined1 *)(param_1 + 8) = 1;
  local_a = 0;
  do {
    param_1[local_a + 3] = -1;
    local_a = local_a + 1;
  } while (local_a != 4);
  if (DAT_00571ccc == (int *)0x0) {
    DAT_00571ccc = FUN_004c6d74((int *)&DAT_004c6b88,'\x01',extraout_ECX_01);
  }
  if (cVar3 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}

