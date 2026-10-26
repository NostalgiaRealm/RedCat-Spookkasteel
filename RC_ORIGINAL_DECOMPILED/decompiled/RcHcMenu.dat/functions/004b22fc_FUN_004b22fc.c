/*
 * FUN_004b22fc at 004b22fc
 * undefined __register FUN_004b22fc(int * param_1, undefined4 param_2, int * param_3)
 * Address ranges: 004b22fc-004b234e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4b19f0 slot 6 for TDateProp. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4b19f0 slot 6 for
   TDateProp. Original bytes unchanged; names and types still inferred. */

void FUN_004b22fc(int *param_1,undefined4 param_2,int *param_3)

{
  undefined1 *extraout_ECX;
  
  FUN_00403db0(param_3);
  (**(code **)(*param_1 + 0x6c))();
  FUN_0040bca4(param_3,(byte *)"dddddd",extraout_ECX);
  FUN_004040f0(param_3,3);
  return;
}

