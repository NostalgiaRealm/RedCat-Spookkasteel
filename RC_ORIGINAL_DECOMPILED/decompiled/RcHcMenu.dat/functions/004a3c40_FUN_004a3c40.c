/*
 * FUN_004a3c40 at 004a3c40
 * undefined __register FUN_004a3c40(int * param_1, char param_2)
 * Address ranges: 004a3c40-004a3c86
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a3c40(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  (**(code **)(*(int *)piVar1[1] + 0x40))();
  FUN_0040e4b4(piVar1 + 1);
  FUN_00403084(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

