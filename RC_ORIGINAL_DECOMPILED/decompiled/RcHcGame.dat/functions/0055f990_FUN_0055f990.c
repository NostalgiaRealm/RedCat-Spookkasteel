/*
 * FUN_0055f990 at 0055f990
 * undefined FUN_0055f990(void)
 * Address ranges: 0055f990-0055fc87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0055f990(uint param_1,uint *param_2,char *param_3)

{
  char cVar1;
  code *pcVar2;
  char *pcVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined1 local_2c [4];
  undefined4 *local_28;
  uint local_24;
  undefined1 auStack_1c [4];
  int iStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063f950;
  pvStack_c = ExceptionList;
  if (((int)param_1 < 0) || (ExceptionList = &pvStack_c, DAT_006c8d98 <= param_1)) {
    local_2c[0] = param_3._0_1_;
    ExceptionList = &pvStack_c;
    FUN_004040a0(0);
    uVar8 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8 - 1;
    cVar1 = FUN_00401940(uVar8,1);
    if (cVar1 != '\0') {
      puVar11 = (undefined4 *)&DAT_006b3f70;
      puVar13 = local_28;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar13 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar13 = puVar13 + 1;
      }
      for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar13 = *(undefined1 *)puVar11;
        puVar11 = (undefined4 *)((int)puVar11 + 1);
        puVar13 = (undefined4 *)((int)puVar13 + 1);
      }
      *(undefined1 *)((int)local_28 + uVar8) = 0;
      local_24 = uVar8;
    }
    local_4 = 0;
    pcVar2 = (code *)FUN_005a07f0(s_a_DriverNr_>__0____a_DriverNr_<_M_006a3380,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x37b,local_2c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  if (param_3 == (char *)0x0) {
    local_2c[0] = param_3._0_1_;
    FUN_004040a0(0);
    uVar8 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8 - 1;
    cVar1 = FUN_00401940(uVar8,1);
    if (cVar1 != '\0') {
      puVar11 = (undefined4 *)&DAT_006b3f70;
      puVar13 = local_28;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar13 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar13 = puVar13 + 1;
      }
      for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar13 = *(undefined1 *)puVar11;
        puVar11 = (undefined4 *)((int)puVar11 + 1);
        puVar13 = (undefined4 *)((int)puVar13 + 1);
      }
      *(undefined1 *)((int)local_28 + uVar8) = 0;
      local_24 = uVar8;
    }
    local_4 = 1;
    pcVar2 = (code *)FUN_005a07f0(s_a_ModeDescription__0_006a3368,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x37c,local_2c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  uVar8 = 0;
  iVar12 = param_1 * 0xb7c;
  if ((&DAT_006ba8f4)[param_1 * 0x2df] != 0) {
    pcVar10 = &DAT_006ba948 + iVar12;
    do {
      pcVar3 = _strstr(pcVar10,param_3);
      if (pcVar3 != (char *)0x0) {
        *param_2 = uVar8;
        iVar4 = FUN_00517430();
        iVar6 = *(int *)(iVar4 + 100);
        if (iVar6 == -0x80000000) {
          puVar5 = *(undefined1 **)(iVar4 + 0x18);
          if (puVar5 == (undefined1 *)0x0) {
            puVar5 = &DAT_0064a3b4;
          }
          iVar6 = FUN_0060af10(puVar5);
          *(int *)(iVar4 + 100) = iVar6;
        }
        if (iVar6 != 0) {
          uVar7 = FUN_005ae390(local_2c,s_CAdamEngine__FindMode_____found_m_006a3328,*param_2,
                               param_3,&DAT_006ba7ec + iVar12);
          local_4 = 2;
          FUN_005aff00(uVar7);
          if (local_28 != (undefined4 *)0x0) {
            cVar1 = *(char *)((int)local_28 + -1);
            if ((cVar1 != '\0') && (cVar1 != -1)) {
              *(char *)((int)local_28 + -1) = cVar1 + -1;
              ExceptionList = pvStack_c;
              return 1;
            }
            FUN_005fe5f0((char *)((int)local_28 + -1));
          }
        }
        ExceptionList = pvStack_c;
        return 1;
      }
      uVar8 = uVar8 + 1;
      pcVar10 = pcVar10 + 0x81;
    } while (uVar8 < (uint)(&DAT_006ba8f4)[param_1 * 0x2df]);
  }
  iVar4 = FUN_00517430();
  iVar6 = *(int *)(iVar4 + 100);
  if (iVar6 == -0x80000000) {
    puVar5 = *(undefined1 **)(iVar4 + 0x18);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_0064a3b4;
    }
    iVar6 = FUN_0060af10(puVar5);
    *(int *)(iVar4 + 100) = iVar6;
  }
  if (iVar6 != 0) {
    uVar7 = FUN_005ae390(auStack_1c,s_CAdamEngine__FindMode_____cannot_006a32e8,param_3,
                         &DAT_006ba7ec + iVar12);
    local_4 = 3;
    FUN_005aff00(uVar7);
    if (iStack_18 != 0) {
      cVar1 = *(char *)(iStack_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(iStack_18 + -1));
      }
      else {
        *(char *)(iStack_18 + -1) = cVar1 + -1;
      }
    }
  }
  *param_2 = 0xffffffff;
  ExceptionList = pvStack_c;
  return 0;
}

