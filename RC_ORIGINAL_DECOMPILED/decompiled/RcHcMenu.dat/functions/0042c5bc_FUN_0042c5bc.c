/*
 * FUN_0042c5bc at 0042c5bc
 * undefined __register FUN_0042c5bc(int * param_1, char param_2)
 * Address ranges: 0042c5bc-0042c601
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0042c5bc(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_004349bc(piVar1,extraout_DL & 0xfc);
  FUN_00403094((int *)piVar1[0x7e]);
  FUN_00403094((int *)piVar1[0x7c]);
  FUN_00403094((int *)piVar1[0x84]);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

