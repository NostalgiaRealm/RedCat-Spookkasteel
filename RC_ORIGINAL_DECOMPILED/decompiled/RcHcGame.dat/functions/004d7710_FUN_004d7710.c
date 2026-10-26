/*
 * FUN_004d7710 at 004d7710
 * undefined FUN_004d7710(void)
 * Address ranges: 004d7710-004d7aa3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004d7710(int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  char cVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  float10 fVar10;
  undefined1 local_80 [4];
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  float fStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 auStack_4c [12];
  undefined1 auStack_40 [4];
  int iStack_3c;
  undefined4 auStack_30 [9];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00631be0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (3 < param_2) {
    uVar5 = 0xffffffff;
    pcVar8 = s_Can_not_deal_with_more_than_thre_00699954;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    local_7c = 0;
    local_78 = 0;
    local_74 = 0;
    ExceptionList = &pvStack_c;
    FUN_004040f0(s_Can_not_deal_with_more_than_thre_00699954,~uVar5 - 1);
    local_4 = 0;
    pcVar2 = (code *)FUN_005a07f0(s_maxHitPlanesNr_<__3_00699940,
                                  s_D__Work_RCHorror_AdamSource_Adam_00699728,0x2dd,local_80);
    (*pcVar2)();
    local_4 = 0xffffffff;
    if (local_7c != 0) {
      cVar1 = *(char *)(local_7c - 1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(local_7c - 1));
      }
      else {
        *(char *)(local_7c - 1) = cVar1 + -1;
      }
    }
  }
  iVar7 = 0;
  local_58 = *param_3;
  local_7c = local_7c & 0xff000000;
  local_54 = param_3[1];
  local_64 = *param_4;
  local_50 = param_3[2];
  local_60 = param_4[1];
  uStack_5c = param_4[2];
  if (0 < param_2) {
    puVar6 = auStack_30;
    do {
      cVar1 = FUN_004d7390(&local_58,&local_64,&uStack_70);
      if (cVar1 != '\0') break;
      if (fStack_6c <= 0.7) {
        if (-0.7 <= fStack_6c) {
          if (fStack_6c == 0.0) {
            local_7c._0_3_ = CONCAT12(1,(undefined2)local_7c);
          }
        }
        else {
          local_7c._0_2_ = CONCAT11(1,(undefined1)local_7c);
        }
      }
      else {
        local_7c = CONCAT31(local_7c._1_3_,1);
      }
      fVar10 = (float10)FUN_005b2e40();
      if ((float10)0.0 <= fVar10) {
        if (DAT_006b93c4 == -0x80000000) {
          puVar3 = DAT_006b9378;
          if (DAT_006b9378 == (undefined1 *)0x0) {
            puVar3 = &DAT_0064a3b4;
          }
          DAT_006b93c4 = FUN_0060af10(puVar3);
        }
        if (DAT_006b93c4 != 0) {
          FUN_005afe30(s_Warning__Player_hit_the_backside_00699914);
        }
      }
      iVar9 = iVar7;
      if (0 < iVar7) {
        do {
          fVar10 = (float10)FUN_005b2e40();
          FUN_005b3020((float)-fVar10,&uStack_70);
          FUN_005b2f20();
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      *puVar6 = uStack_70;
      puVar6[1] = fStack_6c;
      puVar6[2] = uStack_68;
      if (-1 < iVar7) {
        iVar9 = iVar7 + 1;
        do {
          fVar10 = (float10)FUN_005b2e40();
          FUN_005b3020((float)-fVar10,&local_64);
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      iVar7 = iVar7 + 1;
      puVar6 = puVar6 + 3;
    } while (iVar7 < param_2);
  }
  FUN_005b2fe0(auStack_4c);
  fVar10 = (float10)FUN_005b2e40();
  if (fVar10 <= (float10)0.0) {
    if (DAT_006b93c4 == -0x80000000) {
      puVar3 = DAT_006b9378;
      if (DAT_006b9378 == (undefined1 *)0x0) {
        puVar3 = &DAT_0064a3b4;
      }
      DAT_006b93c4 = FUN_0060af10(puVar3);
    }
    if (DAT_006b93c4 != 0) {
      FUN_005afe30(s_ignored_player_move_due_to_colli_006998ec);
    }
  }
  else {
    *param_3 = local_58;
    param_3[1] = local_54;
    param_3[2] = local_50;
  }
  if (DAT_006b93c4 == -0x80000000) {
    puVar3 = DAT_006b9378;
    if (DAT_006b9378 == (undefined1 *)0x0) {
      puVar3 = &DAT_0064a3b4;
    }
    DAT_006b93c4 = FUN_0060af10(puVar3);
  }
  if (DAT_006b93c4 != 0) {
    uVar4 = FUN_005ae390(auStack_40,s_Number_of_hit_planes_is__i_006998d0,iVar7);
    local_4 = 1;
    FUN_005aff00(uVar4);
    if (iStack_3c != 0) {
      cVar1 = *(char *)(iStack_3c + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(iStack_3c + -1));
      }
      else {
        *(char *)(iStack_3c + -1) = cVar1 + -1;
      }
    }
  }
  *param_1 = iVar7;
  param_1[1] = local_7c;
  ExceptionList = pvStack_c;
  return;
}

