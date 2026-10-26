/*
 * FUN_004fce60 at 004fce60
 * undefined FUN_004fce60(void)
 * Address ranges: 004fce60-004fd02a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004fce60(int param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int iStack_30;
  undefined1 local_2c [16];
  undefined1 local_1c [4];
  int iStack_18;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006355e8;
  local_c = ExceptionList;
  iVar7 = 0;
  if (*(int *)(param_2 + 8) != 0) {
    ExceptionList = &local_c;
    FUN_00503800(local_1c,param_2);
    local_4 = 0;
    if (*(int *)(param_1 + 0x398) == 0) {
      FUN_00409810(&DAT_006b3f70,&param_2);
      local_4._0_1_ = 1;
      pcVar2 = (code *)FUN_005a07f0(s_m_Func_0069522c,s___AdamSource_DaviSortedList_h_00690798,0xb9,
                                    local_2c);
      (*pcVar2)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    iVar3 = FUN_00442d80();
    if (iVar3 != 0) {
      iStack_30 = 0;
      iVar6 = (-(uint)(*(int *)(param_1 + 0x394) != 0) & 0xfffffffe) + 2;
      iVar3 = FUN_00442d80();
      iVar3 = iVar3 + -1;
      do {
        iVar7 = (iStack_30 + iVar3) / 2;
        iVar4 = (**(code **)(param_1 + 0x398))(local_1c,iVar7 * 0x10 + *(int *)(param_1 + 0x388));
        if (iVar4 == 1) goto LAB_004fcfe1;
        if (iVar4 == iVar6) {
          iStack_30 = iVar7 + 1;
        }
        else {
          iVar3 = iVar7 + -1;
        }
      } while (iStack_30 <= iVar3);
      if (iVar4 == iVar6) {
        iVar7 = iVar7 + 1;
      }
    }
    if (*(char *)(param_1 + 0x39c) != '\0') {
      local_2c[0] = (undefined1)param_2;
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
      local_4._0_1_ = 2;
      pcVar2 = (code *)FUN_005a07f0(s__GetIsLocked___00695180,
                                    s___AdamSource_DaviSortedList_h_00690798,0x59,local_2c);
      (*pcVar2)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    FUN_00442bf0(iVar7 * 0x10 + *(int *)(param_1 + 0x388),local_1c);
LAB_004fcfe1:
    if (iStack_18 != 0) {
      cVar1 = *(char *)(iStack_18 + -1);
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        *(char *)(iStack_18 + -1) = cVar1 + -1;
        ExceptionList = local_c;
        return;
      }
      FUN_005fe5f0(iStack_18 + -1);
    }
  }
  ExceptionList = local_c;
  return;
}

