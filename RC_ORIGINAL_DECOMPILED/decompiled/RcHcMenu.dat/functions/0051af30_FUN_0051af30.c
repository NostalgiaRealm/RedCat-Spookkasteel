/*
 * FUN_0051af30 at 0051af30
 * undefined __register FUN_0051af30(int param_1)
 * Address ranges: 0051af30-0051af87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x519c54 slot published:btnMoveUpClick for TfrmDaviGridSettings. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x519c54 slot
   published:btnMoveUpClick for TfrmDaviGridSettings. Original bytes unchanged; names and types
   still inferred. */

void FUN_0051af30(int param_1)

{
  uint uVar1;
  
  FUN_0042c73c(*(int **)(param_1 + 0x2e0));
  uVar1 = FUN_0042c73c(*(int **)(param_1 + 0x2e0));
  if (SBORROW4(uVar1,1)) {
    thunk_FUN_00402874(uVar1);
  }
  (**(code **)(**(int **)(*(int *)(param_1 + 0x2e0) + 0x1f0) + 0x48))();
  FUN_0051a114(param_1);
  return;
}

