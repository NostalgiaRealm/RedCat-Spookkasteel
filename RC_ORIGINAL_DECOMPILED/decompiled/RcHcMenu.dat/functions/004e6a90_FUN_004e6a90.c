/*
 * FUN_004e6a90 at 004e6a90
 * undefined4 __register FUN_004e6a90(int param_1)
 * Address ranges: 004e6a90-004e6ab8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4e68a0 slot 7 for TOleGraphic. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4e68a0 slot 7 for
   TOleGraphic. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_004e6a90(int param_1)

{
  int *piVar1;
  undefined2 uStack_10;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    piVar1 = *(int **)(param_1 + 0x20);
    param_1 = (**(code **)(*piVar1 + 0x14))();
    if ((param_1 == 0) && (uStack_10 = (short)piVar1, 0 < uStack_10)) {
      return 0;
    }
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}

