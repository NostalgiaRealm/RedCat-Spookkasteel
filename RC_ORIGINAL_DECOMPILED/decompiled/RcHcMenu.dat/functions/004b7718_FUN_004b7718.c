/*
 * FUN_004b7718 at 004b7718
 * undefined __register FUN_004b7718(int * param_1, char param_2)
 * Address ranges: 004b7718-004b774a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004b7718(int *param_1,char param_2)

{
  int *piVar1;
  int *piVar2;
  byte extraout_DL;
  
  piVar2 = FUN_00403434(param_1,param_2);
  piVar1 = (int *)piVar2[4];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + -4))(piVar1,1);
  }
  FUN_004b7354(piVar2,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar2);
  }
  return;
}

