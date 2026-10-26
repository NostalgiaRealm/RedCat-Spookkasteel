/*
 * FUN_00435490 at 00435490
 * undefined FUN_00435490(void)
 * Address ranges: 00435490-00436358
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64c430 slot 21 for .?AVCRCPlayer@@. Original bytes unchanged; names and types still inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64c430 slot 21 for
   .?AVCRCPlayer@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_00435490(int param_1,float *param_2,float *param_3,float *param_4,float param_5)

{
  undefined4 *puVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  float *pfVar5;
  int *piVar6;
  code *pcVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  char *pcVar12;
  bool bVar13;
  float10 fVar14;
  undefined4 uVar15;
  char *pcVar16;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  undefined4 local_14c;
  float fStack_148;
  float local_144;
  float local_140;
  float local_13c;
  undefined1 local_138 [4];
  char *local_134;
  uint local_130;
  uint local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  undefined1 local_10d;
  float local_10c;
  float local_108;
  float local_104;
  undefined4 local_100;
  float local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined1 auStack_dc [8];
  undefined1 local_d4 [8];
  undefined1 auStack_cc [8];
  undefined1 local_c4 [8];
  undefined1 auStack_bc [8];
  undefined1 local_b4 [8];
  undefined1 local_ac [8];
  undefined1 local_a4 [8];
  undefined1 auStack_9c [8];
  undefined1 local_94 [8];
  undefined1 auStack_8c [8];
  undefined1 local_84 [8];
  undefined1 local_7c [8];
  undefined1 local_74 [8];
  undefined1 auStack_6c [8];
  undefined1 local_64 [8];
  undefined1 auStack_5c [8];
  undefined1 local_54 [8];
  undefined1 auStack_4c [8];
  undefined1 local_44 [8];
  undefined1 auStack_3c [8];
  undefined1 auStack_34 [8];
  undefined1 local_2c [8];
  undefined1 auStack_24 [8];
  undefined1 auStack_1c [8];
  undefined1 auStack_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00623c3b;
  local_c = ExceptionList;
  if ((*(char *)(param_1 + 0x104) == '\0') || (*(char *)(param_1 + 0x371) != '\0')) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    return;
  }
  iVar4 = DAT_006c8de0;
  ExceptionList = &local_c;
  if (DAT_006c8de0 == 0) {
    ExceptionList = &local_c;
    iVar4 = FUN_0055b280();
  }
  if (*(char *)(iVar4 + 0x48) == '\0') {
    *(undefined4 *)(param_1 + 0x100) = 4;
  }
  if (0.0 < *(float *)(param_1 + 0x1b8)) {
    *(undefined4 *)(param_1 + 0x100) = 2;
    fVar14 = (float10)FUN_00431000();
    FUN_005b2fa0((float)fVar14);
  }
  local_174 = *param_3;
  local_170 = param_3[1];
  local_16c = param_3[2];
  FUN_005b2fa0(param_5);
  local_10c = *param_4 * 1.4;
  local_108 = param_4[1] * 1.4;
  local_104 = param_4[2] * 1.4;
  FUN_005b2fa0(param_5);
  local_178 = local_16c;
  local_180 = local_174;
  local_13c = local_114;
  local_17c = local_170;
  local_ec = local_e0;
  local_144 = local_11c;
  local_140 = local_118;
  local_f4 = local_e8;
  local_f0 = local_e4;
  switch(*(undefined4 *)(param_1 + 0x100)) {
  case 0:
    if (0.0 < local_118) {
      local_140 = 0.0;
    }
    if (((local_11c == 0.0) && (local_140 == 0.0)) && (local_114 == 0.0)) {
      local_158 = -DAT_006b92c4;
      local_15c = 0.0;
      local_154 = 0.0;
      FUN_005b2fa0(param_5);
      pfVar5 = (float *)FUN_004d7710(local_ac,1,&local_180,&local_144);
      local_150 = *pfVar5;
      if (*(char *)(pfVar5 + 1) == '\0') {
        *(undefined4 *)(param_1 + 0x100) = 2;
        FUN_005b3050();
        iVar4 = *(int *)(param_1 + 0x22c);
joined_r0x00435a2a:
        if (iVar4 != 0) {
          iVar4 = param_1 + 0x174;
          FUN_004d1930(iVar4);
          FUN_005b3000(iVar4);
        }
      }
    }
    else {
      pfVar5 = (float *)FUN_004d7710(local_c4,3,&local_180,&local_f4);
      local_150 = *pfVar5;
      fVar11 = pfVar5[1];
      local_14c._2_1_ = (char)((uint)fVar11 >> 0x10);
      bVar13 = local_14c._2_1_ != '\0';
      local_14c = fVar11;
      if (bVar13) {
        puVar1 = (undefined4 *)(param_1 + 0x1c4);
        *puVar1 = local_f4;
        *(undefined4 *)(param_1 + 0x1c8) = local_f0;
        *(undefined4 *)(param_1 + 0x1cc) = local_ec;
        *(undefined4 *)(param_1 + 0x1c8) = 0;
        FUN_005b2f20();
        fVar14 = (float10)FUN_00436390();
        FUN_005b2fa0((float)(fVar14 + fVar14));
        local_168 = local_180;
        local_164 = local_17c;
        local_160 = local_178;
        FUN_004d7710(local_b4,1,&local_180,param_1 + 0x15c);
        FUN_00554a90(-*(float *)(param_1 + 0x160));
        FUN_004d7710(local_a4,3,&local_180,puVar1);
        pfVar5 = (float *)FUN_004d7710(local_94,1,&local_180,param_1 + 0x168);
        local_150 = *pfVar5;
        local_14c = pfVar5[1];
        local_15c = local_180;
        local_158 = local_17c;
        local_154 = local_178;
        FUN_00554a90(*(undefined4 *)(param_1 + 0x160));
        if (((char)local_14c != '\0') && (local_164 < local_158)) {
          fVar14 = (float10)FUN_00436390();
          fVar11 = local_168;
          local_17c = local_164;
          *(float *)(param_1 + 0x1c0) = (float)(fVar14 + (float10)local_158);
          local_178 = local_160;
          local_124 = (float)((fVar14 + (float10)local_158) - (float10)local_164);
          local_180 = local_168;
          local_128 = 0.0;
          local_120 = 0.0;
          piVar6 = (int *)FUN_004d7710(local_84,1,&local_180,&local_128);
          local_14c = (float)piVar6[1];
          if (*piVar6 == 0) {
            FUN_004d7710(local_74,3,&local_180,puVar1);
            pfVar5 = (float *)FUN_004d7710(local_64,1,&local_180,param_1 + 0x168);
            local_150 = *pfVar5;
            if ((*(char *)(pfVar5 + 1) != '\0') && (local_164 < local_17c)) {
              local_180 = fVar11;
              local_17c = local_164;
              local_178 = local_160;
              *(undefined4 *)(param_1 + 0x100) = 1;
              break;
            }
          }
        }
      }
      local_180 = local_174;
      local_17c = local_170;
      local_178 = local_16c;
      pfVar5 = (float *)FUN_004d7710(local_54,3,&local_180,&local_f4);
      local_150 = *pfVar5;
      if (*(char *)(pfVar5 + 1) == '\0') {
        local_158 = -DAT_006b92c4;
        local_15c = 0.0;
        local_154 = 0.0;
        FUN_005b2fa0(param_5);
        pfVar5 = (float *)FUN_004d7710(local_44,1,&local_180,&local_144);
        local_150 = *pfVar5;
        if (*(char *)(pfVar5 + 1) == '\0') {
          *(undefined4 *)(param_1 + 0x100) = 2;
          FUN_005b3000(param_1 + 0x174);
          iVar4 = *(int *)(param_1 + 0x22c);
          goto joined_r0x00435a2a;
        }
      }
    }
    cVar3 = (**(code **)(**(int **)(param_1 + 0xf8) + 0x30))();
    if (cVar3 != '\0') {
      local_15c = *param_4;
      local_154 = param_4[2];
      local_158 = *(float *)(param_1 + 0x194);
      iVar4 = param_1 + 0x174;
      *(undefined4 *)(param_1 + 0x100) = 2;
      FUN_005b3050();
      if (*(int *)(param_1 + 0x22c) != 0) {
        FUN_004d1930(iVar4);
        FUN_005b3000(iVar4);
      }
    }
    break;
  case 1:
    local_fc = *(float *)(param_1 + 0x18c);
    local_100 = 0;
    local_f8 = 0;
    FUN_005b2fa0(param_5);
    FUN_004d7710(local_7c,1,&local_180,&local_144);
    if (*(float *)(param_1 + 0x1c0) < local_17c) {
      local_17c = *(float *)(param_1 + 0x1c0);
      FUN_004d7710(local_2c,3,&local_180,param_1 + 0x1c4);
      FUN_004d7710(local_d4,1,&local_180,param_1 + 0x168);
      *(undefined4 *)(param_1 + 0x100) = 0;
    }
    break;
  case 2:
  case 3:
    local_128 = *param_4;
    local_124 = param_4[1];
    local_120 = param_4[2];
    uVar15 = 8;
    FUN_0060a6f2(*(undefined4 *)(param_1 + 0x1f0),0,&CAdamPlayerGameProperties::RTTI_Type_Descriptor
                 ,&CRcPlayerProperties::RTTI_Type_Descriptor,0,8);
    cVar3 = FUN_00439f10(uVar15);
    cVar2 = (**(code **)(**(int **)(param_1 + 0xf8) + 0x30))();
    if (cVar2 == '\0') {
LAB_00435b2d:
      if (cVar3 == '\0') goto LAB_00435b31;
    }
    else {
      if (cVar3 != '\0') {
        cVar2 = FUN_004366b0(param_5);
        if ((cVar2 != '\0') && (*(char *)(param_1 + 0x370) == '\0')) {
          *(undefined1 *)(param_1 + 0x370) = 1;
          *(float *)(param_1 + 0x178) = *(float *)(param_1 + 0x388) * *(float *)(param_1 + 0x194);
        }
        goto LAB_00435b2d;
      }
LAB_00435b31:
      *(undefined1 *)(param_1 + 0x370) = 0;
    }
    *(float *)(param_1 + 0x178) = *(float *)(param_1 + 0x178) - _DAT_006b92b0 * param_5 * 0.5;
    FUN_005b3000(&local_128);
    *(float *)(param_1 + 0x178) = *(float *)(param_1 + 0x178) - _DAT_006b92b0 * param_5 * 0.5;
    if (*(char *)(param_1 + 0x370) != '\0') {
      local_120 = local_120 * 0.4;
      local_128 = local_128 * 0.4;
    }
    FUN_005b2fa0(param_5);
    local_13c = local_114;
    local_144 = local_11c;
    local_140 = local_118;
    if (DAT_006b57cc == -0x80000000) {
      puVar8 = DAT_006b5780;
      if (DAT_006b5780 == (undefined1 *)0x0) {
        puVar8 = &DAT_0064a3b4;
      }
      DAT_006b57cc = FUN_0060af10(puVar8);
    }
    if (DAT_006b57cc != 0) {
      FUN_00554210(&local_144,s_player_dir_after_adding_gravity_00690600);
    }
    local_154 = local_13c;
    local_164 = local_140;
    local_15c = local_144;
    local_180 = local_174;
    local_17c = local_170;
    local_178 = local_16c;
    local_158 = 0.0;
    local_168 = 0.0;
    local_160 = 0.0;
    FUN_004d7710(auStack_34,3,&local_180,&local_168);
    if (local_140 < 0.0) {
      FUN_00554aa0(-local_164);
      FUN_004d7710(auStack_dc,3,&local_180,&local_15c);
      iVar4 = FUN_004d7710(auStack_5c,1,&local_180,param_1 + 0x15c);
      uVar15 = *(undefined4 *)(iVar4 + 4);
      local_150 = local_180;
      fStack_148 = local_178;
      local_14c = local_17c;
      FUN_00554aa0(local_164);
      if (((char)uVar15 == '\0') || (local_170 <= local_14c)) {
        local_180 = local_174;
        local_17c = local_170;
        local_178 = local_16c;
        piVar6 = (int *)FUN_004d7710(auStack_4c,3,&local_180,&local_11c);
        fVar11 = (float)piVar6[1];
        _DAT_0069019c = 1.0;
        if (0 < *piVar6) {
          FUN_005b2fe0(&local_100);
          FUN_005b2f20();
          goto LAB_00435fef;
        }
      }
      else {
        local_150 = local_14c - local_170;
        fVar14 = (float10)FUN_00436390();
        local_180 = local_174;
        local_17c = local_170;
        local_178 = local_16c;
        local_164 = (float)((float10)local_150 - fVar14);
        FUN_004d7710(auStack_9c,3,&local_180,&local_168);
        local_164 = local_118 - local_164;
        FUN_004d7710(auStack_1c,3,&local_180,&local_15c);
        pfVar5 = (float *)FUN_004d7710(auStack_8c,3,&local_180,&local_168);
        local_150 = *pfVar5;
        fVar11 = pfVar5[1];
      }
    }
    else {
      FUN_00554a90(-local_164);
      FUN_004d7710(auStack_24,3,&local_180,&local_15c);
      iVar4 = FUN_004d7710(auStack_14,1,&local_180,param_1 + 0x168);
      uVar15 = *(undefined4 *)(iVar4 + 4);
      local_150 = local_180;
      fStack_148 = local_178;
      local_14c = local_17c;
      FUN_00554a90(local_164);
      if (((char)uVar15 == '\0') || (local_14c <= local_170)) {
        local_180 = local_174;
        local_17c = local_170;
        local_178 = local_16c;
        piVar6 = (int *)FUN_004d7710(auStack_3c,3,&local_180,&local_11c);
        iVar4 = *piVar6;
        fVar11 = (float)piVar6[1];
        if (((char)((uint)fVar11 >> 8) != '\0') && (0.0 < *(float *)(param_1 + 0x178))) {
          *(undefined4 *)(param_1 + 0x178) = 0;
        }
        _DAT_0069019c = 1.0;
        if (0 < iVar4) {
          FUN_005b2fe0(&local_100);
          FUN_005b2f20();
LAB_00435fef:
          _DAT_0069019c = ABS(local_fc);
        }
      }
      else {
        fVar14 = (float10)FUN_00436390();
        local_180 = local_174;
        local_17c = local_170;
        local_178 = local_16c;
        local_164 = (float)(((float10)local_14c - (float10)local_170) + fVar14);
        FUN_004d7710(auStack_cc,3,&local_180,&local_168);
        local_164 = local_118 - local_164;
        FUN_004d7710(auStack_6c,3,&local_180,&local_15c);
        pfVar5 = (float *)FUN_004d7710(auStack_bc,1,&local_180,param_1 + 0x168);
        local_150 = *pfVar5;
        fVar11 = pfVar5[1];
      }
    }
    if (SUB41(fVar11,0) != '\0') {
      *(undefined1 *)(param_1 + 0x370) = 0;
      *(undefined4 *)(param_1 + 0x100) = 0;
    }
    break;
  case 4:
    FUN_005b3000(&local_180);
    iVar4 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      iVar4 = FUN_0055b280();
    }
    if (*(char *)(iVar4 + 0x48) != '\0') {
      *(undefined4 *)(param_1 + 0x100) = 2;
      FUN_005b3070();
    }
    break;
  default:
    local_138[0] = local_10d;
    uVar9 = 0xffffffff;
    local_130 = 0;
    pcVar16 = s_invalid_PlayerMoveState_006905e8;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar3 = *pcVar16;
      pcVar16 = pcVar16 + 1;
    } while (cVar3 != '\0');
    uVar9 = ~uVar9 - 1;
    local_134 = (char *)0x0;
    local_12c = 0;
    if ((((uVar9 < 0xfffffffe) || (FUN_005fe5fb(), local_134 == (char *)0x0)) ||
        (cVar3 = local_134[-1], cVar3 == '\0')) || (cVar3 == -1)) {
      if (uVar9 != 0) {
        if ((0x1f < local_12c) || (local_12c < uVar9)) {
          FUN_004040a0(1);
          goto LAB_0043619a;
        }
        goto LAB_004361a8;
      }
      FUN_004040a0(1);
    }
    else if (uVar9 == 0) {
      local_134[-1] = cVar3 + -1;
      local_134 = (char *)0x0;
      local_130 = 0;
      local_12c = 0;
    }
    else {
LAB_0043619a:
      FUN_00401a60(uVar9);
LAB_004361a8:
      pcVar16 = s_invalid_PlayerMoveState_006905e8;
      pcVar12 = local_134;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar16;
        pcVar16 = pcVar16 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar12 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        pcVar12 = pcVar12 + 1;
      }
      local_134[uVar9] = '\0';
      local_130 = uVar9;
    }
    uStack_4 = 0;
    pcVar7 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_RCSource_RCPlay_00690328,0x770
                                  ,local_138);
    (*pcVar7)();
    uStack_4 = 0xffffffff;
    if (local_134 != (char *)0x0) {
      cVar3 = local_134[-1];
      if ((cVar3 == '\0') || (cVar3 == -1)) {
        FUN_005fe5f0(local_134 + -1);
      }
      else {
        local_134[-1] = cVar3 + -1;
      }
    }
    local_134 = (char *)0x0;
    local_130 = 0;
    local_12c = 0;
  }
  if (DAT_006b57cc == -0x80000000) {
    puVar8 = DAT_006b5780;
    if (DAT_006b5780 == (undefined1 *)0x0) {
      puVar8 = &DAT_0064a3b4;
    }
    DAT_006b57cc = FUN_0060af10(puVar8);
  }
  if (DAT_006b57cc != 0) {
    FUN_005afe30(s_Player_state_after_is__006905d0);
    FUN_00554210(&local_180,s_userPos_006905c8);
    FUN_00554210(&local_144,s_userDir_006905c0);
    switch(*(undefined4 *)(param_1 + 0x100)) {
    case 0:
      pcVar16 = s_player_is_WALKING_006905ac;
      break;
    case 1:
      pcVar16 = s_player_is_STEPPING_UP_00690580;
      break;
    case 2:
      pcVar16 = s_player_is_JUMPING_00690598;
      break;
    default:
      pcVar16 = s_player_is_in_unknown_move_state_00690548;
      break;
    case 4:
      pcVar16 = s_player_is_in_DEBUG_mode_00690568;
    }
    FUN_005afe30(pcVar16);
  }
  FUN_004d69b0(&local_180);
  cVar3 = FUN_004d6e80(&local_180);
  if (cVar3 == '\0') {
    if (DAT_006b583c == -0x80000000) {
      puVar8 = DAT_006b57f0;
      if (DAT_006b57f0 == (undefined1 *)0x0) {
        puVar8 = &DAT_0064a3b4;
      }
      DAT_006b583c = FUN_0060af10(puVar8);
    }
    if (DAT_006b583c != 0) {
      FUN_005afe30(s_Player_was_inside_a_model_that_s_00690510);
    }
  }
  FUN_0046d2b0(&local_180);
  *param_2 = local_180;
  param_2[1] = local_17c;
  param_2[2] = local_178;
  ExceptionList = local_c;
  return;
}

