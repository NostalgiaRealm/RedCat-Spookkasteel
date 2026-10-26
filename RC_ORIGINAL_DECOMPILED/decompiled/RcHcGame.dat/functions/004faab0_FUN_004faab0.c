/*
 * FUN_004faab0 at 004faab0
 * undefined FUN_004faab0(void)
 * Address ranges: 004faab0-004fae5d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x004fad19) */

void __fastcall FUN_004faab0(int param_1)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 *puVar9;
  int *local_44;
  undefined4 *puStack_40;
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [4];
  undefined1 *puStack_28;
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006352c0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_0069c628,0x6b6);
  puVar9 = *(undefined4 **)(param_1 + 0x360);
  local_4 = 0;
  if (puVar9 != (undefined4 *)0x0) {
    FUN_004f4e10(puVar9);
    (**(code **)*puVar9)(1);
  }
  FUN_004f4940(&local_44);
  local_4._0_1_ = 1;
  if (local_44 == (int *)0x0) {
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
    local_4._0_1_ = 2;
    pcVar2 = (code *)FUN_005a07f0(s_m_List_00699eec,s___AdamSource_DaviLinkedList_h_00699ef4,0x51,
                                  auStack_3c);
    (*pcVar2)();
    local_4._0_1_ = 1;
    FUN_004040a0(1);
  }
  puStack_40 = (undefined4 *)*local_44;
  if (puStack_40 != (undefined4 *)0x0) {
    puVar9 = (undefined4 *)*puStack_40;
    while (puVar9 != (undefined4 *)0x0) {
      FUN_004040a0(0);
      local_4._0_1_ = 3;
      FUN_0040cc00(puVar9 + 0x17,0,0xffffffff);
      FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_0069c628,0x6d1);
      local_4 = CONCAT31(local_4._1_3_,4);
      iVar3 = FUN_00516d70();
      iVar5 = *(int *)(iVar3 + 100);
      if (iVar5 == -0x80000000) {
        puVar4 = *(undefined1 **)(iVar3 + 0x18);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0064a3b4;
        }
        iVar5 = FUN_0060af10(puVar4);
        *(int *)(iVar3 + 100) = iVar5;
      }
      if (iVar5 != 0) {
        puVar4 = puStack_28;
        if (puStack_28 == (undefined1 *)0x0) {
          puVar4 = &DAT_0064a3b4;
        }
        uVar6 = FUN_005ae390(auStack_1c,s_CAdamSubLevel__Exit_____remove_g_0069d480,puVar4);
        local_4._0_1_ = 5;
        FUN_005aff00(uVar6);
        local_4 = CONCAT31(local_4._1_3_,4);
        FUN_004040a0(1);
      }
      FUN_004f4e10(puVar9);
      if (puVar9 != (undefined4 *)0x0) {
        (**(code **)*puVar9)(1);
      }
      if (local_44 == (int *)0x0) {
        FUN_004040a0(0);
        uVar7 = 0xffffffff;
        pcVar8 = &DAT_006b3f70;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
        local_4._0_1_ = 6;
        pcVar2 = (code *)FUN_005a07f0(s_m_List_00699eec,s___AdamSource_DaviLinkedList_h_00699ef4,
                                      0x51,auStack_3c);
        (*pcVar2)();
        local_4 = CONCAT31(local_4._1_3_,4);
        FUN_004040a0(1);
      }
      puStack_40 = (undefined4 *)*local_44;
      if (puStack_40 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)0x0;
      }
      else {
        puVar9 = (undefined4 *)*puStack_40;
      }
      local_4._0_1_ = 3;
      FUN_005ae770();
      local_4._0_1_ = 1;
      FUN_004040a0(1);
    }
  }
  uVar6 = *(undefined4 *)(param_1 + 0x410);
  FUN_004fdd20(uVar6,*(undefined4 *)(param_1 + 0x414));
  *(undefined4 *)(param_1 + 0x414) = uVar6;
  FUN_004fc360();
  FUN_004f6320();
  if (*(undefined4 **)(param_1 + 0x420) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x420))(1);
  }
  *(undefined4 *)(param_1 + 0x420) = 0;
  *(undefined4 *)(param_1 + 0x3f8) = 0;
  *(undefined4 *)(param_1 + 0x3fc) = 0;
  *(undefined4 *)(param_1 + 0x3f0) = 0;
  *(undefined4 *)(param_1 + 0x3f4) = 0;
  *(undefined4 *)(param_1 + 0x400) = 0;
  *(undefined4 *)(param_1 + 0x404) = 0;
  *(undefined4 *)(param_1 + 0x3e0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3e4) = 0xffffffff;
  *(undefined4 *)(param_1 + 1000) = 0xffffffff;
  iVar5 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    iVar5 = FUN_0055b280();
  }
  if (*(int *)(iVar5 + 0xfc) == 0) {
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
    local_4._0_1_ = 7;
    pcVar2 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,399,
                                  auStack_2c);
    (*pcVar2)();
    local_4._0_1_ = 1;
    FUN_004040a0(1);
  }
  FUN_00550330(0);
  if (*(undefined4 **)(param_1 + 0x41c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x41c))(1);
  }
  *(undefined4 *)(param_1 + 0x41c) = 0;
  local_4 = 0xffffffff;
  FUN_005ae770();
  ExceptionList = pvStack_c;
  return;
}

