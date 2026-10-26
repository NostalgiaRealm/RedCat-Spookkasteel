/*
 * FUN_004fd4d0 at 004fd4d0
 * undefined FUN_004fd4d0(void)
 * Address ranges: 004fd4d0-004fd62c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_004fd4d0(int param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int iStack_20;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00635698;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(int *)(param_1 + 0x14) == 0) {
    local_1c[0] = param_3._0_1_;
    uVar4 = 0xffffffff;
    local_18 = 0;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    local_14 = 0;
    local_10 = 0;
    ExceptionList = &pvStack_c;
    FUN_004040f0(&DAT_006b3f70,~uVar4 - 1);
    local_4 = 0;
    pcVar2 = (code *)FUN_005a07f0(s_m_Func_0069522c,s___AdamSource_DaviSortedList_h_00690798,0xb9,
                                  local_1c);
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
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
  }
  if ((*(int *)(param_1 + 4) == 0) ||
     (iVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2, iVar5 == 0)) {
    *param_3 = '\0';
    iVar5 = 0;
  }
  else {
    iVar8 = *(int *)(param_1 + 0x10);
    iStack_20 = 0;
    *param_3 = '\0';
    iVar8 = (-(uint)(iVar8 != 0) & 0xfffffffe) + 2;
    iVar5 = iVar5 + -1;
    do {
      iVar6 = (iVar5 + iStack_20) / 2;
      iVar3 = (**(code **)(param_1 + 0x14))(param_2,*(int *)(param_1 + 4) + iVar6 * 4);
      if (iVar3 == 1) {
        *param_3 = '\x01';
      }
      else if (iVar3 == iVar8) {
        iStack_20 = iVar6 + 1;
      }
      else {
        iVar5 = iVar6 + -1;
      }
    } while ((*param_3 == '\0') && (iStack_20 <= iVar5));
    if ((*param_3 != '\0') || (iVar5 = iVar6 + 1, iVar3 != iVar8)) {
      iVar5 = iVar6;
    }
  }
  ExceptionList = pvStack_c;
  return iVar5;
}

