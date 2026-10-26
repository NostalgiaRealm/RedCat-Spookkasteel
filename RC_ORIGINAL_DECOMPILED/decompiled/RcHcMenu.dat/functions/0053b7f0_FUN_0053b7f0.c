/*
 * FUN_0053b7f0 at 0053b7f0
 * byte __register FUN_0053b7f0(int param_1)
 * Address ranges: 0053b7f0-0053b824
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x53b55c slot 25 for TAppObjSimpleQueryList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x53b55c slot 25 for
   TAppObjSimpleQueryList. Original bytes unchanged; names and types still inferred. */

byte FUN_0053b7f0(int param_1)

{
  undefined1 local_9;
  
  if (*(int *)(param_1 + 0x88) == 0) {
    local_9 = 0;
  }
  else {
    local_9 = (**(code **)(**(int **)(param_1 + 0x88) + 0x3c))();
    local_9 = local_9 ^ 1;
  }
  return local_9;
}

