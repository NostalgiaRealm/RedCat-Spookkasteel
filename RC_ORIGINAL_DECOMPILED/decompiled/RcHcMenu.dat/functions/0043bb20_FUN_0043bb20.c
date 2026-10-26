/*
 * FUN_0043bb20 at 0043bb20
 * undefined __register FUN_0043bb20(int param_1, int param_2, int param_3)
 * Address ranges: 0043bb20-0043bb59
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x42f7d4 slot 6 for TDockTree. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x42f7d4 slot 6 for
   TDockTree. Original bytes unchanged; names and types still inferred. */

void FUN_0043bb20(int param_1,int param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_0043ab70(param_1,param_2,param_3);
  if (piVar1 != (int *)0x0) {
    if (piVar1 == *(int **)(param_1 + 0x38)) {
      piVar1[1] = 0;
    }
    else {
      FUN_0043bb5c(param_1,piVar1);
    }
    *(undefined1 *)(param_2 + 0x8c) = 0;
    (**(code **)(**(int **)(param_1 + 0x14) + 0x74))();
  }
  return;
}

