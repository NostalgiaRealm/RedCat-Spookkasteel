/*
 * FUN_004f6dbc at 004f6dbc
 * undefined __register FUN_004f6dbc(int * param_1, int * param_2)
 * Address ranges: 004f6dbc-004f6e25
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4f3dfc slot 36 for THeaderControl. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4f3dfc slot 36 for
   THeaderControl. Original bytes unchanged; names and types still inferred. */

void FUN_004f6dbc(int *param_1,int *param_2)

{
  FUN_004f457c();
  FUN_004358f8(param_1,param_2);
  FUN_00435824(param_1,(int)param_2,"SysHeader32");
  param_2[1] = param_2[1] | *(uint *)(&DAT_00571dac + (uint)*(byte *)(param_1 + 0x85) * 4);
  if ((char)param_1[0x82] != '\0') {
    param_2[1] = param_2[1] | 0x80;
  }
  if (*(char *)((int)param_1 + 0x209) != '\0') {
    param_2[1] = param_2[1] | 4;
  }
  if (*(char *)((int)param_1 + 0x20a) != '\0') {
    param_2[1] = param_2[1] | 0x40;
  }
  param_2[9] = param_2[9] & 0xfffffffc;
  return;
}

