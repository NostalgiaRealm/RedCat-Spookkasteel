/*
 * FUN_0048dabc at 0048dabc
 * undefined __register FUN_0048dabc(int param_1, byte * param_2)
 * Address ranges: 0048dabc-0048dcb8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0048dabc(int param_1,byte *param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  uint **ppuVar5;
  char *pcStack_40;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  int local_20;
  short local_1a;
  int local_18;
  uint *local_14;
  uint local_10;
  byte *local_c;
  int local_8;
  
  puStack_2c = &stack0xfffffffc;
  local_28 = (undefined4 *)0x0;
  local_24 = (undefined4 *)0x0;
  local_14 = (uint *)0x0;
  puStack_30 = &LAB_0048dcb9;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  local_c = param_2;
  local_8 = param_1;
  iVar1 = FUN_00404030(param_1);
  if (0 < iVar1) {
    iVar1 = FUN_004582a4(local_8,";");
    if (iVar1 != 0) goto LAB_0048db14;
  }
  piVar2 = FUN_0040ceec((int *)&DAT_0040911c,'\x01',
                        (undefined4 *)"NameStringToPropRef: Can not convert an empty string");
  FUN_0040382c(piVar2);
LAB_0048db14:
  FUN_0048e078((undefined4 *)local_c);
  FUN_004583a0(1,local_8,";",(int *)&local_14);
  local_18 = FUN_0048d930(local_14);
  if (local_18 == 0) {
    pcStack_40 = " not found in model";
    FUN_004040f0((int *)&local_24,3);
    piVar2 = FUN_0040ceec((int *)&DAT_0040911c,'\x01',local_24);
    FUN_0040382c(piVar2);
  }
  FUN_0048e0c0((int)local_c,*(undefined4 *)(local_18 + 0x34));
  uVar3 = FUN_004582a4(local_8,";");
  if ((int)uVar3 < 0) {
    uVar3 = thunk_FUN_00402874(uVar3);
  }
  if (1 < (int)uVar3) {
    local_20 = uVar3 - 1;
    local_10 = 2;
    do {
      ppuVar5 = &local_14;
      uVar3 = local_10;
      if ((int)local_10 < 0) {
        uVar3 = thunk_FUN_00402874(local_10);
      }
      FUN_004583a0(uVar3,local_8,";",(int *)ppuVar5);
      local_1a = FUN_0048d9f8(local_18,local_14);
      if (local_1a == -1) {
        pcStack_40 = *(char **)(local_18 + 0x30);
        FUN_004040f0((int *)&local_28,4);
        piVar2 = FUN_0040ceec((int *)&DAT_0040911c,'\x01',local_28);
        FUN_0040382c(piVar2);
      }
      else {
        FUN_0048de00(local_c,local_1a);
        piVar2 = (int *)FUN_004923e0(local_18,(int)local_1a);
        uVar4 = FUN_0040320c(piVar2,(int)&PTR_FUN_004740c8);
        if ((char)uVar4 != '\0') {
          piVar2 = (int *)FUN_004923e0(local_18,(int)local_1a);
          iVar1 = FUN_00403224(piVar2,(int)&PTR_FUN_004740c8);
          iVar1 = *(int *)(iVar1 + 0x30);
          piVar2 = (int *)FUN_00497394(iVar1,extraout_EDX,extraout_ECX);
          local_18 = FUN_0049756c(piVar2,iVar1);
        }
      }
      local_10 = local_10 + 1;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  if ((*local_c == 0) || (10 < *local_c)) {
    FUN_00403d94("NameStringToPropRef: invalid string");
  }
  *in_FS_OFFSET = pcStack_40;
  FUN_00403dd4((int *)&local_28,2);
  FUN_00403db0((int *)&local_14);
  return;
}

