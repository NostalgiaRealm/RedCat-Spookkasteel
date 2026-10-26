/*
 * FUN_00412dcc at 00412dcc
 * undefined __register FUN_00412dcc(int param_1, int param_2)
 * Address ranges: 00412dcc-00412dfa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x410928 slot 4 for TCollectionItem. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x410928 slot 4 for
   TCollectionItem. Original bytes unchanged; names and types still inferred. */

void FUN_00412dcc(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00412ca4(param_1);
  if ((-1 < iVar1) && (param_2 != iVar1)) {
    FUN_00412478(*(int **)(*(int *)(param_1 + 4) + 8),iVar1,param_2);
    FUN_00412c80(param_1,'\x01');
  }
  return;
}

