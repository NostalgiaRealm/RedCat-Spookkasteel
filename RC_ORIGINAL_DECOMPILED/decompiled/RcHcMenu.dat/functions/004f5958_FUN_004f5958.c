/*
 * FUN_004f5958 at 004f5958
 * int * __register FUN_004f5958(int * param_1, char param_2, int * param_3)
 * Address ranges: 004f5958-004f59b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4f2a94 slot 11 for TTabSheet. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4f2a94 slot 11 for
   TTabSheet. Original bytes unchanged; names and types still inferred. */

int * FUN_004f5958(int *param_1,char param_2,int *param_3)

{
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  char extraout_DL;
  char cVar1;
  undefined4 extraout_EDX;
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
  FUN_00431d2c(param_1,CONCAT31((int3)((uint)extraout_EDX >> 8),5),extraout_ECX_00);
  param_1[0x10] = param_1[0x10] | 0x401;
  FUN_0043262c(param_1,0,extraout_ECX_01);
  *(undefined1 *)(param_1 + 0x7e) = 1;
  *(undefined1 *)((int)param_1 + 0x1fa) = 0;
  if (cVar1 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}

