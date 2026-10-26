/*
 * FUN_00429264 at 00429264
 * undefined __register FUN_00429264(int * param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 00429264-0042927d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x424f58 slot 35 for TCustomLabel. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x424f58 slot 35 for
   TCustomLabel. Original bytes unchanged; names and types still inferred. */

void FUN_00429264(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((char)param_2 != *(char *)((int)param_1 + 0x12d)) {
    *(char *)((int)param_1 + 0x12d) = (char)param_2;
    FUN_00403270(param_1,param_2,param_3);
  }
  return;
}

