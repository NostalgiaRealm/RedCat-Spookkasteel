/*
 * FUN_00422c48 at 00422c48
 * undefined __register FUN_00422c48(int param_1, undefined4 param_2)
 * Address ranges: 00422c48-00422c5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x41ae18 slot 16 for TIcon. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x41ae18 slot 16 for TIcon.
   Original bytes unchanged; names and types still inferred. */

void FUN_00422c48(int param_1,undefined4 param_2)

{
  if (*(int *)(*(int *)(param_1 + 0x20) + 8) == 0) {
    *(undefined4 *)(param_1 + 0x24) = param_2;
    return;
  }
  FUN_0041d214((undefined4 *)PTR_PTR_00572194);
  return;
}

