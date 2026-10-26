/*
 * FUN_0045beb0 at 0045beb0
 * undefined FUN_0045beb0(void)
 * Address ranges: 0045beb0-0045c251
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0045beb0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 local_61;
  int local_60;
  undefined1 auStack_5c [4];
  undefined4 *puStack_58;
  uint uStack_54;
  undefined4 uStack_50;
  undefined1 local_4c [4];
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00627088;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar3 = (int *)FUN_004042e0(&local_60);
  local_4 = 0;
  if (*piVar3 == 0) {
    FUN_00409810(&DAT_006b3f70,&local_61);
    local_4._0_1_ = 1;
    pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_4c);
    (*pcVar4)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  local_4 = 0xffffffff;
  iVar1 = *(int *)(*piVar3 + 0x360);
  if (local_60 != 0) {
    FUN_004098d0();
  }
  switch(param_1[0x5b]) {
  case 0:
    if ((*(int *)(param_1[0x5a] + 0x34) < 1) || (param_1[0x5d] < *(int *)(param_1[0x5a] + 0x34))) {
      if ((iVar1 == 0) || (cVar2 = FUN_004d6890(param_1), cVar2 == '\0')) {
        (**(code **)(*param_1 + 0x60))();
      }
      else {
        if (*(char *)((int)param_1 + 0xa9) != '\0') {
          puVar5 = (undefined1 *)param_1[0x18];
          if (puVar5 == (undefined1 *)0x0) {
            puVar5 = &DAT_0064a3b4;
          }
          uVar6 = FUN_005ae390(auStack_3c,s_Trigger__s_state_changing_to__TS_00691f4c,puVar5,
                               param_1[0x5d] + 1,*(undefined4 *)(param_1[0x5a] + 0x38));
          local_4 = 2;
          FUN_005aff00(uVar6);
          local_4 = 0xffffffff;
          FUN_004040a0(1);
        }
        iVar1 = param_1[0x5d];
        param_1[0x5d] = iVar1 + 1;
        if ((*(int *)(param_1[0x5a] + 0x38) <= iVar1 + 1) || (*(int *)(param_1[0x5a] + 0x38) < 0)) {
          param_1[0x5b] = 1;
          (**(code **)(*param_1 + 100))();
        }
      }
    }
    break;
  case 1:
    if (*(char *)((int)param_1 + 0xa9) != '\0') {
      puVar5 = (undefined1 *)param_1[0x18];
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_0064a3b4;
      }
      uVar6 = FUN_005ae390(auStack_2c,s_Trigger__s_state_changing_to__TS_00691f20,puVar5);
      local_4 = 3;
      FUN_005aff00(uVar6);
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    param_1[0x5b] = 2;
    (**(code **)(*param_1 + 0x68))(param_3);
    break;
  case 2:
    if ((iVar1 == 0) || (cVar2 = FUN_004d6890(param_1), cVar2 == '\0')) {
      if (*(char *)((int)param_1 + 0xa9) != '\0') {
        puVar5 = (undefined1 *)param_1[0x18];
        if (puVar5 == (undefined1 *)0x0) {
          puVar5 = &DAT_0064a3b4;
        }
        uVar6 = FUN_005ae390(auStack_1c,s_Trigger__s_state_changing_to__TS_00691eec,puVar5);
        local_4 = 4;
        FUN_005aff00(uVar6);
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      param_1[0x5b] = 3;
      (**(code **)(*param_1 + 0x6c))();
    }
    else {
      (**(code **)(*param_1 + 0x68))(param_3);
    }
    break;
  case 3:
    if (*(char *)((int)param_1 + 0xa9) != '\0') {
      puVar5 = (undefined1 *)param_1[0x18];
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_0064a3b4;
      }
      uVar6 = FUN_005ae390(local_4c,s_Trigger_state_changing_to__TS_NO_00691ebc,puVar5);
      local_4 = 5;
      FUN_005aff00(uVar6);
      local_4 = 0xffffffff;
      if (iStack_48 != 0) {
        cVar2 = *(char *)(iStack_48 + -1);
        if ((cVar2 == '\0') || (cVar2 == -1)) {
          FUN_005fe5f0((char *)(iStack_48 + -1));
        }
        else {
          *(char *)(iStack_48 + -1) = cVar2 + -1;
        }
      }
      iStack_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
    }
    param_1[0x5b] = 0;
    (**(code **)(*param_1 + 0x60))();
    break;
  default:
    auStack_5c[0] = (undefined1)param_3;
    uVar7 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    uVar7 = ~uVar7 - 1;
    puStack_58 = (undefined4 *)0x0;
    uStack_54 = 0;
    uStack_50 = 0;
    cVar2 = FUN_00401940(uVar7,1);
    if (cVar2 != '\0') {
      puVar9 = (undefined4 *)&DAT_006b3f70;
      puVar11 = puStack_58;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
      for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
      *(undefined1 *)((int)puStack_58 + uVar7) = 0;
      uStack_54 = uVar7;
    }
    local_4 = 6;
    pcVar4 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_RCSource_RcCame_00691e88,0x17c
                                  ,auStack_5c);
    (*pcVar4)();
    if (puStack_58 != (undefined4 *)0x0) {
      cVar2 = *(char *)((int)puStack_58 + -1);
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_005fe5f0((char *)((int)puStack_58 + -1));
      }
      else {
        *(char *)((int)puStack_58 + -1) = cVar2 + -1;
      }
    }
  }
  ExceptionList = pvStack_c;
  return;
}

