/*
 * FUN_0049ca60 at 0049ca60
 * undefined FUN_0049ca60(void)
 * Address ranges: 0049ca60-0049cc92
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0049ca60(int *param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  char *pcVar7;
  undefined1 local_2c [16];
  undefined1 local_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0062ca20;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if ((char)param_1[0x46] == '\0') {
    ExceptionList = &pvStack_c;
    if (param_1[0x45] == 0) {
      ExceptionList = &pvStack_c;
      FUN_0049c2a0();
    }
    if (param_2 == 0) {
      local_2c[0] = (undefined1)param_2;
      FUN_004040a0(0);
      uVar5 = 0xffffffff;
      pcVar7 = &DAT_006b3f70;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
      local_4._0_1_ = 1;
      pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_2c);
      (*pcVar2)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    if (*(int *)(param_2 + 0x5c) == 0) {
      local_1c[0] = (undefined1)param_2;
      FUN_004040a0(0);
      uVar5 = 0xffffffff;
      pcVar7 = &DAT_006b3f70;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
      local_4._0_1_ = 2;
      pcVar2 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,s___AdamSource_AdamSubLevel_h_0068e1b8
                                    ,0x144,local_1c);
      (*pcVar2)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    iVar3 = FUN_005b9970(*(undefined4 *)(param_2 + 0x5c),param_1[0x45],param_1[0x53],0);
    if (iVar3 == 0) {
      puVar6 = (undefined1 *)param_1[0x18];
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &DAT_0064a3b4;
      }
      uVar4 = FUN_005ae390(local_1c,s_geWorld_AddActor___fails_for_act_00694ce8,puVar6);
      local_4 = CONCAT31(local_4._1_3_,3);
      pcVar2 = (code *)FUN_005a07f0(s_result_00691bc0,s_D__Work_RCHorror_AdamSource_Adam_00694c70,
                                    0x1d6,uVar4);
      (*pcVar2)();
      if (iStack_18 != 0) {
        cVar1 = *(char *)(iStack_18 + -1);
        if ((cVar1 != '\0') && (cVar1 != -1)) {
          *(char *)(iStack_18 + -1) = cVar1 + -1;
          iStack_18 = 0;
          uStack_14 = 0;
          uStack_10 = 0;
          goto LAB_0049cc62;
        }
        FUN_005fe5f0((char *)(iStack_18 + -1));
      }
      iStack_18 = 0;
      uStack_14 = 0;
      uStack_10 = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x46) = 1;
      FUN_0049b8d0();
      FUN_005b50a0(param_1 + 0x5a);
      FUN_005b5270(param_1[0x54],param_1[0x55],param_1[0x56]);
      (**(code **)(*param_1 + 0x60))();
      FUN_0049c5a0();
    }
  }
LAB_0049cc62:
  local_4 = 0xffffffff;
  if ((param_2 != 0) &&
     (iVar3 = *(int *)(param_2 + 0x14) + -1, *(int *)(param_2 + 0x14) = iVar3, iVar3 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = pvStack_c;
  return;
}

