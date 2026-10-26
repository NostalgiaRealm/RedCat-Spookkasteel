/*
 * FUN_004f4d1c at 004f4d1c
 * undefined __register FUN_004f4d1c(int * param_1, char param_2)
 * Address ranges: 004f4d1c-004f4d6c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f4d1c(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_0040e4b4(piVar1 + 0x7c);
  FUN_0040e4b4(piVar1 + 0x84);
  FUN_0040e4b4(piVar1 + 0x82);
  FUN_0040e4b4(piVar1 + 0x7e);
  FUN_004349bc(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

