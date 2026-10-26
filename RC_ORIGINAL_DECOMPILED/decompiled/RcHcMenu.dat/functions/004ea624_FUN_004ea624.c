/*
 * FUN_004ea624 at 004ea624
 * int * __register FUN_004ea624(int * param_1, char param_2, int param_3, undefined1 param_4)
 * Address ranges: 004ea624-004ea696
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_004ea624(int *param_1,char param_2,int param_3,undefined1 param_4)

{
  int *piVar1;
  int extraout_ECX;
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
  FUN_004d4f1c(param_1,'\0',param_3,param_4);
  param_1[0xb] = 0;
  piVar1 = FUN_0048816c((int *)&PTR_FUN_0047eb28,'\x01',(int *)0x0);
  param_1[0xc] = (int)piVar1;
  param_1[10] = -1;
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

