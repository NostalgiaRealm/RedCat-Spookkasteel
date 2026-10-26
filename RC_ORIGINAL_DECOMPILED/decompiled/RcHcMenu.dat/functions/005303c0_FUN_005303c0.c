/*
 * FUN_005303c0 at 005303c0
 * undefined __register FUN_005303c0(int * param_1)
 * Address ranges: 005303c0-005303ee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x52ea58 slot 78 for TCustomAppObjCombo2. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x52ea58 slot 78 for
   TCustomAppObjCombo2. Original bytes unchanged; names and types still inferred. */

void FUN_005303c0(int *param_1)

{
  char cVar1;
  
  cVar1 = FUN_00530414((int)param_1);
  if (cVar1 != '\0') {
    FUN_00530514((int)param_1,(undefined4 *)PTR_DAT_00572068);
    return;
  }
  FUN_00501894(param_1);
  return;
}

