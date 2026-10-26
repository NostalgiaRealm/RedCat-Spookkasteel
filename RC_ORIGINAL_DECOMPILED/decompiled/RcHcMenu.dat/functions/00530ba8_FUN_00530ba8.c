/*
 * FUN_00530ba8 at 00530ba8
 * int * __register FUN_00530ba8(int * param_1, char param_2, int * param_3)
 * Address ranges: 00530ba8-00530c51
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00530ba8(int *param_1,char param_2,int *param_3)

{
  int *piVar1;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar2;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  FUN_00455694(param_1,'\0',param_3);
  FUN_00431d2c(param_1,CONCAT31((int3)((uint)extraout_EDX >> 8),5),extraout_ECX_00);
  FUN_00455a84(param_1,0);
  FUN_00455aa0(param_1,0);
  FUN_004328a0((int)param_1,-0x7ffffffb);
  piVar1 = FUN_0045b810((int *)&LAB_0045b7d8,'\x01',0);
  param_1[0x82] = (int)piVar1;
  piVar1 = FUN_0045b810((int *)&LAB_0045b7d8,'\x01',0);
  param_1[0x83] = (int)piVar1;
  *(undefined1 *)(param_1 + 0x85) = 1;
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

