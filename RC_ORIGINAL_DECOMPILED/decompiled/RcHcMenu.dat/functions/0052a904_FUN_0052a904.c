/*
 * FUN_0052a904 at 0052a904
 * undefined __register FUN_0052a904(int param_1)
 * Address ranges: 0052a904-0052a95c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x529d00 slot 15 for TAppObjConcatList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x529d00 slot 15 for
   TAppObjConcatList. Original bytes unchanged; names and types still inferred. */

void FUN_0052a904(int param_1)

{
  if ((*(char *)(param_1 + 0x80) == '\x01') && (*(int *)(param_1 + 0x84) != 0)) {
    FUN_00548f9c(*(int **)(param_1 + 0x84));
    return;
  }
  if ((*(char *)(param_1 + 0x80) == '\x02') && (*(int *)(param_1 + 0x88) != 0)) {
    FUN_00548f9c(*(int **)(param_1 + 0x88));
  }
  return;
}

