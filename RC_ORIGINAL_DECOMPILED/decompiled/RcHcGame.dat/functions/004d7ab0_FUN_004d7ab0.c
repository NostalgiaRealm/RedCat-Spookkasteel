/*
 * FUN_004d7ab0 at 004d7ab0
 * undefined FUN_004d7ab0(void)
 * Address ranges: 004d7ab0-004d8e51
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64f118 slot 21 for .?AVCAdamPlayer@@. Original bytes unchanged; names and types still inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64f118 slot 21 for
   .?AVCAdamPlayer@@. Original bytes unchanged; names and types still inferred. */

void __thiscall
FUN_004d7ab0(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,float param_5)

{
  float *pfVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  code *pcVar10;
  uint uVar11;
  uint uVar12;
  char *pcVar13;
  bool bVar14;
  float10 fVar15;
  char *pcVar16;
  undefined4 local_15c;
  float local_158;
  undefined4 local_154;
  undefined4 local_150;
  float local_14c;
  undefined4 local_148;
  undefined4 local_144;
  float local_140;
  undefined4 local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  float local_11c;
  undefined4 local_118;
  undefined1 local_114 [4];
  char *local_110;
  uint local_10c;
  uint local_108;
  float local_104;
  float local_100;
  float local_fc;
  undefined1 local_f5;
  float local_f4;
  float local_f0;
  float local_ec;
  undefined4 local_e8;
  float local_e4;
  undefined4 local_e0;
  undefined1 local_dc [8];
  undefined1 local_d4 [8];
  undefined1 local_cc [8];
  undefined1 local_c4 [8];
  undefined1 local_bc [8];
  undefined1 local_b4 [8];
  undefined1 local_ac [8];
  undefined1 local_a4 [8];
  undefined1 local_9c [8];
  undefined1 local_94 [8];
  undefined1 local_8c [8];
  undefined1 local_84 [8];
  undefined1 local_7c [8];
  undefined1 local_74 [8];
  undefined1 local_6c [8];
  undefined1 local_64 [8];
  undefined1 local_5c [8];
  undefined1 local_54 [8];
  undefined1 local_4c [8];
  undefined1 local_44 [8];
  undefined1 local_3c [8];
  undefined1 local_34 [8];
  undefined1 local_2c [8];
  undefined1 local_24 [8];
  undefined1 local_1c [8];
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00631bfb;
  local_c = ExceptionList;
  iVar6 = DAT_006c8de0;
  ExceptionList = &local_c;
  if (DAT_006c8de0 == 0) {
    ExceptionList = &local_c;
    iVar6 = FUN_0055b280();
  }
  if (*(char *)(iVar6 + 0x48) == '\0') {
    *(undefined4 *)(param_1 + 0x100) = 4;
  }
  if (0.0 < *(float *)(param_1 + 0x1b8)) {
    *(undefined4 *)(param_1 + 0x100) = 2;
    fVar15 = (float10)FUN_00431000();
    FUN_005b2fa0((float)fVar15);
  }
  local_150 = *param_3;
  local_14c = (float)param_3[1];
  local_148 = param_3[2];
  FUN_005b2fa0(param_5);
  local_15c = local_150;
  local_158 = local_14c;
  local_138 = local_104;
  local_154 = local_148;
  local_134 = local_100;
  local_130 = local_fc;
  if (DAT_006b9354 == -0x80000000) {
    puVar7 = DAT_006b9308;
    if (DAT_006b9308 == (undefined1 *)0x0) {
      puVar7 = &DAT_0064a3b4;
    }
    DAT_006b9354 = FUN_0060af10(puVar7);
  }
  if (DAT_006b9354 != 0) {
    FUN_005afe30(&DAT_006b3f70);
    FUN_005afe30(s_Player_state_before_is__00699c1c);
    FUN_00554210(&local_15c,s_userPos_006905c8);
    FUN_00554210(&local_138,s_userDir_006905c0);
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
  switch(*(undefined4 *)(param_1 + 0x100)) {
  case 0:
    if (0.0 < local_134) {
      local_134 = 0.0;
    }
    if (((local_138 == 0.0) && (local_134 == 0.0)) && (local_130 == 0.0)) {
      if (DAT_006b9354 == -0x80000000) {
        puVar7 = DAT_006b9308;
        if (DAT_006b9308 == (undefined1 *)0x0) {
          puVar7 = &DAT_0064a3b4;
        }
        DAT_006b9354 = FUN_0060af10(puVar7);
      }
      if (DAT_006b9354 != 0) {
        FUN_005afe30(s_player_does_not_want_to_move_00699bfc);
      }
      local_11c = -DAT_006b92c4;
      local_120 = 0;
      local_118 = 0;
      FUN_005b2fa0(param_5);
      puVar8 = (undefined4 *)FUN_004d7710(local_9c,1,&local_15c,&local_138);
      local_12c = (float)*puVar8;
      if (*(char *)(puVar8 + 1) == '\0') {
        if (DAT_006b9354 == -0x80000000) {
          puVar7 = DAT_006b9308;
          if (DAT_006b9308 == (undefined1 *)0x0) {
            puVar7 = &DAT_0064a3b4;
          }
          DAT_006b9354 = FUN_0060af10(puVar7);
        }
        if (DAT_006b9354 != 0) {
          FUN_005afe30(s_player_can_not_stand_on_any_plan_00699bd8);
        }
        *(undefined4 *)(param_1 + 0x100) = 2;
        FUN_005b3050();
        iVar6 = *(int *)(param_1 + 0x22c);
joined_r0x004d8202:
        if (iVar6 != 0) {
          iVar6 = param_1 + 0x174;
          FUN_004d1930(iVar6);
          FUN_005b3000(iVar6);
        }
      }
    }
    else {
      if (DAT_006b9354 == -0x80000000) {
        puVar7 = DAT_006b9308;
        if (DAT_006b9308 == (undefined1 *)0x0) {
          puVar7 = &DAT_0064a3b4;
        }
        DAT_006b9354 = FUN_0060af10(puVar7);
      }
      if (DAT_006b9354 != 0) {
        FUN_005afe30(s_player_wants_some_movement_00699bbc);
      }
      if (DAT_006b9354 == -0x80000000) {
        puVar7 = DAT_006b9308;
        if (DAT_006b9308 == (undefined1 *)0x0) {
          puVar7 = &DAT_0064a3b4;
        }
        DAT_006b9354 = FUN_0060af10(puVar7);
      }
      if (DAT_006b9354 != 0) {
        FUN_005afe30(s_player_is_checking_for_a_step____00699b98);
      }
      puVar8 = (undefined4 *)FUN_004d7710(local_94,3,&local_15c,&local_138);
      local_12c = (float)*puVar8;
      fVar2 = (float)puVar8[1];
      local_128._2_1_ = (char)((uint)fVar2 >> 0x10);
      bVar14 = local_128._2_1_ != '\0';
      local_128 = fVar2;
      if (bVar14) {
        pfVar1 = (float *)(param_1 + 0x1c4);
        *pfVar1 = local_138;
        *(float *)(param_1 + 0x1c8) = local_134;
        *(float *)(param_1 + 0x1cc) = local_130;
        *(undefined4 *)(param_1 + 0x1c8) = 0;
        FUN_005b2f20();
        fVar15 = (float10)FUN_004d8e90();
        FUN_005b2fa0((float)(fVar15 + fVar15));
        local_144 = local_15c;
        local_140 = local_158;
        local_13c = local_154;
        FUN_004d7710(local_84,1,&local_15c,param_1 + 0x15c);
        FUN_00554a90(-*(float *)(param_1 + 0x160));
        FUN_004d7710(local_74,3,&local_15c,pfVar1);
        puVar8 = (undefined4 *)FUN_004d7710(local_64,1,&local_15c,param_1 + 0x168);
        local_12c = (float)*puVar8;
        local_128 = (float)puVar8[1];
        local_120 = local_15c;
        local_11c = local_158;
        local_118 = local_154;
        FUN_00554a90(*(undefined4 *)(param_1 + 0x160));
        if (((char)local_128 != '\0') && (local_140 < local_11c)) {
          fVar15 = (float10)FUN_004d8e90();
          uVar3 = local_144;
          local_158 = local_140;
          *(float *)(param_1 + 0x1c0) = (float)(fVar15 + (float10)local_11c);
          local_154 = local_13c;
          local_f0 = (float)((fVar15 + (float10)local_11c) - (float10)local_140);
          local_15c = local_144;
          local_f4 = 0.0;
          local_ec = 0.0;
          piVar9 = (int *)FUN_004d7710(local_54,1,&local_15c,&local_f4);
          local_128 = (float)piVar9[1];
          if (*piVar9 == 0) {
            FUN_004d7710(local_44,3,&local_15c,pfVar1);
            puVar8 = (undefined4 *)FUN_004d7710(local_34,1,&local_15c,param_1 + 0x168);
            local_12c = (float)*puVar8;
            if ((*(char *)(puVar8 + 1) != '\0') && (local_140 < local_158)) {
              if (DAT_006b9354 == -0x80000000) {
                puVar7 = DAT_006b9308;
                if (DAT_006b9308 == (undefined1 *)0x0) {
                  puVar7 = &DAT_0064a3b4;
                }
                DAT_006b9354 = FUN_0060af10(puVar7);
              }
              if (DAT_006b9354 != 0) {
                FUN_005afe30(s_player_found_a_step_00699b84);
              }
              local_15c = uVar3;
              local_158 = local_140;
              local_154 = local_13c;
              *(undefined4 *)(param_1 + 0x100) = 1;
              break;
            }
          }
          else {
            if (DAT_006b9354 == -0x80000000) {
              puVar7 = DAT_006b9308;
              if (DAT_006b9308 == (undefined1 *)0x0) {
                puVar7 = &DAT_0064a3b4;
              }
              DAT_006b9354 = FUN_0060af10(puVar7);
            }
            if (DAT_006b9354 != 0) {
              FUN_005afe30(s_player_does_not_take_step_becaus_00699b40);
            }
          }
        }
      }
      if (DAT_006b9354 == -0x80000000) {
        puVar7 = DAT_006b9308;
        if (DAT_006b9308 == (undefined1 *)0x0) {
          puVar7 = &DAT_0064a3b4;
        }
        DAT_006b9354 = FUN_0060af10(puVar7);
      }
      if (DAT_006b9354 != 0) {
        FUN_005afe30(s_player_found_no_step_00699b28);
      }
      local_15c = local_150;
      local_158 = local_14c;
      local_154 = local_148;
      puVar8 = (undefined4 *)FUN_004d7710(local_24,3,&local_15c,&local_138);
      local_12c = (float)*puVar8;
      if (*(char *)(puVar8 + 1) == '\0') {
        local_11c = -DAT_006b92c4;
        local_120 = 0;
        local_118 = 0;
        FUN_005b2fa0(param_5);
        puVar8 = (undefined4 *)FUN_004d7710(local_14,1,&local_15c,&local_138);
        local_12c = (float)*puVar8;
        if (*(char *)(puVar8 + 1) == '\0') {
          if (DAT_006b9354 == -0x80000000) {
            puVar7 = DAT_006b9308;
            if (DAT_006b9308 == (undefined1 *)0x0) {
              puVar7 = &DAT_0064a3b4;
            }
            DAT_006b9354 = FUN_0060af10(puVar7);
          }
          if (DAT_006b9354 != 0) {
            FUN_005afe30(s_player_can_not_stand_on_a_plane_00699b08);
          }
          *(undefined4 *)(param_1 + 0x100) = 2;
          FUN_005b3000(param_1 + 0x174);
          iVar6 = *(int *)(param_1 + 0x22c);
          goto joined_r0x004d8202;
        }
      }
    }
    cVar5 = (**(code **)(**(int **)(param_1 + 0xf8) + 0x30))();
    if (cVar5 != '\0') {
      if (DAT_006b9354 == -0x80000000) {
        puVar7 = DAT_006b9308;
        if (DAT_006b9308 == (undefined1 *)0x0) {
          puVar7 = &DAT_0064a3b4;
        }
        DAT_006b9354 = FUN_0060af10(puVar7);
      }
      if (DAT_006b9354 != 0) {
        FUN_005afe30(s_player_wants_to_jump_00699af0);
      }
      iVar6 = param_1 + 0x174;
      local_120 = *param_4;
      local_118 = param_4[2];
      local_11c = *(float *)(param_1 + 0x194);
      *(undefined4 *)(param_1 + 0x100) = 2;
      FUN_005b3050();
      if (*(int *)(param_1 + 0x22c) != 0) {
        FUN_004d1930(iVar6);
        FUN_005b3000(iVar6);
      }
    }
    break;
  case 1:
    local_e4 = *(float *)(param_1 + 0x18c);
    local_e8 = 0;
    local_e0 = 0;
    FUN_005b2fa0(param_5);
    FUN_004d7710(local_c4,1,&local_15c,&local_138);
    if (local_158 <= *(float *)(param_1 + 0x1c0)) {
      if (DAT_006b9354 == -0x80000000) {
        puVar7 = DAT_006b9308;
        if (DAT_006b9308 == (undefined1 *)0x0) {
          puVar7 = &DAT_0064a3b4;
        }
        DAT_006b9354 = FUN_0060af10(puVar7);
      }
      if (DAT_006b9354 != 0) {
        FUN_005afe30(s_player_is_still_stepping_up_006999fc);
      }
    }
    else {
      if (DAT_006b9354 == -0x80000000) {
        puVar7 = DAT_006b9308;
        if (DAT_006b9308 == (undefined1 *)0x0) {
          puVar7 = &DAT_0064a3b4;
        }
        DAT_006b9354 = FUN_0060af10(puVar7);
      }
      if (DAT_006b9354 != 0) {
        FUN_005afe30(s_player_is_on_top_of_the_step_00699a18);
      }
      local_158 = *(float *)(param_1 + 0x1c0);
      FUN_004d7710(local_b4,3,&local_15c,param_1 + 0x1c4);
      FUN_004d7710(local_a4,1,&local_15c,param_1 + 0x168);
      *(undefined4 *)(param_1 + 0x100) = 0;
    }
    break;
  case 2:
    local_120 = *param_4;
    local_118 = param_4[2];
    local_11c = (float)param_4[1];
    *(float *)(param_1 + 0x178) = *(float *)(param_1 + 0x178) - _DAT_006b92b0 * param_5 * 0.5;
    FUN_005b3000(&local_120);
    *(float *)(param_1 + 0x178) = *(float *)(param_1 + 0x178) - _DAT_006b92b0 * param_5 * 0.5;
    FUN_005b2fa0(param_5);
    local_138 = local_104;
    local_134 = local_100;
    local_130 = local_fc;
    if (DAT_006b9354 == -0x80000000) {
      puVar7 = DAT_006b9308;
      if (DAT_006b9308 == (undefined1 *)0x0) {
        puVar7 = &DAT_0064a3b4;
      }
      DAT_006b9354 = FUN_0060af10(puVar7);
    }
    if (DAT_006b9354 != 0) {
      FUN_00554210(&local_138,s_player_dir_after_adding_gravity_00690600);
    }
    local_f4 = local_138;
    local_ec = local_130;
    local_140 = local_134;
    local_15c = local_150;
    local_158 = local_14c;
    local_154 = local_148;
    local_f0 = 0.0;
    local_144 = 0;
    local_13c = 0;
    FUN_004d7710(local_cc,3,&local_15c,&local_144);
    if (local_134 < 0.0) {
      if (DAT_006b9354 == -0x80000000) {
        puVar7 = DAT_006b9308;
        if (DAT_006b9308 == (undefined1 *)0x0) {
          puVar7 = &DAT_0064a3b4;
        }
        DAT_006b9354 = FUN_0060af10(puVar7);
      }
      if (DAT_006b9354 != 0) {
        FUN_005afe30(s_player_is_falling_down_00699a74);
      }
      if (DAT_006b9354 == -0x80000000) {
        puVar7 = DAT_006b9308;
        if (DAT_006b9308 == (undefined1 *)0x0) {
          puVar7 = &DAT_0064a3b4;
        }
        DAT_006b9354 = FUN_0060af10(puVar7);
      }
      if (DAT_006b9354 != 0) {
        FUN_005afe30(s_player_checks_for_a_step_00699abc);
      }
      FUN_00554aa0(-local_140);
      FUN_004d7710(local_1c,3,&local_15c,&local_f4);
      iVar6 = FUN_004d7710(local_8c,1,&local_15c,param_1 + 0x15c);
      uVar3 = *(undefined4 *)(iVar6 + 4);
      local_12c = (float)local_15c;
      local_124 = local_154;
      local_128 = local_158;
      FUN_00554aa0(local_140);
      if (((char)uVar3 == '\0') || (local_14c <= local_128)) {
        if (DAT_006b9354 == -0x80000000) {
          puVar7 = DAT_006b9308;
          if (DAT_006b9308 == (undefined1 *)0x0) {
            puVar7 = &DAT_0064a3b4;
          }
          DAT_006b9354 = FUN_0060af10(puVar7);
        }
        if (DAT_006b9354 != 0) {
          FUN_005afe30(s_player_found_no_step_00699b28);
        }
        local_15c = local_150;
        local_158 = local_14c;
        local_154 = local_148;
        piVar9 = (int *)FUN_004d7710(local_d4,3,&local_15c,&local_104);
        iVar6 = piVar9[1];
        _DAT_006996e0 = 1.0;
        if (0 < *piVar9) {
          FUN_005b2fe0(&local_e8);
          FUN_005b2f20();
          goto LAB_004d899a;
        }
      }
      else {
        if (DAT_006b9354 == -0x80000000) {
          puVar7 = DAT_006b9308;
          if (DAT_006b9308 == (undefined1 *)0x0) {
            puVar7 = &DAT_0064a3b4;
          }
          DAT_006b9354 = FUN_0060af10(puVar7);
        }
        if (DAT_006b9354 != 0) {
          FUN_005afe30(s_player_falls_on_a_step_00699a5c);
        }
        local_12c = local_128 - local_14c;
        fVar15 = (float10)FUN_004d8e90();
        local_15c = local_150;
        local_158 = local_14c;
        local_154 = local_148;
        local_140 = (float)((float10)local_12c - fVar15);
        FUN_004d7710(local_4c,3,&local_15c,&local_144);
        local_140 = local_100 - local_140;
        FUN_004d7710(local_7c,3,&local_15c,&local_f4);
        puVar8 = (undefined4 *)FUN_004d7710(local_2c,3,&local_15c,&local_144);
        local_12c = (float)*puVar8;
        iVar6 = puVar8[1];
      }
    }
    else {
      if (DAT_006b9354 == -0x80000000) {
        puVar7 = DAT_006b9308;
        if (DAT_006b9308 == (undefined1 *)0x0) {
          puVar7 = &DAT_0064a3b4;
        }
        DAT_006b9354 = FUN_0060af10(puVar7);
      }
      if (DAT_006b9354 != 0) {
        FUN_005afe30(s_player_is_jumping_up_00699ad8);
      }
      if (DAT_006b9354 == -0x80000000) {
        puVar7 = DAT_006b9308;
        if (DAT_006b9308 == (undefined1 *)0x0) {
          puVar7 = &DAT_0064a3b4;
        }
        DAT_006b9354 = FUN_0060af10(puVar7);
      }
      if (DAT_006b9354 != 0) {
        FUN_005afe30(s_player_checks_for_a_step_00699abc);
      }
      FUN_00554a90(-local_140);
      FUN_004d7710(local_6c,3,&local_15c,&local_f4);
      iVar6 = FUN_004d7710(local_bc,1,&local_15c,param_1 + 0x168);
      uVar3 = *(undefined4 *)(iVar6 + 4);
      local_12c = (float)local_15c;
      local_124 = local_154;
      local_128 = local_158;
      FUN_00554a90(local_140);
      if (((char)uVar3 == '\0') || (local_128 <= local_14c)) {
        if (DAT_006b9354 == -0x80000000) {
          puVar7 = DAT_006b9308;
          if (DAT_006b9308 == (undefined1 *)0x0) {
            puVar7 = &DAT_0064a3b4;
          }
          DAT_006b9354 = FUN_0060af10(puVar7);
        }
        if (DAT_006b9354 != 0) {
          FUN_005afe30(s_player_found_no_step_00699b28);
        }
        local_15c = local_150;
        local_158 = local_14c;
        local_154 = local_148;
        piVar9 = (int *)FUN_004d7710(local_dc,3,&local_15c,&local_104);
        iVar4 = *piVar9;
        iVar6 = piVar9[1];
        if ((char)((uint)iVar6 >> 8) != '\0') {
          if (DAT_006b9354 == -0x80000000) {
            puVar7 = DAT_006b9308;
            if (DAT_006b9308 == (undefined1 *)0x0) {
              puVar7 = &DAT_0064a3b4;
            }
            DAT_006b9354 = FUN_0060af10(puVar7);
          }
          if (DAT_006b9354 != 0) {
            FUN_005afe30(s_player_hit_a_ceiling_00699a8c);
          }
          if (0.0 < *(float *)(param_1 + 0x178)) {
            *(undefined4 *)(param_1 + 0x178) = 0;
          }
        }
        _DAT_006996e0 = 1.0;
        if (0 < iVar4) {
          FUN_005b2fe0(&local_e8);
          FUN_005b2f20();
LAB_004d899a:
          _DAT_006996e0 = ABS(local_e4);
        }
      }
      else {
        if (DAT_006b9354 == -0x80000000) {
          puVar7 = DAT_006b9308;
          if (DAT_006b9308 == (undefined1 *)0x0) {
            puVar7 = &DAT_0064a3b4;
          }
          DAT_006b9354 = FUN_0060af10(puVar7);
        }
        if (DAT_006b9354 != 0) {
          FUN_005afe30(s_player_jumped_on_a_step_00699aa4);
        }
        fVar15 = (float10)FUN_004d8e90();
        local_15c = local_150;
        local_158 = local_14c;
        local_154 = local_148;
        local_140 = (float)(((float10)local_128 - (float10)local_14c) + fVar15);
        FUN_004d7710(local_3c,3,&local_15c,&local_144);
        local_140 = local_100 - local_140;
        FUN_004d7710(local_ac,3,&local_15c,&local_f4);
        puVar8 = (undefined4 *)FUN_004d7710(local_5c,1,&local_15c,param_1 + 0x168);
        local_12c = (float)*puVar8;
        iVar6 = puVar8[1];
      }
    }
    if ((char)iVar6 != '\0') {
      if (DAT_006b9354 == -0x80000000) {
        puVar7 = DAT_006b9308;
        if (DAT_006b9308 == (undefined1 *)0x0) {
          puVar7 = &DAT_0064a3b4;
        }
        DAT_006b9354 = FUN_0060af10(puVar7);
      }
      if (DAT_006b9354 != 0) {
        FUN_005afe30(s_player_can_stand_on_a_plane_agai_00699a38);
      }
      *(undefined4 *)(param_1 + 0x100) = 0;
    }
    break;
  default:
    local_114[0] = local_f5;
    uVar11 = 0xffffffff;
    local_10c = 0;
    pcVar16 = s_invalid_PlayerMoveState_006905e8;
    do {
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      cVar5 = *pcVar16;
      pcVar16 = pcVar16 + 1;
    } while (cVar5 != '\0');
    uVar11 = ~uVar11 - 1;
    local_110 = (char *)0x0;
    local_108 = 0;
    if ((((uVar11 < 0xfffffffe) || (FUN_005fe5fb(), local_110 == (char *)0x0)) ||
        (cVar5 = local_110[-1], cVar5 == '\0')) || (cVar5 == -1)) {
      if (uVar11 != 0) {
        if ((0x1f < local_108) || (local_108 < uVar11)) {
          FUN_004040a0(1);
          goto LAB_004d8c56;
        }
        goto LAB_004d8c64;
      }
      FUN_004040a0(1);
    }
    else if (uVar11 == 0) {
      local_110[-1] = cVar5 + -1;
      FUN_004040a0(0);
    }
    else {
LAB_004d8c56:
      FUN_00401a60(uVar11);
LAB_004d8c64:
      pcVar16 = s_invalid_PlayerMoveState_006905e8;
      pcVar13 = local_110;
      for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar16;
        pcVar16 = pcVar16 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar12 = uVar11 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *pcVar13 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        pcVar13 = pcVar13 + 1;
      }
      local_110[uVar11] = '\0';
      local_10c = uVar11;
    }
    uStack_4 = 0;
    pcVar10 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_AdamSource_Adam_00699728,
                                   0x49d,local_114);
    (*pcVar10)();
    uStack_4 = 0xffffffff;
    if (local_110 != (char *)0x0) {
      cVar5 = local_110[-1];
      if ((cVar5 == '\0') || (cVar5 == -1)) {
        FUN_005fe5f0(local_110 + -1);
      }
      else {
        local_110[-1] = cVar5 + -1;
      }
    }
    local_110 = (char *)0x0;
    local_10c = 0;
    local_108 = 0;
    break;
  case 4:
    FUN_005b3000(&local_15c);
    iVar6 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      iVar6 = FUN_0055b280();
    }
    if (*(char *)(iVar6 + 0x48) == '\0') {
      if (DAT_006b9354 == -0x80000000) {
        puVar7 = DAT_006b9308;
        if (DAT_006b9308 == (undefined1 *)0x0) {
          puVar7 = &DAT_0064a3b4;
        }
        DAT_006b9354 = FUN_0060af10(puVar7);
      }
      if (DAT_006b9354 != 0) {
        FUN_005afe30(s_player_still_ignores_collisions_006999bc);
      }
    }
    else {
      if (DAT_006b9354 == -0x80000000) {
        puVar7 = DAT_006b9308;
        if (DAT_006b9308 == (undefined1 *)0x0) {
          puVar7 = &DAT_0064a3b4;
        }
        DAT_006b9354 = FUN_0060af10(puVar7);
      }
      if (DAT_006b9354 != 0) {
        FUN_005afe30(s_player_starts_colliding_again_006999dc);
      }
      *(undefined4 *)(param_1 + 0x100) = 2;
      FUN_005b3070();
    }
  }
  if (DAT_006b9354 == -0x80000000) {
    puVar7 = DAT_006b9308;
    if (DAT_006b9308 == (undefined1 *)0x0) {
      puVar7 = &DAT_0064a3b4;
    }
    DAT_006b9354 = FUN_0060af10(puVar7);
  }
  if (DAT_006b9354 != 0) {
    FUN_005afe30(s_Player_state_after_is__006905d0);
    FUN_00554210(&local_15c,s_userPos_006905c8);
    FUN_00554210(&local_138,s_userDir_006905c0);
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
  cVar5 = FUN_004d69b0(&local_15c);
  if (cVar5 == '\0') {
    if (DAT_006b93c4 == -0x80000000) {
      puVar7 = DAT_006b9378;
      if (DAT_006b9378 == (undefined1 *)0x0) {
        puVar7 = &DAT_0064a3b4;
      }
      DAT_006b93c4 = FUN_0060af10(puVar7);
    }
    if (DAT_006b93c4 != 0) {
      FUN_005afe30(s_Player_was_inside_an_actor_that_s_00699984);
    }
  }
  cVar5 = FUN_004d6e80(&local_15c);
  if (cVar5 == '\0') {
    if (DAT_006b93c4 == -0x80000000) {
      puVar7 = DAT_006b9378;
      if (DAT_006b9378 == (undefined1 *)0x0) {
        puVar7 = &DAT_0064a3b4;
      }
      DAT_006b93c4 = FUN_0060af10(puVar7);
    }
    if (DAT_006b93c4 != 0) {
      FUN_005afe30(s_Player_was_inside_a_model_that_s_00690510);
    }
  }
  FUN_0046d2b0(&local_15c);
  *param_2 = local_15c;
  param_2[1] = local_158;
  param_2[2] = local_154;
  ExceptionList = local_c;
  return;
}

