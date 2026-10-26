/*
 * FUN_0049e310 at 0049e310
 * undefined FUN_0049e310(void)
 * Address ranges: 0049e310-0049e99d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x0049e558) */
/* WARNING: Removing unreachable block (ram,0x0049e41e) */
/* WARNING: Removing unreachable block (ram,0x0049e6f0) */
/* WARNING: Removing unreachable block (ram,0x0049e70c) */
/* WARNING: Removing unreachable block (ram,0x0049e70e) */

undefined4 __thiscall FUN_0049e310(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  double dVar1;
  float fVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  code *pcVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  int *piVar15;
  float10 fVar16;
  undefined1 local_4c [4];
  undefined4 *puStack_48;
  uint uStack_44;
  undefined4 uStack_40;
  undefined1 local_3c [24];
  undefined1 auStack_24 [24];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062cb90;
  local_c = ExceptionList;
  pcVar4 = *(char **)(param_2 + 4);
  if (pcVar4 == (char *)0x0) {
    pcVar4 = "";
  }
  ExceptionList = &local_c;
  iVar5 = __strcmpi(pcVar4,s_EnableShadow_00695030);
  if (iVar5 == 0) {
    if ((*(char *)((int)param_1 + 0x20d) != '\x01') &&
       (*(undefined1 *)((int)param_1 + 0x20d) = 1, param_1[6] != 0)) {
      (**(code **)(*param_1 + 0x60))();
    }
    uVar7 = 1;
  }
  else {
    pcVar4 = *(char **)(param_2 + 4);
    if (pcVar4 == (char *)0x0) {
      pcVar4 = "";
    }
    iVar5 = __strcmpi(pcVar4,s_DisableShadow_00695020);
    if (iVar5 == 0) {
      if ((*(char *)((int)param_1 + 0x20d) != '\0') &&
         (*(undefined1 *)((int)param_1 + 0x20d) = 0, param_1[6] != 0)) {
        (**(code **)(*param_1 + 0x60))();
      }
      uVar7 = 1;
    }
    else {
      pcVar4 = *(char **)(param_2 + 4);
      if (pcVar4 == (char *)0x0) {
        pcVar4 = "";
      }
      iVar5 = __strcmpi(pcVar4,s_SetMotionSpeed_00695010);
      if (iVar5 == 0) {
        iVar5 = *(int *)(param_4 + 4);
        if (((iVar5 != 0) && ((*(int *)(param_4 + 8) - iVar5) / 0x18 == 1)) &&
           ((*(int *)(iVar5 + 8) == 1 && (0.0 <= (float)*(double *)(iVar5 + 0x10))))) {
          FUN_004a0bd0((float)*(double *)(iVar5 + 0x10));
          ExceptionList = local_c;
          return 1;
        }
        iVar5 = FUN_005b18a0(local_3c,param_4);
        puVar6 = *(undefined1 **)(iVar5 + 4);
        local_4 = 1;
        if (puVar6 == (undefined1 *)0x0) {
          puVar6 = &DAT_0064a3b4;
        }
        uVar7 = FUN_005ae390(local_4c,s_SetMotionSpeed___s____invalid_va_00694fd0,puVar6);
        local_4._0_1_ = 2;
        FUN_005035a0(uVar7);
        local_4 = CONCAT31(local_4._1_3_,1);
        FUN_004040a0(1);
      }
      else {
        pcVar4 = *(char **)(param_2 + 4);
        if (pcVar4 == (char *)0x0) {
          pcVar4 = "";
        }
        iVar5 = __strcmpi(pcVar4,s_MultiplyMotionSpeed_00694fbc);
        if (iVar5 == 0) {
          iVar5 = *(int *)(param_4 + 4);
          if ((((iVar5 != 0) && ((*(int *)(param_4 + 8) - iVar5) / 0x18 == 1)) &&
              (*(int *)(iVar5 + 8) == 1)) &&
             (dVar1 = *(double *)(iVar5 + 0x10), 0.0 <= (float)dVar1)) {
            fVar16 = (float10)FUN_00439bc0();
            FUN_004a0bd0((float)(fVar16 * (float10)(float)dVar1));
            ExceptionList = local_c;
            return 1;
          }
          iVar5 = FUN_005b18a0(local_4c,param_4);
          puVar6 = *(undefined1 **)(iVar5 + 4);
          local_4 = 4;
          if (puVar6 == (undefined1 *)0x0) {
            puVar6 = &DAT_0064a3b4;
          }
          uVar7 = FUN_005ae390(local_3c,s_MultiplyMotionSpeed___s____inval_00694f84,puVar6);
          local_4._0_1_ = 5;
          FUN_005035a0(uVar7);
          local_4 = CONCAT31(local_4._1_3_,4);
          FUN_004040a0(1);
        }
        else {
          pcVar4 = *(char **)(param_2 + 4);
          if (pcVar4 == (char *)0x0) {
            pcVar4 = "";
          }
          iVar5 = __strcmpi(pcVar4,s_RotateX_00694f7c);
          if (iVar5 != 0) {
            pcVar4 = *(char **)(param_2 + 4);
            if (pcVar4 == (char *)0x0) {
              pcVar4 = "";
            }
            iVar5 = __strcmpi(pcVar4,s_RotateY_00694f74);
            if (iVar5 != 0) {
              pcVar4 = *(char **)(param_2 + 4);
              if (pcVar4 == (char *)0x0) {
                pcVar4 = "";
              }
              iVar5 = __strcmpi(pcVar4,s_RotateZ_00694f6c);
              if (iVar5 != 0) {
                uVar7 = FUN_005027d0(param_2,param_3,param_4);
                ExceptionList = local_c;
                return uVar7;
              }
            }
          }
          iVar5 = *(int *)(param_4 + 4);
          if ((((iVar5 != 0) && ((*(int *)(param_4 + 8) - iVar5) / 0x18 == 1)) &&
              (*(int *)(iVar5 + 8) == 1)) &&
             ((fVar2 = (float)*(double *)(iVar5 + 0x10), fVar2 <= 720.0 && (-720.0 <= fVar2)))) {
            fVar2 = fVar2 * 0.017453292;
            pcVar4 = *(char **)(param_2 + 4);
            if (pcVar4 == (char *)0x0) {
              pcVar4 = "";
            }
            iVar5 = __strcmpi(pcVar4,s_RotateX_00694f7c);
            if (iVar5 == 0) {
              FUN_0049ccf0(fVar2);
            }
            else {
              pcVar4 = *(char **)(param_2 + 4);
              if (pcVar4 == (char *)0x0) {
                pcVar4 = "";
              }
              iVar5 = __strcmpi(pcVar4,s_RotateY_00694f74);
              if (iVar5 == 0) {
                FUN_0049cd90(fVar2);
              }
              else {
                pcVar4 = *(char **)(param_2 + 4);
                if (pcVar4 == (char *)0x0) {
                  pcVar4 = "";
                }
                iVar5 = __strcmpi(pcVar4,s_RotateZ_00694f6c);
                if (iVar5 == 0) {
                  FUN_0049ce30(fVar2);
                }
                else {
                  param_4._0_1_ = SUB41(fVar2,0);
                  local_4c[0] = (undefined1)param_4;
                  uVar10 = 0xffffffff;
                  pcVar4 = &DAT_006b3f70;
                  do {
                    if (uVar10 == 0) break;
                    uVar10 = uVar10 - 1;
                    cVar3 = *pcVar4;
                    pcVar4 = pcVar4 + 1;
                  } while (cVar3 != '\0');
                  uVar10 = ~uVar10 - 1;
                  puStack_48 = (undefined4 *)0x0;
                  uStack_44 = 0;
                  uStack_40 = 0;
                  cVar3 = FUN_00401940(uVar10,1);
                  if (cVar3 != '\0') {
                    puVar13 = (undefined4 *)&DAT_006b3f70;
                    puVar14 = puStack_48;
                    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
                      *puVar14 = *puVar13;
                      puVar13 = puVar13 + 1;
                      puVar14 = puVar14 + 1;
                    }
                    for (uVar11 = uVar10 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
                      *(undefined1 *)puVar14 = *(undefined1 *)puVar13;
                      puVar13 = (undefined4 *)((int)puVar13 + 1);
                      puVar14 = (undefined4 *)((int)puVar14 + 1);
                    }
                    *(undefined1 *)((int)puStack_48 + uVar10) = 0;
                    uStack_44 = uVar10;
                  }
                  local_4 = 9;
                  pcVar8 = (code *)FUN_005a07f0(s_false_0068d2d0,
                                                s_D__Work_RCHorror_AdamSource_Adam_00694c70,0x4de,
                                                local_4c);
                  (*pcVar8)();
                  local_4 = 0xffffffff;
                  if (puStack_48 != (undefined4 *)0x0) {
                    cVar3 = *(char *)((int)puStack_48 + -1);
                    if ((cVar3 == '\0') || (cVar3 == -1)) {
                      FUN_005fe5f0((char *)((int)puStack_48 + -1));
                    }
                    else {
                      *(char *)((int)puStack_48 + -1) = cVar3 + -1;
                    }
                  }
                }
              }
            }
            piVar9 = (int *)FUN_0049bc00(local_3c);
            piVar15 = param_1 + 0x47;
            for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
              *piVar15 = *piVar9;
              piVar9 = piVar9 + 1;
              piVar15 = piVar15 + 1;
            }
            piVar9 = (int *)FUN_0049bc00(auStack_24);
            piVar15 = param_1 + 0x4d;
            for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
              *piVar15 = *piVar9;
              piVar9 = piVar9 + 1;
              piVar15 = piVar15 + 1;
            }
            ExceptionList = local_c;
            return 1;
          }
          iVar5 = FUN_005b18a0(local_4c,param_4);
          puVar6 = *(undefined1 **)(iVar5 + 4);
          local_4 = 7;
          if (puVar6 == (undefined1 *)0x0) {
            puVar6 = &DAT_0064a3b4;
          }
          puVar12 = *(undefined1 **)(param_2 + 4);
          if (puVar12 == (undefined1 *)0x0) {
            puVar12 = &DAT_0064a3b4;
          }
          uVar7 = FUN_005ae390(local_3c,s__s____s_____invalid__missing_or_m_00694f34,puVar12,puVar6)
          ;
          local_4._0_1_ = 8;
          FUN_005035a0(uVar7);
          local_4 = CONCAT31(local_4._1_3_,7);
          FUN_004040a0(1);
        }
      }
      local_4 = 0xffffffff;
      FUN_004040a0(1);
      uVar7 = 0;
    }
  }
  ExceptionList = local_c;
  return uVar7;
}

