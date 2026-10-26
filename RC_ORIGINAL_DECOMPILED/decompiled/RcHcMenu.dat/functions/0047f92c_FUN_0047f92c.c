/*
 * FUN_0047f92c at 0047f92c
 * int * __register FUN_0047f92c(int * param_1, char param_2, int param_3, char param_4, int param_5, int param_6, undefined4 param_7, undefined4 param_8, int param_9, int param_10)
 * Address ranges: 0047f92c-0047f9c8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0047f92c(int *param_1,char param_2,int param_3,char param_4,int param_5,int param_6,
                  undefined4 param_7,undefined4 param_8,int param_9,int param_10)

{
  uint uVar1;
  int extraout_ECX;
  char extraout_DL;
  char cVar2;
  int *in_FS_OFFSET;
  int iStackY_4c;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe4,in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  param_1[2] = param_3;
  param_1[1] = param_10;
  param_1[3] = param_9;
  param_1[10] = param_5;
  param_1[0xb] = param_6;
  thunk_FUN_004798e2(param_10);
  if (param_1[7] == 0 || param_4 != '\0') {
    iStackY_4c = param_1[1];
    uVar1 = thunk_FUN_00479a3b(iStackY_4c);
    FUN_0047fe48(uVar1);
    *(undefined1 *)(param_1 + 8) = 1;
  }
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = iStackY_4c;
  }
  return param_1;
}

