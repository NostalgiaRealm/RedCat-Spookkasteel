/*
 * FUN_004319e8 at 004319e8
 * undefined __register FUN_004319e8(int * param_1, char param_2)
 * Address ranges: 004319e8-00431a9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004319e8(int *param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  byte extraout_DL;
  undefined4 auStack_18 [4];
  
  piVar2 = FUN_00403434(param_1,param_2);
  FUN_00450330(*(int *)PTR_DAT_005723fc,(int)piVar2);
  iVar1 = piVar2[0x24];
  if ((iVar1 == 0) || ((*(byte *)(iVar1 + 0x20) & 8) != 0)) {
    (**(code **)(*piVar2 + 0x60))(piVar2,0);
  }
  else {
    FUN_00433700(iVar1,0xb039,0,piVar2);
    (**(code **)(*piVar2 + 0x60))(piVar2,0);
    FUN_0043211c((int)piVar2,auStack_18);
    FUN_00403270(piVar2,0xffffffff,auStack_18);
    piVar2[0x24] = 0;
  }
  FUN_00403094((int *)piVar2[0x17]);
  piVar2[0x17] = 0;
  FUN_00403094((int *)piVar2[0x19]);
  FUN_00403094((int *)piVar2[0x16]);
  FUN_0040a3ac(piVar2[0x15]);
  FUN_00418f4c(piVar2,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar2);
  }
  return;
}

