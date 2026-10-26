/*
 * FUN_00503c30 at 00503c30
 * undefined FUN_00503c30(void)
 * Address ranges: 00503c30-00503eb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __thiscall FUN_00503c30(int *param_1,int param_2,int param_3,undefined1 *param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 local_44 [4];
  int local_40;
  undefined1 local_34 [20];
  undefined1 *local_20;
  undefined1 *local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00635d40;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb0;
  ExceptionList = &local_10;
  local_18 = param_1;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_0069d990,0x34a);
  local_8 = 1;
  if ((*(char *)((int)param_1 + 0xa9) != '\0') ||
     ((param_3 != 0 && (*(char *)(param_3 + 0xa9) != '\0')))) {
    FUN_00516470();
    iVar3 = FUN_004337e0();
    if (iVar3 != 0) {
      if (param_3 == 0) {
        local_1c = &DAT_006920fc;
        puVar6 = &DAT_006920fc;
      }
      else {
        FUN_0060a613(param_3);
        local_1c = (undefined1 *)FUN_0060b060();
        puVar6 = &DAT_0064a3b4;
        if (*(undefined1 **)(param_3 + 0x60) != (undefined1 *)0x0) {
          puVar6 = *(undefined1 **)(param_3 + 0x60);
        }
      }
      local_20 = &DAT_0064a3b4;
      if ((undefined1 *)param_1[0x18] != (undefined1 *)0x0) {
        local_20 = (undefined1 *)param_1[0x18];
      }
      iVar3 = FUN_005b18a0(local_44,param_4);
      local_8._0_1_ = 2;
      puVar8 = &DAT_0064a3b4;
      if (*(undefined1 **)(iVar3 + 4) != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)(iVar3 + 4);
      }
      puVar7 = *(undefined1 **)(param_2 + 4);
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &DAT_0064a3b4;
      }
      FUN_0060a613(local_18);
      uVar4 = FUN_0060b060();
      uVar4 = FUN_005ae390(local_34,s_Sending_Command__s___s___to__s___0069ddf0,puVar7,puVar8,
                           local_20,uVar4,puVar6,local_1c);
      local_8._0_1_ = 3;
      FUN_005aff00(uVar4);
      local_8._0_1_ = 2;
      FUN_004040a0(1);
      local_8 = CONCAT31(local_8._1_3_,1);
      FUN_004040a0(1);
      param_1 = local_18;
    }
  }
  cVar2 = (**(code **)(*param_1 + 0x18))(param_2,param_3,param_4);
  if ((cVar2 == '\0') &&
     ((*(char *)((int)param_1 + 0xa9) != '\0' ||
      ((param_3 != 0 && (*(char *)(param_3 + 0xa9) != '\0')))))) {
    iVar5 = FUN_00516470();
    iVar3 = *(int *)(iVar5 + 100);
    if (iVar3 == -0x80000000) {
      puVar6 = *(undefined1 **)(iVar5 + 0x18);
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &DAT_0064a3b4;
      }
      iVar3 = FUN_0060af10(puVar6);
      *(int *)(iVar5 + 100) = iVar3;
    }
    if (iVar3 != 0) {
      if (param_3 == 0) {
        param_4 = &DAT_006920fc;
        puVar6 = &DAT_006920fc;
      }
      else {
        FUN_0060a613(param_3);
        param_4 = (undefined1 *)FUN_0060b060();
        puVar6 = &DAT_0064a3b4;
        if (*(undefined1 **)(param_3 + 0x60) != (undefined1 *)0x0) {
          puVar6 = *(undefined1 **)(param_3 + 0x60);
        }
      }
      puVar8 = &DAT_0064a3b4;
      if ((undefined1 *)local_18[0x18] != (undefined1 *)0x0) {
        puVar8 = (undefined1 *)local_18[0x18];
      }
      puVar7 = *(undefined1 **)(param_2 + 4);
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &DAT_0064a3b4;
      }
      FUN_0060a613(local_18);
      uVar4 = FUN_0060b060();
      uVar4 = FUN_005ae390(local_44,s_UNKNOWN_Command__s_sent_to__s____0069ddc0,puVar7,puVar8,uVar4,
                           puVar6,param_4);
      local_8 = CONCAT31(local_8._1_3_,4);
      FUN_005aff00(uVar4);
      if (local_40 != 0) {
        cVar1 = *(char *)(local_40 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0((char *)(local_40 + -1));
        }
        else {
          *(char *)(local_40 + -1) = cVar1 + -1;
        }
      }
    }
  }
  local_8 = 0xffffffff;
  FUN_005ae770();
  ExceptionList = local_10;
  return cVar2;
}

