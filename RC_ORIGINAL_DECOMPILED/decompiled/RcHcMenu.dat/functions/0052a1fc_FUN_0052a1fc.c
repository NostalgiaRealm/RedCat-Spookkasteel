/*
 * FUN_0052a1fc at 0052a1fc
 * undefined __register FUN_0052a1fc(int param_1)
 * Address ranges: 0052a1fc-0052a254
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x529d00 slot 16 for TAppObjConcatList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x529d00 slot 16 for
   TAppObjConcatList. Original bytes unchanged; names and types still inferred. */

void FUN_0052a1fc(int param_1)

{
  if ((*(char *)(param_1 + 0x80) == '\x01') && (*(int *)(param_1 + 0x84) != 0)) {
    FUN_00549344(*(int **)(param_1 + 0x84));
    return;
  }
  if ((*(char *)(param_1 + 0x80) == '\x02') && (*(int *)(param_1 + 0x88) != 0)) {
    FUN_00549344(*(int **)(param_1 + 0x88));
  }
  return;
}

