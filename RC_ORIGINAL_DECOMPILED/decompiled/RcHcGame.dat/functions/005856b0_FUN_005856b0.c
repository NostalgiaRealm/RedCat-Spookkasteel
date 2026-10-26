/*
 * FUN_005856b0 at 005856b0
 * undefined FUN_005856b0(void)
 * Address ranges: 005856b0-00585e53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64fce8 slot 6 for .?AVCAdamEffectSound@@. Original bytes unchanged; names and types still inferred.
 */

/* WARNING: Removing unreachable block (ram,0x00585737) */
/* WARNING: Removing unreachable block (ram,0x005859dc) */
/* WARNING: Removing unreachable block (ram,0x005859f9) */
/* WARNING: Removing unreachable block (ram,0x005859fb) */
/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64fce8 slot 6 for
   .?AVCAdamEffectSound@@. Original bytes unchanged; names and types still inferred. */

undefined4 __thiscall FUN_005856b0(int param_1,int param_2,undefined4 param_3,float param_4)

{
  double dVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  char *pcVar5;
  int iVar6;
  code *pcVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined1 local_2c [4];
  undefined4 *local_28;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00642aa0;
  local_c = ExceptionList;
  pcVar5 = *(char **)(param_2 + 4);
  if (pcVar5 == (char *)0x0) {
    pcVar5 = "";
  }
  ExceptionList = &local_c;
  iVar6 = __strcmpi(pcVar5,s_AddFrequency_0069e1a0);
  if (iVar6 == 0) {
    iVar6 = *(int *)((int)param_4 + 4);
    if (((iVar6 == 0) || ((*(int *)((int)param_4 + 8) - iVar6) / 0x18 != 1)) ||
       (*(int *)(iVar6 + 8) != 1)) {
      FUN_005b18a0(local_1c,param_4);
      local_4 = 0;
      FUN_005ae390();
      local_4._0_1_ = 1;
      FUN_005035a0();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0();
      local_4 = 0xffffffff;
      FUN_004040a0();
      uVar8 = 0;
    }
    else {
      dVar1 = *(double *)(iVar6 + 0x10);
      if (*(int *)(param_1 + 0x110) != 0) {
        if (*(int *)(param_1 + 0x110) == 0) {
          FUN_00409810(&DAT_006b3f70,&param_4);
          local_4 = 3;
          pcVar7 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                        local_2c);
          (*pcVar7)();
          local_4 = 0xffffffff;
          FUN_004040a0();
        }
        fVar2 = *(float *)(*(int *)(param_1 + 0x110) + 0x30);
        param_4 = fVar2 + (float)dVar1;
        if (0.0 <= param_4) {
          if (1.0 < param_4) {
            param_4 = 1.0;
          }
        }
        else {
          param_4 = 0.0;
        }
        FUN_00516fb0();
        iVar6 = FUN_004337e0();
        if (iVar6 != 0) {
          uVar8 = FUN_005ae390(local_2c,s_CAdamEffectSound__DoOnCommand____006a5dc8,
                               (double)(float)dVar1,(double)fVar2,(double)param_4);
          local_4 = 4;
          FUN_005aff00(uVar8);
          local_4 = 0xffffffff;
          FUN_004040a0();
        }
        if (*(int *)(param_1 + 0x110) == 0) {
          local_2c[0] = param_4._0_1_;
          FUN_004040a0();
          uVar10 = 0xffffffff;
          pcVar5 = &DAT_006b3f70;
          do {
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1;
            cVar4 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar4 != '\0');
          FUN_004040f0(&DAT_006b3f70,~uVar10 - 1);
          local_4 = 5;
          pcVar7 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                        local_2c);
          (*pcVar7)();
          local_4 = 0xffffffff;
          FUN_004040a0();
        }
        FUN_00553620();
      }
      uVar8 = 1;
    }
  }
  else {
    pcVar5 = *(char **)(param_2 + 4);
    if (pcVar5 == (char *)0x0) {
      pcVar5 = "";
    }
    iVar6 = __strcmpi(pcVar5,s_MultiplyVolume_0069e1cc);
    if (iVar6 == 0) {
      iVar6 = *(int *)((int)param_4 + 4);
      if ((((iVar6 == 0) || ((*(int *)((int)param_4 + 8) - iVar6) / 0x18 != 1)) ||
          (*(int *)(iVar6 + 8) != 1)) || (fVar2 = (float)*(double *)(iVar6 + 0x10), fVar2 < 0.0)) {
        FUN_005b18a0(local_2c,param_4);
        local_4 = 7;
        FUN_005ae390();
        local_4._0_1_ = 8;
        FUN_005035a0();
        local_4 = CONCAT31(local_4._1_3_,7);
        FUN_004040a0();
        local_4 = 0xffffffff;
        FUN_004040a0();
        uVar8 = 0;
      }
      else {
        if (*(int *)(param_1 + 0x110) != 0) {
          if (*(int *)(param_1 + 0x110) == 0) {
            local_2c[0] = param_4._0_1_;
            FUN_004040a0();
            uVar10 = 0xffffffff;
            pcVar5 = &DAT_006b3f70;
            do {
              if (uVar10 == 0) break;
              uVar10 = uVar10 - 1;
              cVar4 = *pcVar5;
              pcVar5 = pcVar5 + 1;
            } while (cVar4 != '\0');
            FUN_004040f0(&DAT_006b3f70,~uVar10 - 1);
            local_4 = 9;
            pcVar7 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6
                                          ,local_2c);
            (*pcVar7)();
            local_4 = 0xffffffff;
            FUN_004040a0();
          }
          fVar3 = *(float *)(*(int *)(param_1 + 0x110) + 0x2c);
          param_4 = fVar3 * fVar2;
          if (0.0 <= param_4) {
            if (1.0 < param_4) {
              param_4 = 1.0;
            }
          }
          else {
            param_4 = 0.0;
          }
          iVar9 = FUN_00516fb0();
          iVar6 = *(int *)(iVar9 + 100);
          if (iVar6 == -0x80000000) {
            iVar6 = FUN_0060af10();
            *(int *)(iVar9 + 100) = iVar6;
          }
          if (iVar6 != 0) {
            uVar8 = FUN_005ae390(local_1c,s_CAdamEffectSound__DoOnCommand____006a5d74,(double)fVar2,
                                 (double)fVar3,(double)param_4);
            local_4 = 10;
            FUN_005aff00(uVar8);
            local_4 = 0xffffffff;
            FUN_004040a0();
          }
          if (*(int *)(param_1 + 0x110) == 0) {
            local_2c[0] = param_4._0_1_;
            FUN_004040a0();
            uVar10 = 0xffffffff;
            pcVar5 = &DAT_006b3f70;
            do {
              if (uVar10 == 0) break;
              uVar10 = uVar10 - 1;
              cVar4 = *pcVar5;
              pcVar5 = pcVar5 + 1;
            } while (cVar4 != '\0');
            FUN_004040f0(&DAT_006b3f70,~uVar10 - 1);
            local_4 = 0xb;
            pcVar7 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6
                                          ,local_2c);
            (*pcVar7)();
            local_4 = 0xffffffff;
            FUN_004040a0();
          }
          FUN_00553610();
        }
        uVar8 = 1;
      }
    }
    else {
      pcVar5 = *(char **)(param_2 + 4);
      if (pcVar5 == (char *)0x0) {
        pcVar5 = "";
      }
      iVar6 = __strcmpi(pcVar5,s_enable_0068f0e4);
      if (iVar6 == 0) {
        FUN_00502350();
        *(undefined1 *)(param_1 + 0x115) = 1;
        if (*(int *)(*(int *)(param_1 + 0xf8) + 0x2c) == 0) {
          *(undefined4 *)(param_1 + 0x118) = 0;
          *(undefined4 *)(param_1 + 0x11c) = 0x3f800000;
          uVar8 = 1;
        }
        else {
          *(undefined4 *)(param_1 + 0x118) = 1;
          *(undefined4 *)(param_1 + 0x11c) = 0;
          uVar8 = 1;
        }
      }
      else {
        pcVar5 = *(char **)(param_2 + 4);
        if (pcVar5 == (char *)0x0) {
          pcVar5 = "";
        }
        iVar6 = __strcmpi(pcVar5,s_disable_0068f0dc);
        if (iVar6 == 0) {
          if (*(int *)(param_1 + 0x110) != 0) {
            if (*(int *)(*(int *)(param_1 + 0xf8) + 0x34) != 0) {
              *(undefined4 *)(param_1 + 0x118) = 2;
              ExceptionList = local_c;
              return 1;
            }
            if (*(int *)(param_1 + 0x110) == 0) {
              local_2c[0] = param_4._0_1_;
              FUN_004040a0();
              uVar10 = 0xffffffff;
              pcVar5 = &DAT_006b3f70;
              do {
                if (uVar10 == 0) break;
                uVar10 = uVar10 - 1;
                cVar4 = *pcVar5;
                pcVar5 = pcVar5 + 1;
              } while (cVar4 != '\0');
              uVar10 = ~uVar10 - 1;
              cVar4 = FUN_00401940(uVar10,1);
              if (cVar4 != '\0') {
                puVar12 = (undefined4 *)&DAT_006b3f70;
                for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
                  *local_28 = *puVar12;
                  puVar12 = puVar12 + 1;
                  local_28 = local_28 + 1;
                }
                for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
                  *(undefined1 *)local_28 = *(undefined1 *)puVar12;
                  puVar12 = (undefined4 *)((int)puVar12 + 1);
                  local_28 = (undefined4 *)((int)local_28 + 1);
                }
                FUN_00404190();
              }
              local_4 = 0xc;
              pcVar7 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,
                                            0xb6,local_2c);
              (*pcVar7)();
              local_4 = 0xffffffff;
              FUN_004040a0();
            }
            FUN_00553130();
            param_4 = 0.0;
            iVar6 = *(int *)(param_1 + 0x110);
            local_4 = 0xd;
            if (iVar6 != 0) {
              iVar9 = *(int *)(iVar6 + 0x14) + -1;
              *(int *)(iVar6 + 0x14) = iVar9;
              if (iVar9 == 0) {
                FUN_005abfc0();
              }
              *(undefined4 *)(param_1 + 0x110) = 0;
            }
            local_4 = 0xffffffff;
            FUN_00502350();
          }
          uVar8 = 1;
        }
        else {
          uVar8 = FUN_005027d0();
        }
      }
    }
  }
  ExceptionList = local_c;
  return uVar8;
}

