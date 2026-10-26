/*
 * FUN_004ae2d0 at 004ae2d0
 * undefined __register FUN_004ae2d0(int param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * Address ranges: 004ae2d0-004ae319
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4ac9d8 slot 49 for TCustomGDIButton. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4ac9d8 slot 49 for
   TCustomGDIButton. Original bytes unchanged; names and types still inferred. */

void FUN_004ae2d0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if (*(int *)(param_1 + 0x174) != 0) {
    FUN_004a98fc();
    *(undefined ***)(param_4 + 4) = &PTR_FUN_004aa588;
    *(undefined4 *)(param_4 + 0x3c) = *(undefined4 *)(param_1 + 0x174);
  }
  return;
}

