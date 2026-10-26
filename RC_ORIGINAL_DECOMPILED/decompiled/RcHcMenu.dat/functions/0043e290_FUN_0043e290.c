/*
 * FUN_0043e290 at 0043e290
 * undefined __register FUN_0043e290(int * param_1, char param_2)
 * Address ranges: 0043e290-0043e2f9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043e290(int *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  while (0 < (int)((undefined4 *)piVar1[0x10])[2]) {
    iVar2 = FUN_0041246c((undefined4 *)piVar1[0x10]);
    FUN_0043f270((int)piVar1,iVar2);
  }
  FUN_00403094((int *)piVar1[0x11]);
  FUN_0043e5ec(piVar1);
  FUN_00403094((int *)piVar1[0x10]);
  piVar1[0x10] = 0;
  if ((int *)piVar1[0x12] != (int *)0x0) {
    FUN_00403094((int *)piVar1[0x12]);
  }
  FUN_00418f4c(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

