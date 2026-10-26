/*
 * FUN_0052b66c at 0052b66c
 * int * __register FUN_0052b66c(int * param_1, char param_2, int param_3)
 * Address ranges: 0052b66c-0052b707
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0052b66c(int *param_1,char param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int extraout_ECX;
  char extraout_DL;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar3 = extraout_DL;
  }
  FUN_0054b670(param_1,'\0',param_3);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_3 + 0x80);
  cVar1 = (char)param_1[3];
  if (cVar1 == '\0') {
    param_1[4] = 0;
  }
  else if (cVar1 == '\x01') {
    iVar2 = FUN_0054843c(*(int **)(param_3 + 0x84));
    param_1[4] = iVar2;
  }
  else if (cVar1 == '\x02') {
    iVar2 = FUN_0054843c(*(int **)(param_3 + 0x88));
    param_1[4] = iVar2;
  }
  if (cVar3 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

