/*
 * FUN_004e4848 at 004e4848
 * undefined __register FUN_004e4848(int param_1, int * param_2)
 * Address ranges: 004e4848-004e48c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4e310c slot 26 for TAppObjCachedMemList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4e310c slot 26 for
   TAppObjCachedMemList. Original bytes unchanged; names and types still inferred. */

void FUN_004e4848(int param_1,int *param_2)

{
  int *local_14;
  undefined1 local_10;
  int *local_c;
  int local_8;
  
  local_c = param_2;
  local_8 = param_1;
  if (*(int *)(param_1 + 0x88) == -0x80000000) {
    FUN_00494398(param_2);
    *(undefined1 *)(local_8 + 0x90) = 0;
  }
  else {
    FUN_004e251c(*(int **)(param_1 + 0x80),*(int *)(param_1 + 0x88),&local_14);
    FUN_00493768(local_c,local_14);
    FUN_004e251c(*(int **)(local_8 + 0x80),*(int *)(local_8 + 0x88),&local_14);
    *(undefined1 *)(local_8 + 0x90) = local_10;
  }
  return;
}

