/*
 * FUN_00416e4c at 00416e4c
 * undefined __register FUN_00416e4c(int param_1, int param_2)
 * Address ranges: 00416e4c-00416ec8;00416ee0-00416ef5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00416e4c(int param_1,int param_2)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  uint extraout_ECX;
  uint extraout_ECX_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  byte *local_c;
  int local_8;
  
  puStack_1c = &stack0xfffffffc;
  puStack_28 = &stack0xfffffffc;
  local_c = (byte *)0x0;
  puStack_20 = &LAB_00416ef6;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  puStack_2c = &LAB_00416ec9;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  local_8 = param_1;
  uVar2 = FUN_00417010(param_1,param_2,0);
  if ((char)uVar2 != '\v') {
    FUN_00415400();
  }
  iVar3 = FUN_0040f7bc(param_2);
  pcVar1 = (char *)**(undefined4 **)(iVar3 + 1);
  uVar2 = extraout_ECX;
  while (FUN_00416f2c(local_8,(int *)&local_c,uVar2), local_c != (byte *)0x0) {
    FUN_00415418(pcVar1,local_c);
    uVar2 = extraout_ECX_00;
  }
  *in_FS_OFFSET = uStack_30;
  *in_FS_OFFSET = local_24;
  puStack_1c = &LAB_00416efd;
  puStack_20 = (undefined1 *)0x416ef5;
  FUN_00403db0((int *)&local_c);
  return;
}

