/*
 * FUN_004594c8 at 004594c8
 * bool __register FUN_004594c8(int * param_1)
 * Address ranges: 004594c8-004594e5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4593bc slot 2 for TObjectStack. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4593bc slot 2 for
   TObjectStack. Original bytes unchanged; names and types still inferred. */

bool FUN_004594c8(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 4))();
  return iVar1 == 0;
}

