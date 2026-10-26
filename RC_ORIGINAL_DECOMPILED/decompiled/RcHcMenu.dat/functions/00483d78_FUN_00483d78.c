/*
 * FUN_00483d78 at 00483d78
 * int * __register FUN_00483d78(int * param_1, char param_2, int * param_3)
 * Address ranges: 00483d78-00483dcd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00483d78(int *param_1,char param_2,int *param_3)

{
  int iVar1;
  int *extraout_ECX;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  FUN_00470c7c(param_1,'\0',param_3);
  iVar1 = FUN_0047f0a8();
  FUN_004844d4((int)param_1,*(undefined4 *)(iVar1 + 0x30));
  *(undefined1 *)((int)param_1 + 0x1b5) = 1;
  param_1[0x20] = (int)&PTR_FUN_0047e3e4;
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}

