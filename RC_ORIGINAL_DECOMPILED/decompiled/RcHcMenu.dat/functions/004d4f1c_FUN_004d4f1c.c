/*
 * FUN_004d4f1c at 004d4f1c
 * int * __register FUN_004d4f1c(int * param_1, char param_2, int param_3, undefined1 param_4)
 * Address ranges: 004d4f1c-004d4fbb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_004d4f1c(int *param_1,char param_2,int param_3,undefined1 param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
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
  *(undefined1 *)((int)param_1 + 10) = *(undefined1 *)(*(int *)(param_3 + 4) + 0x18);
  param_1[1] = param_3;
  *(undefined1 *)((int)param_1 + 9) = param_4;
  piVar3 = FUN_0045b810((int *)&LAB_0045b7d8,'\x01',0);
  param_1[7] = (int)piVar3;
  piVar3 = FUN_0045b810((int *)&LAB_0045b7d8,'\x01',0);
  param_1[8] = (int)piVar3;
  uVar2 = param_1[1];
  piVar3 = (int *)(uVar2 + 0x24);
  iVar1 = *piVar3;
  *piVar3 = *piVar3 + 1;
  if (SCARRY4(iVar1,1)) {
    thunk_FUN_00402874(uVar2);
  }
  if (cVar4 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

