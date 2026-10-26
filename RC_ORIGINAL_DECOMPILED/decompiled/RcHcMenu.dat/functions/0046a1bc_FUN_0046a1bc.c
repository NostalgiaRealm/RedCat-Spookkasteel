/*
 * FUN_0046a1bc at 0046a1bc
 * int * __register FUN_0046a1bc(int * param_1, char param_2, int * param_3)
 * Address ranges: 0046a1bc-0046a21d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0046a1bc(int *param_1,char param_2,int *param_3)

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
  FUN_00468a40(param_1,'\0',param_3);
  FUN_00469d10((int)param_1,1);
  iVar1 = (**(code **)(*param_1 + 0x80))();
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0xb4))(param_1,0x14);
  }
  *(undefined1 *)((int)param_1 + 0xd1) = 1;
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}

