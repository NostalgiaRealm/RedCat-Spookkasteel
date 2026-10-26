/*
 * FUN_0050d350 at 0050d350
 * undefined FUN_0050d350(void)
 * Address ranges: 0050d350-0050d4ce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_0050d350(int param_1,int *param_2,undefined1 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  int local_2c;
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00636cb7;
  pvStack_c = ExceptionList;
  local_2c = 0;
  local_4 = 1;
  ExceptionList = &pvStack_c;
  uVar3 = FUN_005a1d60();
  if (*(int *)(param_1 + 0x28) == 0) {
    local_1c[0] = param_3;
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
    local_4._0_1_ = 2;
    pcVar4 = (code *)FUN_005a07f0(s_m_Func_0069522c,s___AdamSource_DaviSortedList_h_00690798,0xb9,
                                  local_1c);
    (*pcVar4)();
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004040a0(1);
  }
  iVar9 = 0;
  if ((*(int *)(param_1 + 0x18) != 0) &&
     ((*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) & 0xfffffffcU) != 0)) {
    iVar2 = *(int *)(param_1 + 0x24);
    _param_3 = 0;
    iVar5 = FUN_0044e4c0();
    iVar5 = iVar5 + -1;
    do {
      iVar8 = (_param_3 + iVar5) / 2;
      iVar6 = (**(code **)(param_1 + 0x28))(uVar3,*(int *)(param_1 + 0x18) + iVar8 * 4);
      iVar9 = local_2c;
      if (iVar6 == 1) {
        iVar5 = *(int *)(*(int *)(param_1 + 0x18) + iVar8 * 4);
        if (iVar5 != 0) {
          *(int *)(iVar5 + 0x14) = *(int *)(iVar5 + 0x14) + 1;
          iVar9 = iVar5;
        }
        break;
      }
      if (iVar6 == (-(uint)(iVar2 != 0) & 0xfffffffe) + 2) {
        _param_3 = iVar8 + 1;
      }
      else {
        iVar5 = iVar8 + -1;
      }
    } while (_param_3 <= iVar5);
  }
  *param_2 = iVar9;
  if (iVar9 != 0) {
    *(int *)(iVar9 + 0x14) = *(int *)(iVar9 + 0x14) + 1;
  }
  local_4 = local_4 & 0xffffff00;
  if ((iVar9 != 0) &&
     (iVar5 = *(int *)(iVar9 + 0x14) + -1, *(int *)(iVar9 + 0x14) = iVar5, iVar5 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = pvStack_c;
  return param_2;
}

