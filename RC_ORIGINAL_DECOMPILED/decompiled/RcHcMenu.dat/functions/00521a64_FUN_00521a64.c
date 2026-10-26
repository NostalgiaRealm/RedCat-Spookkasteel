/*
 * FUN_00521a64 at 00521a64
 * undefined __register FUN_00521a64(int * param_1)
 * Address ranges: 00521a64-00521ab5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x51bed8 slot 46 for TDaviCustomGrid2. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x51bed8 slot 46 for
   TDaviCustomGrid2. Original bytes unchanged; names and types still inferred. */

void FUN_00521a64(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_005233ac((int *)&PTR_FUN_0051c0dc,'\x01',param_1);
  param_1[0x9d] = iVar1;
  iVar1 = FUN_0051dc38((int *)&PTR_FUN_0051b9c4,'\x01',param_1);
  param_1[0x9f] = iVar1;
  piVar2 = FUN_0051da58((int *)&PTR_FUN_0051b87c,'\x01',param_1);
  param_1[0xa1] = (int)piVar2;
  return;
}

