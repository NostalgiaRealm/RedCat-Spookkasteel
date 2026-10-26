/*
 * FUN_0043a38c at 0043a38c
 * undefined __register FUN_0043a38c(int * param_1, char param_2)
 * Address ranges: 0043a38c-0043a3bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043a38c(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_00403094((int *)piVar1[0x7c]);
  FUN_004349bc(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

