/*
 * FUN_004bcf00 at 004bcf00
 * undefined __register FUN_004bcf00(int * param_1, char param_2)
 * Address ranges: 004bcf00-004bcf71
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004bcf00(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_004d4fbc(piVar1);
  FUN_00403094((int *)piVar1[9]);
  piVar1[9] = 0;
  FUN_00403094((int *)piVar1[10]);
  piVar1[10] = 0;
  FUN_00403094((int *)piVar1[0xe]);
  piVar1[0xe] = 0;
  FUN_004d4fe4(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

