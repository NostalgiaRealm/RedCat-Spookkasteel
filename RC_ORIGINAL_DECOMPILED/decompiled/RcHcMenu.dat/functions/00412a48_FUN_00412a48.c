/*
 * FUN_00412a48 at 00412a48
 * undefined __register FUN_00412a48(int * param_1, char param_2)
 * Address ranges: 00412a48-00412a73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00412a48(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_00415364((int)piVar1);
  FUN_00403084(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

