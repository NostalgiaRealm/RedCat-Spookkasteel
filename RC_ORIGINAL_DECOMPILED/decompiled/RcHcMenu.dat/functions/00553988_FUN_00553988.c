/*
 * FUN_00553988 at 00553988
 * undefined __register FUN_00553988(int * param_1)
 * Address ranges: 00553988-005539ac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x5537e8 slot 51 for TCustomGDICheckBox. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x5537e8 slot 51 for
   TCustomGDICheckBox. Original bytes unchanged; names and types still inferred. */

void FUN_00553988(int *param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0xb8))();
  (**(code **)(*param_1 + 0xbc))(param_1,uVar1 ^ 1);
  return;
}

