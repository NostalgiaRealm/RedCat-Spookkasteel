/*
 * FUN_00587420 at 00587420
 * undefined FUN_00587420(void)
 * Address ranges: 00587420-00587544
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00587420(int param_1,int param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00642ce8;
  pvStack_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &pvStack_c;
  if (param_2 != 0) {
    ExceptionList = &pvStack_c;
    if ((param_2 != *(int *)(param_1 + 0x34)) &&
       (ExceptionList = &pvStack_c, *(int *)(param_1 + 0x34) != 0)) {
      ExceptionList = &pvStack_c;
      pcVar1 = (code *)FUN_005a07f0(s__a_OldSubLevel__m_SubLevel_______006a603c,
                                    s_D__Work_RCHorror_AdamSource_Adam_006a5ef4,0xb9,param_1 + 0x24)
      ;
      (*pcVar1)();
    }
    iVar3 = *(int *)(param_1 + 0x34);
    local_4._0_1_ = 2;
    if (iVar3 != 0) {
      iVar2 = *(int *)(iVar3 + 0x14) + -1;
      *(int *)(iVar3 + 0x14) = iVar2;
      if (iVar2 == 0) {
        FUN_005abfc0(0);
      }
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    local_4 = CONCAT31(local_4._1_3_,1);
  }
  if (param_3 != 0) {
    if ((*(int *)(param_1 + 0x34) != 0) && (*(int *)(param_1 + 0x34) != param_3)) {
      pcVar1 = (code *)FUN_005a07f0(s_m_SubLevel_IsNull______m_SubLeve_006a6008,
                                    s_D__Work_RCHorror_AdamSource_Adam_006a5ef4,0xbf,param_1 + 0x24)
      ;
      (*pcVar1)();
    }
    iVar3 = *(int *)(param_1 + 0x34);
    if (iVar3 != param_3) {
      if ((iVar3 != 0) &&
         (iVar2 = *(int *)(iVar3 + 0x14) + -1, *(int *)(iVar3 + 0x14) = iVar2, iVar2 == 0)) {
        FUN_005abfc0(0);
      }
      *(int *)(param_1 + 0x34) = param_3;
      *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
    }
  }
  local_4 = local_4 & 0xffffff00;
  if ((param_2 != 0) &&
     (iVar3 = *(int *)(param_2 + 0x14) + -1, *(int *)(param_2 + 0x14) = iVar3, iVar3 == 0)) {
    FUN_005abfc0(0);
  }
  local_4 = 0xffffffff;
  if ((param_3 != 0) &&
     (iVar3 = *(int *)(param_3 + 0x14) + -1, *(int *)(param_3 + 0x14) = iVar3, iVar3 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = pvStack_c;
  return;
}

