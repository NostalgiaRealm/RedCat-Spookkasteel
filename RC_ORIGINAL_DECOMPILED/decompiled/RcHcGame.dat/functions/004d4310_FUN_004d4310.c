/*
 * FUN_004d4310 at 004d4310
 * undefined FUN_004d4310(void)
 * Address ranges: 004d4310-004d45be
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004d4310(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006317f0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_006995e4,0x10f);
  local_4 = 0;
  iVar2 = *(int *)(param_1[0x5a] + 0x34);
  if ((iVar2 < 1) || (param_1[0x5d] < iVar2)) {
    iVar2 = param_1[0x5d];
    param_1[0x5d] = iVar2 + 1;
    iVar3 = *(int *)(param_1[0x5a] + 0x38);
    if ((iVar2 + 1 < iVar3) && (-1 < iVar3)) {
      if (*(char *)((int)param_1 + 0xa9) != '\0') {
        if (param_2 == 0) {
          puVar8 = &DAT_006920fc;
          puVar7 = &DAT_006920fc;
        }
        else {
          puVar8 = *(undefined1 **)(param_2 + 0x70);
          if (puVar8 == (undefined1 *)0x0) {
            puVar8 = &DAT_0064a3b4;
          }
          puVar7 = &DAT_0064a3b4;
          if (*(undefined1 **)(param_2 + 0x60) != (undefined1 *)0x0) {
            puVar7 = *(undefined1 **)(param_2 + 0x60);
          }
        }
        puVar6 = &DAT_0064a3b4;
        if ((undefined1 *)param_1[0x1c] != (undefined1 *)0x0) {
          puVar6 = (undefined1 *)param_1[0x1c];
        }
        puVar4 = (undefined1 *)param_1[0x18];
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0064a3b4;
        }
        FUN_0060a613(param_1,puVar4,puVar6,puVar7,puVar8);
        uVar5 = FUN_0060b060();
        uVar5 = FUN_005ae390(local_1c,s__s__s___s__IGNORES__MinTriggerTi_00692064,uVar5);
        local_4._0_1_ = 2;
        FUN_005aff00(uVar5);
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_004040a0(1);
      }
    }
    else {
      if (*(char *)((int)param_1 + 0xa9) != '\0') {
        if (param_2 == 0) {
          puVar8 = &DAT_006920fc;
          puVar7 = &DAT_006920fc;
        }
        else {
          puVar8 = *(undefined1 **)(param_2 + 0x70);
          if (puVar8 == (undefined1 *)0x0) {
            puVar8 = &DAT_0064a3b4;
          }
          puVar7 = &DAT_0064a3b4;
          if (*(undefined1 **)(param_2 + 0x60) != (undefined1 *)0x0) {
            puVar7 = *(undefined1 **)(param_2 + 0x60);
          }
        }
        puVar6 = (undefined1 *)param_1[0x1c];
        if (puVar6 == (undefined1 *)0x0) {
          puVar6 = &DAT_0064a3b4;
        }
        puVar4 = (undefined1 *)param_1[0x18];
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0064a3b4;
        }
        FUN_0060a613(param_1,puVar4,puVar6,puVar7,puVar8);
        uVar5 = FUN_0060b060();
        uVar5 = FUN_005ae390(local_1c,s__s__s___s__is_TRIGGERED_on_comma_00692034,uVar5);
        local_4._0_1_ = 1;
        FUN_005aff00(uVar5);
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_004040a0(1);
      }
      (**(code **)(*param_1 + 100))();
      (**(code **)(*param_1 + 0x6c))();
    }
  }
  else if (*(char *)((int)param_1 + 0xa9) != '\0') {
    if (param_2 == 0) {
      puVar8 = &DAT_006920fc;
      puVar7 = &DAT_006920fc;
    }
    else {
      puVar8 = *(undefined1 **)(param_2 + 0x70);
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = &DAT_0064a3b4;
      }
      puVar7 = &DAT_0064a3b4;
      if (*(undefined1 **)(param_2 + 0x60) != (undefined1 *)0x0) {
        puVar7 = *(undefined1 **)(param_2 + 0x60);
      }
    }
    puVar6 = (undefined1 *)param_1[0x1c];
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_0064a3b4;
    }
    puVar4 = (undefined1 *)param_1[0x18];
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0064a3b4;
    }
    FUN_0060a613(param_1,puVar4,puVar6,puVar7,puVar8);
    uVar5 = FUN_0060b060();
    uVar5 = FUN_005ae390(local_1c,s__s__s___s__IGNORES__MaxTriggerTi_006920b0,uVar5);
    local_4 = CONCAT31(local_4._1_3_,3);
    FUN_005aff00(uVar5);
    if (local_18 != 0) {
      cVar1 = *(char *)(local_18 + -1);
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        *(char *)(local_18 + -1) = cVar1 + -1;
        local_18 = 0;
        local_14 = 0;
        local_10 = 0;
        goto LAB_004d4593;
      }
      FUN_005fe5f0((char *)(local_18 + -1));
    }
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
  }
LAB_004d4593:
  local_4 = 0xffffffff;
  FUN_005ae770();
  ExceptionList = local_c;
  return;
}

