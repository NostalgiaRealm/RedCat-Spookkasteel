/*
 * FUN_004e6b6c at 004e6b6c
 * int * __register FUN_004e6b6c(int param_1)
 * Address ranges: 004e6b6c-004e6b85
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4e68a0 slot 9 for TOleGraphic. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4e68a0 slot 9 for
   TOleGraphic. Original bytes unchanged; names and types still inferred. */

int * FUN_004e6b6c(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)0x0;
  if (*(int *)(param_1 + 0x20) != 0) {
    piVar1 = *(int **)(param_1 + 0x20);
    (**(code **)(*piVar1 + 0x10))();
  }
  return piVar1;
}

