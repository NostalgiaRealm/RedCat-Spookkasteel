/*
 * FUN_0050bd80 at 0050bd80
 * undefined FUN_0050bd80(void)
 * Address ranges: 0050bd80-0050bf80
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_0050bd80(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,int param_10)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined1 local_40 [4];
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int iStack_2c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00636a28;
  pvStack_c = ExceptionList;
  local_4._0_1_ = 0;
  local_4._1_3_ = 0;
  ExceptionList = &pvStack_c;
  if (param_3 == 0) {
    local_40[0] = (undefined1)param_5;
    iVar4 = -1;
    local_3c = 0;
    pcVar5 = &DAT_006b3f70;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    local_38 = 0;
    local_34 = 0;
    ExceptionList = &pvStack_c;
    FUN_004040f0(&DAT_006b3f70);
    local_4._0_1_ = 1;
    pcVar2 = (code *)FUN_005a07f0(s_a_TextureBitmap_0069e81c,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069e554,0x14f);
    (*pcVar2)();
    local_4._0_1_ = 0;
    if (local_3c != 0) {
      cVar1 = *(char *)(local_3c + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0();
      }
      else {
        *(char *)(local_3c + -1) = cVar1 + -1;
      }
    }
  }
  iVar4 = FUN_005c3350();
  if (iVar4 == 0) {
    FUN_005ae390(local_40);
    local_4._0_1_ = 2;
    pcVar2 = (code *)FUN_005a07f0(s_result_00691bc0,s_D__Work_RCHorror_AdamSource_Adam_0069e554,
                                  0x154);
    (*pcVar2)();
    local_4._0_1_ = 0;
    if (local_3c != 0) {
      cVar1 = *(char *)(local_3c + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0();
      }
      else {
        *(char *)(local_3c + -1) = cVar1 + -1;
      }
    }
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
  }
  param_6 = *(int *)(param_1 + 0x54) - param_6;
  iVar4 = local_30 - param_4;
  if (param_6 <= local_30 - param_4) {
    iVar4 = param_6;
  }
  iVar3 = *(int *)(param_1 + 0x58) - param_7;
  iVar6 = iStack_2c - param_5;
  if (iVar3 <= iStack_2c - param_5) {
    iVar6 = iVar3;
  }
  if ((param_8 != 0) && (param_8 < iVar4)) {
    iVar4 = param_8;
  }
  if ((param_9 != 0) && (param_9 < iVar6)) {
    iVar6 = param_9;
  }
  if ((param_10 != 0) && ((iVar4 < local_30 || (iVar6 < iStack_2c)))) {
    if (param_2 != 0) {
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    }
    FUN_004b9de0();
  }
  FUN_005c3480(param_7,param_3,param_4,param_5,iVar4);
  local_4 = 0xffffffff;
  if (param_2 != 0) {
    iVar4 = *(int *)(param_2 + 0x14) + -1;
    *(int *)(param_2 + 0x14) = iVar4;
    if (iVar4 == 0) {
      FUN_005abfc0();
    }
  }
  ExceptionList = pvStack_c;
  return 1;
}

