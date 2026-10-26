/*
 * FUN_00583a80 at 00583a80
 * undefined FUN_00583a80(void)
 * Address ranges: 00583a80-00583f16
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00583a80(undefined4 *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 uVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  undefined1 *puVar8;
  int iVar9;
  char *pcVar10;
  undefined1 local_2c [4];
  char *local_28;
  undefined1 local_1c [4];
  char *local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064280a;
  local_c = ExceptionList;
  iVar9 = param_1[9];
  if ((((float)param_1[0xb] <= 0.0) || ((float)param_1[10] <= 0.0)) ||
     ((float)param_1[0xb] < (float)param_1[10])) {
    puVar8 = (undefined1 *)*param_1;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &DAT_006b3f70;
    }
    ExceptionList = &local_c;
    uVar3 = FUN_005ae390(local_2c,s_CAdamEffectPlanetoid__CreateFrom_006a5a48,puVar8);
    local_4 = 0;
    FUN_004c43e0(uVar3);
  }
  else {
    if (((0.0 < (float)param_1[0xf]) && (0.0 < (float)param_1[0xe])) &&
       ((float)param_1[0xe] <= (float)param_1[0xf])) {
      if ((((float)param_1[0xd] <= 0.0) || ((float)param_1[0xc] <= 0.0)) ||
         ((float)param_1[0xd] < (float)param_1[0xc])) {
        puVar8 = (undefined1 *)*param_1;
        if (puVar8 == (undefined1 *)0x0) {
          puVar8 = &DAT_006b3f70;
        }
        ExceptionList = &local_c;
        uVar3 = FUN_005ae390(local_2c,s_CAdamEffectPlanetoid__CreateFrom_006a5b04,puVar8);
        local_4 = 2;
        FUN_004c43e0(uVar3);
        if (local_28 == (char *)0x0) {
          ExceptionList = local_c;
          return 0;
        }
        pcVar7 = local_28 + -1;
        cVar2 = local_28[-1];
        if ((cVar2 != '\0') && (cVar2 != -1)) {
          *pcVar7 = cVar2 + -1;
          ExceptionList = local_c;
          return 0;
        }
      }
      else {
        if (param_1[8] == 0) {
          puVar8 = (undefined1 *)*param_1;
          if (puVar8 == (undefined1 *)0x0) {
            puVar8 = &DAT_006b3f70;
          }
          ExceptionList = &local_c;
          uVar3 = FUN_005ae390(local_2c,s_CAdamEffectPlanetoid__CreateFrom_006a5bac,puVar8);
          local_4 = 3;
          FUN_004c43e0(uVar3);
        }
        else {
          if (-1 < iVar9) {
            if (0x20 < iVar9) {
              iVar9 = 0x20;
            }
            ExceptionList = &local_c;
            pvVar4 = operator_new(0x1c8);
            local_4 = 5;
            if (pvVar4 == (void *)0x0) {
              param_1 = (undefined4 *)0x0;
            }
            else {
              uVar3 = FUN_005033f0(local_2c,*param_1,s_EffectPlanetoid_006a539c);
              local_4 = CONCAT31(local_4._1_3_,6);
              param_1 = (undefined4 *)FUN_00580e90(uVar3,param_1);
            }
            local_4 = 0xffffffff;
            if ((pvVar4 != (void *)0x0) && (local_28 != (char *)0x0)) {
              cVar2 = local_28[-1];
              if ((cVar2 == '\0') || (cVar2 == -1)) {
                FUN_005fe5f0(local_28 + -1);
              }
              else {
                local_28[-1] = cVar2 + -1;
              }
            }
            FUN_00583a70(iVar9);
            FUN_00502350(puVar1[5] != 0);
            pcVar7 = (char *)*puVar1;
            local_2c[0] = param_1._0_1_;
            FUN_004040a0(0);
            local_4 = 8;
            if (pcVar7 == (char *)0x0) {
              uVar5 = 0xffffffff;
              pcVar7 = &DAT_006b3f70;
              do {
                if (uVar5 == 0) break;
                uVar5 = uVar5 - 1;
                cVar2 = *pcVar7;
                pcVar7 = pcVar7 + 1;
              } while (cVar2 != '\0');
              FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
            }
            else {
              uVar5 = 0xffffffff;
              pcVar10 = pcVar7;
              do {
                if (uVar5 == 0) break;
                uVar5 = uVar5 - 1;
                cVar2 = *pcVar10;
                pcVar10 = pcVar10 + 1;
              } while (cVar2 != '\0');
              uVar5 = ~uVar5 - 1;
              cVar2 = FUN_00401940(uVar5,1);
              if (cVar2 != '\0') {
                for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
                  *(undefined4 *)local_28 = *(undefined4 *)pcVar7;
                  pcVar7 = pcVar7 + 4;
                  local_28 = local_28 + 4;
                }
                for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                  *local_28 = *pcVar7;
                  pcVar7 = pcVar7 + 1;
                  local_28 = local_28 + 1;
                }
                FUN_00404190(uVar5);
              }
            }
            FUN_00503ae0(local_2c);
            local_4 = 0xffffffff;
            FUN_004040a0(1);
            pcVar7 = (char *)puVar1[1];
            local_1c[0] = param_1._0_1_;
            FUN_004040a0(0);
            local_4 = 9;
            if (pcVar7 != (char *)0x0) {
              uVar5 = 0xffffffff;
              pcVar10 = pcVar7;
              do {
                if (uVar5 == 0) break;
                uVar5 = uVar5 - 1;
                cVar2 = *pcVar10;
                pcVar10 = pcVar10 + 1;
              } while (cVar2 != '\0');
              uVar5 = ~uVar5 - 1;
              cVar2 = FUN_00401940(uVar5,1);
              if (cVar2 != '\0') {
                pcVar10 = local_18;
                for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
                  *(undefined4 *)pcVar10 = *(undefined4 *)pcVar7;
                  pcVar7 = pcVar7 + 4;
                  pcVar10 = pcVar10 + 4;
                }
                for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                  *pcVar10 = *pcVar7;
                  pcVar7 = pcVar7 + 1;
                  pcVar10 = pcVar10 + 1;
                }
                FUN_00404190(uVar5);
              }
            }
            FUN_0040cc00(local_1c,0,0xffffffff);
            if (local_18 != (char *)0x0) {
              cVar2 = local_18[-1];
              if ((cVar2 != '\0') && (cVar2 != -1)) {
                local_18[-1] = cVar2 + -1;
                ExceptionList = local_c;
                return param_1;
              }
              FUN_005fe5f0(local_18 + -1);
            }
            ExceptionList = local_c;
            return param_1;
          }
          puVar8 = &DAT_006b3f70;
          if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
            puVar8 = (undefined1 *)*param_1;
          }
          ExceptionList = &local_c;
          uVar3 = FUN_005ae390(local_2c,s_CAdamEffectPlanetoid__CreateFrom_006a5b5c,puVar8,iVar9);
          local_4 = 4;
          FUN_004c43e0(uVar3);
        }
        if (local_28 == (char *)0x0) {
          ExceptionList = local_c;
          return 0;
        }
        pcVar7 = local_28 + -1;
        cVar2 = local_28[-1];
        if ((cVar2 != '\0') && (cVar2 != -1)) {
          *pcVar7 = cVar2 + -1;
          ExceptionList = local_c;
          return 0;
        }
      }
      FUN_005fe5f0(pcVar7);
      ExceptionList = local_c;
      return 0;
    }
    puVar8 = (undefined1 *)*param_1;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &DAT_006b3f70;
    }
    ExceptionList = &local_c;
    uVar3 = FUN_005ae390(local_2c,s_CAdamEffectPlanetoid__CreateFrom_006a5aa8,puVar8);
    local_4 = 1;
    FUN_004c43e0(uVar3);
  }
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  ExceptionList = local_c;
  return 0;
}

