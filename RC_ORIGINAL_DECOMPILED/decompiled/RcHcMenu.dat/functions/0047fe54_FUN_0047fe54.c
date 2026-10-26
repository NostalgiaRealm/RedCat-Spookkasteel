/*
 * FUN_0047fe54 at 0047fe54
 * int * __register FUN_0047fe54(int * param_1, char param_2, int param_3, char * param_4, int param_5, undefined2 param_6)
 * Address ranges: 0047fe54-0047fea8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0047fe54(int *param_1,char param_2,int param_3,char *param_4,int param_5,
                  undefined2 param_6)

{
  int extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe4,in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  FUN_004121d8(*(int **)(param_3 + 0xc),(int)param_1);
  *(undefined2 *)(param_1 + 1) = param_6;
  param_1[2] = param_5;
  FUN_00403f68(param_1 + 3,param_4);
  if (cVar1 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}

