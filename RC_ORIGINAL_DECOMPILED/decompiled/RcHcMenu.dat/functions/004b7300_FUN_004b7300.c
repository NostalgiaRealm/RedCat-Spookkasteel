/*
 * FUN_004b7300 at 004b7300
 * int * __register FUN_004b7300(int * param_1, char param_2, int param_3)
 * Address ranges: 004b7300-004b7353
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4b6574 slot 3 for DAOBase. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4b6574 slot 3 for DAOBase.
   Original bytes unchanged; names and types still inferred. */

int * FUN_004b7300(int *param_1,char param_2,int param_3)

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
  FUN_00403064(param_1,'\0',param_3);
  FUN_004b6e60();
  FUN_00406ab8(param_1 + 3,*(int **)(param_3 + 0xc));
  FUN_004b6e4c();
  param_1[1] = *(int *)(param_3 + 4);
  if (cVar1 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}

