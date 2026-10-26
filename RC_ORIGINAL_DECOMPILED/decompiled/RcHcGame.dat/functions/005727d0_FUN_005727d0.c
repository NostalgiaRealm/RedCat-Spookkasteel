/*
 * FUN_005727d0 at 005727d0
 * undefined FUN_005727d0(void)
 * Address ranges: 005727d0-0057297e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005727d0(undefined1 param_1)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  char *pcVar4;
  int local_34 [2];
  undefined1 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 local_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00641238;
  pvStack_c = ExceptionList;
  iVar2 = DAT_006c8de0;
  ExceptionList = &pvStack_c;
  if (DAT_006c8de0 == 0) {
    ExceptionList = &pvStack_c;
    iVar2 = FUN_0055b280();
  }
  if (*(int *)(iVar2 + 0xd8) == 0) {
    local_1c = param_1;
    FUN_004040a0();
    iVar2 = -1;
    pcVar4 = &DAT_006b3f70;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70);
    local_4 = 0;
    pcVar3 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,0x188)
    ;
    (*pcVar3)();
    local_4 = 0xffffffff;
    FUN_004040a0();
  }
  FUN_0050d730(local_34);
  local_4 = 1;
  if (local_34[0] == 0) {
    uStack_2c = param_1;
    iVar2 = -1;
    iStack_28 = 0;
    pcVar4 = &DAT_006b3f70;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uStack_24 = 0;
    uStack_20 = 0;
    FUN_004040f0(&DAT_006b3f70);
    local_4._0_1_ = 2;
    pcVar3 = (code *)FUN_005a07f0(s_bmp_IsNotNull____006a47bc,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a47d0,0x171);
    (*pcVar3)();
    local_4 = CONCAT31(local_4._1_3_,1);
    if (iStack_28 != 0) {
      cVar1 = *(char *)(iStack_28 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0();
      }
      else {
        *(char *)(iStack_28 + -1) = cVar1 + -1;
      }
    }
    iStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
  }
  if (local_34[0] != 0) {
    *(int *)(local_34[0] + 0x14) = *(int *)(local_34[0] + 0x14) + 1;
  }
  FUN_00573170();
  local_4 = 0xffffffff;
  if ((local_34[0] != 0) &&
     (iVar2 = *(int *)(local_34[0] + 0x14) + -1, *(int *)(local_34[0] + 0x14) = iVar2, iVar2 == 0))
  {
    FUN_005abfc0();
  }
  ExceptionList = pvStack_c;
  return;
}

