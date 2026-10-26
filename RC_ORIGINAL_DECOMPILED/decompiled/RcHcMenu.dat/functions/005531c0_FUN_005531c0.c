/*
 * FUN_005531c0 at 005531c0
 * undefined __register FUN_005531c0(int * param_1)
 * Address ranges: 005531c0-00553206
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x552ac8 slot 60 for TGameMenuScreen. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x552ac8 slot 60 for
   TGameMenuScreen. Original bytes unchanged; names and types still inferred. */

void FUN_005531c0(int *param_1)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  (**(code **)(*param_1 + 0x60))(param_1,*(undefined4 *)(*(int *)PTR_DAT_005723fc + 0x38));
  FUN_0044aa98(param_1,CONCAT31((int3)((uint)extraout_EDX >> 8),1),extraout_ECX);
  if (*(short *)((int)param_1 + 0x302) != 0) {
    (*(code *)param_1[0xc0])(param_1[0xc1],param_1);
  }
  return;
}

