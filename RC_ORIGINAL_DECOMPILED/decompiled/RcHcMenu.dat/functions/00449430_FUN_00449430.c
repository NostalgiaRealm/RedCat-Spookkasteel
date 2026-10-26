/*
 * FUN_00449430 at 00449430
 * undefined __register FUN_00449430(int * param_1, char param_2)
 * Address ranges: 00449430-0044946a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00449430(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_00403094((int *)piVar1[0x7c]);
  FUN_00403094((int *)piVar1[0x7d]);
  FUN_004349bc(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

