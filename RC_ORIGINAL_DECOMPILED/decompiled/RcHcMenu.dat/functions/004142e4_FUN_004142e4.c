/*
 * FUN_004142e4 at 004142e4
 * undefined __register FUN_004142e4(int * param_1)
 * Address ranges: 004142e4-0041431b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x410ca8 slot 16 for TStringList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x410ca8 slot 16 for
   TStringList. Original bytes unchanged; names and types still inferred. */

void FUN_004142e4(int *param_1)

{
  if (param_1[4] != 0) {
    (**(code **)(*param_1 + 0x74))();
    FUN_00404878((VARIANTARG *)param_1[3],"\x0e\vTStringItem\b",param_1[4]);
    param_1[4] = 0;
    (**(code **)(*param_1 + 0x28))(param_1,0);
    (**(code **)(*param_1 + 0x70))();
  }
  return;
}

