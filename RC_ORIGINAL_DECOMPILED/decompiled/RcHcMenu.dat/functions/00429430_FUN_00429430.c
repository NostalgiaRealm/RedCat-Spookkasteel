/*
 * FUN_00429430 at 00429430
 * int * __register FUN_00429430(int * param_1, char param_2, int * param_3)
 * Address ranges: 00429430-004294cd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00429430(int *param_1,char param_2,int *param_3)

{
  int *extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  FUN_004348a0(param_1,'\0',param_3);
  if (*PTR_DAT_005722c4 == '\0') {
    param_1[0x10] = 0x2b8;
  }
  else {
    param_1[0x10] = 0x2a8;
  }
  FUN_00431f78(param_1,0x79);
  FUN_00431f98(param_1,0x19);
  FUN_00438bb4((int)param_1,'\x01');
  FUN_004328c4((int)param_1,'\0');
  *(undefined1 *)(param_1 + 0x7d) = 1;
  *(undefined1 *)((int)param_1 + 0x1f7) = 1;
  *(undefined1 *)(param_1 + 0x7e) = 1;
  *(undefined1 *)((int)param_1 + 0x1f9) = 1;
  FUN_00429b40(param_1);
  if (cVar1 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}

