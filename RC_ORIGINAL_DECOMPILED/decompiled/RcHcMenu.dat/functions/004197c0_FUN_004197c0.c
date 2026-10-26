/*
 * FUN_004197c0 at 004197c0
 * undefined __register FUN_004197c0(int param_1, int param_2)
 * Address ranges: 004197c0-004197ea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4114e0 slot 3 for TBasicActionLink. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4114e0 slot 3 for
   TBasicActionLink. Original bytes unchanged; names and types still inferred. */

void FUN_004197c0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (param_2 != iVar1) {
    if (iVar1 != 0) {
      FUN_0041994c(iVar1,param_1);
    }
    *(int *)(param_1 + 0x10) = param_2;
    if (param_2 != 0) {
      FUN_00419940(param_2,param_1);
    }
  }
  return;
}

