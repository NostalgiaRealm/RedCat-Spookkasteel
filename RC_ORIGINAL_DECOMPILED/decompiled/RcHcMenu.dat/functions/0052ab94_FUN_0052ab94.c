/*
 * FUN_0052ab94 at 0052ab94
 * char __register FUN_0052ab94(int * param_1)
 * Address ranges: 0052ab94-0052ac46
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x529d00 slot 6 for TAppObjConcatList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x529d00 slot 6 for
   TAppObjConcatList. Original bytes unchanged; names and types still inferred. */

char FUN_0052ab94(int *param_1)

{
  char local_9;
  
  if ((char)param_1[0x20] == '\x02') {
    if (param_1[0x22] == 0) {
      FUN_00403d94(" Internal inconsistency");
    }
    local_9 = FUN_00547c54((int *)param_1[0x22]);
  }
  else {
    if (param_1[0x21] == 0) {
      FUN_00403d94(" Internal inconsistency");
    }
    local_9 = FUN_00547c54((int *)param_1[0x21]);
    if ((local_9 == '\0') && (param_1[0x22] != 0)) {
      local_9 = FUN_00547a58((int *)param_1[0x22]);
      if (local_9 != '\0') {
        FUN_0052b638(param_1,'\x02');
      }
    }
  }
  return local_9;
}

