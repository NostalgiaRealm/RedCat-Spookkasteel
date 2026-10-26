/*
 * FUN_0059a280 at 0059a280
 * undefined FUN_0059a280(void)
 * Address ranges: 0059a280-0059a685
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_0059a280(undefined1 *param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  undefined1 uVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  float10 fVar12;
  char *pcStack_7c;
  undefined4 *puStack_78;
  int *piStack_74;
  undefined1 local_5e;
  undefined1 uStack_5d;
  int iStack_5c;
  undefined1 *local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  float fStack_38;
  float fStack_34;
  undefined1 auStack_2c [4];
  char *pcStack_28;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00644420;
  local_c = ExceptionList;
  if (param_2 != -1) {
    iVar6 = *(int *)((int)param_1 + 0x9c);
    ExceptionList = &local_c;
    local_58 = param_1;
    if (iVar6 != -1) {
      ExceptionList = &local_c;
      if (param_2 < iVar6) {
        piStack_74 = (int *)&local_5e;
        puStack_78 = (undefined4 *)&DAT_006b3f70;
        pcStack_7c = (char *)0x59a2d6;
        ExceptionList = &local_c;
        FUN_00409810();
        piStack_74 = (int *)local_1c;
        local_4 = 0;
        puStack_78 = (undefined4 *)0x7d;
        pcStack_7c = s___AdamSource_AdamClock_h_0068e22c;
        pcVar4 = (code *)FUN_005a07f0(s_a_Now_>__a_Then_006934d0);
        (*pcVar4)();
        local_4 = 0xffffffff;
        piStack_74 = (int *)0x1;
        puStack_78 = (undefined4 *)0x59a308;
        FUN_004040a0();
      }
      piStack_74 = (int *)0x59a30f;
      iVar5 = FUN_0059aed0();
      if (*(float *)(iVar5 + 0x60) == 0.0) {
        piStack_74 = (int *)&uStack_5d;
        puStack_78 = (undefined4 *)(iVar5 + 0x14);
        pcStack_7c = (char *)0x59a32f;
        fVar12 = (float10)FUN_005ad390();
        *(float *)(iVar5 + 0x60) = (float)fVar12;
      }
      piStack_74 = (int *)0x59a345;
      iVar5 = __ftol();
      if (param_2 - iVar6 <= iVar5) goto LAB_0059a66b;
    }
    iVar6 = DAT_006b915c;
    if (DAT_006b915c == 0) {
      piStack_74 = (int *)0x59a35c;
      iVar6 = FUN_004bc480();
    }
    if (*(int *)(iVar6 + 0x3a4) == 0) {
      piStack_74 = (int *)0x0;
      local_1c[0] = (undefined1)param_2;
      puStack_78 = (undefined4 *)0x59a37b;
      FUN_004040a0();
      uVar8 = 0xffffffff;
      pcVar10 = &DAT_006b3f70;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar2 != '\0');
      piStack_74 = (int *)(~uVar8 - 1);
      puStack_78 = (undefined4 *)&DAT_006b3f70;
      pcStack_7c = (char *)0x59a398;
      FUN_004040f0();
      piStack_74 = (int *)local_1c;
      local_4 = 1;
      puStack_78 = (undefined4 *)0x130;
      pcStack_7c = s___AdamSource_AdamApplication_h_0068e58c;
      pcVar4 = (code *)FUN_005a07f0(s_m_Game_0068e584);
      (*pcVar4)();
      local_4 = 0xffffffff;
      piStack_74 = (int *)0x1;
      puStack_78 = (undefined4 *)0x59a3cd;
      FUN_004040a0();
    }
    piStack_74 = &iStack_5c;
    puStack_78 = (undefined4 *)0x59a3dd;
    FUN_00453d20();
    local_4._0_1_ = 2;
    local_4._1_3_ = 0;
    if (iStack_5c == 0) {
      piStack_74 = (int *)0x0;
      auStack_2c[0] = (undefined1)param_2;
      puStack_78 = (undefined4 *)0x59a404;
      FUN_004040a0();
      uVar8 = 0xffffffff;
      piStack_74 = (int *)0x1;
      pcVar10 = s_no_current_sublevel_006a6f24;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar2 != '\0');
      uVar8 = ~uVar8 - 1;
      pcStack_7c = (char *)0x59a420;
      puStack_78 = (undefined4 *)uVar8;
      cVar2 = FUN_00401940();
      if (cVar2 != '\0') {
        pcVar10 = s_no_current_sublevel_006a6f24;
        pcVar11 = pcStack_28;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar11 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar11 = pcVar11 + 1;
        }
        puStack_78 = (undefined4 *)0x59a447;
        piStack_74 = (int *)uVar8;
        FUN_00404190();
      }
      piStack_74 = (int *)auStack_2c;
      local_4._0_1_ = 3;
      puStack_78 = (undefined4 *)0x3e6;
      pcStack_7c = s_D__Work_RCHorror_AdamSource_Adam_006a6cec;
      pcVar4 = (code *)FUN_005a07f0(s___subLevel_IsNull___006a6f10);
      (*pcVar4)();
      local_4._0_1_ = 2;
      piStack_74 = (int *)0x1;
      puStack_78 = (undefined4 *)0x59a47a;
      FUN_004040a0();
      if (iStack_5c == 0) {
        piStack_74 = (int *)0x0;
        uStack_3c = CONCAT31(uStack_3c._1_3_,(undefined1)param_2);
        puStack_78 = (undefined4 *)0x59a495;
        FUN_004040a0();
        uVar8 = 0xffffffff;
        pcVar10 = &DAT_006b3f70;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar2 != '\0');
        piStack_74 = (int *)(~uVar8 - 1);
        puStack_78 = (undefined4 *)&DAT_006b3f70;
        pcStack_7c = (char *)0x59a4b3;
        FUN_004040f0();
        piStack_74 = &uStack_3c;
        local_4._0_1_ = 4;
        puStack_78 = (undefined4 *)0xb6;
        pcStack_7c = s___AdamSource_DaviRC_h_0068d638;
        pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c);
        (*pcVar4)();
        local_4._0_1_ = 2;
        piStack_74 = (int *)0x1;
        puStack_78 = (undefined4 *)0x59a4e6;
        FUN_004040a0();
      }
    }
    piVar1 = *(int **)(iStack_5c + 0x360);
    if (piVar1 == (int *)0x0) {
      auStack_2c[0] = (undefined1)param_2;
      puStack_78 = (undefined4 *)0x59a50a;
      piStack_74 = piVar1;
      FUN_004040a0();
      uVar8 = 0xffffffff;
      piStack_74 = (int *)0x1;
      pcVar10 = s_no_player_found_in_sublevel_006a6ef4;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar2 != '\0');
      uVar8 = ~uVar8 - 1;
      pcStack_7c = (char *)0x59a527;
      puStack_78 = (undefined4 *)uVar8;
      cVar2 = FUN_00401940();
      if (cVar2 != '\0') {
        pcVar10 = s_no_player_found_in_sublevel_006a6ef4;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcStack_28 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcStack_28 = pcStack_28 + 4;
        }
        for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcStack_28 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcStack_28 = pcStack_28 + 1;
        }
        puStack_78 = (undefined4 *)0x59a54e;
        piStack_74 = (int *)uVar8;
        FUN_00404190();
      }
      piStack_74 = (int *)auStack_2c;
      local_4._0_1_ = 5;
      puStack_78 = (undefined4 *)0x3e8;
      pcStack_7c = s_D__Work_RCHorror_AdamSource_Adam_006a6cec;
      pcVar4 = (code *)FUN_005a07f0(s_player____NULL_0069f0c0);
      (*pcVar4)();
      local_4._0_1_ = 2;
      piStack_74 = (int *)0x1;
      puStack_78 = (undefined4 *)0x59a581;
      FUN_004040a0();
      param_1 = local_58;
    }
    piStack_74 = &uStack_3c;
    puStack_78 = (undefined4 *)0x59a592;
    puVar7 = (undefined4 *)(**(code **)(*piVar1 + 0x48))();
    uStack_54 = *puVar7;
    uStack_50 = puVar7[1];
    uStack_4c = puVar7[2];
    piStack_74 = (int *)0x59a5ad;
    piStack_74 = (int *)FUN_00597fb0();
    puStack_78 = (undefined4 *)auStack_2c;
    pcStack_7c = (char *)0x59a5b8;
    puVar7 = (undefined4 *)FUN_004dbe60();
    uStack_48 = *puVar7;
    uStack_44 = puVar7[1];
    uStack_40 = puVar7[2];
    piStack_74 = (int *)0x59a5de;
    fVar12 = (float10)FUN_005b30a0();
    fStack_38 = (float)fVar12;
    piStack_74 = &uStack_54;
    puStack_78 = &uStack_48;
    pcStack_7c = (char *)0x59a5f1;
    fVar12 = (float10)FUN_005b1600();
    piStack_74 = &uStack_54;
    fStack_34 = (float)fVar12;
    puStack_78 = &uStack_48;
    local_58 = (undefined1 *)&pcStack_7c;
    FUN_00449760(&iStack_5c);
    uVar3 = FUN_00594fe0();
    uStack_3c = CONCAT31(uStack_3c._1_3_,uVar3);
    local_4 = 0xffffffff;
    *(undefined4 *)((int)param_1 + 0xa0) = uStack_3c;
    *(float *)((int)param_1 + 0xa4) = fStack_38;
    *(int *)((int)param_1 + 0x9c) = param_2;
    *(float *)((int)param_1 + 0xa8) = fStack_34;
    if ((iStack_5c != 0) &&
       (iVar6 = *(int *)(iStack_5c + 0x14) + -1, *(int *)(iStack_5c + 0x14) = iVar6, iVar6 == 0)) {
      piStack_74 = (int *)0x0;
      puStack_78 = (undefined4 *)0x59a66b;
      FUN_005abfc0();
    }
  }
LAB_0059a66b:
  ExceptionList = local_c;
  return (int)param_1 + 0xa0;
}

