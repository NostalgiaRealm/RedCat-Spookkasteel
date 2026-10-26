/*
 * FUN_004bef70 at 004bef70
 * undefined FUN_004bef70(void)
 * Address ranges: 004bef70-004bf8e8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004bef70(int param_1,char param_2)

{
  char cVar1;
  code *pcVar2;
  BOOL BVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  bool bVar11;
  bool bVar12;
  char *pcVar13;
  int iStack_110;
  int iStack_10c;
  undefined1 auStack_d4 [4];
  int iStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined **ppuStack_b4;
  tagMSG atStack_98 [5];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062fd26;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005ae5f0();
  local_4._0_1_ = 0;
  local_4._1_3_ = 0;
  do {
    FUN_005aaca0();
    bVar11 = false;
    bVar12 = false;
    if (*(int *)(param_1 + 0x3a8) == 0) {
      FUN_00409810();
      local_4._0_1_ = 1;
      pcVar2 = (code *)FUN_005a07f0();
      (*pcVar2)();
      local_4._0_1_ = 0;
      FUN_004040a0();
    }
    cVar1 = (**(code **)(**(int **)(param_1 + 0x3a8) + 0x44))();
    if (cVar1 != '\0') {
      FUN_005ae5f0();
      local_4._0_1_ = 2;
      FUN_004c4440();
      FUN_005ae390();
      local_4._0_1_ = 3;
      FUN_0040cc00();
      local_4._0_1_ = 2;
      FUN_004040a0();
      local_4._0_1_ = 0;
      FUN_005ae770();
      break;
    }
    if (param_2 != '\0') {
      if (*(int *)(param_1 + 0x3a8) == 0) {
        FUN_00409810();
        local_4._0_1_ = 4;
        pcVar2 = (code *)FUN_005a07f0();
        (*pcVar2)();
        local_4._0_1_ = 0;
        FUN_004040a0();
      }
      cVar1 = (**(code **)(**(int **)(param_1 + 0x3a8) + 0x3c))();
      if (cVar1 == '\0') {
        if (*(int *)(param_1 + 0x3a8) == 0) {
          FUN_00409810();
          puStack_8._0_1_ = 5;
          pcVar2 = (code *)FUN_005a07f0(s_m_Input____0_00693a28);
          (*pcVar2)();
          puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
          FUN_004040a0();
        }
        cVar1 = (**(code **)(**(int **)(param_1 + 0x3a8) + 0x40))();
        if (cVar1 == '\0') {
          if (*(char *)(*(int *)(param_1 + 0x3a4) + 0xa4) == '\0') {
            if (*(char *)(param_1 + 0x39c) != '\0') {
              if (*(int *)(param_1 + 0x3a8) == 0) {
                FUN_00409810();
                local_4._0_1_ = 6;
                pcVar2 = (code *)FUN_005a07f0();
                (*pcVar2)();
                local_4._0_1_ = 0;
                FUN_004040a0();
              }
              cVar1 = (**(code **)(**(int **)(param_1 + 0x3a8) + 0x38))();
              if (cVar1 != '\0') {
                if (DAT_006b915c == 0) {
                  FUN_004bc480();
                }
                FUN_004c4380();
                FUN_004c97e0();
                goto LAB_004bf5ad;
              }
            }
            if (*(int *)(param_1 + 0x3a8) == 0) {
              FUN_00409810();
              local_4._0_1_ = 7;
              pcVar2 = (code *)FUN_005a07f0();
              (*pcVar2)();
              local_4._0_1_ = 0;
              FUN_004040a0();
            }
            cVar1 = (**(code **)(**(int **)(param_1 + 0x3a8) + 0x2c))();
            if (cVar1 == '\0') {
              if (*(int *)(param_1 + 0x3a8) == 0) {
                FUN_00409810();
                local_4._0_1_ = 0xb;
                pcVar2 = (code *)FUN_005a07f0();
                (*pcVar2)();
                local_4._0_1_ = 0;
                FUN_004040a0();
              }
              cVar1 = (**(code **)(**(int **)(param_1 + 0x3a8) + 0x30))();
              if (cVar1 != '\0') {
                if (DAT_006b915c == 0) {
                  FUN_004bc480();
                }
                FUN_00421750();
                local_4._0_1_ = 0xc;
                if (iStack_10c == 0) {
                  FUN_004040a0();
                  iVar5 = -1;
                  pcVar9 = &DAT_006b3f70;
                  do {
                    if (iVar5 == 0) break;
                    iVar5 = iVar5 + -1;
                    cVar1 = *pcVar9;
                    pcVar9 = pcVar9 + 1;
                  } while (cVar1 != '\0');
                  FUN_004040f0();
                  local_4._0_1_ = 0xd;
                  pcVar2 = (code *)FUN_005a07f0();
                  (*pcVar2)();
                  local_4._0_1_ = 0xc;
                  FUN_004040a0();
                }
                FUN_004a72c0();
                if (iStack_10c == 0) {
                  FUN_004040a0();
                  iVar5 = -1;
                  pcVar9 = &DAT_006b3f70;
                  do {
                    if (iVar5 == 0) break;
                    iVar5 = iVar5 + -1;
                    cVar1 = *pcVar9;
                    pcVar9 = pcVar9 + 1;
                  } while (cVar1 != '\0');
                  FUN_004040f0();
                  local_4._0_1_ = 0xe;
                  pcVar2 = (code *)FUN_005a07f0();
                  (*pcVar2)();
                  local_4._0_1_ = 0xc;
                  FUN_004040a0();
                }
                FUN_00556220();
                local_4._0_1_ = 0;
                if (iStack_10c != 0) {
                  FUN_004098d0();
                  iStack_10c = 0;
                }
              }
            }
            else {
              if (DAT_006b915c == 0) {
                FUN_004bc480();
              }
              FUN_00421750();
              local_4._0_1_ = 8;
              if (iStack_110 == 0) {
                FUN_00409810();
                local_4._0_1_ = 9;
                pcVar2 = (code *)FUN_005a07f0();
                (*pcVar2)();
                local_4._0_1_ = 8;
                FUN_004040a0();
              }
              FUN_004a72c0();
              if (iStack_110 == 0) {
                FUN_00409810();
                local_4._0_1_ = 10;
                pcVar2 = (code *)FUN_005a07f0();
                (*pcVar2)();
                local_4._0_1_ = 8;
                FUN_004040a0();
              }
              FUN_00556220();
              local_4._0_1_ = 0;
              if (iStack_110 != 0) {
                FUN_004098d0();
                iStack_110 = 0;
              }
            }
          }
          else {
            if (DAT_006b915c == 0) {
              FUN_004bc480();
            }
            FUN_004c4380();
            (**(code **)(**(int **)(param_1 + 0x3a4) + 0x28))();
          }
        }
        else {
          if (DAT_006b915c == 0) {
            FUN_004bc480();
          }
          FUN_004c4380();
          (**(code **)(**(int **)(param_1 + 0x3a4) + 0x24))();
        }
      }
      else {
        if (DAT_006b915c == 0) {
          FUN_004bc480();
        }
        FUN_004c4380();
        (**(code **)(**(int **)(param_1 + 0x3a4) + 0x20))();
      }
    }
LAB_004bf5ad:
    cVar1 = FUN_005a9c30();
    if (cVar1 == '\0') break;
    if (atStack_98[0].message == 0x12) {
      FUN_005ae5f0();
      local_4 = CONCAT31(local_4._1_3_,0xf);
      FUN_00517670();
      iVar5 = FUN_004337e0();
      if (iVar5 != 0) {
        FUN_005afe30();
      }
      FUN_004c4440();
      local_4._0_1_ = 0;
      FUN_005ae770();
    }
    else if (((atStack_98[0].message == 0x100) || (atStack_98[0].message == 0x102)) &&
            (param_2 != '\0')) {
      cVar1 = FUN_00592e60();
      if (cVar1 == '\0') {
        FUN_004c0170();
      }
      else {
        FUN_00594470();
      }
    }
    if (*(char *)(*(int *)(param_1 + 0x58) + 0x89) == '\0') {
      BVar3 = PeekMessageA(atStack_98,*(HWND *)(*(int *)(param_1 + 0x58) + 0x54),0x100,0x108,0);
      bVar11 = BVar3 != 0;
      BVar3 = PeekMessageA(atStack_98,*(HWND *)(*(int *)(param_1 + 0x58) + 0x54),0x200,0x209,0);
      bVar12 = BVar3 != 0;
      iVar4 = FUN_00517af0();
      iVar5 = *(int *)(iVar4 + 100);
      if (iVar5 == -0x80000000) {
        iVar5 = FUN_0060af10();
        *(int *)(iVar4 + 100) = iVar5;
      }
      if (iVar5 != 0) {
        DAT_006b9164 = DAT_006b9164 + 1;
        uVar6 = FUN_005ae390(auStack_d4,s_count__d__mouse__d__key__d__msg___00697c18);
        local_4._0_1_ = 0x10;
        FUN_005aff00(uVar6);
        local_4._0_1_ = 0;
        if (iStack_d0 != 0) {
          cVar1 = *(char *)(iStack_d0 + -1);
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            FUN_005fe5f0();
          }
          else {
            *(char *)(iStack_d0 + -1) = cVar1 + -1;
          }
        }
        iStack_d0 = 0;
        uStack_cc = 0;
        uStack_c8 = 0;
      }
    }
    if (*(char *)(param_1 + 0x3e) != '\0') goto LAB_004bf832;
  } while ((bVar11) || (bVar12));
  if (*(char *)(param_1 + 0x3e) != '\0') {
LAB_004bf832:
    if (param_2 == '\0') {
      uVar7 = 0xffffffff;
      pcVar13 = (char *)0x0;
      pcVar9 = s_CAdamQuitException_00697bf8;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7 - 1;
      cVar1 = FUN_00401940(uVar7,1);
      if (cVar1 != '\0') {
        pcVar9 = s_CAdamQuitException_00697bf8;
        pcVar10 = pcVar13;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar10 = pcVar10 + 4;
        }
        for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar10 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar10 = pcVar10 + 1;
        }
        pcVar13[uVar7] = '\0';
      }
      FUN_004bf8f0();
      ppuStack_b4 = &PTR_FUN_0064ee20;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8();
    }
  }
  local_4 = 0xffffffff;
  FUN_005ae770();
  ExceptionList = pvStack_c;
  return;
}

