/*
 * FUN_0052b050 at 0052b050
 * int __register FUN_0052b050(int param_1)
 * Address ranges: 0052b050-0052b096
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x529d00 slot 3 for TAppObjConcatList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x529d00 slot 3 for
   TAppObjConcatList. Original bytes unchanged; names and types still inferred. */

int FUN_0052b050(int param_1)

{
  undefined4 local_c;
  
  local_c = *(int *)(param_1 + 0x34);
  if (local_c == 0) {
    local_c = (**(code **)(**(int **)(param_1 + 0x88) + 0xc))();
    if (local_c == 0) {
      local_c = (**(code **)(**(int **)(param_1 + 0x84) + 0xc))();
    }
  }
  return local_c;
}

