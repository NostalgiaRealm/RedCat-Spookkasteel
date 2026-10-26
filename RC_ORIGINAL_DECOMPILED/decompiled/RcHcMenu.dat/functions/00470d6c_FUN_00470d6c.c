/*
 * FUN_00470d6c at 00470d6c
 * undefined __register FUN_00470d6c(int * param_1, char param_2)
 * Address ranges: 00470d6c-00470e1a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00470d6c(int *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_004191b0((int)piVar1);
  FUN_004713cc(piVar1);
  (**(code **)(*piVar1 + 0x188))(piVar1,0);
  FUN_00403094((int *)piVar1[0x18]);
  if (piVar1[0xe] != 0) {
    while (0 < (int)((undefined4 *)piVar1[0xe])[2]) {
      iVar2 = FUN_0041246c((undefined4 *)piVar1[0xe]);
      FUN_00472638(piVar1,iVar2);
    }
  }
  FUN_00403094((int *)piVar1[0xe]);
  FUN_00403094((int *)piVar1[9]);
  FUN_00403094((int *)piVar1[10]);
  piVar1[10] = 0;
  FUN_00403094((int *)piVar1[0xd]);
  FUN_00403094((int *)piVar1[0xc]);
  FUN_00403094((int *)piVar1[0xb]);
  FUN_00403094((int *)piVar1[0x1d]);
  FUN_00403094((int *)piVar1[0x1f]);
  FUN_00418f4c(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

