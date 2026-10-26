/*
 * FUN_004416e8 at 004416e8
 * undefined __register FUN_004416e8(int param_1, int * param_2)
 * Address ranges: 004416e8-00441711
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x43fcd8 slot 1 for TMenuItem. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x43fcd8 slot 1 for
   TMenuItem. Original bytes unchanged; names and types still inferred. */

void FUN_004416e8(int param_1,int *param_2)

{
  FUN_00419288(param_1,param_2);
  (**(code **)(*param_2 + 4))(param_2,"ShortCutText",0,0,0,FUN_00441500,param_1);
  return;
}

