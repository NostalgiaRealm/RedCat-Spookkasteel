/*
 * FUN_00563974 at 00563974
 * undefined __register FUN_00563974(int * param_1, int param_2, char param_3)
 * Address ranges: 00563974-005639b0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x561588 slot 4 for TMediaPlayer. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x561588 slot 4 for
   TMediaPlayer. Original bytes unchanged; names and types still inferred. */

void FUN_00563974(int *param_1,int param_2,char param_3)

{
  FUN_00431ce8(param_1,param_2,param_3);
  if ((param_3 == '\x01') && (param_2 == param_1[0xbd])) {
    if (*(char *)((int)param_1 + 0x2c9) != '\0') {
      FUN_005639b4((int)param_1);
    }
    param_1[0xbd] = 0;
  }
  return;
}

