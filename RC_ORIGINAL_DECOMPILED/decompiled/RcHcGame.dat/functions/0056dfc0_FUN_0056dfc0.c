/*
 * FUN_0056dfc0 at 0056dfc0
 * undefined FUN_0056dfc0(void)
 * Address ranges: 0056dfc0-0056e240
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_0056dfc0(undefined4 *param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  float10 fVar10;
  float fVar11;
  undefined1 auStack_3c [16];
  undefined1 local_2c [4];
  undefined4 *local_28;
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00640d27;
  pvStack_c = ExceptionList;
  iVar4 = *(int *)(param_2 + 4);
  if (((iVar4 == 0) || ((*(int *)(param_2 + 8) - iVar4) / 0x18 != 1)) ||
     (ExceptionList = &pvStack_c, *(int *)(iVar4 + 8) != 3)) {
    local_2c[0] = (undefined1)param_2;
    ExceptionList = &pvStack_c;
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6 - 1;
    cVar2 = FUN_00401940(uVar6,1);
    if (cVar2 != '\0') {
      puVar8 = (undefined4 *)&DAT_006b3f70;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *local_28 = *puVar8;
        puVar8 = puVar8 + 1;
        local_28 = local_28 + 1;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)local_28 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        local_28 = (undefined4 *)((int)local_28 + 1);
      }
      FUN_00404190(uVar6);
    }
    local_4 = 1;
    pcVar3 = (code *)FUN_005a07f0(s__args_size______1______args_0__I_006a4258,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a4280,0x2ac,local_2c);
    (*pcVar3)();
    local_4 = local_4 & 0xffffff00;
    FUN_004040a0(1);
  }
  iVar4 = DAT_006b915c;
  if (DAT_006b915c == 0) {
    iVar4 = FUN_004bc480();
  }
  if (*(int *)(iVar4 + 0x3a4) == 0) {
    auStack_1c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
    local_4 = 2;
    pcVar3 = (code *)FUN_005a07f0(s_m_Game_0068e584,s___AdamSource_AdamApplication_h_0068e58c,0x130,
                                  auStack_1c);
    (*pcVar3)();
    local_4 = local_4 & 0xffffff00;
    FUN_004040a0(1);
  }
  FUN_00453d20(&param_2);
  local_4 = 3;
  if ((param_2 != 0) && (piVar1 = *(int **)(param_2 + 0x360), piVar1 != (int *)0x0)) {
    if (piVar1[0x7c] == 0) {
      auStack_3c[0] = (undefined1)param_2;
      FUN_004040a0(0);
      uVar6 = 0xffffffff;
      pcVar9 = &DAT_006b3f70;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
      local_4._0_1_ = 5;
      pcVar3 = (code *)FUN_005a07f0(s_m_GameProperties____0_0068f970,
                                    s_D__Work_RCHorror_AdamSource_Adam_0069888c,0x15b,auStack_3c);
      (*pcVar3)();
      local_4 = CONCAT31(local_4._1_3_,3);
      FUN_004040a0(1);
    }
    FUN_0060a6f2(piVar1[0x7c],0,&CAdamPlayerGameProperties::RTTI_Type_Descriptor,
                 &CRcPlayerProperties::RTTI_Type_Descriptor,0);
    iVar4 = *piVar1;
    fVar10 = (float10)FUN_0043b080();
    fVar11 = (float)fVar10;
    uVar5 = FUN_0043b060(auStack_3c);
    (**(code **)(iVar4 + 0x70))(uVar5,fVar11);
  }
  *param_1 = &PTR_FUN_0064f00c;
  param_1[2] = 0;
  local_4 = local_4 & 0xffffff00;
  if ((param_2 != 0) &&
     (iVar4 = *(int *)(param_2 + 0x14) + -1, *(int *)(param_2 + 0x14) = iVar4, iVar4 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = pvStack_c;
  return param_1;
}

