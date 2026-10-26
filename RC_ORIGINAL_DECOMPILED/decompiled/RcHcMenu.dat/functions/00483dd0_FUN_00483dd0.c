/*
 * FUN_00483dd0 at 00483dd0
 * undefined __register FUN_00483dd0(int * param_1, char param_2)
 * Address ranges: 00483dd0-00483e14
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00483dd0(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_00470d6c(piVar1,extraout_DL & 0xfc);
  if (piVar1[0x82] != 0) {
    FUN_00402800(piVar1[0x82]);
    piVar1[0x82] = 0;
  }
  FUN_00486f7c((int)piVar1,0);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

