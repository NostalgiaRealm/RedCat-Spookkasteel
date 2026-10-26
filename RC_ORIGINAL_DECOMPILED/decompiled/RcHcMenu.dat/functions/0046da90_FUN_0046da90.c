/*
 * FUN_0046da90 at 0046da90
 * int * __register FUN_0046da90(int * param_1, char param_2, int * param_3)
 * Address ranges: 0046da90-0046dadd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0046da90(int *param_1,char param_2,int *param_3)

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
  FUN_0046d298(param_1,'\0',param_3);
  iVar1 = param_1[0x34];
  *(int **)(iVar1 + 0x14) = param_1;
  *(undefined1 **)(iVar1 + 0x10) = &LAB_0046dae0;
  FUN_00469d10((int)param_1,0x1a);
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}

