/*
 * FUN_004e2430 at 004e2430
 * int * __register FUN_004e2430(int * param_1, char param_2, int param_3)
 * Address ranges: 004e2430-004e249e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_004e2430(int *param_1,char param_2,int param_3)

{
  int extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  if (param_3 < 1) {
    FUN_00403d94("Growsize must be greater zero");
  }
  uVar2 = 8;
  FUN_0045d240(param_1,'\0',param_3,8);
  *(undefined1 *)(param_1 + 6) = 0xf;
  if (cVar1 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = uVar2;
  }
  return param_1;
}

