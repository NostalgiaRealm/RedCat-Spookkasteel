/*
 * FUN_0053b8b8 at 0053b8b8
 * int __register FUN_0053b8b8(uint param_1)
 * Address ranges: 0053b8b8-0053b908
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x53b55c slot 2 for TAppObjSimpleQueryList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x53b55c slot 2 for
   TAppObjSimpleQueryList. Original bytes unchanged; names and types still inferred. */

int FUN_0053b8b8(uint param_1)

{
  bool bVar1;
  int local_c;
  
  if (*(int *)(param_1 + 0x88) == 0) {
    local_c = 0;
  }
  else {
    local_c = (**(code **)(**(int **)(param_1 + 0x88) + 0x40))();
    if (((*(char *)(param_1 + 0x40) == '\0') && (*(char *)(param_1 + 0x10) == '\0')) &&
       (bVar1 = SCARRY4(local_c,1), local_c = local_c + 1, bVar1)) {
      thunk_FUN_00402874(param_1);
    }
  }
  return local_c;
}

