/*
 * FUN_004349bc at 004349bc
 * undefined __register FUN_004349bc(int * param_1, char param_2)
 * Address ranges: 004349bc-00434a8c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004349bc(int *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_004191b0((int)piVar1);
  if ((char)piVar1[0x51] != '\0') {
    *(undefined1 *)(piVar1 + 0x51) = 0;
    FUN_00430628((int)piVar1,'\0',extraout_ECX);
  }
  FUN_00406aa0(piVar1 + 0x52);
  FUN_00403094((int *)piVar1[0x50]);
  if (piVar1[9] != 0) {
    FUN_0043555c(piVar1,'\x01');
  }
  if (piVar1[0x53] != 0) {
    (**(code **)(*piVar1 + 0x9c))();
  }
  iVar2 = FUN_0043579c((int)piVar1);
  while (iVar2 != 0) {
    piVar3 = (int *)FUN_00435760((int)piVar1,iVar2 + -1);
    FUN_004355c8((int)piVar1,piVar3);
    (**(code **)(*piVar3 + -4))(piVar3,1);
    iVar2 = FUN_0043579c((int)piVar1);
  }
  FUN_00403094((int *)piVar1[0x4c]);
  if (piVar1[0x57] != 0) {
    FUN_00448550(piVar1[0x57]);
  }
  FUN_004319e8(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

