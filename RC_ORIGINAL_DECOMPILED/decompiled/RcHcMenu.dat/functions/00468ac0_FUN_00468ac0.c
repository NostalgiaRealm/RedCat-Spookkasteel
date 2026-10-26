/*
 * FUN_00468ac0 at 00468ac0
 * undefined __register FUN_00468ac0(int * param_1, char param_2)
 * Address ranges: 00468ac0-00468b06
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00468ac0(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  if ((int *)piVar1[10] != (int *)0x0) {
    FUN_004713cc((int *)piVar1[10]);
    if (piVar1[0xc] != 0) {
      FUN_004686d8(piVar1[0xc],(int)piVar1);
    }
  }
  FUN_00403094((int *)piVar1[0x1b]);
  FUN_00418f4c(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

