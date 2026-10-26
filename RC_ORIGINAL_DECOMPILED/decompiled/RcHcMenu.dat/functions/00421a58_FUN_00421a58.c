/*
 * FUN_00421a58 at 00421a58
 * undefined __register FUN_00421a58(int param_1, int * param_2, int param_3)
 * Address ranges: 00421a58-00421a7e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x41acd8 slot 12 for TBitmap. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x41acd8 slot 12 for TBitmap.
   Original bytes unchanged; names and types still inferred. */

void FUN_00421a58(int param_1,int *param_2,int param_3)

{
  int iStack_10;
  
  iStack_10 = param_3;
  (**(code **)(*param_2 + 4))(param_2,&iStack_10,4);
  FUN_00421f94(param_1,param_2,iStack_10);
  return;
}

