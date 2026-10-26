/*
 * FUN_0052b194 at 0052b194
 * undefined __register FUN_0052b194(int param_1)
 * Address ranges: 0052b194-0052b1e5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x529d00 slot 27 for TAppObjConcatList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x529d00 slot 27 for
   TAppObjConcatList. Original bytes unchanged; names and types still inferred. */

void FUN_0052b194(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x84) != 0) {
    iVar1 = FUN_00549b48(param_1);
    FUN_00549c18(*(int **)(param_1 + 0x84),iVar1);
  }
  if (*(int *)(param_1 + 0x88) != 0) {
    iVar1 = FUN_00549b48(param_1);
    FUN_00549c18(*(int **)(param_1 + 0x88),iVar1);
  }
  return;
}

