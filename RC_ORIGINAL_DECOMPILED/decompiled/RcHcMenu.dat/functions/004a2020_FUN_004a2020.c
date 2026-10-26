/*
 * FUN_004a2020 at 004a2020
 * undefined __register FUN_004a2020(int * param_1, char param_2)
 * Address ranges: 004a2020-004a20bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4a1a64 slot -1 for TDaviGraphicDef. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4a1a64 slot -1 for
   TDaviGraphicDef. Original bytes unchanged; names and types still inferred. */

void FUN_004a2020(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  byte local_a;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_004a2440((int)piVar1,0x4403);
  FUN_0040e4b4(piVar1 + 0x14);
  local_a = 0;
  do {
    FUN_00403094((int *)piVar1[local_a + 9]);
    piVar1[local_a + 9] = 0;
    local_a = local_a + 1;
  } while (local_a != 7);
  if (piVar1[0x10] != 0) {
    DeleteObject((HGDIOBJ)piVar1[0x10]);
    piVar1[0x10] = 0;
  }
  FUN_00403094((int *)piVar1[0x13]);
  FUN_00418f4c(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

