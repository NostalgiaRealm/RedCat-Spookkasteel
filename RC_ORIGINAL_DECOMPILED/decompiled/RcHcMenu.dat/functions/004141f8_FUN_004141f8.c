/*
 * FUN_004141f8 at 004141f8
 * undefined __register FUN_004141f8(int * param_1, char param_2)
 * Address ranges: 004141f8-00414251
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004141f8(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  piVar1[8] = 0;
  piVar1[9] = 0;
  piVar1[10] = 0;
  piVar1[0xb] = 0;
  FUN_004133e0(piVar1,extraout_DL & 0xfc);
  if (piVar1[4] != 0) {
    FUN_00404878((VARIANTARG *)piVar1[3],"\x0e\vTStringItem\b",piVar1[4]);
  }
  piVar1[4] = 0;
  (**(code **)(*piVar1 + 0x28))(piVar1,0);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

