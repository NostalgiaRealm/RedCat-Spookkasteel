/*
 * FUN_004a9c88 at 004a9c88
 * undefined __register FUN_004a9c88(int * param_1, char param_2)
 * Address ranges: 004a9c88-004a9d89
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4a9894 slot -1 for TMultiCaster. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4a9894 slot -1 for
   TMultiCaster. Original bytes unchanged; names and types still inferred. */

void FUN_004a9c88(int *param_1,char param_2)

{
  int iVar1;
  undefined *puVar2;
  int *piVar3;
  byte extraout_DL;
  
  piVar3 = FUN_00403434(param_1,param_2);
  puVar2 = PTR_DAT_005723fc;
  iVar1 = *(int *)PTR_DAT_005723fc;
  *(undefined4 *)(iVar1 + 0xa8) = 0;
  *(undefined4 *)(iVar1 + 0xac) = 0;
  iVar1 = *(int *)puVar2;
  *(undefined4 *)(iVar1 + 0xb0) = 0;
  *(undefined4 *)(iVar1 + 0xb4) = 0;
  iVar1 = *(int *)puVar2;
  *(undefined4 *)(iVar1 + 0xe8) = 0;
  *(undefined4 *)(iVar1 + 0xec) = 0;
  iVar1 = *(int *)puVar2;
  *(undefined4 *)(iVar1 + 0xe0) = 0;
  *(undefined4 *)(iVar1 + 0xe4) = 0;
  iVar1 = *(int *)puVar2;
  *(undefined4 *)(iVar1 + 0xb8) = 0;
  *(undefined4 *)(iVar1 + 0xbc) = 0;
  iVar1 = *(int *)puVar2;
  *(undefined4 *)(iVar1 + 200) = 0;
  *(undefined4 *)(iVar1 + 0xcc) = 0;
  iVar1 = *(int *)puVar2;
  *(undefined4 *)(iVar1 + 0xd0) = 0;
  *(undefined4 *)(iVar1 + 0xd4) = 0;
  iVar1 = *(int *)puVar2;
  *(undefined4 *)(iVar1 + 0xd8) = 0;
  *(undefined4 *)(iVar1 + 0xdc) = 0;
  iVar1 = *(int *)puVar2;
  *(undefined4 *)(iVar1 + 0xc0) = 0;
  *(undefined4 *)(iVar1 + 0xc4) = 0;
  iVar1 = *(int *)puVar2;
  *(undefined4 *)(iVar1 + 0xf0) = 0;
  *(undefined4 *)(iVar1 + 0xf4) = 0;
  iVar1 = *(int *)puVar2;
  *(undefined4 *)(iVar1 + 0xf8) = 0;
  *(undefined4 *)(iVar1 + 0xfc) = 0;
  iVar1 = *(int *)puVar2;
  *(undefined4 *)(iVar1 + 0x108) = 0;
  *(undefined4 *)(iVar1 + 0x10c) = 0;
  iVar1 = *(int *)puVar2;
  *(undefined4 *)(iVar1 + 0x100) = 0;
  *(undefined4 *)(iVar1 + 0x104) = 0;
  FUN_00403094((int *)piVar3[9]);
  FUN_00418f4c(piVar3,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar3);
  }
  return;
}

