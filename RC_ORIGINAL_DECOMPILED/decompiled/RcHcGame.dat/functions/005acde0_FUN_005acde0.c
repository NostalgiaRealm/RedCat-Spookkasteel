/*
 * FUN_005acde0 at 005acde0
 * undefined FUN_005acde0(void)
 * Address ranges: 005acde0-005acff8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_005acde0(int *param_1,byte *param_2)

{
  byte bVar1;
  char cVar2;
  code *pcVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  char *pcVar11;
  bool bVar12;
  undefined1 auStack_2c [4];
  byte *pbStack_28;
  uint uStack_24;
  undefined1 local_1c [4];
  undefined4 *local_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645e00;
  pvStack_c = ExceptionList;
  uVar7 = 0xffffffff;
  pbVar4 = param_2;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    bVar1 = *pbVar4;
    pbVar4 = pbVar4 + 1;
  } while (bVar1 != 0);
  ExceptionList = &pvStack_c;
  if (0x200 < ~uVar7 - 1) {
    local_1c[0] = param_2._0_1_;
    ExceptionList = &pvStack_c;
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
    uVar7 = ~uVar7 - 1;
    cVar2 = FUN_00401940(uVar7,1);
    if (cVar2 != '\0') {
      puVar9 = (undefined4 *)&DAT_006b3f70;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *local_18 = *puVar9;
        puVar9 = puVar9 + 1;
        local_18 = local_18 + 1;
      }
      for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)local_18 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        local_18 = (undefined4 *)((int)local_18 + 1);
      }
      FUN_00404190(uVar7);
    }
    local_4 = 0;
    pcVar3 = (code *)FUN_005a07f0(s_strlen__a_String___<__MAX_LENGTH_006a8f3c,
                                  s_D__Work_RCHorror_AdamSource_Davi_006a8edc,0xef,local_1c);
    (*pcVar3)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  if ((char)param_1[0x11] != '\0') {
    pbVar4 = (byte *)param_1[6];
    pbVar5 = param_2;
    if (pbVar4 == (byte *)0x0) {
      pbVar4 = &DAT_0064a3b4;
    }
    do {
      bVar1 = *pbVar5;
      bVar12 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_005acee5:
        iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
        goto LAB_005aceea;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar12 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_005acee5;
      pbVar4 = pbVar4 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar6 = 0;
LAB_005aceea:
    if (iVar6 == 0) {
      ExceptionList = pvStack_c;
      return 0;
    }
  }
  auStack_2c[0] = param_2._0_1_;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pbVar4 = param_2;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    bVar1 = *pbVar4;
    pbVar4 = pbVar4 + 1;
  } while (bVar1 != 0);
  uVar7 = ~uVar7 - 1;
  cVar2 = FUN_00401940(uVar7,1);
  if (cVar2 != '\0') {
    pbVar4 = pbStack_28;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pbVar4 = *(undefined4 *)param_2;
      param_2 = param_2 + 4;
      pbVar4 = pbVar4 + 4;
    }
    for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pbVar4 = *param_2;
      param_2 = param_2 + 1;
      pbVar4 = pbVar4 + 1;
    }
    pbStack_28[uVar7] = 0;
    uStack_24 = uVar7;
  }
  uVar10 = 1;
  local_4 = 1;
  cVar2 = (**(code **)(*param_1 + 8))(auStack_2c);
  if (cVar2 == '\0') {
    local_4 = 0xffffffff;
    FUN_004040a0(1);
    uVar10 = 4;
  }
  else {
    FUN_0040cc00(auStack_2c,0,0xffffffff);
    param_1[0x18] = 0;
    param_1[0x19] = -0x80000000;
    *(undefined1 *)((int)param_1 + 0x45) = 1;
    *(undefined1 *)(param_1 + 0x11) = 1;
    FUN_005ad3d0(0);
    cVar2 = (**(code **)(*param_1 + 4))();
    if (cVar2 == '\0') {
      uVar10 = 3;
    }
    if (pbStack_28 != (byte *)0x0) {
      bVar1 = pbStack_28[-1];
      if ((bVar1 == 0) || (bVar1 == 0xff)) {
        FUN_005fe5f0(pbStack_28 + -1);
      }
      else {
        pbStack_28[-1] = bVar1 - 1;
      }
    }
  }
  ExceptionList = pvStack_c;
  return uVar10;
}

