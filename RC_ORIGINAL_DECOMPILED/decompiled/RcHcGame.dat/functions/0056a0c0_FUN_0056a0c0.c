/*
 * FUN_0056a0c0 at 0056a0c0
 * undefined FUN_0056a0c0(void)
 * Address ranges: 0056a0c0-0056a2a6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x0056a1e4) */
/* WARNING: Removing unreachable block (ram,0x0056a200) */
/* WARNING: Removing unreachable block (ram,0x0056a202) */

undefined4 * FUN_0056a0c0(undefined4 *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  char *pcVar5;
  float fVar6;
  int local_34 [2];
  undefined1 local_2c [32];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006405ef;
  pvStack_c = ExceptionList;
  local_34[1] = 0;
  iVar2 = DAT_006b915c;
  ExceptionList = &pvStack_c;
  if (DAT_006b915c == 0) {
    ExceptionList = &pvStack_c;
    iVar2 = FUN_004bc480();
  }
  if (*(int *)(iVar2 + 0x3a4) == 0) {
    local_2c[0] = (undefined1)param_2;
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
  if ((local_34[0] != 0) &&
     (iVar2 = FUN_0060a6f2(*(undefined4 *)(local_34[0] + 0x360),0,&CAdamPlayer::RTTI_Type_Descriptor
                           ,&CRCPlayer::RTTI_Type_Descriptor,0), iVar2 != 0)) {
    iVar2 = *(int *)(param_2 + 4);
    if ((iVar2 == 0) ||
       (((*(int *)(param_2 + 8) - iVar2) / 0x18 != 1 || (*(int *)(iVar2 + 8) != 1)))) {
      fVar6 = 0.0;
    }
    else {
      fVar6 = (float)*(double *)(iVar2 + 0x10);
    }
    FUN_00481b20(fVar6);
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

