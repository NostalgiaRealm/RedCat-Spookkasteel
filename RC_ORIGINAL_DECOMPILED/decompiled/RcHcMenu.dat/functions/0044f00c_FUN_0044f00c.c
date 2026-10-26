/*
 * FUN_0044f00c at 0044f00c
 * undefined __register FUN_0044f00c(int * param_1, char param_2)
 * Address ranges: 0044f00c-0044f0b0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0044f00c(int *param_1,char param_2)

{
  int *piVar1;
  int *piVar2;
  byte extraout_DL;
  int iVar3;
  int iVar4;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_00403094((int *)piVar1[0x1d]);
  FUN_00403094((int *)piVar1[0x1f]);
  FUN_00403094((int *)piVar1[0x1e]);
  FUN_00403094((int *)piVar1[0x12]);
  FUN_00403094((int *)piVar1[0x11]);
  FUN_00403094((int *)piVar1[0x10]);
  FUN_00403094((int *)piVar1[9]);
  FUN_00403094((int *)piVar1[10]);
  FUN_00403094((int *)piVar1[0x1c]);
  if ((piVar1[0x13] != 0) && (iVar3 = *(int *)(piVar1[0x13] + 8), -1 < iVar3 + -1)) {
    iVar4 = 0;
    do {
      piVar2 = (int *)FUN_00412384((undefined4 *)piVar1[0x13],iVar4);
      FUN_00403094(piVar2);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00403094((int *)piVar1[0x13]);
  FUN_0044f2a4((int)piVar1);
  FUN_00418f4c(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

