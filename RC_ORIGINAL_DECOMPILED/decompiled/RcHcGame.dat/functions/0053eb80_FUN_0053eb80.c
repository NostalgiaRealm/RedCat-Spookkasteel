/*
 * FUN_0053eb80 at 0053eb80
 * undefined FUN_0053eb80(void)
 * Address ranges: 0053eb80-00540f76
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x0053ebe8) */
/* WARNING: Removing unreachable block (ram,0x0053ebfa) */
/* WARNING: Removing unreachable block (ram,0x0053ec18) */
/* WARNING: Removing unreachable block (ram,0x0053ec1a) */
/* WARNING: Removing unreachable block (ram,0x0053ec2d) */
/* WARNING: Removing unreachable block (ram,0x0053ec3d) */
/* WARNING: Removing unreachable block (ram,0x0053ec3f) */
/* WARNING: Removing unreachable block (ram,0x0053ec45) */
/* WARNING: Removing unreachable block (ram,0x0053ec47) */
/* WARNING: Removing unreachable block (ram,0x0053ec50) */

void __fastcall FUN_0053eb80(int param_1)

{
  char cVar1;
  code *pcVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined1 auStack_2bc [4];
  undefined4 uStack_2b8;
  char *pcStack_2b4;
  undefined1 *puStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  char *pcStack_29c;
  char *pcStack_298;
  int local_278;
  char *local_274;
  undefined1 local_260;
  undefined1 uStack_25f;
  undefined1 uStack_25e;
  undefined1 uStack_25d;
  undefined1 uStack_25c;
  undefined1 uStack_25b;
  undefined1 uStack_25a;
  undefined1 uStack_259;
  undefined1 uStack_258;
  undefined1 uStack_257;
  undefined1 uStack_256;
  undefined1 uStack_255;
  undefined1 uStack_254;
  undefined1 uStack_253;
  undefined1 uStack_252;
  undefined1 uStack_251;
  undefined1 uStack_250;
  undefined1 uStack_24f;
  undefined1 uStack_24e;
  undefined1 uStack_24d;
  undefined1 uStack_24c;
  undefined1 uStack_24b;
  undefined1 uStack_24a;
  undefined1 uStack_249;
  undefined1 uStack_248;
  undefined1 uStack_247;
  undefined1 uStack_246;
  undefined1 uStack_245;
  undefined1 uStack_244;
  undefined1 uStack_243;
  undefined1 uStack_242;
  undefined1 uStack_241;
  undefined1 local_240;
  undefined4 *local_23c;
  uint uStack_238;
  undefined4 uStack_234;
  undefined1 uStack_22d;
  undefined1 uStack_22c;
  undefined4 *puStack_228;
  uint uStack_224;
  undefined4 uStack_220;
  undefined1 uStack_21c;
  undefined4 *puStack_218;
  undefined1 uStack_20c;
  undefined1 uStack_1fc;
  undefined1 uStack_1ec;
  undefined1 uStack_1dc;
  undefined1 uStack_1cc;
  undefined1 uStack_1bc;
  undefined1 uStack_1ac;
  undefined1 uStack_19c;
  undefined1 uStack_18c;
  undefined1 uStack_17c;
  undefined1 uStack_16c;
  undefined1 uStack_15c;
  undefined1 uStack_14c;
  undefined1 uStack_13c;
  undefined1 uStack_12c;
  undefined1 uStack_11c;
  undefined1 uStack_10c;
  undefined1 uStack_fc;
  undefined1 uStack_ec;
  undefined1 uStack_dc;
  undefined1 uStack_cc;
  undefined1 uStack_bc;
  undefined1 uStack_ac;
  undefined1 uStack_9c;
  undefined1 uStack_8c;
  undefined1 uStack_7c;
  undefined1 uStack_6c;
  undefined1 auStack_5c [4];
  int iStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 uStack_4c;
  undefined1 uStack_3c;
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063c6b2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005449d0();
  local_274 = (char *)CONCAT31(local_274._1_3_,local_260);
  local_4 = 0;
  FUN_00514e80();
  local_4 = 1;
  local_278 = 0;
LAB_0053ec92:
  do {
    if (*(int *)(param_1 + 0x18) == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) / 0x38;
    }
    if (iVar8 <= local_278) {
      FUN_005425b0();
      *(undefined4 *)(param_1 + 0x24) = 0;
      FUN_005fe5f0();
      ExceptionList = pvStack_c;
      return;
    }
    if ((local_278 < 0) || (iVar8 = FUN_00549ae0(), iVar8 <= local_278)) {
      uStack_10c = local_260;
      FUN_004040a0();
      iVar8 = -1;
      pcVar3 = &DAT_006b3f70;
      do {
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      pcStack_298 = (char *)0x53ed06;
      FUN_004040f0();
      local_4._0_1_ = 3;
      pcStack_298 = s___AdamSource_DaviList_h_0068f458;
      pcStack_29c = s_a_Index>_0____a_Index<Count()_0068f470;
      uStack_2a0 = 0x53ed2a;
      pcVar2 = (code *)FUN_005a07f0();
      uStack_2a0 = 0x53ed2c;
      (*pcVar2)();
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_004040a0();
    }
    iVar8 = local_278 * 0x38;
    pcVar3 = *(char **)(*(int *)(param_1 + 0x18) + 4 + iVar8);
    if (pcVar3 == (char *)0x0) {
      pcVar3 = "";
    }
    pcStack_298 = (char *)0x53ed70;
    iVar4 = __strcmpi(pcVar3,(char *)&DAT_00693338);
    if (iVar4 != 0) {
      if ((local_278 < 0) || (iVar4 = FUN_00549ae0(), iVar4 <= local_278)) {
        uStack_1ec = uStack_246;
        FUN_004040a0();
        iVar4 = -1;
        pcVar3 = &DAT_006b3f70;
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        pcStack_298 = (char *)0x53ee98;
        FUN_004040f0();
        local_4._0_1_ = 6;
        pcStack_298 = s___AdamSource_DaviList_h_0068f458;
        pcStack_29c = s_a_Index>_0____a_Index<Count()_0068f470;
        uStack_2a0 = 0x53eebc;
        pcVar2 = (code *)FUN_005a07f0();
        uStack_2a0 = 0x53eebe;
        (*pcVar2)();
        local_4 = CONCAT31(local_4._1_3_,1);
        FUN_004040a0();
      }
      pcVar3 = *(char **)(*(int *)(param_1 + 0x18) + 4 + iVar8);
      if (pcVar3 == (char *)0x0) {
        pcVar3 = "";
      }
      pcStack_298 = (char *)0x53eef2;
      iVar4 = __strcmpi(pcVar3,s_MoveForward_006932c8);
      if (iVar4 == 0) {
        pcStack_29c = local_274;
        pcStack_298 = (char *)0x0;
        FUN_00409810();
        FUN_00543d70();
      }
      else {
        if ((local_278 < 0) || (iVar4 = FUN_00549ae0(), iVar4 <= local_278)) {
          uStack_8c = uStack_243;
          FUN_004040a0();
          iVar4 = -1;
          pcVar3 = &DAT_006b3f70;
          do {
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            cVar1 = *pcVar3;
            pcVar3 = pcVar3 + 1;
          } while (cVar1 != '\0');
          pcStack_298 = (char *)0x53efb7;
          FUN_004040f0();
          local_4._0_1_ = 8;
          pcStack_298 = s___AdamSource_DaviList_h_0068f458;
          pcStack_29c = s_a_Index>_0____a_Index<Count()_0068f470;
          uStack_2a0 = 0x53efdb;
          pcVar2 = (code *)FUN_005a07f0();
          uStack_2a0 = 0x53efdd;
          (*pcVar2)();
          local_4 = CONCAT31(local_4._1_3_,1);
          FUN_004040a0();
        }
        pcVar3 = *(char **)(*(int *)(param_1 + 0x18) + 4 + iVar8);
        if (pcVar3 == (char *)0x0) {
          pcVar3 = "";
        }
        pcStack_298 = (char *)0x53f011;
        iVar4 = __strcmpi(pcVar3,&DAT_006932bc);
        if (iVar4 == 0) {
          pcStack_29c = local_274;
          pcStack_298 = (char *)0x0;
          FUN_00409810();
          FUN_00543d70();
        }
        else {
          if ((local_278 < 0) || (iVar4 = FUN_00549ae0(), iVar4 <= local_278)) {
            uStack_1cc = uStack_24b;
            FUN_004040a0();
            iVar4 = -1;
            pcVar3 = &DAT_006b3f70;
            do {
              if (iVar4 == 0) break;
              iVar4 = iVar4 + -1;
              cVar1 = *pcVar3;
              pcVar3 = pcVar3 + 1;
            } while (cVar1 != '\0');
            pcStack_298 = (char *)0x53f0b3;
            FUN_004040f0();
            local_4._0_1_ = 10;
            pcStack_298 = s___AdamSource_DaviList_h_0068f458;
            pcStack_29c = s_a_Index>_0____a_Index<Count()_0068f470;
            uStack_2a0 = 0x53f0d7;
            pcVar2 = (code *)FUN_005a07f0();
            uStack_2a0 = 0x53f0d9;
            (*pcVar2)();
            local_4 = CONCAT31(local_4._1_3_,1);
            FUN_004040a0();
          }
          pcVar3 = *(char **)(*(int *)(param_1 + 0x18) + 4 + iVar8);
          if (pcVar3 == (char *)0x0) {
            pcVar3 = "";
          }
          pcStack_298 = (char *)0x53f10d;
          iVar4 = __strcmpi(pcVar3,&DAT_00693290);
          if (iVar4 == 0) {
            pcStack_29c = local_274;
            pcStack_298 = (char *)0x0;
            FUN_00409810();
            FUN_00543d70();
          }
          else {
            if ((local_278 < 0) || (iVar4 = FUN_00549ae0(), iVar4 <= local_278)) {
              uStack_ec = uStack_245;
              FUN_004040a0();
              iVar4 = -1;
              pcVar3 = &DAT_006b3f70;
              do {
                if (iVar4 == 0) break;
                iVar4 = iVar4 + -1;
                cVar1 = *pcVar3;
                pcVar3 = pcVar3 + 1;
              } while (cVar1 != '\0');
              pcStack_298 = (char *)0x53f1af;
              FUN_004040f0();
              local_4._0_1_ = 0xc;
              pcStack_298 = s___AdamSource_DaviList_h_0068f458;
              pcStack_29c = s_a_Index>_0____a_Index<Count()_0068f470;
              uStack_2a0 = 0x53f1d3;
              pcVar2 = (code *)FUN_005a07f0();
              uStack_2a0 = 0x53f1d5;
              (*pcVar2)();
              local_4 = CONCAT31(local_4._1_3_,1);
              FUN_004040a0();
            }
            pcVar3 = *(char **)(*(int *)(param_1 + 0x18) + 4 + iVar8);
            if (pcVar3 == (char *)0x0) {
              pcVar3 = "";
            }
            pcStack_298 = (char *)0x53f209;
            iVar4 = __strcmpi(pcVar3,s_TurnRight_00693278);
            if (iVar4 == 0) {
              pcStack_29c = local_274;
              pcStack_298 = (char *)0x0;
              FUN_00409810();
              FUN_00543d70();
            }
            else {
              if ((local_278 < 0) || (iVar4 = FUN_00549ae0(), iVar4 <= local_278)) {
                uStack_1ac = uStack_241;
                FUN_004040a0();
                iVar4 = -1;
                pcVar3 = &DAT_006b3f70;
                do {
                  if (iVar4 == 0) break;
                  iVar4 = iVar4 + -1;
                  cVar1 = *pcVar3;
                  pcVar3 = pcVar3 + 1;
                } while (cVar1 != '\0');
                pcStack_298 = (char *)0x53f2ab;
                FUN_004040f0();
                local_4._0_1_ = 0xe;
                pcStack_298 = s___AdamSource_DaviList_h_0068f458;
                pcStack_29c = s_a_Index>_0____a_Index<Count()_0068f470;
                uStack_2a0 = 0x53f2cf;
                pcVar2 = (code *)FUN_005a07f0();
                uStack_2a0 = 0x53f2d1;
                (*pcVar2)();
                local_4 = CONCAT31(local_4._1_3_,1);
                FUN_004040a0();
              }
              pcVar3 = *(char **)(*(int *)(param_1 + 0x18) + 4 + iVar8);
              if (pcVar3 == (char *)0x0) {
                pcVar3 = "";
              }
              pcStack_298 = (char *)0x53f305;
              iVar4 = __strcmpi(pcVar3,&DAT_0069329c);
              if (iVar4 == 0) {
                pcStack_29c = local_274;
                pcStack_298 = (char *)0x0;
                FUN_00409810();
                FUN_00543d70();
              }
              else {
                if ((local_278 < 0) || (iVar4 = FUN_00549ae0(), iVar4 <= local_278)) {
                  uStack_4c = uStack_24e;
                  FUN_004040a0();
                  iVar4 = -1;
                  pcVar3 = &DAT_006b3f70;
                  do {
                    if (iVar4 == 0) break;
                    iVar4 = iVar4 + -1;
                    cVar1 = *pcVar3;
                    pcVar3 = pcVar3 + 1;
                  } while (cVar1 != '\0');
                  pcStack_298 = (char *)0x53f3a7;
                  FUN_004040f0();
                  local_4._0_1_ = 0x10;
                  pcStack_298 = s___AdamSource_DaviList_h_0068f458;
                  pcStack_29c = s_a_Index>_0____a_Index<Count()_0068f470;
                  uStack_2a0 = 0x53f3cb;
                  pcVar2 = (code *)FUN_005a07f0();
                  uStack_2a0 = 0x53f3cd;
                  (*pcVar2)();
                  local_4 = CONCAT31(local_4._1_3_,1);
                  FUN_004040a0();
                }
                pcVar3 = *(char **)(iVar8 + 4 + *(int *)(param_1 + 0x18));
                if (pcVar3 == (char *)0x0) {
                  pcVar3 = "";
                }
                pcStack_298 = (char *)0x53f401;
                iVar4 = __strcmpi(pcVar3,s_MoveRight_00693284);
                if (iVar4 == 0) {
                  pcStack_29c = local_274;
                  pcStack_298 = (char *)0x0;
                  FUN_00409810();
                  FUN_00543d70();
                }
                else {
                  if ((local_278 < 0) || (iVar4 = FUN_00549ae0(), iVar4 <= local_278)) {
                    uStack_18c = uStack_25c;
                    FUN_004040a0();
                    iVar4 = -1;
                    pcVar3 = &DAT_006b3f70;
                    do {
                      if (iVar4 == 0) break;
                      iVar4 = iVar4 + -1;
                      cVar1 = *pcVar3;
                      pcVar3 = pcVar3 + 1;
                    } while (cVar1 != '\0');
                    pcStack_298 = (char *)0x53f4a3;
                    FUN_004040f0();
                    local_4._0_1_ = 0x12;
                    pcStack_298 = s___AdamSource_DaviList_h_0068f458;
                    pcStack_29c = s_a_Index>_0____a_Index<Count()_0068f470;
                    uStack_2a0 = 0x53f4c7;
                    pcVar2 = (code *)FUN_005a07f0();
                    uStack_2a0 = 0x53f4c9;
                    (*pcVar2)();
                    local_4 = CONCAT31(local_4._1_3_,1);
                    FUN_004040a0();
                  }
                  pcVar3 = *(char **)(iVar8 + 4 + *(int *)(param_1 + 0x18));
                  if (pcVar3 == (char *)0x0) {
                    pcVar3 = "";
                  }
                  pcStack_298 = (char *)0x53f4fd;
                  iVar4 = __strcmpi(pcVar3,s_MoveUp_006932a8);
                  if (iVar4 == 0) {
                    pcStack_29c = local_274;
                    pcStack_298 = (char *)0x0;
                    FUN_00409810();
                    FUN_00543d70();
                  }
                  else {
                    if ((local_278 < 0) || (iVar4 = FUN_00549ae0(), iVar4 <= local_278)) {
                      uStack_cc = uStack_247;
                      FUN_004040a0();
                      iVar4 = -1;
                      pcVar3 = &DAT_006b3f70;
                      do {
                        if (iVar4 == 0) break;
                        iVar4 = iVar4 + -1;
                        cVar1 = *pcVar3;
                        pcVar3 = pcVar3 + 1;
                      } while (cVar1 != '\0');
                      pcStack_298 = (char *)0x53f59f;
                      FUN_004040f0();
                      local_4._0_1_ = 0x14;
                      pcStack_298 = s___AdamSource_DaviList_h_0068f458;
                      pcStack_29c = s_a_Index>_0____a_Index<Count()_0068f470;
                      uStack_2a0 = 0x53f5c3;
                      pcVar2 = (code *)FUN_005a07f0();
                      uStack_2a0 = 0x53f5c5;
                      (*pcVar2)();
                      local_4 = CONCAT31(local_4._1_3_,1);
                      FUN_004040a0();
                    }
                    pcVar3 = *(char **)(iVar8 + 4 + *(int *)(param_1 + 0x18));
                    if (pcVar3 == (char *)0x0) {
                      pcVar3 = "";
                    }
                    pcStack_298 = (char *)0x53f5f9;
                    iVar4 = __strcmpi(pcVar3,s_MoveDown_006932b0);
                    if (iVar4 == 0) {
                      pcStack_29c = local_274;
                      pcStack_298 = (char *)0x0;
                      FUN_00409810();
                      FUN_00543d70();
                    }
                    else {
                      if ((local_278 < 0) || (iVar4 = FUN_00549ae0(), iVar4 <= local_278)) {
                        uStack_16c = uStack_25a;
                        FUN_004040a0();
                        iVar4 = -1;
                        pcVar3 = &DAT_006b3f70;
                        do {
                          if (iVar4 == 0) break;
                          iVar4 = iVar4 + -1;
                          cVar1 = *pcVar3;
                          pcVar3 = pcVar3 + 1;
                        } while (cVar1 != '\0');
                        pcStack_298 = (char *)0x53f69b;
                        FUN_004040f0();
                        local_4._0_1_ = 0x16;
                        pcStack_298 = s___AdamSource_DaviList_h_0068f458;
                        pcStack_29c = s_a_Index>_0____a_Index<Count()_0068f470;
                        uStack_2a0 = 0x53f6bf;
                        pcVar2 = (code *)FUN_005a07f0();
                        uStack_2a0 = 0x53f6c1;
                        (*pcVar2)();
                        local_4 = CONCAT31(local_4._1_3_,1);
                        FUN_004040a0();
                      }
                      pcVar3 = *(char **)(iVar8 + 4 + *(int *)(param_1 + 0x18));
                      if (pcVar3 == (char *)0x0) {
                        pcVar3 = "";
                      }
                      pcStack_298 = (char *)0x53f6f5;
                      iVar4 = __strcmpi(pcVar3,&DAT_00693340);
                      if (iVar4 == 0) {
                        pcStack_29c = local_274;
                        pcStack_298 = (char *)0x0;
                        puStack_2b0 = &uStack_22d;
                        pcStack_2b4 = s_RightMouse_006a1360;
                        uStack_2b8 = 0x53f738;
                        FUN_00409810();
                        puStack_2b0 = auStack_1c;
                        pcStack_2b4 = (char *)0x53f74b;
                        puVar5 = (undefined4 *)FUN_00543d70();
                        uStack_2ac = *puVar5;
                        uStack_2a8 = puVar5[1];
                        local_4._0_1_ = 0x17;
                        uStack_2a4 = puVar5[2];
                        uStack_2a0 = puVar5[3];
                        FUN_00409810(s_Space_0069b04c,&uStack_258);
                        FUN_00543d70(auStack_2bc);
                        local_4._0_1_ = 0x17;
                        FUN_005494c0();
                        FUN_005431e0();
                        local_4 = CONCAT31(local_4._1_3_,1);
                        FUN_00514430();
                        local_278 = local_278 + 1;
                        goto LAB_0053ec92;
                      }
                      if ((local_278 < 0) || (iVar4 = FUN_00549ae0(), iVar4 <= local_278)) {
                        uStack_6c = uStack_258;
                        FUN_004040a0();
                        iVar4 = -1;
                        pcVar3 = &DAT_006b3f70;
                        do {
                          if (iVar4 == 0) break;
                          iVar4 = iVar4 + -1;
                          cVar1 = *pcVar3;
                          pcVar3 = pcVar3 + 1;
                        } while (cVar1 != '\0');
                        pcStack_298 = (char *)0x53f81a;
                        FUN_004040f0();
                        local_4._0_1_ = 0x19;
                        pcStack_298 = s___AdamSource_DaviList_h_0068f458;
                        pcStack_29c = s_a_Index>_0____a_Index<Count()_0068f470;
                        uStack_2a0 = 0x53f83e;
                        pcVar2 = (code *)FUN_005a07f0();
                        uStack_2a0 = 0x53f840;
                        (*pcVar2)();
                        local_4 = CONCAT31(local_4._1_3_,1);
                        FUN_004040a0();
                      }
                      pcVar3 = *(char **)(iVar8 + 4 + *(int *)(param_1 + 0x18));
                      if (pcVar3 == (char *)0x0) {
                        pcVar3 = "";
                      }
                      pcStack_298 = (char *)0x53f874;
                      iVar4 = __strcmpi(pcVar3,(char *)&DAT_006a088c);
                      if (iVar4 == 0) {
                        pcStack_29c = local_274;
                        pcStack_298 = (char *)0x0;
                        FUN_00409810();
                        FUN_00543d70();
                      }
                      else {
                        if ((local_278 < 0) || (iVar4 = FUN_00549ae0(), iVar4 <= local_278)) {
                          uStack_14c = uStack_24c;
                          FUN_004040a0();
                          iVar4 = -1;
                          pcVar3 = &DAT_006b3f70;
                          do {
                            if (iVar4 == 0) break;
                            iVar4 = iVar4 + -1;
                            cVar1 = *pcVar3;
                            pcVar3 = pcVar3 + 1;
                          } while (cVar1 != '\0');
                          pcStack_298 = (char *)0x53f916;
                          FUN_004040f0();
                          local_4._0_1_ = 0x1b;
                          pcStack_298 = s___AdamSource_DaviList_h_0068f458;
                          pcStack_29c = s_a_Index>_0____a_Index<Count()_0068f470;
                          uStack_2a0 = 0x53f93a;
                          pcVar2 = (code *)FUN_005a07f0();
                          uStack_2a0 = 0x53f93c;
                          (*pcVar2)();
                          local_4 = CONCAT31(local_4._1_3_,1);
                          FUN_004040a0();
                        }
                        pcVar3 = *(char **)(iVar8 + 4 + *(int *)(param_1 + 0x18));
                        if (pcVar3 == (char *)0x0) {
                          pcVar3 = "";
                        }
                        pcStack_298 = (char *)0x53f970;
                        iVar4 = __strcmpi(pcVar3,s_Weapon0_006a12e0);
                        if (iVar4 == 0) {
                          pcStack_29c = local_274;
                          pcStack_298 = (char *)0x0;
                          FUN_00409810();
                          FUN_00543d70();
                        }
                        else {
                          if ((local_278 < 0) || (iVar4 = FUN_00549ae0(), iVar4 <= local_278)) {
                            uStack_ac = uStack_256;
                            FUN_004040a0();
                            iVar4 = -1;
                            pcVar3 = &DAT_006b3f70;
                            do {
                              if (iVar4 == 0) break;
                              iVar4 = iVar4 + -1;
                              cVar1 = *pcVar3;
                              pcVar3 = pcVar3 + 1;
                            } while (cVar1 != '\0');
                            pcStack_298 = (char *)0x53fa12;
                            FUN_004040f0();
                            local_4._0_1_ = 0x1d;
                            pcStack_298 = s___AdamSource_DaviList_h_0068f458;
                            pcStack_29c = s_a_Index>_0____a_Index<Count()_0068f470;
                            uStack_2a0 = 0x53fa36;
                            pcVar2 = (code *)FUN_005a07f0();
                            uStack_2a0 = 0x53fa38;
                            (*pcVar2)();
                            local_4 = CONCAT31(local_4._1_3_,1);
                            FUN_004040a0();
                          }
                          pcVar3 = *(char **)(iVar8 + 4 + *(int *)(param_1 + 0x18));
                          if (pcVar3 == (char *)0x0) {
                            pcVar3 = "";
                          }
                          pcStack_298 = (char *)0x53fa6c;
                          iVar4 = __strcmpi(pcVar3,&DAT_006933b4);
                          if (iVar4 == 0) {
                            pcStack_29c = local_274;
                            pcStack_298 = (char *)0x0;
                            FUN_00409810();
                            FUN_00543d70();
                          }
                          else {
                            if ((local_278 < 0) || (iVar4 = FUN_00549ae0(), iVar4 <= local_278)) {
                              uStack_12c = uStack_242;
                              FUN_004040a0();
                              iVar4 = -1;
                              pcVar3 = &DAT_006b3f70;
                              do {
                                if (iVar4 == 0) break;
                                iVar4 = iVar4 + -1;
                                cVar1 = *pcVar3;
                                pcVar3 = pcVar3 + 1;
                              } while (cVar1 != '\0');
                              pcStack_298 = (char *)0x53fb0e;
                              FUN_004040f0();
                              local_4._0_1_ = 0x1f;
                              pcStack_298 = s___AdamSource_DaviList_h_0068f458;
                              pcStack_29c = s_a_Index>_0____a_Index<Count()_0068f470;
                              uStack_2a0 = 0x53fb32;
                              pcVar2 = (code *)FUN_005a07f0();
                              uStack_2a0 = 0x53fb34;
                              (*pcVar2)();
                              local_4 = CONCAT31(local_4._1_3_,1);
                              FUN_004040a0();
                            }
                            pcVar3 = *(char **)(iVar8 + 4 + *(int *)(param_1 + 0x18));
                            if (pcVar3 == (char *)0x0) {
                              pcVar3 = "";
                            }
                            pcStack_298 = (char *)0x53fb68;
                            iVar4 = __strcmpi(pcVar3,&DAT_006933ac);
                            if (iVar4 == 0) {
                              pcStack_29c = local_274;
                              pcStack_298 = (char *)0x0;
                              FUN_00409810();
                              FUN_00543d70();
                            }
                            else {
                              if ((local_278 < 0) || (iVar4 = FUN_00549ae0(), iVar4 <= local_278)) {
                                uStack_3c = uStack_254;
                                FUN_004040a0();
                                iVar4 = -1;
                                pcVar3 = &DAT_006b3f70;
                                do {
                                  if (iVar4 == 0) break;
                                  iVar4 = iVar4 + -1;
                                  cVar1 = *pcVar3;
                                  pcVar3 = pcVar3 + 1;
                                } while (cVar1 != '\0');
                                pcStack_298 = (char *)0x53fc0a;
                                FUN_004040f0();
                                local_4._0_1_ = 0x21;
                                pcStack_298 = s___AdamSource_DaviList_h_0068f458;
                                pcStack_29c = s_a_Index>_0____a_Index<Count()_0068f470;
                                uStack_2a0 = 0x53fc2e;
                                pcVar2 = (code *)FUN_005a07f0();
                                uStack_2a0 = 0x53fc30;
                                (*pcVar2)();
                                local_4 = CONCAT31(local_4._1_3_,1);
                                FUN_004040a0();
                              }
                              pcVar3 = *(char **)(iVar8 + 4 + *(int *)(param_1 + 0x18));
                              if (pcVar3 == (char *)0x0) {
                                pcVar3 = "";
                              }
                              pcStack_298 = (char *)0x53fc64;
                              iVar4 = __strcmpi(pcVar3,&DAT_006933a4);
                              if (iVar4 == 0) {
                                pcStack_29c = local_274;
                                pcStack_298 = (char *)0x0;
                                FUN_00409810();
                                FUN_00543d70();
                              }
                              else {
                                if ((local_278 < 0) || (iVar4 = FUN_00549ae0(), iVar4 <= local_278))
                                {
                                  uStack_20c = uStack_249;
                                  FUN_004040a0();
                                  iVar4 = -1;
                                  pcVar3 = &DAT_006b3f70;
                                  do {
                                    if (iVar4 == 0) break;
                                    iVar4 = iVar4 + -1;
                                    cVar1 = *pcVar3;
                                    pcVar3 = pcVar3 + 1;
                                  } while (cVar1 != '\0');
                                  pcStack_298 = (char *)0x53fd06;
                                  FUN_004040f0();
                                  local_4._0_1_ = 0x23;
                                  pcStack_298 = s___AdamSource_DaviList_h_0068f458;
                                  pcStack_29c = s_a_Index>_0____a_Index<Count()_0068f470;
                                  uStack_2a0 = 0x53fd2a;
                                  pcVar2 = (code *)FUN_005a07f0();
                                  uStack_2a0 = 0x53fd2c;
                                  (*pcVar2)();
                                  local_4 = CONCAT31(local_4._1_3_,1);
                                  FUN_004040a0();
                                }
                                pcVar3 = *(char **)(iVar8 + 4 + *(int *)(param_1 + 0x18));
                                if (pcVar3 == (char *)0x0) {
                                  pcVar3 = "";
                                }
                                pcStack_298 = (char *)0x53fd60;
                                iVar4 = __strcmpi(pcVar3,&DAT_0069339c);
                                if (iVar4 == 0) {
                                  pcStack_29c = local_274;
                                  pcStack_298 = (char *)0x0;
                                  FUN_00409810();
                                  FUN_00543d70();
                                }
                                else {
                                  if ((local_278 < 0) ||
                                     (iVar4 = FUN_00549ae0(), iVar4 <= local_278)) {
                                    uStack_1fc = uStack_252;
                                    FUN_004040a0();
                                    iVar4 = -1;
                                    pcVar3 = &DAT_006b3f70;
                                    do {
                                      if (iVar4 == 0) break;
                                      iVar4 = iVar4 + -1;
                                      cVar1 = *pcVar3;
                                      pcVar3 = pcVar3 + 1;
                                    } while (cVar1 != '\0');
                                    pcStack_298 = (char *)0x53fe02;
                                    FUN_004040f0();
                                    local_4._0_1_ = 0x25;
                                    pcStack_298 = s___AdamSource_DaviList_h_0068f458;
                                    pcStack_29c = s_a_Index>_0____a_Index<Count()_0068f470;
                                    uStack_2a0 = 0x53fe26;
                                    pcVar2 = (code *)FUN_005a07f0();
                                    uStack_2a0 = 0x53fe28;
                                    (*pcVar2)();
                                    local_4 = CONCAT31(local_4._1_3_,1);
                                    FUN_004040a0();
                                  }
                                  pcVar3 = *(char **)(iVar8 + 4 + *(int *)(param_1 + 0x18));
                                  if (pcVar3 == (char *)0x0) {
                                    pcVar3 = "";
                                  }
                                  pcStack_298 = (char *)0x53fe5c;
                                  iVar4 = __strcmpi(pcVar3,(char *)&DAT_00693394);
                                  if (iVar4 == 0) {
                                    pcStack_29c = local_274;
                                    pcStack_298 = (char *)0x0;
                                    FUN_00409810();
                                    FUN_00543d70();
                                  }
                                  else {
                                    if ((local_278 < 0) ||
                                       (iVar4 = FUN_00549ae0(), iVar4 <= local_278)) {
                                      uStack_1dc = uStack_244;
                                      FUN_004040a0();
                                      iVar4 = -1;
                                      pcVar3 = &DAT_006b3f70;
                                      do {
                                        if (iVar4 == 0) break;
                                        iVar4 = iVar4 + -1;
                                        cVar1 = *pcVar3;
                                        pcVar3 = pcVar3 + 1;
                                      } while (cVar1 != '\0');
                                      pcStack_298 = (char *)0x53fefe;
                                      FUN_004040f0();
                                      local_4._0_1_ = 0x27;
                                      pcStack_298 = s___AdamSource_DaviList_h_0068f458;
                                      pcStack_29c = s_a_Index>_0____a_Index<Count()_0068f470;
                                      uStack_2a0 = 0x53ff22;
                                      pcVar2 = (code *)FUN_005a07f0();
                                      uStack_2a0 = 0x53ff24;
                                      (*pcVar2)();
                                      local_4 = CONCAT31(local_4._1_3_,1);
                                      FUN_004040a0();
                                    }
                                    pcVar3 = *(char **)(iVar8 + 4 + *(int *)(param_1 + 0x18));
                                    if (pcVar3 == (char *)0x0) {
                                      pcVar3 = "";
                                    }
                                    pcStack_298 = (char *)0x53ff58;
                                    iVar4 = __strcmpi(pcVar3,s_Weapon6_006a12d8);
                                    if (iVar4 == 0) {
                                      pcStack_29c = local_274;
                                      pcStack_298 = (char *)0x0;
                                      FUN_00409810();
                                      FUN_00543d70();
                                    }
                                    else {
                                      if ((local_278 < 0) ||
                                         (iVar4 = FUN_00549ae0(), iVar4 <= local_278)) {
                                        uStack_1bc = uStack_250;
                                        FUN_004040a0();
                                        iVar4 = -1;
                                        pcVar3 = &DAT_006b3f70;
                                        do {
                                          if (iVar4 == 0) break;
                                          iVar4 = iVar4 + -1;
                                          cVar1 = *pcVar3;
                                          pcVar3 = pcVar3 + 1;
                                        } while (cVar1 != '\0');
                                        pcStack_298 = (char *)0x53fffa;
                                        FUN_004040f0();
                                        local_4._0_1_ = 0x29;
                                        pcStack_298 = s___AdamSource_DaviList_h_0068f458;
                                        pcStack_29c = s_a_Index>_0____a_Index<Count()_0068f470;
                                        uStack_2a0 = 0x54001e;
                                        pcVar2 = (code *)FUN_005a07f0();
                                        uStack_2a0 = 0x540020;
                                        (*pcVar2)();
                                        local_4 = CONCAT31(local_4._1_3_,1);
                                        FUN_004040a0();
                                      }
                                      pcVar3 = *(char **)(iVar8 + 4 + *(int *)(param_1 + 0x18));
                                      if (pcVar3 == (char *)0x0) {
                                        pcVar3 = "";
                                      }
                                      pcStack_298 = (char *)0x540054;
                                      iVar4 = __strcmpi(pcVar3,s_Weapon7_0069338c);
                                      if (iVar4 == 0) {
                                        pcStack_29c = local_274;
                                        pcStack_298 = (char *)0x0;
                                        FUN_00409810();
                                        FUN_00543d70();
                                      }
                                      else {
                                        if ((local_278 < 0) ||
                                           (iVar4 = FUN_00549ae0(), iVar4 <= local_278)) {
                                          uStack_19c = uStack_25f;
                                          FUN_004040a0();
                                          iVar4 = -1;
                                          pcVar3 = &DAT_006b3f70;
                                          do {
                                            if (iVar4 == 0) break;
                                            iVar4 = iVar4 + -1;
                                            cVar1 = *pcVar3;
                                            pcVar3 = pcVar3 + 1;
                                          } while (cVar1 != '\0');
                                          pcStack_298 = (char *)0x5400f6;
                                          FUN_004040f0();
                                          local_4._0_1_ = 0x2b;
                                          pcStack_298 = s___AdamSource_DaviList_h_0068f458;
                                          pcStack_29c = s_a_Index>_0____a_Index<Count()_0068f470;
                                          uStack_2a0 = 0x54011a;
                                          pcVar2 = (code *)FUN_005a07f0();
                                          uStack_2a0 = 0x54011c;
                                          (*pcVar2)();
                                          local_4 = CONCAT31(local_4._1_3_,1);
                                          FUN_004040a0();
                                        }
                                        pcVar3 = *(char **)(iVar8 + 4 + *(int *)(param_1 + 0x18));
                                        if (pcVar3 == (char *)0x0) {
                                          pcVar3 = "";
                                        }
                                        pcStack_298 = (char *)0x540150;
                                        iVar4 = __strcmpi(pcVar3,s_WeaponNext_006a12cc);
                                        if (iVar4 == 0) {
                                          pcStack_29c = local_274;
                                          pcStack_298 = (char *)0x0;
                                          FUN_00409810();
                                          FUN_00543d70();
                                        }
                                        else {
                                          if ((local_278 < 0) ||
                                             (iVar4 = FUN_00549ae0(), iVar4 <= local_278)) {
                                            uStack_17c = uStack_25e;
                                            FUN_004040a0();
                                            iVar4 = -1;
                                            pcVar3 = &DAT_006b3f70;
                                            do {
                                              if (iVar4 == 0) break;
                                              iVar4 = iVar4 + -1;
                                              cVar1 = *pcVar3;
                                              pcVar3 = pcVar3 + 1;
                                            } while (cVar1 != '\0');
                                            pcStack_298 = (char *)0x5401f2;
                                            FUN_004040f0();
                                            local_4._0_1_ = 0x2d;
                                            pcStack_298 = s___AdamSource_DaviList_h_0068f458;
                                            pcStack_29c = s_a_Index>_0____a_Index<Count()_0068f470;
                                            uStack_2a0 = 0x540216;
                                            pcVar2 = (code *)FUN_005a07f0();
                                            uStack_2a0 = 0x540218;
                                            (*pcVar2)();
                                            local_4 = CONCAT31(local_4._1_3_,1);
                                            FUN_004040a0();
                                          }
                                          pcVar3 = *(char **)(iVar8 + 4 + *(int *)(param_1 + 0x18));
                                          if (pcVar3 == (char *)0x0) {
                                            pcVar3 = "";
                                          }
                                          pcStack_298 = (char *)0x54024c;
                                          iVar4 = __strcmpi(pcVar3,s_WeaponPrev_006a12c0);
                                          if (iVar4 == 0) {
                                            pcStack_29c = local_274;
                                            pcStack_298 = (char *)0x0;
                                            FUN_00409810();
                                            FUN_00543d70();
                                          }
                                          else {
                                            if ((local_278 < 0) ||
                                               (iVar4 = FUN_00549ae0(), iVar4 <= local_278)) {
                                              uStack_15c = uStack_25d;
                                              FUN_004040a0();
                                              iVar4 = -1;
                                              pcVar3 = &DAT_006b3f70;
                                              do {
                                                if (iVar4 == 0) break;
                                                iVar4 = iVar4 + -1;
                                                cVar1 = *pcVar3;
                                                pcVar3 = pcVar3 + 1;
                                              } while (cVar1 != '\0');
                                              pcStack_298 = (char *)0x5402ee;
                                              FUN_004040f0();
                                              local_4._0_1_ = 0x2f;
                                              pcStack_298 = s___AdamSource_DaviList_h_0068f458;
                                              pcStack_29c = s_a_Index>_0____a_Index<Count()_0068f470
                                              ;
                                              uStack_2a0 = 0x540312;
                                              pcVar2 = (code *)FUN_005a07f0();
                                              uStack_2a0 = 0x540314;
                                              (*pcVar2)();
                                              local_4 = CONCAT31(local_4._1_3_,1);
                                              FUN_004040a0();
                                            }
                                            pcVar3 = *(char **)(iVar8 + 4 + *(int *)(param_1 + 0x18)
                                                               );
                                            if (pcVar3 == (char *)0x0) {
                                              pcVar3 = "";
                                            }
                                            pcStack_298 = (char *)0x540348;
                                            iVar4 = __strcmpi(pcVar3,s_LookUp_006a12b8);
                                            if (iVar4 == 0) {
                                              pcStack_29c = local_274;
                                              pcStack_298 = (char *)0x0;
                                              FUN_00409810();
                                              FUN_00543d70();
                                            }
                                            else {
                                              if ((local_278 < 0) ||
                                                 (iVar4 = FUN_00549ae0(), iVar4 <= local_278)) {
                                                uStack_13c = uStack_25b;
                                                FUN_004040a0();
                                                iVar4 = -1;
                                                pcVar3 = &DAT_006b3f70;
                                                do {
                                                  if (iVar4 == 0) break;
                                                  iVar4 = iVar4 + -1;
                                                  cVar1 = *pcVar3;
                                                  pcVar3 = pcVar3 + 1;
                                                } while (cVar1 != '\0');
                                                pcStack_298 = (char *)0x5403ea;
                                                FUN_004040f0();
                                                local_4._0_1_ = 0x31;
                                                pcStack_298 = s___AdamSource_DaviList_h_0068f458;
                                                pcStack_29c = 
                                                s_a_Index>_0____a_Index<Count()_0068f470;
                                                uStack_2a0 = 0x54040e;
                                                pcVar2 = (code *)FUN_005a07f0();
                                                uStack_2a0 = 0x540410;
                                                (*pcVar2)();
                                                local_4 = CONCAT31(local_4._1_3_,1);
                                                FUN_004040a0();
                                              }
                                              pcVar3 = *(char **)(iVar8 + 4 +
                                                                 *(int *)(param_1 + 0x18));
                                              if (pcVar3 == (char *)0x0) {
                                                pcVar3 = "";
                                              }
                                              pcStack_298 = (char *)0x540444;
                                              iVar4 = __strcmpi(pcVar3,s_LookDown_006a12ac);
                                              if (iVar4 == 0) {
                                                pcStack_29c = local_274;
                                                pcStack_298 = (char *)0x0;
                                                FUN_00409810();
                                                FUN_00543d70();
                                              }
                                              else {
                                                if ((local_278 < 0) ||
                                                   (iVar4 = FUN_00549ae0(), iVar4 <= local_278)) {
                                                  uStack_11c = uStack_259;
                                                  FUN_004040a0();
                                                  iVar4 = -1;
                                                  pcVar3 = &DAT_006b3f70;
                                                  do {
                                                    if (iVar4 == 0) break;
                                                    iVar4 = iVar4 + -1;
                                                    cVar1 = *pcVar3;
                                                    pcVar3 = pcVar3 + 1;
                                                  } while (cVar1 != '\0');
                                                  pcStack_298 = (char *)0x5404e6;
                                                  FUN_004040f0();
                                                  local_4._0_1_ = 0x33;
                                                  pcStack_298 = s___AdamSource_DaviList_h_0068f458;
                                                  pcStack_29c = 
                                                  s_a_Index>_0____a_Index<Count()_0068f470;
                                                  uStack_2a0 = 0x54050a;
                                                  pcVar2 = (code *)FUN_005a07f0();
                                                  uStack_2a0 = 0x54050c;
                                                  (*pcVar2)();
                                                  local_4 = CONCAT31(local_4._1_3_,1);
                                                  FUN_004040a0();
                                                }
                                                pcVar3 = *(char **)(iVar8 + 4 +
                                                                   *(int *)(param_1 + 0x18));
                                                if (pcVar3 == (char *)0x0) {
                                                  pcVar3 = "";
                                                }
                                                pcStack_298 = (char *)0x540540;
                                                iVar4 = __strcmpi(pcVar3,s_CenterView_006a12a0);
                                                if (iVar4 == 0) {
                                                  pcStack_29c = local_274;
                                                  pcStack_298 = (char *)0x0;
                                                  FUN_00409810();
                                                  FUN_00543d70();
                                                }
                                                else {
                                                  if (local_278 < 0) {
LAB_005405c4:
                                                    uStack_fc = uStack_257;
                                                    FUN_004040a0();
                                                    iVar4 = -1;
                                                    pcVar3 = &DAT_006b3f70;
                                                    do {
                                                      if (iVar4 == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      cVar1 = *pcVar3;
                                                      pcVar3 = pcVar3 + 1;
                                                    } while (cVar1 != '\0');
                                                    pcStack_298 = (char *)0x5405fe;
                                                    FUN_004040f0();
                                                    local_4._0_1_ = 0x35;
                                                    pcStack_298 = s___AdamSource_DaviList_h_0068f458
                                                    ;
                                                    pcStack_29c = 
                                                  s_a_Index>_0____a_Index<Count()_0068f470;
                                                  uStack_2a0 = 0x540622;
                                                  pcVar2 = (code *)FUN_005a07f0();
                                                  uStack_2a0 = 0x540624;
                                                  (*pcVar2)();
                                                  local_4 = CONCAT31(local_4._1_3_,1);
                                                  FUN_004040a0();
                                                  }
                                                  else {
                                                    if (*(int *)(param_1 + 0x18) == 0) {
                                                      iVar4 = 0;
                                                    }
                                                    else {
                                                      iVar4 = (*(int *)(param_1 + 0x1c) -
                                                              *(int *)(param_1 + 0x18)) / 0x38;
                                                    }
                                                    if (iVar4 <= local_278) goto LAB_005405c4;
                                                  }
                                                  pcVar3 = *(char **)(iVar8 + 4 +
                                                                     *(int *)(param_1 + 0x18));
                                                  if (pcVar3 == (char *)0x0) {
                                                    pcVar3 = "";
                                                  }
                                                  pcStack_298 = (char *)0x540658;
                                                  iVar4 = __strcmpi(pcVar3,s_Scores_00693348);
                                                  if (iVar4 == 0) {
                                                    pcStack_29c = local_274;
                                                    pcStack_298 = (char *)0x0;
                                                    FUN_00409810();
                                                    FUN_00543d70();
                                                  }
                                                  else {
                                                    if (local_278 < 0) {
LAB_005406dc:
                                                      uStack_dc = uStack_255;
                                                      FUN_004040a0();
                                                      iVar4 = -1;
                                                      pcVar3 = &DAT_006b3f70;
                                                      do {
                                                        if (iVar4 == 0) break;
                                                        iVar4 = iVar4 + -1;
                                                        cVar1 = *pcVar3;
                                                        pcVar3 = pcVar3 + 1;
                                                      } while (cVar1 != '\0');
                                                      pcStack_298 = (char *)0x540716;
                                                      FUN_004040f0();
                                                      local_4._0_1_ = 0x37;
                                                      pcStack_298 = 
                                                  s___AdamSource_DaviList_h_0068f458;
                                                  pcStack_29c = 
                                                  s_a_Index>_0____a_Index<Count()_0068f470;
                                                  uStack_2a0 = 0x54073a;
                                                  pcVar2 = (code *)FUN_005a07f0();
                                                  uStack_2a0 = 0x54073c;
                                                  (*pcVar2)();
                                                  local_4 = CONCAT31(local_4._1_3_,1);
                                                  FUN_004040a0();
                                                  }
                                                  else {
                                                    if (*(int *)(param_1 + 0x18) == 0) {
                                                      iVar4 = 0;
                                                    }
                                                    else {
                                                      iVar4 = (*(int *)(param_1 + 0x1c) -
                                                              *(int *)(param_1 + 0x18)) / 0x38;
                                                    }
                                                    if (iVar4 <= local_278) goto LAB_005406dc;
                                                  }
                                                  pcVar3 = *(char **)(iVar8 + 4 +
                                                                     *(int *)(param_1 + 0x18));
                                                  if (pcVar3 == (char *)0x0) {
                                                    pcVar3 = "";
                                                  }
                                                  pcStack_298 = (char *)0x540770;
                                                  iVar4 = __strcmpi(pcVar3,(char *)&DAT_00693350);
                                                  if (iVar4 == 0) {
                                                    pcStack_29c = local_274;
                                                    pcStack_298 = (char *)0x0;
                                                    FUN_00409810();
                                                    FUN_00543d70();
                                                  }
                                                  else {
                                                    if (local_278 < 0) {
LAB_005407f4:
                                                      uStack_bc = uStack_253;
                                                      FUN_004040a0();
                                                      iVar4 = -1;
                                                      pcVar3 = &DAT_006b3f70;
                                                      do {
                                                        if (iVar4 == 0) break;
                                                        iVar4 = iVar4 + -1;
                                                        cVar1 = *pcVar3;
                                                        pcVar3 = pcVar3 + 1;
                                                      } while (cVar1 != '\0');
                                                      pcStack_298 = (char *)0x54082e;
                                                      FUN_004040f0();
                                                      local_4._0_1_ = 0x39;
                                                      pcStack_298 = 
                                                  s___AdamSource_DaviList_h_0068f458;
                                                  pcStack_29c = 
                                                  s_a_Index>_0____a_Index<Count()_0068f470;
                                                  uStack_2a0 = 0x540852;
                                                  pcVar2 = (code *)FUN_005a07f0();
                                                  uStack_2a0 = 0x540854;
                                                  (*pcVar2)();
                                                  local_4 = CONCAT31(local_4._1_3_,1);
                                                  FUN_004040a0();
                                                  }
                                                  else {
                                                    if (*(int *)(param_1 + 0x18) == 0) {
                                                      iVar4 = 0;
                                                    }
                                                    else {
                                                      iVar4 = (*(int *)(param_1 + 0x1c) -
                                                              *(int *)(param_1 + 0x18)) / 0x38;
                                                    }
                                                    if (iVar4 <= local_278) goto LAB_005407f4;
                                                  }
                                                  pcVar3 = *(char **)(iVar8 + 4 +
                                                                     *(int *)(param_1 + 0x18));
                                                  if (pcVar3 == (char *)0x0) {
                                                    pcVar3 = "";
                                                  }
                                                  pcStack_298 = (char *)0x540888;
                                                  iVar4 = __strcmpi(pcVar3,(char *)&DAT_00693358);
                                                  if (iVar4 == 0) {
                                                    pcStack_29c = local_274;
                                                    pcStack_298 = (char *)0x0;
                                                    FUN_00409810();
                                                    FUN_00543d70();
                                                  }
                                                  else {
                                                    if (local_278 < 0) {
LAB_0054090c:
                                                      uStack_9c = uStack_251;
                                                      FUN_004040a0();
                                                      iVar4 = -1;
                                                      pcVar3 = &DAT_006b3f70;
                                                      do {
                                                        if (iVar4 == 0) break;
                                                        iVar4 = iVar4 + -1;
                                                        cVar1 = *pcVar3;
                                                        pcVar3 = pcVar3 + 1;
                                                      } while (cVar1 != '\0');
                                                      pcStack_298 = (char *)0x540946;
                                                      FUN_004040f0();
                                                      local_4._0_1_ = 0x3b;
                                                      pcStack_298 = 
                                                  s___AdamSource_DaviList_h_0068f458;
                                                  pcStack_29c = 
                                                  s_a_Index>_0____a_Index<Count()_0068f470;
                                                  uStack_2a0 = 0x54096a;
                                                  pcVar2 = (code *)FUN_005a07f0();
                                                  uStack_2a0 = 0x54096c;
                                                  (*pcVar2)();
                                                  local_4 = CONCAT31(local_4._1_3_,1);
                                                  FUN_004040a0();
                                                  }
                                                  else {
                                                    if (*(int *)(param_1 + 0x18) == 0) {
                                                      iVar4 = 0;
                                                    }
                                                    else {
                                                      iVar4 = (*(int *)(param_1 + 0x1c) -
                                                              *(int *)(param_1 + 0x18)) / 0x38;
                                                    }
                                                    if (iVar4 <= local_278) goto LAB_0054090c;
                                                  }
                                                  pcVar3 = *(char **)(iVar8 + 4 +
                                                                     *(int *)(param_1 + 0x18));
                                                  if (pcVar3 == (char *)0x0) {
                                                    pcVar3 = "";
                                                  }
                                                  pcStack_298 = (char *)0x5409a0;
                                                  iVar4 = __strcmpi(pcVar3,s_ToggleConsole_00693364)
                                                  ;
                                                  if (iVar4 == 0) {
                                                    pcStack_29c = local_274;
                                                    pcStack_298 = (char *)0x0;
                                                    FUN_00409810();
                                                    FUN_00543d70();
                                                  }
                                                  else {
                                                    if (local_278 < 0) {
LAB_00540a24:
                                                      uStack_7c = uStack_24f;
                                                      FUN_004040a0();
                                                      iVar4 = -1;
                                                      pcVar3 = &DAT_006b3f70;
                                                      do {
                                                        if (iVar4 == 0) break;
                                                        iVar4 = iVar4 + -1;
                                                        cVar1 = *pcVar3;
                                                        pcVar3 = pcVar3 + 1;
                                                      } while (cVar1 != '\0');
                                                      pcStack_298 = (char *)0x540a5e;
                                                      FUN_004040f0();
                                                      local_4._0_1_ = 0x3d;
                                                      pcStack_298 = 
                                                  s___AdamSource_DaviList_h_0068f458;
                                                  pcStack_29c = 
                                                  s_a_Index>_0____a_Index<Count()_0068f470;
                                                  uStack_2a0 = 0x540a82;
                                                  pcVar2 = (code *)FUN_005a07f0();
                                                  uStack_2a0 = 0x540a84;
                                                  (*pcVar2)();
                                                  local_4 = CONCAT31(local_4._1_3_,1);
                                                  FUN_004040a0();
                                                  }
                                                  else {
                                                    if (*(int *)(param_1 + 0x18) == 0) {
                                                      iVar4 = 0;
                                                    }
                                                    else {
                                                      iVar4 = (*(int *)(param_1 + 0x1c) -
                                                              *(int *)(param_1 + 0x18)) / 0x38;
                                                    }
                                                    if (iVar4 <= local_278) goto LAB_00540a24;
                                                  }
                                                  pcVar3 = *(char **)(iVar8 + 4 +
                                                                     *(int *)(param_1 + 0x18));
                                                  if (pcVar3 == (char *)0x0) {
                                                    pcVar3 = "";
                                                  }
                                                  pcStack_298 = (char *)0x540ab8;
                                                  iVar4 = __strcmpi(pcVar3,&DAT_00693374);
                                                  if (iVar4 == 0) {
                                                    pcStack_29c = local_274;
                                                    pcStack_298 = (char *)0x0;
                                                    FUN_00409810();
                                                    FUN_00543d70();
                                                  }
                                                  else {
                                                    if (local_278 < 0) {
LAB_00540b40:
                                                      uStack_21c = uStack_24d;
                                                      FUN_004040a0();
                                                      uVar6 = 0xffffffff;
                                                      pcVar3 = &DAT_006b3f70;
                                                      do {
                                                        if (uVar6 == 0) break;
                                                        uVar6 = uVar6 - 1;
                                                        cVar1 = *pcVar3;
                                                        pcVar3 = pcVar3 + 1;
                                                      } while (cVar1 != '\0');
                                                      pcStack_298 = (char *)0x540b70;
                                                      cVar1 = FUN_00401940();
                                                      if (cVar1 != '\0') {
                                                        puVar5 = (undefined4 *)&DAT_006b3f70;
                                                        puVar9 = puStack_218;
                                                        for (uVar7 = ~uVar6 - 1 >> 2; uVar7 != 0;
                                                            uVar7 = uVar7 - 1) {
                                                          *puVar9 = *puVar5;
                                                          puVar5 = puVar5 + 1;
                                                          puVar9 = puVar9 + 1;
                                                        }
                                                        for (uVar6 = ~uVar6 - 1 & 3; uVar6 != 0;
                                                            uVar6 = uVar6 - 1) {
                                                          *(undefined1 *)puVar9 =
                                                               *(undefined1 *)puVar5;
                                                          puVar5 = (undefined4 *)((int)puVar5 + 1);
                                                          puVar9 = (undefined4 *)((int)puVar9 + 1);
                                                        }
                                                        FUN_00404190();
                                                      }
                                                      local_4._0_1_ = 0x3f;
                                                      pcStack_298 = 
                                                  s___AdamSource_DaviList_h_0068f458;
                                                  pcStack_29c = 
                                                  s_a_Index>_0____a_Index<Count()_0068f470;
                                                  uStack_2a0 = 0x540bb8;
                                                  pcVar2 = (code *)FUN_005a07f0();
                                                  uStack_2a0 = 0x540bba;
                                                  (*pcVar2)();
                                                  local_4 = CONCAT31(local_4._1_3_,1);
                                                  FUN_004040a0();
                                                  }
                                                  else {
                                                    if (*(int *)(param_1 + 0x18) == 0) {
                                                      iVar4 = 0;
                                                    }
                                                    else {
                                                      iVar4 = (*(int *)(param_1 + 0x1c) -
                                                              *(int *)(param_1 + 0x18)) / 0x38;
                                                    }
                                                    if (iVar4 <= local_278) goto LAB_00540b40;
                                                  }
                                                  pcVar3 = *(char **)(*(int *)(param_1 + 0x18) + 4 +
                                                                     iVar8);
                                                  if (pcVar3 == (char *)0x0) {
                                                    pcVar3 = "";
                                                  }
                                                  pcStack_298 = (char *)0x540bf3;
                                                  iVar4 = __strcmpi(pcVar3,s_Pause_0069337c);
                                                  if (iVar4 == 0) {
                                                    pcStack_29c = local_274;
                                                    pcStack_298 = (char *)0x0;
                                                    FUN_00409810();
                                                    FUN_00543d70();
                                                  }
                                                  else {
                                                    if (local_278 < 0) {
LAB_00540c7b:
                                                      local_240 = uStack_24a;
                                                      FUN_004040a0();
                                                      uVar6 = 0xffffffff;
                                                      pcVar3 = &DAT_006b3f70;
                                                      do {
                                                        if (uVar6 == 0) break;
                                                        uVar6 = uVar6 - 1;
                                                        cVar1 = *pcVar3;
                                                        pcVar3 = pcVar3 + 1;
                                                      } while (cVar1 != '\0');
                                                      uVar6 = ~uVar6 - 1;
                                                      pcStack_298 = (char *)0x540cac;
                                                      cVar1 = FUN_00401940();
                                                      if (cVar1 != '\0') {
                                                        puVar5 = (undefined4 *)&DAT_006b3f70;
                                                        puVar9 = local_23c;
                                                        for (uVar7 = uVar6 >> 2; uVar7 != 0;
                                                            uVar7 = uVar7 - 1) {
                                                          *puVar9 = *puVar5;
                                                          puVar5 = puVar5 + 1;
                                                          puVar9 = puVar9 + 1;
                                                        }
                                                        for (uVar7 = uVar6 & 3; uVar7 != 0;
                                                            uVar7 = uVar7 - 1) {
                                                          *(undefined1 *)puVar9 =
                                                               *(undefined1 *)puVar5;
                                                          puVar5 = (undefined4 *)((int)puVar5 + 1);
                                                          puVar9 = (undefined4 *)((int)puVar9 + 1);
                                                        }
                                                        *(undefined1 *)((int)local_23c + uVar6) = 0;
                                                        uStack_238 = uVar6;
                                                      }
                                                      local_4._0_1_ = 0x41;
                                                      pcStack_298 = 
                                                  s___AdamSource_DaviList_h_0068f458;
                                                  pcStack_29c = 
                                                  s_a_Index>_0____a_Index<Count()_0068f470;
                                                  uStack_2a0 = 0x540cf8;
                                                  pcVar2 = (code *)FUN_005a07f0();
                                                  uStack_2a0 = 0x540cfa;
                                                  (*pcVar2)();
                                                  local_4 = CONCAT31(local_4._1_3_,1);
                                                  if (local_23c != (undefined4 *)0x0) {
                                                    cVar1 = *(char *)((int)local_23c + -1);
                                                    if ((cVar1 == '\0') || (cVar1 == -1)) {
                                                      FUN_005fe5f0();
                                                    }
                                                    else {
                                                      *(char *)((int)local_23c + -1) = cVar1 + -1;
                                                    }
                                                  }
                                                  local_23c = (undefined4 *)0x0;
                                                  uStack_238 = 0;
                                                  uStack_234 = 0;
                                                  }
                                                  else {
                                                    if (*(int *)(param_1 + 0x18) == 0) {
                                                      iVar4 = 0;
                                                    }
                                                    else {
                                                      iVar4 = (*(int *)(param_1 + 0x1c) -
                                                              *(int *)(param_1 + 0x18)) / 0x38;
                                                    }
                                                    if (iVar4 <= local_278) goto LAB_00540c7b;
                                                  }
                                                  pcVar3 = *(char **)(*(int *)(param_1 + 0x18) + 4 +
                                                                     iVar8);
                                                  if (pcVar3 == (char *)0x0) {
                                                    pcVar3 = "";
                                                  }
                                                  pcStack_298 = (char *)0x540d59;
                                                  iVar8 = __strcmpi(pcVar3,&DAT_00693384);
                                                  if (iVar8 != 0) {
                                                    if (local_278 < 0) {
LAB_00540de1:
                                                      uStack_22c = uStack_248;
                                                      uVar6 = 0xffffffff;
                                                      pcVar3 = &DAT_006b3f70;
                                                      do {
                                                        if (uVar6 == 0) break;
                                                        uVar6 = uVar6 - 1;
                                                        cVar1 = *pcVar3;
                                                        pcVar3 = pcVar3 + 1;
                                                      } while (cVar1 != '\0');
                                                      uVar6 = ~uVar6 - 1;
                                                      puStack_228 = (undefined4 *)0x0;
                                                      uStack_224 = 0;
                                                      uStack_220 = 0;
                                                      pcStack_298 = (char *)0x540e14;
                                                      cVar1 = FUN_00401940();
                                                      if (cVar1 != '\0') {
                                                        puVar5 = (undefined4 *)&DAT_006b3f70;
                                                        puVar9 = puStack_228;
                                                        for (uVar7 = uVar6 >> 2; uVar7 != 0;
                                                            uVar7 = uVar7 - 1) {
                                                          *puVar9 = *puVar5;
                                                          puVar5 = puVar5 + 1;
                                                          puVar9 = puVar9 + 1;
                                                        }
                                                        for (uVar7 = uVar6 & 3; uVar7 != 0;
                                                            uVar7 = uVar7 - 1) {
                                                          *(undefined1 *)puVar9 =
                                                               *(undefined1 *)puVar5;
                                                          puVar5 = (undefined4 *)((int)puVar5 + 1);
                                                          puVar9 = (undefined4 *)((int)puVar9 + 1);
                                                        }
                                                        *(undefined1 *)((int)puStack_228 + uVar6) =
                                                             0;
                                                        uStack_224 = uVar6;
                                                      }
                                                      local_4._0_1_ = 0x43;
                                                      pcStack_298 = 
                                                  s___AdamSource_DaviList_h_0068f458;
                                                  pcStack_29c = 
                                                  s_a_Index>_0____a_Index<Count()_0068f470;
                                                  uStack_2a0 = 0x540e60;
                                                  pcVar2 = (code *)FUN_005a07f0();
                                                  uStack_2a0 = 0x540e62;
                                                  (*pcVar2)();
                                                  local_4 = CONCAT31(local_4._1_3_,1);
                                                  if (puStack_228 != (undefined4 *)0x0) {
                                                    cVar1 = *(char *)((int)puStack_228 + -1);
                                                    if ((cVar1 == '\0') || (cVar1 == -1)) {
                                                      FUN_005fe5f0();
                                                    }
                                                    else {
                                                      *(char *)((int)puStack_228 + -1) = cVar1 + -1;
                                                    }
                                                  }
                                                  puStack_228 = (undefined4 *)0x0;
                                                  uStack_224 = 0;
                                                  uStack_220 = 0;
                                                  }
                                                  else {
                                                    if (*(int *)(param_1 + 0x18) == 0) {
                                                      iVar8 = 0;
                                                    }
                                                    else {
                                                      iVar8 = (*(int *)(param_1 + 0x1c) -
                                                              *(int *)(param_1 + 0x18)) / 0x38;
                                                    }
                                                    if (iVar8 <= local_278) goto LAB_00540de1;
                                                  }
                                                  pcStack_298 = auStack_5c;
                                                  pcStack_29c = (char *)0x540ecb;
                                                  FUN_005ae390();
                                                  pcStack_298 = 
                                                  s_D__Work_RCHorror_AdamSource_Adam_006a13c8;
                                                  pcStack_29c = s_false_0068d2d0;
                                                  local_4._0_1_ = 0x44;
                                                  uStack_2a0 = 0x540eeb;
                                                  pcVar2 = (code *)FUN_005a07f0();
                                                  uStack_2a0 = 0x540eed;
                                                  (*pcVar2)();
                                                  local_4 = CONCAT31(local_4._1_3_,1);
                                                  if (iStack_58 != 0) {
                                                    cVar1 = *(char *)(iStack_58 + -1);
                                                    if ((cVar1 == '\0') || (cVar1 == -1)) {
                                                      FUN_005fe5f0();
                                                    }
                                                    else {
                                                      *(char *)(iStack_58 + -1) = cVar1 + -1;
                                                    }
                                                  }
                                                  local_278 = local_278 + 1;
                                                  iStack_58 = 0;
                                                  uStack_54 = 0;
                                                  uStack_50 = 0;
                                                  goto LAB_0053ec92;
                                                  }
                                                  pcStack_29c = local_274;
                                                  pcStack_298 = (char *)0x0;
                                                  FUN_00409810();
                                                  FUN_00543d70();
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      local_4 = CONCAT31(local_4._1_3_,1);
      pcStack_2b4 = (char *)0x53ef56;
      puStack_2b0 = (undefined1 *)local_278;
      puStack_2b0 = (undefined1 *)FUN_005494c0();
      uStack_2b8 = 0x53ef5d;
      pcStack_2b4 = (char *)param_1;
      FUN_005431e0();
      local_278 = local_278 + 1;
      goto LAB_0053ec92;
    }
    pcStack_29c = local_274;
    pcStack_298 = (char *)0x0;
    puStack_2b0 = &local_260;
    pcStack_2b4 = s_LeftMouse_006a13a8;
    uStack_2b8 = 0x53edb3;
    FUN_00409810();
    puStack_2b0 = auStack_2c;
    pcStack_2b4 = (char *)0x53edc6;
    puVar5 = (undefined4 *)FUN_00543d70();
    uStack_2ac = *puVar5;
    uStack_2a8 = puVar5[1];
    local_4._0_1_ = 4;
    uStack_2a4 = puVar5[2];
    uStack_2a0 = puVar5[3];
    FUN_00409810(s_Control_006a13a0,&uStack_246);
    FUN_00543d70(auStack_2bc);
    local_4._0_1_ = 4;
    FUN_005494c0();
    FUN_005431e0();
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_00514430();
    local_278 = local_278 + 1;
  } while( true );
}

