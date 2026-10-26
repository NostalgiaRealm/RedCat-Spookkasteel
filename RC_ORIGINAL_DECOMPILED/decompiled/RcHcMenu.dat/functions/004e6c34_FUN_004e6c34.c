/*
 * FUN_004e6c34 at 004e6c34
 * undefined __register FUN_004e6c34(int param_1)
 * Address ranges: 004e6c34-004e6c51
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4e68a0 slot 14 for TOleGraphic. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4e68a0 slot 14 for
   TOleGraphic. Original bytes unchanged; names and types still inferred. */

void FUN_004e6c34(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    uVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x24))();
    FUN_0045eb1c(uVar1);
  }
  return;
}

