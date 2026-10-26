/*
 * FUN_005a9940 at 005a9940
 * undefined FUN_005a9940(void)
 * Address ranges: 005a9940-005a9b3a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005a9940(int param_1)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 auStack_2c [4];
  undefined4 *puStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645980;
  pvStack_c = ExceptionList;
  if ((param_1 < 0) || (ExceptionList = &pvStack_c, 0xff < param_1)) {
    local_1c[0] = (undefined1)param_1;
    uVar4 = 0xffffffff;
    local_18 = 0;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    local_14 = 0;
    local_10 = 0;
    ExceptionList = &pvStack_c;
    FUN_004040f0(&DAT_006b3f70,~uVar4 - 1);
    local_4 = 0;
    pcVar2 = (code *)FUN_005a07f0(s_a_Key_>__0____a_Key_<_256_006a846c,
                                  s_D__Work_RCHorror_AdamSource_Davi_006a84a8,0x3a8,local_1c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    if (local_18 != 0) {
      cVar1 = *(char *)(local_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(local_18 + -1));
      }
      else {
        *(char *)(local_18 + -1) = cVar1 + -1;
      }
    }
  }
  iVar6 = param_1 * 0xc;
  if (*(int *)(&DAT_006ca028 + iVar6) == 0) {
    switch(param_1) {
    case 0xd:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x2d:
    case 0x2e:
    case 0x6b:
    case 0x6d:
    case 0x6e:
    case 0x6f:
      uVar4 = 2;
      break;
    default:
      uVar4 = 1;
    }
    *(uint *)(&DAT_006ca028 + iVar6) = uVar4;
    if ((uVar4 == 0) || (2 < uVar4)) {
      auStack_2c[0] = (undefined1)param_1;
      uVar4 = 0xffffffff;
      pcVar9 = &DAT_006b3f70;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4 - 1;
      puStack_28 = (undefined4 *)0x0;
      uStack_24 = 0;
      uStack_20 = 0;
      cVar1 = FUN_00401940(uVar4,1);
      if (cVar1 != '\0') {
        puVar7 = (undefined4 *)&DAT_006b3f70;
        puVar10 = puStack_28;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar10 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar10 = puVar10 + 1;
        }
        for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar10 = *(undefined1 *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
        FUN_00404190(uVar4);
      }
      local_4 = 1;
      pcVar2 = (code *)FUN_005a07f0(s_MODULE_DIKLookup__a_Key___m_NrTr_006a8870,
                                    s_D__Work_RCHorror_AdamSource_Davi_006a84a8,0x3b0,auStack_2c);
      (*pcVar2)();
      local_4 = 0xffffffff;
      if (puStack_28 != (undefined4 *)0x0) {
        cVar1 = *(char *)((int)puStack_28 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0((char *)((int)puStack_28 + -1));
        }
        else {
          *(char *)((int)puStack_28 + -1) = cVar1 + -1;
        }
      }
      puStack_28 = (undefined4 *)0x0;
      uStack_24 = 0;
      uStack_20 = 0;
    }
    iVar8 = 0;
    if (0 < *(int *)(&DAT_006ca028 + iVar6)) {
      puVar7 = (undefined4 *)(&DAT_006ca020 + iVar6);
      do {
        uVar3 = FUN_005a8b00(param_1,iVar8);
        *puVar7 = uVar3;
        iVar8 = iVar8 + 1;
        puVar7 = puVar7 + 1;
      } while (iVar8 < *(int *)(&DAT_006ca028 + iVar6));
    }
  }
  ExceptionList = pvStack_c;
  return *(undefined4 *)(&DAT_006ca028 + iVar6);
}

