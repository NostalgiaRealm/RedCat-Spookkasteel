/*
 * FUN_0052ad94 at 0052ad94
 * undefined __register FUN_0052ad94(int * param_1)
 * Address ranges: 0052ad94-0052ae0d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x529d00 slot 21 for TAppObjConcatList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x529d00 slot 21 for
   TAppObjConcatList. Original bytes unchanged; names and types still inferred. */

void FUN_0052ad94(int *param_1)

{
  FUN_0052b638(param_1,'\0');
  if (param_1[0x22] != 0) {
    if (*(char *)(param_1[0x22] + 0x18) == '\0') {
      FUN_00549a28((int *)param_1[0x22]);
    }
    FUN_0052b638(param_1,'\x02');
  }
  if (param_1[0x21] != 0) {
    if (*(char *)(param_1[0x21] + 0x18) == '\0') {
      FUN_00549a28((int *)param_1[0x21]);
    }
    FUN_0052b638(param_1,'\x01');
  }
  return;
}

