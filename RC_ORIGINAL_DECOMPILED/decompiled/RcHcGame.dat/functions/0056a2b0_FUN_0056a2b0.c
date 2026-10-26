/*
 * FUN_0056a2b0 at 0056a2b0
 * undefined FUN_0056a2b0(void)
 * Address ranges: 0056a2b0-0056a499
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_0056a2b0(undefined4 *param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  undefined1 local_3c [16];
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00640637;
  pvStack_c = ExceptionList;
  iVar3 = *(int *)(param_2 + 4);
  if (((iVar3 == 0) || ((*(int *)(param_2 + 8) - iVar3) / 0x18 != 1)) ||
     (ExceptionList = &pvStack_c, *(int *)(iVar3 + 8) != 3)) {
    local_3c[0] = (undefined1)param_2;
    ExceptionList = &pvStack_c;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar6 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
    local_4 = 1;
    pcVar2 = (code *)FUN_005a07f0(s__args_size______1______args_0__I_006a4258,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a4280,0x58,local_3c);
    (*pcVar2)();
    local_4 = local_4 & 0xffffff00;
    FUN_004040a0(1);
  }
  iVar3 = DAT_006b915c;
  if (DAT_006b915c == 0) {
    iVar3 = FUN_004bc480();
  }
  if (*(int *)(iVar3 + 0x3a4) == 0) {
    auStack_2c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar6 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
    local_4 = 2;
    pcVar2 = (code *)FUN_005a07f0(s_m_Game_0068e584,s___AdamSource_AdamApplication_h_0068e58c,0x130,
                                  auStack_2c);
    (*pcVar2)();
    local_4 = local_4 & 0xffffff00;
    FUN_004040a0(1);
  }
  FUN_00453d20(&param_2);
  local_4 = 3;
  if ((param_2 != 0) &&
     (iVar3 = FUN_0060a6f2(*(undefined4 *)(param_2 + 0x360),0,&CAdamPlayer::RTTI_Type_Descriptor,
                           &CRCPlayer::RTTI_Type_Descriptor,0), iVar3 != 0)) {
    uVar4 = FUN_0045da10(auStack_1c);
    local_4._0_1_ = 5;
    FUN_00481dd0(uVar4);
    local_4 = CONCAT31(local_4._1_3_,3);
    FUN_004040a0(1);
  }
  *param_1 = &PTR_FUN_0064f00c;
  param_1[2] = 0;
  local_4 = local_4 & 0xffffff00;
  if ((param_2 != 0) &&
     (iVar3 = *(int *)(param_2 + 0x14) + -1, *(int *)(param_2 + 0x14) = iVar3, iVar3 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = pvStack_c;
  return param_1;
}

