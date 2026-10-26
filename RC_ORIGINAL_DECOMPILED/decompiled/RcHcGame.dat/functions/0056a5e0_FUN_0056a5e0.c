/*
 * FUN_0056a5e0 at 0056a5e0
 * undefined FUN_0056a5e0(void)
 * Address ranges: 0056a5e0-0056a717
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_0056a5e0(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  uint uVar5;
  char *pcVar6;
  int local_24 [2];
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006406b7;
  pvStack_c = ExceptionList;
  local_24[1] = 0;
  iVar2 = DAT_006b915c;
  ExceptionList = &pvStack_c;
  if (DAT_006b915c == 0) {
    ExceptionList = &pvStack_c;
    iVar2 = FUN_004bc480();
  }
  if (*(int *)(iVar2 + 0x3a4) == 0) {
    local_1c[0] = param_1._0_1_;
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
    pcVar3 = (code *)FUN_005a07f0(s_m_Game_0068e584,s___AdamSource_AdamApplication_h_0068e58c,0x130,
                                  local_1c);
    (*pcVar3)();
    local_4 = local_4 & 0xffffff00;
    FUN_004040a0(1);
  }
  FUN_00453d20(local_24);
  local_4 = 2;
  if ((local_24[0] != 0) &&
     (iVar2 = FUN_0060a6f2(*(undefined4 *)(local_24[0] + 0x360),0,&CAdamPlayer::RTTI_Type_Descriptor
                           ,&CRCPlayer::RTTI_Type_Descriptor,0), iVar2 != 0)) {
    piVar4 = (int *)FUN_00431170();
    (**(code **)(*piVar4 + 0x30))();
  }
  local_24[1] = 1;
  *param_1 = &PTR_FUN_0064f00c;
  param_1[2] = 0;
  local_4 = local_4 & 0xffffff00;
  if ((local_24[0] != 0) &&
     (iVar2 = *(int *)(local_24[0] + 0x14) + -1, *(int *)(local_24[0] + 0x14) = iVar2, iVar2 == 0))
  {
    FUN_005abfc0(0);
  }
  ExceptionList = pvStack_c;
  return param_1;
}

