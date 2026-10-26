/*
 * FUN_0050aea0 at 0050aea0
 * undefined FUN_0050aea0(void)
 * Address ranges: 0050aea0-0050b1db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0050aea0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  undefined1 local_ac [4];
  char *pcStack_a8;
  undefined1 local_9c [16];
  int local_8c;
  undefined1 local_88 [124];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0063684a;
  pvStack_c = ExceptionList;
  local_4 = 0;
  local_8c = param_1;
  if (param_2 == 0) {
    ExceptionList = &pvStack_c;
    FUN_0050ab70();
  }
  else {
    iVar3 = *(int *)(param_1 + 0x50);
    ExceptionList = &pvStack_c;
    if (iVar3 != param_2) {
      ExceptionList = &pvStack_c;
      if ((iVar3 != 0) &&
         (iVar2 = *(int *)(iVar3 + 0x14) + -1, ExceptionList = &pvStack_c,
         *(int *)(iVar3 + 0x14) = iVar2, iVar2 == 0)) {
        FUN_005abfc0(0);
      }
      *(int *)(param_1 + 0x50) = param_2;
      FUN_005844b0();
    }
    FUN_005183f0();
    iVar3 = FUN_004337e0();
    if (iVar3 != 0) {
      iVar3 = FUN_00556560();
      puVar4 = *(undefined1 **)(iVar3 + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0064a3b4;
      }
      uVar5 = FUN_005ae390(local_9c,s_CAdamBitmap__SetAlphaBitmap___s___0069e69c,puVar4);
      local_4._0_1_ = 2;
      FUN_005aff00(uVar5);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar9 = s___Settings_Bitmaps_ini_0069e684;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(s___Settings_Bitmaps_ini_0069e684,~uVar7 - 1);
    local_4._0_1_ = 3;
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar9 = &DAT_0069e67c;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_0069e67c,~uVar7 - 1);
    local_4._0_1_ = 4;
    iVar3 = FUN_00556560();
    pcVar9 = "";
    if (*(char **)(iVar3 + 4) != (char *)0x0) {
      pcVar9 = *(char **)(iVar3 + 4);
    }
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar10 = pcVar9;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(pcVar9,~uVar7 - 1);
    local_4._0_1_ = 6;
    FUN_005ac9d0(local_ac,local_88,0,local_9c,0);
    FUN_005acca0();
    local_4._0_1_ = 4;
    FUN_004040a0(1);
    local_4._0_1_ = 3;
    FUN_004040a0(1);
    local_4._0_1_ = 0;
    FUN_004040a0(1);
    if (*(int *)(param_1 + 0x50) == 0) {
      FUN_004040a0(0);
      uVar7 = 0xffffffff;
      pcVar9 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
      local_4._0_1_ = 7;
      pcVar6 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_9c);
      (*pcVar6)();
      local_4._0_1_ = 0;
      FUN_004040a0(1);
    }
    FUN_0050aa70();
    FUN_0050aa70();
    iVar3 = FUN_005c4120();
    if (iVar3 == 0) {
      FUN_004040a0(0);
      uVar7 = 0xffffffff;
      pcVar9 = s_CAdamBitmap__SetAlphaBitmap___fa_0069e658;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7 - 1;
      cVar1 = FUN_00401940(uVar7,1);
      if (cVar1 != '\0') {
        pcVar9 = s_CAdamBitmap__SetAlphaBitmap___fa_0069e658;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcStack_a8 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcStack_a8 = pcStack_a8 + 4;
        }
        for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcStack_a8 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcStack_a8 = pcStack_a8 + 1;
        }
        FUN_00404190(uVar7);
      }
      local_4._0_1_ = 8;
      pcVar6 = (code *)FUN_005a07f0(s_result_00691bc0,s_D__Work_RCHorror_AdamSource_Adam_0069e554,
                                    0x79,local_ac);
      (*pcVar6)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
  }
  local_4 = 0xffffffff;
  if ((param_2 != 0) &&
     (iVar3 = *(int *)(param_2 + 0x14) + -1, *(int *)(param_2 + 0x14) = iVar3, iVar3 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = pvStack_c;
  return;
}

