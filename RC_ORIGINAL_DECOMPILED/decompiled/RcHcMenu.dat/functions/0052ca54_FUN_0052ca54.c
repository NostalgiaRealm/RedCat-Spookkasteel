/*
 * FUN_0052ca54 at 0052ca54
 * undefined __register FUN_0052ca54(int param_1, int * param_2)
 * Address ranges: 0052ca54-0052caa1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x52b7f4 slot 26 for TAppObjMemList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x52b7f4 slot 26 for
   TAppObjMemList. Original bytes unchanged; names and types still inferred. */

void FUN_0052ca54(int param_1,int *param_2)

{
  int *local_14 [2];
  int *local_c;
  int local_8;
  
  local_c = param_2;
  local_8 = param_1;
  if (*(int *)(param_1 + 0x88) == -0x80000000) {
    FUN_00494398(param_2);
  }
  else {
    FUN_004e251c(*(int **)(param_1 + 0x80),*(int *)(param_1 + 0x88),local_14);
    FUN_00493768(local_c,local_14[0]);
  }
  return;
}

