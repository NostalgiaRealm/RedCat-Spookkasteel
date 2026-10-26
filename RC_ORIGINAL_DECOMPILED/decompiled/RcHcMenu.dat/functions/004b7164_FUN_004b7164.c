/*
 * FUN_004b7164 at 004b7164
 * int * __register FUN_004b7164(int * param_1, char param_2, short * param_3, int param_4)
 * Address ranges: 004b7164-004b71db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_004b7164(int *param_1,char param_2,short *param_3,int param_4)

{
  int *piVar1;
  short *extraout_ECX;
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
  FUN_00403064(param_1,'\0',param_3);
  if (*param_3 == 9) {
    FUN_004b6e60();
    FUN_00406ab8(param_1 + 3,*(int **)(param_3 + 4));
    FUN_004b6e4c();
    param_1[1] = param_4;
  }
  else {
    piVar1 = FUN_0040ceec((int *)&DAT_004b6518,'\x01',
                          (undefined4 *)"Variant is not of type VT_Dispatch");
    FUN_0040382c(piVar1);
  }
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

