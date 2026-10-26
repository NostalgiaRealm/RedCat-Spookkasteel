/*
 * FUN_0052a170 at 0052a170
 * undefined __register FUN_0052a170(int * param_1)
 * Address ranges: 0052a170-0052a1d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x529d00 slot 22 for TAppObjConcatList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x529d00 slot 22 for
   TAppObjConcatList. Original bytes unchanged; names and types still inferred. */

void FUN_0052a170(int *param_1)

{
  FUN_0052b638(param_1,'\0');
  if ((param_1[0x21] != 0) && (*(char *)(param_1[0x21] + 0x18) != '\0')) {
    FUN_00549a9c((int *)param_1[0x21]);
  }
  if ((param_1[0x22] != 0) && (*(char *)(param_1[0x22] + 0x18) != '\0')) {
    FUN_00549a9c((int *)param_1[0x22]);
  }
  return;
}

