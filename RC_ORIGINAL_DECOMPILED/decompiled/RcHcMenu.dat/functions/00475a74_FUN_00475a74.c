/*
 * FUN_00475a74 at 00475a74
 * int * __register FUN_00475a74(int * param_1, char param_2, int param_3, int * param_4, int param_5, undefined4 * param_6, undefined1 param_7, undefined1 param_8)
 * Address ranges: 00475a74-00475aee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00475a74(int *param_1,char param_2,int param_3,int *param_4,int param_5,
                  undefined4 *param_6,undefined1 param_7,undefined1 param_8)

{
  int extraout_ECX;
  int iVar1;
  char extraout_DL;
  char cVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  byte bVar5;
  undefined4 in_stack_ffffffbc;
  undefined4 in_stack_ffffffc0;
  int local_28 [9];
  
  bVar5 = 0;
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffbc,in_stack_ffffffc0);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  piVar3 = local_28;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *param_4;
    param_4 = param_4 + (uint)bVar5 * -2 + 1;
    piVar3 = piVar3 + (uint)bVar5 * -2 + 1;
  }
  piVar3 = local_28;
  piVar4 = param_1 + 2;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + (uint)bVar5 * -2 + 1;
    piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
  }
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 0xb) = param_8;
  FUN_00403e04(param_1 + 0x11,param_6);
  *(undefined1 *)((int)param_1 + 0x2d) = param_7;
  param_1[0x12] = param_5;
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffbc;
  }
  return param_1;
}

