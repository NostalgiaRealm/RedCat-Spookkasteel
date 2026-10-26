/*
 * FUN_004f20b0 at 004f20b0
 * undefined FUN_004f20b0(void)
 * Address ranges: 004f20b0-004f21cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004f20b0(int param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int local_20;
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00634308;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(int *)(param_1 + 0x40) == 0) {
    local_1c[0] = param_2._0_1_;
    ExceptionList = &pvStack_c;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
    local_4 = 0;
    pcVar3 = (code *)FUN_005a07f0(s_m_Func_0069522c,s___AdamSource_DaviSortedList_h_00690798,0xb9,
                                  local_1c);
    (*pcVar3)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  if ((*(int *)(param_1 + 0x30) != 0) &&
     (iVar6 = *(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x30) >> 2, iVar6 != 0)) {
    iVar2 = *(int *)(param_1 + 0x3c);
    local_20 = 0;
    iVar6 = iVar6 + -1;
    do {
      iVar7 = (local_20 + iVar6) / 2;
      iVar4 = (**(code **)(param_1 + 0x40))(param_3,*(int *)(param_1 + 0x30) + iVar7 * 4);
      if (iVar4 == 1) {
        iVar6 = *(int *)(*(int *)(param_1 + 0x30) + iVar7 * 4);
        *param_2 = iVar6;
        if (iVar6 == 0) {
          ExceptionList = pvStack_c;
          return;
        }
        *(int *)(iVar6 + 0x14) = *(int *)(iVar6 + 0x14) + 1;
        ExceptionList = pvStack_c;
        return;
      }
      if (iVar4 == (-(uint)(iVar2 != 0) & 0xfffffffe) + 2) {
        local_20 = iVar7 + 1;
      }
      else {
        iVar6 = iVar7 + -1;
      }
    } while (local_20 <= iVar6);
  }
  *param_2 = 0;
  ExceptionList = pvStack_c;
  return;
}

