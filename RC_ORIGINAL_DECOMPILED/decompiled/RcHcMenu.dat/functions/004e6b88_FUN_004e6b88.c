/*
 * FUN_004e6b88 at 004e6b88
 * bool __register FUN_004e6b88(int param_1)
 * Address ranges: 004e6b88-004e6ba5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4e68a0 slot 10 for TOleGraphic. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4e68a0 slot 10 for
   TOleGraphic. Original bytes unchanged; names and types still inferred. */

bool FUN_004e6b88(int param_1)

{
  int *piVar1;
  bool bVar2;
  
  bVar2 = false;
  if (*(int *)(param_1 + 0x20) != 0) {
    piVar1 = *(int **)(param_1 + 0x20);
    (**(code **)(*piVar1 + 0x40))();
    bVar2 = ((uint)piVar1 & 2) != 0;
  }
  return bVar2;
}

