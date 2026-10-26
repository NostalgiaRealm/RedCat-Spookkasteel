/*
 * FUN_004b33d8 at 004b33d8
 * undefined __register FUN_004b33d8(int * param_1, char param_2)
 * Address ranges: 004b33d8-004b33d8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated native virtual-method table 0x4b2a4c slot -1 for TSQLBuilder. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated native virtual-method table 0x4b2a4c
   slot -1 for TSQLBuilder. Original bytes unchanged; names and types still inferred. */

void FUN_004b33d8(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_00403094((int *)piVar1[8]);
  FUN_00403094((int *)piVar1[0x12]);
  FUN_00403094((int *)piVar1[0x13]);
  FUN_00403094((int *)piVar1[0xc]);
  FUN_00403094((int *)piVar1[0x14]);
  FUN_00403094((int *)piVar1[0xd]);
  FUN_00403094((int *)piVar1[10]);
  FUN_00403094((int *)piVar1[0xb]);
  FUN_00403094((int *)piVar1[0x15]);
  FUN_00403094((int *)piVar1[0x16]);
  FUN_00403094((int *)piVar1[0x10]);
  FUN_00403094((int *)piVar1[0x17]);
  FUN_00403094((int *)piVar1[0x11]);
  FUN_0045b45c(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

