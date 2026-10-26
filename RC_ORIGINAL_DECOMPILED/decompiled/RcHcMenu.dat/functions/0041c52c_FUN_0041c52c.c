/*
 * FUN_0041c52c at 0041c52c
 * undefined __register FUN_0041c52c(int * param_1, char param_2)
 * Address ranges: 0041c52c-0041c586
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041c52c(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_00412838(DAT_005736a8,(int)piVar1);
  FUN_0041cfec(piVar1,0);
  FUN_00403094((int *)piVar1[3]);
  FUN_00403094((int *)piVar1[4]);
  FUN_00403094((int *)piVar1[5]);
  DeleteCriticalSection((LPCRITICAL_SECTION)(piVar1 + 0xe));
  FUN_00412a48(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

