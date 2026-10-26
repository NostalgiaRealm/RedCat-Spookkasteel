/*
 * FUN_0056e520 at 0056e520
 * undefined FUN_0056e520(void)
 * Address ranges: 0056e520-0056e6ae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_0056e520(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  char *pcVar5;
  int local_34 [2];
  undefined1 local_2c [16];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00640dbf;
  pvStack_c = ExceptionList;
  local_34[1] = 0;
  iVar2 = DAT_006b915c;
  ExceptionList = &pvStack_c;
  if (DAT_006b915c == 0) {
    ExceptionList = &pvStack_c;
    iVar2 = FUN_004bc480();
  }
  if (*(int *)(iVar2 + 0x3a4) == 0) {
    local_2c[0] = param_1._0_1_;
    FUN_004040a0(0);
    uVar4 = 0xffffffff;
    pcVar5 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar4 - 1);
    local_4 = 1;
    pcVar3 = (code *)FUN_005a07f0(s_m_Game_0068e584,s___AdamSource_AdamApplication_h_0068e58c,0x130,
                                  local_2c);
    (*pcVar3)();
    local_4 = local_4 & 0xffffff00;
    FUN_004040a0(1);
  }
  FUN_00453d20(local_34);
  local_4 = 2;
  if ((local_34[0] != 0) && (iVar2 = *(int *)(local_34[0] + 0x360), iVar2 != 0)) {
    if (*(int *)(iVar2 + 0x1f0) == 0) {
      auStack_1c[0] = param_1._0_1_;
      FUN_004040a0(0);
      uVar4 = 0xffffffff;
      pcVar5 = &DAT_006b3f70;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar4 - 1);
      local_4._0_1_ = 4;
      pcVar3 = (code *)FUN_005a07f0(s_m_GameProperties____0_0068f970,
                                    s_D__Work_RCHorror_AdamSource_Adam_0069888c,0x15b,auStack_1c);
      (*pcVar3)();
      local_4 = CONCAT31(local_4._1_3_,2);
      FUN_004040a0(1);
    }
    (**(code **)(**(int **)(iVar2 + 0x1f0) + 0x34))();
  }
  local_34[1] = 1;
  *param_1 = &PTR_FUN_0064f00c;
  param_1[2] = 0;
  local_4 = local_4 & 0xffffff00;
  if ((local_34[0] != 0) &&
     (iVar2 = *(int *)(local_34[0] + 0x14) + -1, *(int *)(local_34[0] + 0x14) = iVar2, iVar2 == 0))
  {
    FUN_005abfc0(0);
  }
  ExceptionList = pvStack_c;
  return param_1;
}

