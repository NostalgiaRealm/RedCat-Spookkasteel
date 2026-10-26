/*
 * FUN_004c6c50 at 004c6c50
 * undefined __register FUN_004c6c50(int * param_1, char param_2)
 * Address ranges: 004c6c50-004c6c8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004c6c50(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_00403094((int *)piVar1[0x1e]);
  FUN_0043e290(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

