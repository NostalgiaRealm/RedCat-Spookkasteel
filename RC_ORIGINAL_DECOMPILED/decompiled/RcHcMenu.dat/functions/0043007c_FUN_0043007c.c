/*
 * FUN_0043007c at 0043007c
 * undefined __register FUN_0043007c(int param_1)
 * Address ranges: 0043007c-00430099
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x42db7c slot 7 for TDragControlObject. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x42db7c slot 7 for
   TDragControlObject. Original bytes unchanged; names and types still inferred. */

void FUN_0043007c(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x38) + 0x48))();
  if (iVar1 != 0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x38) + 0x48))();
    FUN_0043a2b8(iVar1);
  }
  return;
}

