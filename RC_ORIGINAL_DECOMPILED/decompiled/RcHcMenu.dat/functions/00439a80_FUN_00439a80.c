/*
 * FUN_00439a80 at 00439a80
 * undefined __register FUN_00439a80(int * param_1, char param_2)
 * Address ranges: 00439a80-00439abe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00439a80(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  if (piVar1 == DAT_0056f858) {
    FUN_0042fbdc((int *)0x0);
  }
  FUN_00403094((int *)piVar1[0x48]);
  FUN_004319e8(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

