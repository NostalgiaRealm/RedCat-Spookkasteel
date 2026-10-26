/*
 * FUN_00412c50 at 00412c50
 * undefined __register FUN_00412c50(int * param_1, char param_2)
 * Address ranges: 00412c50-00412c7d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00412c50(int *param_1,char param_2)

{
  int *piVar1;
  undefined4 extraout_ECX;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_00412d9c(piVar1,(int *)0x0,extraout_ECX);
  FUN_00412a48(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

