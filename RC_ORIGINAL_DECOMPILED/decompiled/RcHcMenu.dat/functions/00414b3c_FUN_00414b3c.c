/*
 * FUN_00414b3c at 00414b3c
 * undefined __register FUN_00414b3c(int * param_1, char param_2)
 * Address ranges: 00414b3c-00414b67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00414b3c(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_00414b68(piVar1);
  FUN_00403084(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

