/*
 * FUN_004bde80 at 004bde80
 * undefined FUN_004bde80(void)
 * Address ranges: 004bde80-004be12b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004bde80(int param_1,char *param_2)

{
  char cVar1;
  code *pcVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 local_124 [4];
  char *local_120;
  uint local_11c;
  float local_110;
  undefined4 auStack_10c [64];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062fb61;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_006975f0,0x134);
  local_4 = 0;
  *param_2 = '\0';
  cVar1 = FUN_0055b7d0(*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x58),param_2);
  if (cVar1 == '\0') {
    if (*param_2 == '\0') {
      FUN_004040a0(0);
      uVar5 = 0xffffffff;
      pcVar8 = s_Cannot_initialize_engine__00697790;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5 - 1;
      cVar1 = FUN_00401940(uVar5,1);
      if (cVar1 != '\0') {
        pcVar8 = s_Cannot_initialize_engine__00697790;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)local_120 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          local_120 = local_120 + 4;
        }
        for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *local_120 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          local_120 = local_120 + 1;
        }
        FUN_00404190(uVar5);
      }
      local_4._0_1_ = 1;
      pcVar2 = (code *)FUN_005a07f0(s_result_00691bc0,s_D__Work_RCHorror_AdamSource_Adam_006975f0,
                                    0x13f,local_124);
      (*pcVar2)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
  }
  else {
    local_110 = *(float *)(param_1 + 0x38);
    if (local_110 != 1.1754944e-38) {
      FUN_005603d0(local_110);
    }
    if (*(int *)(param_1 + 0x3a4) == 0) {
      FUN_004040a0(0);
      uVar5 = 0xffffffff;
      pcVar8 = &DAT_006b3f70;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5 - 1;
      cVar1 = FUN_00401940(uVar5,1);
      if (cVar1 != '\0') {
        pcVar8 = &DAT_006b3f70;
        pcVar9 = local_120;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar9 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar9 = pcVar9 + 1;
        }
        local_120[uVar5] = '\0';
        local_11c = uVar5;
      }
      local_4._0_1_ = 2;
      pcVar2 = (code *)FUN_005a07f0(s_m_Game__0_006976e4,s_D__Work_RCHorror_AdamSource_Adam_006975f0
                                    ,0x148,local_124);
      (*pcVar2)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    iVar7 = *(int *)(param_1 + 0x3a0);
    iVar4 = *(int *)(iVar7 + 0x578);
    if (iVar4 == -0x80000000) {
      puVar3 = *(undefined1 **)(iVar7 + 0x52c);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_0064a3b4;
      }
      iVar4 = FUN_0060af10(puVar3);
      *(int *)(iVar7 + 0x578) = iVar4;
    }
    if (iVar4 == 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x3a0) + 0x1a0) = 0;
    }
    iVar7 = *(int *)(*(int *)(param_1 + 0x3a0) + 0x198);
    if ((iVar7 == 0) || (iVar7 == 1)) {
      puVar10 = auStack_10c;
      for (iVar7 = 0x40; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
      FUN_0060af1b(auStack_10c,0xff,&DAT_00690818,1);
    }
    else {
      puVar10 = auStack_10c;
      for (iVar7 = 0x40; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
      FUN_0060af1b(auStack_10c,0xff,&DAT_00690818,0);
    }
    FUN_005acdb0(auStack_10c);
  }
  local_4 = 0xffffffff;
  FUN_005ae770();
  ExceptionList = pvStack_c;
  return;
}

