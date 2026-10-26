/*
 * FUN_004f4dbc at 004f4dbc
 * undefined __register FUN_004f4dbc(int * param_1, int * param_2)
 * Address ranges: 004f4dbc-004f4eaf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4f2904 slot 36 for TCustomTabControl. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4f2904 slot 36 for
   TCustomTabControl. Original bytes unchanged; names and types still inferred. */

void FUN_004f4dbc(int *param_1,int *param_2)

{
  uint uVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  FUN_004f457c();
  FUN_004358f8(param_1,param_2);
  FUN_00435824(param_1,(int)param_2,"SysTabControl32");
  uVar1 = FUN_00403270(param_1,extraout_EDX,extraout_ECX);
  param_2[1] = *(uint *)(&DAT_00571d78 +
                        (uint)*(byte *)((int)param_1 + 0x20e) * 4 + (uVar1 & 0x7f) * 0x10) |
               param_2[1] | 0x2000000U |
               *(uint *)(&DAT_00571d98 + (uint)*(byte *)((int)param_1 + 0x20d) * 4) |
               *(uint *)(&DAT_00571da4 + (uint)*(byte *)((int)param_1 + 0x203) * 4);
  if ((char)param_1[0x5d] == '\0') {
    param_2[1] = param_2[1] | 0x8000;
  }
  if ((char)param_1[0x80] != '\0') {
    param_2[1] = param_2[1] | 0x200;
  }
  if (*(char *)((int)param_1 + 0x201) != '\0') {
    param_2[1] = param_2[1] | 4;
  }
  if (*(char *)((int)param_1 + 0x202) != '\0') {
    param_2[1] = param_2[1] | 0x2000;
  }
  if ((short)param_1[0x85] != 0) {
    param_2[1] = param_2[1] | 0x400;
  }
  if (((char)param_1[0x7d] != '\0') && ((*(byte *)(param_1 + 8) & 0x10) == 0)) {
    param_2[1] = param_2[1] | 0x40;
  }
  if ((char)param_1[0x83] != '\0') {
    param_2[1] = param_2[1] | 1;
  }
  param_2[9] = param_2[9] & 0xfffffffcU | 8;
  return;
}

