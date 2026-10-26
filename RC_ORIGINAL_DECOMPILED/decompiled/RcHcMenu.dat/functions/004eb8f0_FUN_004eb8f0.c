/*
 * FUN_004eb8f0 at 004eb8f0
 * undefined1 __register FUN_004eb8f0(int param_1)
 * Address ranges: 004eb8f0-004eb94f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4ea51c slot 17 for TAppBDEQuery. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4ea51c slot 17 for
   TAppBDEQuery. Original bytes unchanged; names and types still inferred. */

undefined1 FUN_004eb8f0(int param_1)

{
  uint uVar1;
  undefined1 local_9;
  
  local_9 = 0;
  uVar1 = FUN_004714b4(*(int *)(param_1 + 0x30));
  if ((char)uVar1 != '\0') {
    if (*(char *)(param_1 + 0x18) == '\0') {
      FUN_00473334(*(int **)(param_1 + 0x30));
      local_9 = FUN_004ea5ac(*(int *)(param_1 + 0x30));
    }
    else {
      FUN_004733c8(*(int **)(param_1 + 0x30));
      local_9 = FUN_004ea5ac(*(int *)(param_1 + 0x30));
    }
  }
  return local_9;
}

