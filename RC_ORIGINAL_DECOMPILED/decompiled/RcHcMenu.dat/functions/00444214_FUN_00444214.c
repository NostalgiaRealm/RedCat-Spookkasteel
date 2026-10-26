/*
 * FUN_00444214 at 00444214
 * undefined __register FUN_00444214(int * param_1, char param_2)
 * Address ranges: 00444214-00444248
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00444214(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_00403094((int *)piVar1[10]);
  FUN_00403094((int *)piVar1[0xe]);
  FUN_00418f4c(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

