/*
 * FUN_0050d140 at 0050d140
 * undefined FUN_0050d140(void)
 * Address ranges: 0050d140-0050d34a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_0050d140(int param_1,int *param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  undefined1 uStack_29;
  int local_28 [3];
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00636c7f;
  pvStack_c = ExceptionList;
  local_28[1] = 0;
  ExceptionList = &pvStack_c;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_0069e8f0,0x60);
  local_28[0] = 0;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  piVar2 = (int *)FUN_0050b9d0(&param_3,param_3);
  local_4._0_1_ = 3;
  if (local_28[0] != *piVar2) {
    if ((local_28[0] != 0) &&
       (iVar6 = *(int *)(local_28[0] + 0x14) + -1, *(int *)(local_28[0] + 0x14) = iVar6, iVar6 == 0)
       ) {
      FUN_005abfc0(0);
    }
    local_28[0] = *piVar2;
    if (local_28[0] != 0) {
      *(int *)(local_28[0] + 0x14) = *(int *)(local_28[0] + 0x14) + 1;
    }
  }
  local_4._0_1_ = 2;
  if ((param_3 != 0) &&
     (iVar6 = *(int *)(param_3 + 0x14) + -1, *(int *)(param_3 + 0x14) = iVar6, iVar6 == 0)) {
    FUN_005abfc0(0);
  }
  if (local_28[0] != 0) {
    uVar3 = FUN_00556560();
    if (*(char *)(param_1 + 0x2c) != '\0') {
      local_1c[0] = (char)param_3;
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
      local_4._0_1_ = 5;
      pcVar4 = (code *)FUN_005a07f0(s__GetIsLocked___00695180,
                                    s___AdamSource_DaviSortedList_h_00690798,0x49,local_1c);
      (*pcVar4)();
      local_4._0_1_ = 2;
      FUN_004040a0(1);
    }
    iVar6 = FUN_004fd890(uVar3,&param_3);
    if ((char)param_3 != '\0') {
      FUN_00409810(&DAT_006b3f70,&uStack_29);
      local_4._0_1_ = 6;
      pcVar4 = (code *)FUN_005a07f0(s___exist_00695178,s___AdamSource_DaviSortedList_h_00690798,0x4b
                                    ,local_1c);
      (*pcVar4)();
      local_4._0_1_ = 2;
      FUN_004040a0(1);
    }
    FUN_004fdb90(*(int *)(param_1 + 0x18) + iVar6 * 4,local_28);
  }
  *param_2 = local_28[0];
  if (local_28[0] != 0) {
    *(int *)(local_28[0] + 0x14) = *(int *)(local_28[0] + 0x14) + 1;
  }
  local_28[1] = 1;
  local_4._0_1_ = 1;
  if (local_28[0] != 0) {
    iVar6 = *(int *)(local_28[0] + 0x14) + -1;
    *(int *)(local_28[0] + 0x14) = iVar6;
    if (iVar6 == 0) {
      FUN_005abfc0(0);
    }
    local_28[0] = 0;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005ae770();
  ExceptionList = pvStack_c;
  return param_2;
}

