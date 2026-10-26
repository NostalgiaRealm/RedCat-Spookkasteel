/*
 * FUN_004f1100 at 004f1100
 * undefined FUN_004f1100(void)
 * Address ranges: 004f1100-004f1297
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_004f1100(int param_1,undefined4 param_2)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int iStack_30;
  undefined1 auStack_2c [4];
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006341a0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(int *)(param_1 + 0x14) == 0) {
    local_1c[0] = (undefined1)param_2;
    ExceptionList = &pvStack_c;
    FUN_004040a0(0);
    uVar4 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar4 - 1);
    local_4 = 0;
    pcVar2 = (code *)FUN_005a07f0(s_m_Func_0069522c,s___AdamSource_DaviSortedList_h_00690798,0xb9,
                                  local_1c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  if ((*(int *)(param_1 + 4) == 0) ||
     (iVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2, iVar5 == 0)) {
    iVar5 = 0;
  }
  else {
    iStack_30 = 0;
    iVar7 = (-(uint)(*(int *)(param_1 + 0x10) != 0) & 0xfffffffe) + 2;
    iVar5 = iVar5 + -1;
    do {
      iVar6 = (iVar5 + iStack_30) / 2;
      iVar3 = (**(code **)(param_1 + 0x14))(param_2,*(int *)(param_1 + 4) + iVar6 * 4);
      if (iVar3 == 1) goto LAB_004f127d;
      if (iVar3 == iVar7) {
        iStack_30 = iVar6 + 1;
      }
      else {
        iVar5 = iVar6 + -1;
      }
    } while (iStack_30 <= iVar5);
    iVar5 = iVar6 + 1;
    if (iVar3 != iVar7) {
      iVar5 = iVar6;
    }
  }
  auStack_2c[0] = (undefined1)param_2;
  uVar4 = 0xffffffff;
  iStack_28 = 0;
  pcVar8 = &DAT_006b3f70;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uStack_24 = 0;
  uStack_20 = 0;
  FUN_004040f0(&DAT_006b3f70,~uVar4 - 1);
  local_4 = 1;
  pcVar2 = (code *)FUN_005a07f0(s_exist_00695224,s___AdamSource_DaviSortedList_h_00690798,0xae,
                                auStack_2c);
  (*pcVar2)();
  iVar6 = iVar5;
  if (iStack_28 != 0) {
    cVar1 = *(char *)(iStack_28 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iStack_28 + -1));
    }
    else {
      *(char *)(iStack_28 + -1) = cVar1 + -1;
    }
  }
LAB_004f127d:
  ExceptionList = pvStack_c;
  return *(int *)(param_1 + 4) + iVar6 * 4;
}

