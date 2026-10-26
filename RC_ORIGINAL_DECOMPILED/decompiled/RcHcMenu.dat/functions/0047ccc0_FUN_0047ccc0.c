/*
 * FUN_0047ccc0 at 0047ccc0
 * undefined __register FUN_0047ccc0(int param_1)
 * Address ranges: 0047ccc0-0047cce8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x47c8b4 slot published:RemoveAllButtonClick for TPasswordDialog. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x47c8b4 slot
   published:RemoveAllButtonClick for TPasswordDialog. Original bytes unchanged; names and types
   still inferred. */

void FUN_0047ccc0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00403224(*(int **)(param_1 + 0x2f0),(int)&PTR_FUN_0047d4c0);
  FUN_00481d30(iVar1);
  (**(code **)(**(int **)(param_1 + 0x2d4) + 0xb0))();
  return;
}

