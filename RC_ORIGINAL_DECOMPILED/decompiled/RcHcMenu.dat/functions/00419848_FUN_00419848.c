/*
 * FUN_00419848 at 00419848
 * undefined __register FUN_00419848(int * param_1, char param_2)
 * Address ranges: 00419848-00419891
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00419848(int *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_00418f4c(piVar1,extraout_DL & 0xfc);
  while (0 < (int)((undefined4 *)piVar1[0x10])[2]) {
    iVar2 = FUN_0041246c((undefined4 *)piVar1[0x10]);
    FUN_0041994c((int)piVar1,iVar2);
  }
  FUN_00403094((int *)piVar1[0x10]);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

