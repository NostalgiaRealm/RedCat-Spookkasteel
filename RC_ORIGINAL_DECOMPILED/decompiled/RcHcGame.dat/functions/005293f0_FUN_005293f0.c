/*
 * FUN_005293f0 at 005293f0
 * undefined FUN_005293f0(void)
 * Address ranges: 005293f0-00529561
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_005293f0(int param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  int local_2c;
  int local_28;
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00639b87;
  pvStack_c = ExceptionList;
  local_2c = 0;
  local_4 = 1;
  ExceptionList = &pvStack_c;
  if (*(int *)(param_1 + 0x38) == 0) {
    local_1c[0] = (undefined1)param_3;
    ExceptionList = &pvStack_c;
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
    local_4._0_1_ = 2;
    pcVar3 = (code *)FUN_005a07f0(s_m_Func_0069522c,s___AdamSource_DaviSortedList_h_00690798,0xb9,
                                  local_1c);
    (*pcVar3)();
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004040a0(1);
  }
  iVar8 = 0;
  if ((*(int *)(param_1 + 0x28) != 0) &&
     ((*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28) & 0xfffffffcU) != 0)) {
    iVar2 = *(int *)(param_1 + 0x34);
    local_28 = 0;
    iVar4 = FUN_0044e4c0();
    iVar4 = iVar4 + -1;
    do {
      iVar7 = (local_28 + iVar4) / 2;
      iVar5 = (**(code **)(param_1 + 0x38))(param_3,*(int *)(param_1 + 0x28) + iVar7 * 4);
      iVar8 = local_2c;
      if (iVar5 == 1) {
        iVar4 = *(int *)(*(int *)(param_1 + 0x28) + iVar7 * 4);
        if (iVar4 != 0) {
          *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
          iVar8 = iVar4;
        }
        break;
      }
      if (iVar5 == (-(uint)(iVar2 != 0) & 0xfffffffe) + 2) {
        local_28 = iVar7 + 1;
      }
      else {
        iVar4 = iVar7 + -1;
      }
    } while (local_28 <= iVar4);
  }
  *param_2 = iVar8;
  if (iVar8 != 0) {
    *(int *)(iVar8 + 0x14) = *(int *)(iVar8 + 0x14) + 1;
  }
  local_4 = local_4 & 0xffffff00;
  if ((iVar8 != 0) &&
     (iVar4 = *(int *)(iVar8 + 0x14) + -1, *(int *)(iVar8 + 0x14) = iVar4, iVar4 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = pvStack_c;
  return param_2;
}

