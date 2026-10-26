/*
 * FUN_0048ea9c at 0048ea9c
 * int * __register FUN_0048ea9c(int * param_1, char param_2, undefined4 param_3)
 * Address ranges: 0048ea9c-0048eaea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0048ea9c(int *param_1,char param_2,undefined4 param_3)

{
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe4,in_stack_ffffffe8);
    cVar1 = extraout_DL;
  }
  uVar2 = 0x1c;
  FUN_0045d240(param_1,'\0',4,0x1c);
  *(undefined1 *)(param_1 + 6) = 1;
  if (cVar1 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = uVar2;
  }
  return param_1;
}

