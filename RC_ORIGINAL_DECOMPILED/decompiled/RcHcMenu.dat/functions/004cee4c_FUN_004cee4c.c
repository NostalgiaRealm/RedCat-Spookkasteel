/*
 * FUN_004cee4c at 004cee4c
 * int * __register FUN_004cee4c(int * param_1, char param_2, int param_3)
 * Address ranges: 004cee4c-004ceee0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_004cee4c(int *param_1,char param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int extraout_ECX;
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
  FUN_0045b418(param_1,'\0',param_3);
  param_1[1] = param_3;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  uVar3 = param_1[1];
  piVar1 = (int *)(uVar3 + 0x1c);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  if (SCARRY4(iVar2,1)) {
    thunk_FUN_00402874(uVar3);
  }
  if (cVar4 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

