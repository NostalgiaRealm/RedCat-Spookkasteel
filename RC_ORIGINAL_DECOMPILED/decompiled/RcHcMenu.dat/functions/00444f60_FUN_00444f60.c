/*
 * FUN_00444f60 at 00444f60
 * int __register FUN_00444f60(int param_1)
 * Address ranges: 00444f60-00444f6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4401c8 slot 13 for TMainMenu. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4401c8 slot 13 for
   TMainMenu. Original bytes unchanged; names and types still inferred. */

int FUN_00444f60(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x48) != 0) {
    return *(int *)(param_1 + 0x48);
  }
  iVar1 = FUN_00444268(param_1);
  return iVar1;
}

