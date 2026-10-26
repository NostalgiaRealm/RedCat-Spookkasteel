/*
 * FUN_0052ac94 at 0052ac94
 * char __register FUN_0052ac94(int * param_1)
 * Address ranges: 0052ac94-0052ad46
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x529d00 slot 7 for TAppObjConcatList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x529d00 slot 7 for
   TAppObjConcatList. Original bytes unchanged; names and types still inferred. */

char FUN_0052ac94(int *param_1)

{
  char local_9;
  
  if ((char)param_1[0x20] == '\x01') {
    if (param_1[0x21] == 0) {
      FUN_00403d94(" Internal inconsistency");
    }
    local_9 = FUN_00547e4c((int *)param_1[0x21]);
  }
  else {
    if (param_1[0x22] == 0) {
      FUN_00403d94(" Internal inconsistency");
    }
    local_9 = FUN_00547e4c((int *)param_1[0x22]);
    if ((local_9 == '\0') && (param_1[0x21] != 0)) {
      local_9 = FUN_00548044((int *)param_1[0x21]);
      if (local_9 != '\0') {
        FUN_0052b638(param_1,'\x01');
      }
    }
  }
  return local_9;
}

