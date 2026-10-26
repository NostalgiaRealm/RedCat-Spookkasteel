/*
 * FUN_0056af10 at 0056af10
 * undefined FUN_0056af10(void)
 * Address ranges: 0056af10-0056b18b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_0056af10(undefined4 *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *unaff_FS_OFFSET;
  int local_34 [2];
  undefined1 auStack_2c [4];
  undefined4 *puStack_28;
  undefined1 local_1c [16];
  undefined4 uStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006407c7;
  uStack_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_c;
  uVar6 = 0;
  local_34[1] = 0;
  iVar2 = DAT_006b915c;
  if (DAT_006b915c == 0) {
    iVar2 = FUN_004bc480();
  }
  if (*(int *)(iVar2 + 0x3a4) == 0) {
    local_1c[0] = (undefined1)param_2;
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
    local_4 = 1;
    pcVar3 = (code *)FUN_005a07f0(s_m_Game_0068e584,s___AdamSource_AdamApplication_h_0068e58c,0x130,
                                  local_1c);
    (*pcVar3)();
    local_4 = local_4 & 0xffffff00;
    FUN_004040a0(1);
  }
  FUN_00453d20(local_34);
  local_4 = 2;
  iVar2 = *(int *)(param_2 + 4);
  if (((iVar2 == 0) || ((*(int *)(param_2 + 8) - iVar2) / 0x18 != 1)) || (*(int *)(iVar2 + 8) != 2))
  {
    auStack_2c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar4 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    cVar1 = FUN_00401940(uVar4,1);
    if (cVar1 != '\0') {
      puVar7 = (undefined4 *)&DAT_006b3f70;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puStack_28 = *puVar7;
        puVar7 = puVar7 + 1;
        puStack_28 = puStack_28 + 1;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puStack_28 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puStack_28 = (undefined4 *)((int)puStack_28 + 1);
      }
      FUN_00404190(uVar4);
    }
    local_4._0_1_ = 3;
    pcVar3 = (code *)FUN_005a07f0(s__args_size______1______args_0__I_006a4340,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a4280,0xfa,auStack_2c);
    (*pcVar3)();
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_004040a0(1);
  }
  if ((local_34[0] != 0) &&
     (iVar2 = FUN_0060a6f2(*(undefined4 *)(local_34[0] + 0x360),0,&CAdamPlayer::RTTI_Type_Descriptor
                           ,&CRCPlayer::RTTI_Type_Descriptor,0), iVar2 != 0)) {
    iVar2 = *(int *)(param_2 + 4);
    if (*(int *)(iVar2 + 8) != 2) {
      auStack_2c[0] = (undefined1)param_2;
      FUN_004040a0(0);
      uVar6 = 0xffffffff;
      pcVar8 = &DAT_006b3f70;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
      local_4._0_1_ = 5;
      pcVar3 = (code *)FUN_005a07f0(s_IsInt___0069e134,s___Libs_daviscript_Include_Davi_S_00692284,
                                    0x42,auStack_2c);
      (*pcVar3)();
      local_4 = CONCAT31(local_4._1_3_,2);
      FUN_004040a0(1);
    }
    iVar2 = FUN_00436d00(*(undefined4 *)(iVar2 + 0x10));
    uVar6 = (uint)(iVar2 == 1);
  }
  local_34[1] = 1;
  *param_1 = &PTR_FUN_0064f00c;
  param_1[2] = 2;
  param_1[4] = uVar6;
  local_4 = local_4 & 0xffffff00;
  if ((local_34[0] != 0) &&
     (iVar2 = *(int *)(local_34[0] + 0x14) + -1, *(int *)(local_34[0] + 0x14) = iVar2, iVar2 == 0))
  {
    FUN_005abfc0(0);
  }
  *unaff_FS_OFFSET = uStack_c;
  return param_1;
}

