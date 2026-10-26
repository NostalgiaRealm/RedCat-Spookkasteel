/*
 * FUN_0049f8e8 at 0049f8e8
 * undefined __register FUN_0049f8e8(int * param_1, char param_2)
 * Address ranges: 0049f8e8-0049f930
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0049f8e8(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  GlobalUnlock((HGLOBAL)piVar1[5]);
  FUN_00414ad8((int)piVar1,0,0);
  FUN_00414b3c(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

