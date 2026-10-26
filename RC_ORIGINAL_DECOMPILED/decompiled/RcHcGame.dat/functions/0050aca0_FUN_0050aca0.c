/*
 * FUN_0050aca0 at 0050aca0
 * undefined FUN_0050aca0(void)
 * Address ranges: 0050aca0-0050ae9d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0050aca0(int param_1,undefined1 param_2)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined1 *puVar6;
  char *pcVar7;
  int iStack_34;
  int local_30;
  undefined1 local_2c;
  undefined1 uStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006367f0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(int *)(param_1 + 0x50) != 0) {
    ExceptionList = &pvStack_c;
    if (*(int *)(param_1 + 0x50) == 0) {
      local_2c = param_2;
      ExceptionList = &pvStack_c;
      FUN_004040a0();
      iVar5 = -1;
      pcVar7 = &DAT_006b3f70;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70);
      local_4 = 0;
      pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
      (*pcVar2)();
      local_4 = 0xffffffff;
      FUN_004040a0();
    }
    iVar5 = FUN_005a1d60();
    iVar3 = FUN_00556560();
    puVar6 = *(undefined1 **)(iVar5 + 4);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_0064a3b4;
    }
    iVar5 = FUN_004251b0(0,*(undefined4 *)(iVar3 + 8),puVar6);
    if (iVar5 == 0) {
      ExceptionList = pvStack_c;
      return;
    }
  }
  local_30 = 0;
  local_4 = 1;
  iVar5 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    iVar5 = FUN_0055b280();
  }
  if (*(int *)(iVar5 + 0xd8) == 0) {
    uStack_1c = param_2;
    FUN_004040a0();
    iVar5 = -1;
    pcVar7 = &DAT_006b3f70;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70);
    local_4._0_1_ = 2;
    pcVar2 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,0x188)
    ;
    (*pcVar2)();
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004040a0();
  }
  piVar4 = (int *)FUN_0050d730(&iStack_34);
  iVar5 = *piVar4;
  iVar3 = 0;
  if ((iVar5 != 0) && (iVar3 = iVar5, local_30 = iVar5, iVar5 != 0)) {
    *(int *)(iVar5 + 0x14) = *(int *)(iVar5 + 0x14) + 1;
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  if (iStack_34 != 0) {
    iVar5 = *(int *)(iStack_34 + 0x14) + -1;
    *(int *)(iStack_34 + 0x14) = iVar5;
    if (iVar5 == 0) {
      FUN_005abfc0();
    }
    iStack_34 = 0;
  }
  if (iVar3 != 0) {
    *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + 1;
  }
  FUN_0050aea0();
  local_4 = 0xffffffff;
  if ((iVar3 != 0) &&
     (iVar5 = *(int *)(iVar3 + 0x14) + -1, *(int *)(iVar3 + 0x14) = iVar5, iVar5 == 0)) {
    FUN_005abfc0();
  }
  ExceptionList = pvStack_c;
  return;
}

