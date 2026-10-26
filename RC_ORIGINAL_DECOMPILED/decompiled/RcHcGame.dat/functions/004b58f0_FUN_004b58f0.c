/*
 * FUN_004b58f0 at 004b58f0
 * undefined FUN_004b58f0(void)
 * Address ranges: 004b58f0-004b5bd1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004b58f0(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 *puVar3;
  int iVar4;
  code *pcVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  undefined1 uStack00000010;
  uint local_34;
  void *pvStack_30;
  undefined1 local_2c [4];
  undefined4 *local_28;
  undefined1 auStack_1c [4];
  undefined4 *puStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062ecea;
  pvStack_c = ExceptionList;
  local_34 = 0;
  ExceptionList = &pvStack_c;
  if (_uStack00000010 != (int *)0x0) {
    puVar3 = *(undefined1 **)(param_1 + 0x54);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0064a3b4;
    }
    ExceptionList = &pvStack_c;
    iVar4 = FUN_004251b0(0,_uStack00000010[0x19],puVar3,*(undefined4 *)(param_1 + 0x58));
    if (iVar4 == 0) goto LAB_004b59d6;
  }
  local_2c[0] = uStack00000010;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar11 = &DAT_006b3f70;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  uVar9 = ~uVar9 - 1;
  cVar2 = FUN_00401940(uVar9,1);
  if (cVar2 != '\0') {
    puVar6 = (undefined4 *)&DAT_006b3f70;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *local_28 = *puVar6;
      puVar6 = puVar6 + 1;
      local_28 = local_28 + 1;
    }
    for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined1 *)local_28 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      local_28 = (undefined4 *)((int)local_28 + 1);
    }
    FUN_00404190(uVar9);
  }
  local_4 = 0;
  pcVar5 = (code *)FUN_005a07f0(s_go____0____go_>GetName____m_Game_006961d8,
                                s_D__Work_RCHorror_AdamSource_Adam_00696fe0,0x22,local_2c);
  (*pcVar5)();
  local_4 = 0xffffffff;
  FUN_004040a0(1);
LAB_004b59d6:
  if (_uStack00000010 != (int *)0x0) {
    puVar6 = (undefined4 *)(**(code **)(*_uStack00000010 + 0x48))(local_2c);
    *(undefined4 *)(param_1 + 0x60) = *puVar6;
    *(undefined4 *)(param_1 + 100) = puVar6[1];
    *(undefined4 *)(param_1 + 0x68) = puVar6[2];
    pvStack_30 = operator_new(0x1e0);
    local_4 = 1;
    if (pvStack_30 == (void *)0x0) {
      iVar4 = 0;
    }
    else {
      uVar7 = FUN_005033f0(local_2c,s_GeneratorCell_00696fc4,s_EffectSpark_00696fd4);
      local_34 = 1;
      local_4 = CONCAT31(local_4._1_3_,2);
      iVar4 = FUN_004b5ce0(uVar7,*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100),
                           *(undefined4 *)(param_1 + 0x68));
    }
    local_4 = 0xffffffff;
    if ((local_34 & 1) != 0) {
      FUN_004040a0(1);
    }
    FUN_00502350(1);
    *(undefined4 *)(iVar4 + 0x120) = 1000;
    *(undefined4 *)(iVar4 + 0x124) = 0xffffffff;
    *(undefined4 *)(iVar4 + 0x128) = 0x3f800000;
    *(undefined1 *)(iVar4 + 300) = 1;
    *(undefined4 *)(iVar4 + 0x1c0) = *(undefined4 *)(param_1 + 0x84);
    uVar7 = *(undefined4 *)(param_1 + 0x7c);
    uVar1 = *(undefined4 *)(param_1 + 0x80);
    *(undefined4 *)(iVar4 + 0x1c4) = *(undefined4 *)(param_1 + 0x78);
    *(undefined4 *)(iVar4 + 0x1a4) = 0x3dcccccd;
    *(undefined4 *)(iVar4 + 0x1c8) = uVar7;
    *(undefined4 *)(iVar4 + 0x1a8) = 0x3e051eb8;
    *(undefined4 *)(iVar4 + 0x1cc) = uVar1;
    piVar8 = (int *)FUN_004042e0(&local_34);
    local_4 = 5;
    if (*piVar8 == 0) {
      auStack_1c[0] = uStack00000010;
      FUN_004040a0(0);
      uVar9 = 0xffffffff;
      pcVar11 = &DAT_006b3f70;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9 - 1;
      cVar2 = FUN_00401940(uVar9,1);
      if (cVar2 != '\0') {
        puVar6 = (undefined4 *)&DAT_006b3f70;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *puStack_18 = *puVar6;
          puVar6 = puVar6 + 1;
          puStack_18 = puStack_18 + 1;
        }
        for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined1 *)puStack_18 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puStack_18 = (undefined4 *)((int)puStack_18 + 1);
        }
        FUN_00404190(uVar9);
      }
      local_4._0_1_ = 6;
      pcVar5 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    auStack_1c);
      (*pcVar5)();
      local_4 = CONCAT31(local_4._1_3_,5);
      FUN_004040a0(1);
    }
    FUN_004f41c0(iVar4);
    local_4 = 0xffffffff;
    if ((local_34 != 0) &&
       (iVar4 = *(int *)(local_34 + 0x14) + -1, *(int *)(local_34 + 0x14) = iVar4, iVar4 == 0)) {
      FUN_005abfc0(0);
    }
  }
  ExceptionList = pvStack_c;
  return;
}

