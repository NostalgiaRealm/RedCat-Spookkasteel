/*
 * FUN_0044ce94 at 0044ce94
 * undefined __register FUN_0044ce94(int * param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 0044ce94-0044ceca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x446c28 slot 47 for TCustomForm. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x446c28 slot 47 for
   TCustomForm. Original bytes unchanged; names and types still inferred. */

void FUN_0044ce94(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((*(byte *)(param_1 + 8) & 0x10) == 0) {
    *(char *)((int)param_1 + 0x213) = (char)param_2;
  }
  if ((char)param_2 != '\x01') {
    FUN_00403270(param_1,param_2,param_3);
  }
  if (param_1[0x93] != 0) {
    (**(code **)(*(int *)param_1[0x93] + 0x10))();
  }
  return;
}

