/*
 * FUN_004e3930 at 004e3930
 * undefined FUN_004e3930(void)
 * Address ranges: 004e3930-004e3f64
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x004e3a0d) */
/* WARNING: Removing unreachable block (ram,0x004e3a29) */
/* WARNING: Removing unreachable block (ram,0x004e3a2b) */

undefined4 __thiscall FUN_004e3930(int param_1,int param_2,undefined4 param_3,float param_4)

{
  float fVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  code *pcVar8;
  uint uVar9;
  undefined1 local_3c [16];
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar5 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00632a28;
  local_c = ExceptionList;
  pcVar3 = *(char **)(param_2 + 4);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  ExceptionList = &local_c;
  iVar4 = __strcmpi(pcVar3,s_SetRadiusTime_0069a418);
  if (iVar4 == 0) {
    iVar5 = FUN_004337e0();
    if (iVar5 != 0) {
      puVar6 = *(undefined1 **)(param_1 + 0x70);
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &DAT_0064a3b4;
      }
      uVar7 = FUN_005ae390(local_3c,s_SetRadiusTime___for_light__s_0069a3f8,puVar6);
      local_4 = 0;
      FUN_005aff00(uVar7);
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    iVar5 = *(int *)((int)param_4 + 4);
    if (((iVar5 == 0) || ((*(int *)((int)param_4 + 8) - iVar5) / 0x18 != 1)) ||
       (*(int *)(iVar5 + 8) != 1)) {
      iVar5 = FUN_005b18a0(local_1c,param_4);
      puVar6 = *(undefined1 **)(iVar5 + 4);
      local_4 = 1;
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &DAT_0064a3b4;
      }
      uVar7 = FUN_005ae390(local_3c,s_SetRadiusTime___s____invalid_tim_0069a3d0,puVar6);
      local_4._0_1_ = 2;
      FUN_005035a0(uVar7);
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_004040a0(1);
      local_4 = 0xffffffff;
      FUN_004040a0(1);
      uVar7 = 0;
    }
    else {
      FUN_004e32f0(param_1 + 0x1bc,(float)*(double *)(iVar5 + 0x10),*(undefined4 *)(param_1 + 0x1cc)
                  );
      uVar7 = 1;
    }
  }
  else {
    pcVar3 = *(char **)(iVar5 + 4);
    if (pcVar3 == (char *)0x0) {
      pcVar3 = "";
    }
    iVar4 = __strcmpi(pcVar3,s_SetRadius_0069a3c4);
    if (iVar4 == 0) {
      iVar5 = FUN_004337e0();
      if (iVar5 != 0) {
        puVar6 = *(undefined1 **)(param_1 + 0x70);
        if (puVar6 == (undefined1 *)0x0) {
          puVar6 = &DAT_0064a3b4;
        }
        uVar7 = FUN_005ae390(local_1c,s_SetRadius___for_light__s_0069a3a8,puVar6);
        local_4 = 4;
        FUN_005aff00(uVar7);
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      fVar1 = param_4;
      iVar5 = *(int *)((int)param_4 + 4);
      if ((iVar5 != 0) && ((*(int *)((int)param_4 + 8) - iVar5) / 0x18 == 1)) {
        if (*(int *)(iVar5 + 8) != 1) {
          local_3c[0] = param_4._0_1_;
          FUN_004040a0(0);
          uVar9 = 0xffffffff;
          pcVar3 = &DAT_006b3f70;
          do {
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            cVar2 = *pcVar3;
            pcVar3 = pcVar3 + 1;
          } while (cVar2 != '\0');
          FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
          local_4 = 5;
          pcVar8 = (code *)FUN_005a07f0(s_IsDbl___00695008,
                                        s___Libs_daviscript_Include_Davi_S_00692284,0x41,local_3c);
          (*pcVar8)();
          local_4 = 0xffffffff;
          FUN_004040a0(1);
        }
        if (*(double *)(iVar5 + 0x10) != 0.0) {
          iVar5 = *(int *)((int)fVar1 + 4);
          if (*(int *)(iVar5 + 8) != 1) {
            local_3c[0] = param_4._0_1_;
            FUN_004040a0(0);
            uVar9 = 0xffffffff;
            pcVar3 = &DAT_006b3f70;
            do {
              if (uVar9 == 0) break;
              uVar9 = uVar9 - 1;
              cVar2 = *pcVar3;
              pcVar3 = pcVar3 + 1;
            } while (cVar2 != '\0');
            FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
            local_4 = 6;
            pcVar8 = (code *)FUN_005a07f0(s_IsDbl___00695008,
                                          s___Libs_daviscript_Include_Davi_S_00692284,0x41,local_3c)
            ;
            (*pcVar8)();
            local_4 = 0xffffffff;
            FUN_004040a0(1);
          }
          param_4 = (float)*(double *)(iVar5 + 0x10);
          if (0.0 <= param_4) {
            FUN_004e2d60(param_4);
            FUN_004e4440();
            ExceptionList = local_c;
            return 1;
          }
        }
      }
      iVar5 = FUN_005b18a0(local_3c,fVar1);
      puVar6 = *(undefined1 **)(iVar5 + 4);
      local_4 = 7;
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &DAT_0064a3b4;
      }
      uVar7 = FUN_005ae390(local_1c,s_SetRadius____s_____invalid_radiu_0069a380,puVar6);
      local_4._0_1_ = 8;
      FUN_005035a0(uVar7);
      local_4 = CONCAT31(local_4._1_3_,7);
      FUN_004040a0(1);
      local_4 = 0xffffffff;
      FUN_004040a0(1);
      uVar7 = 0;
    }
    else {
      pcVar3 = *(char **)(iVar5 + 4);
      if (pcVar3 == (char *)0x0) {
        pcVar3 = "";
      }
      iVar4 = __strcmpi(pcVar3,s_enable_0068f0e4);
      if (iVar4 == 0) {
        if (DAT_006b94b4 == -0x80000000) {
          puVar6 = DAT_006b9468;
          if (DAT_006b9468 == (undefined1 *)0x0) {
            puVar6 = &DAT_0064a3b4;
          }
          DAT_006b94b4 = FUN_0060af10(puVar6);
        }
        if (DAT_006b94b4 != 0) {
          puVar6 = *(undefined1 **)(param_1 + 0x70);
          if (puVar6 == (undefined1 *)0x0) {
            puVar6 = &DAT_0064a3b4;
          }
          uVar7 = FUN_005ae390(local_1c,s_Activate_light__s_0069a36c,puVar6);
          local_4 = 9;
          FUN_005aff00(uVar7);
          local_4 = 0xffffffff;
          if (local_18 != 0) {
            cVar2 = *(char *)(local_18 + -1);
            if ((cVar2 == '\0') || (cVar2 == -1)) {
              FUN_005fe5f0((char *)(local_18 + -1));
            }
            else {
              *(char *)(local_18 + -1) = cVar2 + -1;
            }
          }
        }
        FUN_00502350(1);
        if (*(char *)(param_1 + 0x1b4) == '\0') {
          uVar7 = *(undefined4 *)(param_1 + 0x18c);
        }
        else {
          uVar7 = *(undefined4 *)(param_1 + 400);
        }
        FUN_004e2d60(uVar7);
        FUN_004e4440();
        cVar2 = FUN_004e3f70(&param_2);
        if (cVar2 != '\0') {
          FUN_00503c30(iVar5,param_3,param_4);
        }
        uVar7 = 1;
      }
      else {
        pcVar3 = *(char **)(iVar5 + 4);
        if (pcVar3 == (char *)0x0) {
          pcVar3 = "";
        }
        iVar4 = __strcmpi(pcVar3,s_disable_0068f0dc);
        if (iVar4 == 0) {
          if (DAT_006b94b4 == -0x80000000) {
            puVar6 = DAT_006b9468;
            if (DAT_006b9468 == (undefined1 *)0x0) {
              puVar6 = &DAT_0064a3b4;
            }
            DAT_006b94b4 = FUN_0060af10(puVar6);
          }
          if (DAT_006b94b4 != 0) {
            puVar6 = *(undefined1 **)(param_1 + 0x70);
            if (puVar6 == (undefined1 *)0x0) {
              puVar6 = &DAT_0064a3b4;
            }
            uVar7 = FUN_005ae390(local_2c,s_DeActivate_light__s_0069a358,puVar6);
            local_4 = 10;
            FUN_005aff00(uVar7);
            local_4 = 0xffffffff;
            if (local_28 != 0) {
              cVar2 = *(char *)(local_28 + -1);
              if ((cVar2 == '\0') || (cVar2 == -1)) {
                FUN_005fe5f0((char *)(local_28 + -1));
              }
              else {
                *(char *)(local_28 + -1) = cVar2 + -1;
              }
            }
            local_28 = 0;
            local_24 = 0;
            local_20 = 0;
          }
          FUN_00502350(0);
          FUN_004e2d60(0);
          FUN_004e4440();
          cVar2 = FUN_004e3f70(&param_2);
          if (cVar2 != '\0') {
            FUN_00503c30(iVar5,param_3,param_4);
          }
          uVar7 = 1;
        }
        else {
          cVar2 = FUN_004e3f70(&param_2);
          fVar1 = param_4;
          uVar7 = param_3;
          if (cVar2 != '\0') {
            FUN_00503c30(iVar5,param_3,param_4);
          }
          uVar7 = FUN_005027d0(iVar5,uVar7,fVar1);
        }
      }
    }
  }
  ExceptionList = local_c;
  return uVar7;
}

