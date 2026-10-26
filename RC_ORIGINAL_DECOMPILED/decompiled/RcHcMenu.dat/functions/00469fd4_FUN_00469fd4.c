/*
 * FUN_00469fd4 at 00469fd4
 * undefined __register FUN_00469fd4(int * param_1, int param_2)
 * Address ranges: 00469fd4-00469fed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x462a70 slot 45 for TField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x462a70 slot 45 for TField.
   Original bytes unchanged; names and types still inferred. */

void FUN_00469fd4(int *param_1,int param_2)

{
  FUN_00468d14((int)param_1);
  (**(code **)(*param_1 + 0x34))(*param_1,param_2);
  param_1[0xf] = param_2;
  return;
}

