/*
 * FUN_004670b8 at 004670b8
 * undefined __register FUN_004670b8(int * param_1, char param_2)
 * Address ranges: 004670b8-004670fd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004670b8(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_00418f4c(piVar1,extraout_DL & 0xfc);
  (**(code **)(*piVar1 + 0x48))(piVar1,0);
  FUN_0040e4b4(piVar1 + 0xb);
  FUN_0040e4b4(piVar1 + 9);
  FUN_0040e4b4(piVar1 + 10);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

