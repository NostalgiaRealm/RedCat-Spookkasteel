/*
 * FUN_00488150 at 00488150
 * undefined __register FUN_00488150(int param_1)
 * Address ranges: 00488150-00488168
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x47f014 slot 4 for TQueryDataLink. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x47f014 slot 4 for
   TQueryDataLink. Original bytes unchanged; names and types still inferred. */

void FUN_00488150(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_004714b4(*(int *)(param_1 + 0x1c));
  if ((char)uVar1 != '\0') {
    FUN_00473b1c(*(int **)(param_1 + 0x1c));
  }
  return;
}

