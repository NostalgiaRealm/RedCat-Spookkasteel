/*
 * FUN_00439bd4 at 00439bd4
 * undefined __register FUN_00439bd4(int * param_1, int * param_2)
 * Address ranges: 00439bd4-00439c0d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x42f250 slot 36 for THintWindow. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x42f250 slot 36 for
   THintWindow. Original bytes unchanged; names and types still inferred. */

void FUN_00439bd4(int *param_1,int *param_2)

{
  FUN_004358f8(param_1,param_2);
  param_2[1] = -0x7f800000;
  param_2[9] = param_2[9] | 0x800;
  if (DAT_00573750 != '\0') {
    param_2[2] = 0x80;
  }
  FUN_00435890(param_1,(uint *)(param_2 + 2));
  return;
}

