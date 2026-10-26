/*
 * FUN_00487538 at 00487538
 * int * __register FUN_00487538(int * param_1, char param_2, int * param_3)
 * Address ranges: 00487538-004875af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00487538(int *param_1,char param_2,int *param_3)

{
  undefined4 uVar1;
  int *extraout_ECX;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffdc;
  undefined4 in_stack_ffffffe0;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffdc,in_stack_ffffffe0);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  FUN_00483d78(param_1,'\0',param_3);
  uVar1 = FUN_0040320c(param_3,(int)&PTR_FUN_0047d7a0);
  if ((char)uVar1 != '\0') {
    FUN_004877ac(param_1,(uint *)param_3[0x22]);
    FUN_0048794c(param_1,(undefined4 *)param_3[0x21]);
  }
  *(undefined1 *)(param_1 + 0x8a) = 0;
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffdc;
  }
  return param_1;
}

