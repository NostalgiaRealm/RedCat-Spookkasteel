/*
 * FUN_004b7f90 at 004b7f90
 * undefined FUN_004b7f90(void)
 * Address ranges: 004b7f90-004b8153
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_004b7f90(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  code *pcVar5;
  int *piVar6;
  uint uVar7;
  char *pcVar8;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062f014;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004b8dd0(param_2,param_3,param_8,param_9);
  param_1[0x5c] = param_6;
  param_1[0x5d] = param_7;
  param_1[0x5e] = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  *(undefined1 *)(param_1 + 0x5f) = *param_4;
  FUN_004040a0(0);
  FUN_0040cc00(param_4,0,0xffffffff);
  local_4._0_1_ = 2;
  *param_1 = &PTR_FUN_0064ecf4;
  iVar2 = FUN_00519ef0();
  iVar4 = *(int *)(iVar2 + 100);
  if (iVar4 == -0x80000000) {
    puVar3 = *(undefined1 **)(iVar2 + 0x18);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0064a3b4;
    }
    iVar4 = FUN_0060af10(puVar3);
    *(int *)(iVar2 + 100) = iVar4;
  }
  if (iVar4 != 0) {
    uVar7 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    local_1c[0] = (undefined1)param_9;
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
    local_4._0_1_ = 3;
    pcVar5 = (code *)FUN_005a07f0(s____bool__GET_GLOBAL_SETTING_Debu_0069698c,
                                  s_D__Work_RCHorror_AdamSource_Adam_006971b0,0x19,local_1c);
    (*pcVar5)();
    local_4._0_1_ = 2;
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
  piVar6 = (int *)FUN_004b09f0(&param_9,param_5,0x18,0,1);
  iVar4 = param_1[0x5e];
  local_4._0_1_ = 4;
  if (iVar4 != *piVar6) {
    if ((iVar4 != 0) &&
       (iVar2 = *(int *)(iVar4 + 0x14) + -1, *(int *)(iVar4 + 0x14) = iVar2, iVar2 == 0)) {
      FUN_005abfc0(0);
    }
    iVar4 = *piVar6;
    param_1[0x5e] = iVar4;
    if (iVar4 != 0) {
      *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
    }
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  if ((param_9 != 0) &&
     (iVar4 = *(int *)(param_9 + 0x14) + -1, *(int *)(param_9 + 0x14) = iVar4, iVar4 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = pvStack_c;
  return param_1;
}

