/*
 * FUN_0048812c at 0048812c
 * undefined __register FUN_0048812c(int param_1, int param_2)
 * Address ranges: 0048812c-0048814c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x47f014 slot 17 for TQueryDataLink. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x47f014 slot 17 for
   TQueryDataLink. Original bytes unchanged; names and types still inferred. */

void FUN_0048812c(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = FUN_004714b4(*(int *)(param_1 + 0x1c));
    if ((char)uVar1 != '\0') {
      FUN_00488874(*(int **)(param_1 + 0x1c));
    }
  }
  return;
}

