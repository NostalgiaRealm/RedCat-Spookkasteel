/*
 * FUN_005f9b60 at 005f9b60
 * undefined FUN_005f9b60(void)
 * Address ranges: 005f9b60-005fa2c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005f9b60(int param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  bool bVar10;
  bool bVar11;
  char *pcVar12;
  undefined *puVar13;
  undefined1 local_8b;
  undefined1 local_8a;
  undefined1 local_89;
  undefined1 local_88;
  undefined1 local_87;
  undefined1 local_86;
  undefined1 local_85;
  undefined1 local_84 [4];
  int iStack_80;
  undefined4 uStack_74;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int local_20;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00648951;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0044e4a0(&local_8b);
  local_4 = 0;
  FUN_0044e4a0(&local_8a);
  local_4._0_1_ = 1;
  FUN_0044e4a0(&local_89);
  local_4._0_1_ = 2;
  FUN_0044e4a0(&local_88);
  local_4._0_1_ = 3;
  FUN_0044e4a0(&local_87);
  local_4._0_1_ = 4;
  FUN_0044e4a0(&local_86);
  local_4 = CONCAT31(local_4._1_3_,5);
  FUN_0044e4a0(&local_85);
  local_4 = 6;
  if (((2000 < param_2) && (param_2 < 0x7d6)) || ((999 < param_2 && (param_2 < 0x417)))) {
    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
  }
  if (*(char *)(param_1 + 0x78) == '\0') goto LAB_005f9eb9;
  iVar3 = FUN_00484bd0(&DAT_006b3f70);
  if (iVar3 != 0) {
    puVar7 = *(undefined1 **)(param_1 + 0x14);
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &DAT_0064a3b4;
    }
    FUN_005e5d20(&DAT_0070fcb8,puVar7);
    FUN_005e9da0(10);
    FUN_005e7510();
  }
  uVar5 = 0xffffffff;
  pcVar12 = &DAT_006b3f70;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar1 != '\0');
  iVar3 = FUN_004251b0(0,*(undefined4 *)(param_1 + 8),&DAT_006b3f70,~uVar5 - 1);
  if (iVar3 != 0) {
    puVar7 = *(undefined1 **)(param_1 + 4);
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &DAT_0064a3b4;
    }
    FUN_005e5d20(&DAT_0070fcb8,puVar7);
    uVar4 = *(undefined4 *)(param_1 + 0x20);
    FUN_005e5d20(&DAT_0070fcb8,&DAT_006b125c,uVar4,&DAT_006b161c);
    uVar4 = FUN_005e7140(uVar4);
    FUN_005e5d20(uVar4);
  }
  if ((param_2 < 1000) || (0x416 < param_2)) {
    if ((param_2 < 0x7d1) || (0x7d5 < param_2)) {
      pcVar12 = s_Warning_W_006b15f8;
    }
    else {
      pcVar12 = s_Fatal_Error_F_006b1604;
    }
  }
  else {
    pcVar12 = s_Error_C_006b1614;
  }
  FUN_005e5d20(&DAT_0070fcb8,pcVar12);
  puVar13 = &DAT_006b10bc;
  uVar4 = FUN_005e7140(param_2);
  FUN_005e5d20(uVar4,puVar13);
  uVar5 = 0xffffffff;
  pcVar12 = &DAT_006b3f70;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar1 != '\0');
  iVar3 = FUN_004251b0(0,*(undefined4 *)(param_1 + 0x5c),&DAT_006b3f70,~uVar5 - 1);
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
    pcVar12 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar1 != '\0');
    iVar3 = FUN_004251b0(0,*(undefined4 *)(param_1 + 0x2c),&DAT_006b3f70,~uVar5 - 1);
    if (iVar3 != 0) {
      puVar7 = *(undefined1 **)(param_1 + 0x28);
      goto joined_r0x005f9dbb;
    }
  }
  else {
    puVar7 = *(undefined1 **)(param_1 + 0x58);
joined_r0x005f9dbb:
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &DAT_0064a3b4;
    }
    FUN_005e5d20(&DAT_0070fcb8,puVar7);
    FUN_005e5d20(&DAT_0070fcb8,&DAT_006b10bc);
  }
  uVar5 = 0xffffffff;
  pcVar12 = &DAT_006b3f70;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar1 != '\0');
  iVar3 = FUN_004251b0(0,*(undefined4 *)(param_1 + 0x3c),&DAT_006b3f70,~uVar5 - 1);
  if (iVar3 != 0) {
    puVar7 = *(undefined1 **)(param_1 + 0x38);
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &DAT_0064a3b4;
    }
    FUN_005e5d20(&DAT_0070fcb8,puVar7);
    FUN_005e5d20(&DAT_0070fcb8,&DAT_006b10bc);
  }
  uVar5 = 0xffffffff;
  pcVar12 = &DAT_006b3f70;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar1 != '\0');
  iVar3 = FUN_004251b0(0,*(undefined4 *)(param_1 + 0x4c),&DAT_006b3f70,~uVar5 - 1);
  if (iVar3 != 0) {
    puVar7 = *(undefined1 **)(param_1 + 0x48);
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &DAT_0064a3b4;
    }
    FUN_005e5d20(&DAT_0070fcb8,puVar7);
    FUN_005e5d20(&DAT_0070fcb8,&DAT_006b10bc);
  }
  puVar7 = *(undefined1 **)(param_3 + 4);
  if (puVar7 == (undefined1 *)0x0) {
    puVar7 = &DAT_0064a3b4;
  }
  FUN_005e5d20(&DAT_0070fcb8,puVar7);
  FUN_005e9da0(10);
  FUN_005e7510();
LAB_005f9eb9:
  local_20 = param_2;
  FUN_0040cc00(param_3,0,0xffffffff);
  FUN_0040cc00(param_1 + 0x24,0,0xffffffff);
  FUN_0040cc00(param_1,0,0xffffffff);
  FUN_0040cc00(param_1 + 0x34,0,0xffffffff);
  FUN_0040cc00(param_1 + 0x10,0,0xffffffff);
  uStack_74 = *(undefined4 *)(param_1 + 0x20);
  FUN_0040cc00(param_1 + 0x44,0,0xffffffff);
  FUN_0040cc00(param_1 + 0x54,0,0xffffffff);
  FUN_005faad0(*(undefined4 *)(param_1 + 0x6c),1,local_84);
  uVar5 = 0xffffffff;
  pcVar12 = &DAT_006b3f70;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar1 != '\0');
  iVar3 = FUN_004251b0(0,*(undefined4 *)(param_1 + 0x18),&DAT_006b3f70,~uVar5 - 1);
  if (iVar3 != 0) {
    puVar7 = *(undefined1 **)(param_1 + 0x14);
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &DAT_0064a3b4;
    }
    FUN_005e4140(&DAT_006a91c4,puVar7);
  }
  uVar5 = 0xffffffff;
  pcVar12 = &DAT_006b3f70;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar1 != '\0');
  iVar3 = FUN_004251b0(0,*(undefined4 *)(param_1 + 8),&DAT_006b3f70,~uVar5 - 1);
  if (iVar3 != 0) {
    puVar7 = *(undefined1 **)(param_1 + 4);
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &DAT_0064a3b4;
    }
    FUN_005e4140(s__s__d___006b15f0,puVar7,*(undefined4 *)(param_1 + 0x20));
  }
  if ((param_2 < 1000) || (0x416 < param_2)) {
    if ((param_2 < 0x7d1) || (0x7d5 < param_2)) {
      pcVar12 = s_Warning_W_006b15f8;
    }
    else {
      pcVar12 = s_Fatal_Error_F_006b1604;
    }
  }
  else {
    pcVar12 = s_Error_C_006b1614;
  }
  FUN_005e4140(pcVar12);
  FUN_005e4140(&DAT_006b15ec,param_2);
  uVar5 = 0xffffffff;
  pcVar12 = &DAT_006b3f70;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar1 != '\0');
  iVar3 = FUN_004251b0(0,*(undefined4 *)(param_1 + 0x5c),&DAT_006b3f70,~uVar5 - 1);
  if (iVar3 != 0) {
    puVar7 = *(undefined1 **)(param_1 + 0x58);
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &DAT_0064a3b4;
    }
    FUN_005e4140(&DAT_006b15e8,puVar7);
  }
  uVar5 = 0xffffffff;
  pcVar12 = &DAT_006b3f70;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar1 != '\0');
  iVar3 = FUN_004251b0(0,*(undefined4 *)(param_1 + 0x2c),&DAT_006b3f70,~uVar5 - 1);
  if (iVar3 != 0) {
    puVar7 = *(undefined1 **)(param_1 + 0x28);
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &DAT_0064a3b4;
    }
    FUN_005e4140(&DAT_006b15e8,puVar7);
  }
  uVar5 = 0xffffffff;
  pcVar12 = &DAT_006b3f70;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar1 != '\0');
  uVar2 = *(uint *)(param_1 + 0x4c);
  uVar6 = ~uVar5 - 1;
  uVar5 = uVar2;
  if (uVar6 <= uVar2) {
    uVar5 = uVar6;
  }
  bVar10 = false;
  iVar3 = 0;
  bVar11 = true;
  pbVar8 = *(byte **)(param_1 + 0x48);
  pbVar9 = &DAT_006b3f70;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    bVar10 = *pbVar8 < *pbVar9;
    bVar11 = *pbVar8 == *pbVar9;
    pbVar8 = pbVar8 + 1;
    pbVar9 = pbVar9 + 1;
  } while (bVar11);
  if (!bVar11) {
    iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
  }
  if (((iVar3 != 0) || (uVar2 < uVar6)) || (uVar2 != uVar6)) {
    puVar7 = *(undefined1 **)(param_1 + 0x48);
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &DAT_0064a3b4;
    }
    FUN_005e4140(&DAT_006b15e4,puVar7);
  }
  puVar7 = *(undefined1 **)(param_3 + 4);
  if (puVar7 == (undefined1 *)0x0) {
    puVar7 = &DAT_0064a3b4;
  }
  FUN_005e4140(&DAT_006a91c4,puVar7);
  if ((100 < *(int *)(param_1 + 0x74)) && ((param_2 < 0x7d1 || (0x7d5 < param_2)))) {
    FUN_005fa520(param_1,0x7d1,s_Error_count_exceeds_100__quittin_006b15c0);
  }
  local_4 = 0xc;
  FUN_004040a0(1);
  local_4 = CONCAT31(local_4._1_3_,0xb);
  FUN_004040a0(1);
  if (iStack_3c != 0) {
    cVar1 = *(char *)(iStack_3c + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iStack_3c + -1));
    }
    else {
      *(char *)(iStack_3c + -1) = cVar1 + -1;
    }
  }
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  if (iStack_4c != 0) {
    cVar1 = *(char *)(iStack_4c + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iStack_4c + -1));
    }
    else {
      *(char *)(iStack_4c + -1) = cVar1 + -1;
    }
  }
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  if (iStack_5c != 0) {
    cVar1 = *(char *)(iStack_5c + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iStack_5c + -1));
    }
    else {
      *(char *)(iStack_5c + -1) = cVar1 + -1;
    }
  }
  iStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  if (iStack_6c != 0) {
    cVar1 = *(char *)(iStack_6c + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iStack_6c + -1));
    }
    else {
      *(char *)(iStack_6c + -1) = cVar1 + -1;
    }
  }
  iStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  if (iStack_80 != 0) {
    cVar1 = *(char *)(iStack_80 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(iStack_80 + -1) = cVar1 + -1;
      ExceptionList = pvStack_c;
      return;
    }
    FUN_005fe5f0(iStack_80 + -1);
  }
  ExceptionList = pvStack_c;
  return;
}

