/*
 * FUN_00520a78 at 00520a78
 * undefined __register FUN_00520a78(int * param_1, char param_2)
 * Address ranges: 00520a78-00520aa8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00520a78(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_0043a38c(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

