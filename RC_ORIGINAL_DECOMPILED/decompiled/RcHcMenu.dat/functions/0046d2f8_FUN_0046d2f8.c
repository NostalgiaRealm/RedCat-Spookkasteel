/*
 * FUN_0046d2f8 at 0046d2f8
 * undefined __register FUN_0046d2f8(int * param_1, char param_2)
 * Address ranges: 0046d2f8-0046d327
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046d2f8(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_00468ac0(piVar1,extraout_DL & 0xfc);
  FUN_00403094((int *)piVar1[0x35]);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

