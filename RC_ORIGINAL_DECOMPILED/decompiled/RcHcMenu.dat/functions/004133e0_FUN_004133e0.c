/*
 * FUN_004133e0 at 004133e0
 * undefined __register FUN_004133e0(int * param_1, char param_2)
 * Address ranges: 004133e0-0041340d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004133e0(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_00413f88((int)piVar1,(int *)0x0);
  FUN_00412a48(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

