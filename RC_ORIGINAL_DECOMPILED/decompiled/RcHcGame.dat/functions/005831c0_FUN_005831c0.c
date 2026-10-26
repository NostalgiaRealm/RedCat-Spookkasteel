/*
 * FUN_005831c0 at 005831c0
 * undefined FUN_005831c0(void)
 * Address ranges: 005831c0-00583a6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x00583755) */
/* WARNING: Removing unreachable block (ram,0x00583772) */
/* WARNING: Removing unreachable block (ram,0x00583774) */
/* WARNING: Removing unreachable block (ram,0x0058361d) */
/* WARNING: Removing unreachable block (ram,0x005838bc) */
/* WARNING: Removing unreachable block (ram,0x005838d9) */
/* WARNING: Removing unreachable block (ram,0x005838db) */

undefined1 __thiscall FUN_005831c0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  undefined1 uVar2;
  char *pcVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  int iVar7;
  code *pcVar8;
  uint uVar9;
  int *piVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined1 local_51;
  float local_4c;
  float fStack_48;
  float fStack_44;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 local_2c [16];
  undefined1 local_1c [4];
  int iStack_18;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006427a0;
  local_c = ExceptionList;
  pcVar3 = *(char **)(param_2 + 4);
  local_51 = 0;
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  ExceptionList = &local_c;
  iVar4 = __strcmpi(pcVar3,s_SetFollowDaviName_0069e28c);
  if (iVar4 == 0) {
    iVar4 = *(int *)(param_4 + 4);
    if (((iVar4 == 0) || ((*(int *)(param_4 + 8) - iVar4) / 0x18 != 1)) ||
       (*(int *)(iVar4 + 8) != 3)) {
      FUN_005b18a0(&local_4c,param_4);
      local_4 = 0;
      FUN_005ae390();
      local_4._0_1_ = 1;
      FUN_005035a0();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0();
      local_4 = 0xffffffff;
      FUN_004040a0();
      uVar2 = 0;
    }
    else {
      iVar4 = FUN_0045da10();
      puVar5 = *(undefined1 **)(iVar4 + 4);
      local_4 = 2;
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_0064a3b4;
      }
      puVar11 = local_2c;
      uVar12 = CONCAT44(puVar5,s_CAdamEffectPlanetoid__SetFollowD_006a5a18);
      uVar6 = FUN_005ae390();
      local_4._0_1_ = 3;
      FUN_005aff00(uVar6,puVar11,uVar12);
      local_4._0_1_ = 2;
      FUN_004040a0();
      FUN_0040cc00();
      uVar9 = 0xffffffff;
      pcVar3 = &DAT_006b3f70;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
      FUN_00457240();
      local_4._0_1_ = 4;
      FUN_00537300();
      local_4 = CONCAT31(local_4._1_3_,2);
      FUN_0057d310();
      local_4 = 0xffffffff;
      FUN_004040a0();
      uVar2 = 1;
    }
  }
  else {
    pcVar3 = *(char **)(param_2 + 4);
    if (pcVar3 == (char *)0x0) {
      pcVar3 = "";
    }
    iVar7 = __strcmpi(pcVar3,s_SetFollowOffset_0069e2a0);
    iVar4 = param_4;
    if (iVar7 == 0) {
      iVar7 = *(int *)(param_4 + 4);
      if (((iVar7 == 0) || ((*(int *)(param_4 + 8) - iVar7) / 0x18 != 3)) ||
         ((*(int *)(iVar7 + 8) != 1 ||
          ((*(int *)(iVar7 + 0x20) != 1 || (*(int *)(iVar7 + 0x38) != 1)))))) {
        FUN_005b18a0(&local_4c,param_4);
        local_4 = 5;
        FUN_005ae390();
        local_4._0_1_ = 6;
        FUN_005035a0();
        local_4 = CONCAT31(local_4._1_3_,5);
        FUN_004040a0();
        local_4 = 0xffffffff;
        FUN_004040a0();
        uVar2 = 0;
      }
      else {
        if (*(int *)(iVar7 + 8) != 1) {
          FUN_00409810(&DAT_006b3f70,&param_4);
          local_4 = 7;
          pcVar8 = (code *)FUN_005a07f0(s_IsDbl___00695008,
                                        s___Libs_daviscript_Include_Davi_S_00692284,0x41,&local_4c);
          (*pcVar8)();
          local_4 = 0xffffffff;
          FUN_004040a0();
        }
        local_4c = (float)*(double *)(iVar7 + 0x10);
        iVar7 = *(int *)(iVar4 + 4);
        if (*(int *)(iVar7 + 0x20) != 1) {
          FUN_00409810(&DAT_006b3f70,&param_4);
          local_4 = 8;
          pcVar8 = (code *)FUN_005a07f0(s_IsDbl___00695008,
                                        s___Libs_daviscript_Include_Davi_S_00692284,0x41,local_2c);
          (*pcVar8)();
          local_4 = 0xffffffff;
          FUN_004040a0();
        }
        fStack_48 = (float)*(double *)(iVar7 + 0x28);
        iVar4 = *(int *)(iVar4 + 4);
        if (*(int *)(iVar4 + 0x38) != 1) {
          FUN_00409810(&DAT_006b3f70,&param_4);
          local_4 = 9;
          pcVar8 = (code *)FUN_005a07f0(s_IsDbl___00695008,
                                        s___Libs_daviscript_Include_Davi_S_00692284,0x41,local_2c);
          (*pcVar8)();
          local_4 = 0xffffffff;
          FUN_004040a0();
        }
        fStack_44 = (float)*(double *)(iVar4 + 0x40);
        uVar6 = FUN_005ae390(local_2c,s_CAdamEffectPlanetoid__SetFollowO_006a59b0,(double)local_4c,
                             (double)fStack_48,(double)fStack_44);
        local_4 = 10;
        FUN_005aff00(uVar6);
        local_4 = 0xffffffff;
        FUN_004040a0();
        *(float *)(param_1 + 0x1a4) = local_4c;
        *(float *)(param_1 + 0x1a8) = fStack_48;
        *(float *)(param_1 + 0x1ac) = fStack_44;
        uVar2 = 1;
      }
    }
    else {
      pcVar3 = *(char **)(param_2 + 4);
      if (pcVar3 == (char *)0x0) {
        pcVar3 = "";
      }
      iVar4 = __strcmpi(pcVar3,s_SetFriction_0069e2b0);
      if (iVar4 == 0) {
        iVar4 = *(int *)(param_4 + 4);
        if (((iVar4 == 0) || ((*(int *)(param_4 + 8) - iVar4) / 0x18 != 1)) ||
           ((*(int *)(iVar4 + 8) != 1 || ((float)*(double *)(iVar4 + 0x10) < 0.0)))) {
          FUN_005b18a0(&local_4c,param_4);
          local_4 = 0xc;
          FUN_005ae390();
          local_4._0_1_ = 0xd;
          FUN_005035a0();
          local_4 = CONCAT31(local_4._1_3_,0xc);
          FUN_004040a0();
          local_4 = 0xffffffff;
          FUN_004040a0();
          uVar2 = 0;
        }
        else {
          *(float *)(param_1 + 0x1b4) = (float)*(double *)(iVar4 + 0x10);
          uVar2 = 1;
        }
      }
      else {
        pcVar3 = *(char **)(param_2 + 4);
        if (pcVar3 == (char *)0x0) {
          pcVar3 = "";
        }
        iVar4 = __strcmpi(pcVar3,s_RemovePlanetoid_0069e27c);
        if (iVar4 == 0) {
          iVar4 = *(int *)(param_4 + 4);
          if ((((iVar4 == 0) || ((*(int *)(param_4 + 8) - iVar4) / 0x18 != 1)) ||
              (*(int *)(iVar4 + 8) != 1)) || (*(double *)(iVar4 + 0x10) < 0.0)) {
            FUN_005b18a0(&local_4c,param_4);
            local_4 = 0xf;
            FUN_005ae390();
            local_4._0_1_ = 0x10;
            FUN_005035a0();
            local_4 = CONCAT31(local_4._1_3_,0xf);
            FUN_004040a0();
            local_4 = 0xffffffff;
            FUN_004040a0();
            uVar2 = 0;
          }
          else {
            __ftol();
            FUN_00583f20();
            uVar2 = 1;
          }
        }
        else {
          pcVar3 = *(char **)(param_2 + 4);
          if (pcVar3 == (char *)0x0) {
            pcVar3 = "";
          }
          iVar4 = __strcmpi(pcVar3,s_RemoveAllPlanetoids_0069e268);
          if (iVar4 == 0) {
            iVar4 = *(int *)(param_4 + 4);
            if (((iVar4 == 0) || ((*(int *)(param_4 + 8) - iVar4) / 0x18 != 1)) ||
               ((*(int *)(iVar4 + 8) != 1 || (*(double *)(iVar4 + 0x10) < 0.0)))) {
              FUN_005b18a0(local_1c,param_4);
              local_4 = 0x12;
              FUN_005ae390();
              local_4 = CONCAT31(local_4._1_3_,0x13);
              FUN_005035a0();
              if (iStack_38 != 0) {
                cVar1 = *(char *)(iStack_38 + -1);
                if ((cVar1 == '\0') || (cVar1 == -1)) {
                  FUN_005fe5f0();
                }
                else {
                  *(char *)(iStack_38 + -1) = cVar1 + -1;
                }
              }
              iStack_38 = 0;
              uStack_34 = 0;
              uStack_30 = 0;
              if (iStack_18 != 0) {
                cVar1 = *(char *)(iStack_18 + -1);
                if ((cVar1 != '\0') && (cVar1 != -1)) {
                  *(char *)(iStack_18 + -1) = cVar1 + -1;
                  ExceptionList = local_c;
                  return 0;
                }
                FUN_005fe5f0();
              }
              uVar2 = 0;
            }
            else {
              __ftol();
              FUN_005841a0();
              uVar2 = 1;
            }
          }
          else {
            iVar4 = 0;
            if (0 < *(int *)(param_1 + 0x17c)) {
              piVar10 = (int *)(param_1 + 0xfc);
              do {
                if (((*piVar10 != 0) && (*(int *)(*piVar10 + 0x18) != 0)) &&
                   (cVar1 = FUN_00503c30(), cVar1 != '\0')) {
                  local_51 = 1;
                }
                iVar4 = iVar4 + 1;
                piVar10 = piVar10 + 1;
              } while (iVar4 < *(int *)(param_1 + 0x17c));
            }
            cVar1 = FUN_005027d0();
            uVar2 = 1;
            if (cVar1 == '\0') {
              uVar2 = local_51;
            }
          }
        }
      }
    }
  }
  ExceptionList = local_c;
  return uVar2;
}

