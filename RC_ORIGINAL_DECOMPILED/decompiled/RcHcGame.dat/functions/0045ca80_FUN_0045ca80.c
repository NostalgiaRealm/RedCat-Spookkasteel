/*
 * FUN_0045ca80 at 0045ca80
 * undefined FUN_0045ca80(void)
 * Address ranges: 0045ca80-0045cd38
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0045ca80(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 local_2c [4];
  int local_28;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00627178;
  local_c = ExceptionList;
  iVar2 = *(int *)(param_1[0x5a] + 0x34);
  if ((iVar2 < 1) || (param_1[0x5d] < iVar2)) {
    iVar2 = param_1[0x5d];
    ExceptionList = &local_c;
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
        local_4 = 1;
        FUN_005aff00(uVar5);
        local_4 = 0xffffffff;
        FUN_004040a0(1);
        ExceptionList = local_c;
        return;
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
        uVar5 = FUN_005ae390(local_1c,s__s__s___s__is_TRIGGERED_on_comma_00692034,uVar5);
        local_4 = 0;
        FUN_005aff00(uVar5);
        local_4 = 0xffffffff;
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
    ExceptionList = &local_c;
    FUN_0060a613(param_1,puVar4,puVar6,puVar7,puVar8);
    uVar5 = FUN_0060b060();
    uVar5 = FUN_005ae390(local_2c,s__s__s___s__IGNORES__MaxTriggerTi_006920b0,uVar5);
    local_4 = 2;
    FUN_005aff00(uVar5);
    if (local_28 != 0) {
      cVar1 = *(char *)(local_28 + -1);
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        *(char *)(local_28 + -1) = cVar1 + -1;
        ExceptionList = local_c;
        return;
      }
      FUN_005fe5f0((char *)(local_28 + -1));
      ExceptionList = local_c;
      return;
    }
  }
  ExceptionList = local_c;
  return;
}

