/*
 * FUN_00501eb8 at 00501eb8
 * undefined __register FUN_00501eb8(int * param_1)
 * Address ranges: 00501eb8-00501ee8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x500d84 slot 54 for TDaviComboBase. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x500d84 slot 54 for
   TDaviComboBase. Original bytes unchanged; names and types still inferred. */

void FUN_00501eb8(int *param_1)

{
  if ((*(byte *)(param_1 + 0x97) & 2) != 0) {
    (**(code **)(*param_1 + 0x130))(param_1,0);
    return;
  }
  (**(code **)(*param_1 + 0x134))();
  return;
}

