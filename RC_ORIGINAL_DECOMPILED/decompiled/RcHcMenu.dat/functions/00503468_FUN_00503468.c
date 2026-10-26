/*
 * FUN_00503468 at 00503468
 * undefined __register FUN_00503468(int * param_1, int param_2)
 * Address ranges: 00503468-00503492
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x50273c slot 47 for TDaviCustomListBox. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x50273c slot 47 for
   TDaviCustomListBox. Original bytes unchanged; names and types still inferred. */

void FUN_00503468(int *param_1,int param_2)

{
  int iVar1;
  int extraout_EDX;
  
  iVar1 = param_1[0x83] + param_2;
  if (SCARRY4(param_1[0x83],param_2)) {
    thunk_FUN_00402874((uint)param_1);
    iVar1 = extraout_EDX;
  }
  FUN_00502dcc(param_1,iVar1);
  return;
}

