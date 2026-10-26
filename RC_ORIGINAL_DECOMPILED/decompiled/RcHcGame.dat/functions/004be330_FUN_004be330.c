/*
 * FUN_004be330 at 004be330
 * undefined FUN_004be330(void)
 * Address ranges: 004be330-004be675
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004be330(int param_1)

{
  char cVar1;
  ushort uVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  LPCSTR lpText;
  LPCSTR lpCaption;
  char *pcVar9;
  char local_4c [4];
  LPCSTR pCStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  char local_3c [4];
  LPCSTR pCStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_24;
  int local_20;
  char local_17;
  char local_16;
  char local_15;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0062fc10;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xffffffa4;
  ExceptionList = &pvStack_10;
  local_20 = param_1;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_006975f0,0x1d5);
  local_8 = 0;
  if (*(char *)(param_1 + 0x44) != '\0') {
    local_4c[0] = local_17;
    FUN_004040a0(0);
    uVar8 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
    local_8._0_1_ = 1;
    pcVar3 = (code *)FUN_005a07f0(s__m_FlagStarted_00697a24,
                                  s_D__Work_RCHorror_AdamSource_Adam_006975f0,0x1d6,local_4c);
    (*pcVar3)();
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_004040a0(1);
  }
  *(undefined1 *)(param_1 + 0x44) = 1;
  local_15 = '\0';
  local_17 = '\x01';
  FUN_004c0d20();
  FUN_004be1e0();
  cVar1 = FUN_004be990();
  if (cVar1 != '\0') {
    uVar2 = GetAsyncKeyState(0x10);
    if ((uVar2 & 0x8000) != 0) {
      FUN_00517430();
      iVar4 = FUN_004337e0();
      if (iVar4 != 0) {
        FUN_005afe30(s_CAdamApplication__Start____SHIFT_006979e0);
      }
      DAT_006a2400 = 0;
    }
    local_24 = FUN_005af930();
    FUN_005af920(1);
    local_8._0_1_ = 2;
    local_16 = '\0';
    FUN_004bde80(&local_16);
    if (local_16 == '\0') {
      FUN_00527c20();
      if (*(int *)(param_1 + 0x3a8) == 0) {
        local_4c[0] = local_17;
        FUN_004040a0(0);
        uVar8 = 0xffffffff;
        pcVar9 = &DAT_006b3f70;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
        local_8._0_1_ = 3;
        pcVar3 = (code *)FUN_005a07f0();
        (*pcVar3)(s_m_Input____0_00693a28,s___AdamSource_AdamApplication_h_0068e58c,0x136,local_4c);
        local_8._0_1_ = 2;
        FUN_004040a0(1);
      }
      iVar4 = *(int *)(param_1 + 0x3a8);
      if (*(int *)(iVar4 + 0x3c) == 0) {
        uVar5 = FUN_005ae390(local_3c,s_You_probably_forgot_to_call_CAda_00693308);
        local_8._0_1_ = 4;
        pcVar3 = (code *)FUN_005a07f0();
        (*pcVar3)(s_m_InputHandle____NULL_006932d4,s___AdamSource_AdamInput_h_006932ec,0xbc,uVar5);
        local_8._0_1_ = 2;
        FUN_004040a0(1);
      }
      FUN_005aab50(*(undefined4 *)(iVar4 + 0x3c));
      FUN_00519cb0();
      iVar4 = FUN_004337e0();
      if (iVar4 != 0) {
        cVar1 = FUN_00592e60();
        if (cVar1 == '\0') {
          local_4c[0] = local_17;
          FUN_004040a0(0);
          local_8._0_1_ = 5;
          FUN_004c97e0(local_4c);
          *(undefined1 *)(param_1 + 0x391) = 1;
          local_8._0_1_ = 2;
          FUN_004040a0(1);
        }
      }
      FUN_00592e70(s_Loading____006979d4);
      FUN_004bcb70();
      FUN_004c3640();
      FUN_00519cb0();
      iVar4 = FUN_004337e0();
      if (iVar4 != 0) {
        cVar1 = FUN_00592e60();
        if (cVar1 != '\0') {
          local_4c[0] = local_17;
          FUN_004040a0(0);
          local_8._0_1_ = 6;
          FUN_004c97e0(local_4c);
          *(undefined1 *)(param_1 + 0x391) = 0;
          local_8._0_1_ = 2;
          FUN_004040a0(1);
        }
      }
      FUN_0052e870();
      iVar6 = FUN_005168f0();
      iVar4 = *(int *)(iVar6 + 100);
      if (iVar4 == -0x80000000) {
        puVar7 = *(undefined1 **)(iVar6 + 0x18);
        if (puVar7 == (undefined1 *)0x0) {
          puVar7 = &DAT_0064a3b4;
        }
        iVar4 = FUN_0060af10(puVar7);
        *(int *)(iVar6 + 100) = iVar4;
      }
      if (iVar4 != 0) {
        uVar5 = FUN_005ae390(local_4c,s__s___d____SetCurrentState__GS_GA_00694990,
                             s_D__Work_RCHorror_AdamSource_Adam_006975f0,0x222);
        local_8._0_1_ = 7;
        FUN_005aff00(uVar5);
        local_8._0_1_ = 2;
        FUN_004040a0(1);
      }
      FUN_0052ab20(3);
      FUN_005aa690();
      FUN_004bfd60();
      FUN_004be7ba();
      return;
    }
    iVar4 = *(int *)(param_1 + 0x3a0);
    local_8 = 0;
    iVar6 = *(int *)(iVar4 + 0x100);
    if (iVar6 != 0) {
      if (iVar6 == 0) {
        local_4c[0] = local_17;
        FUN_004040a0(0);
        uVar8 = 0xffffffff;
        pcVar9 = &DAT_006b3f70;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
        local_8._0_1_ = 0xc;
        pcVar3 = (code *)FUN_005a07f0(s_m_Engine_006934e0,s___AdamSource_AdamEngine_h_0068eb58,0x1ad
                                      ,local_4c);
        (*pcVar3)();
        local_8 = (uint)local_8._1_3_ << 8;
        FUN_004040a0(1);
      }
      FUN_005bb9e0(*(undefined4 *)(iVar4 + 0x100));
    }
    cVar1 = local_15;
    if ((local_15 == '\0') && (local_17 != '\0')) {
      FUN_004bc090();
    }
    else {
      *(undefined1 *)(param_1 + 0x45) = 1;
      FUN_005afdd0(&LAB_004c4110);
      if (cVar1 != '\0') {
        iVar4 = DAT_006b915c;
        if (DAT_006b915c == 0) {
          iVar4 = FUN_004bc480();
        }
        puVar7 = *(undefined1 **)(iVar4 + 0x74);
        if (puVar7 == (undefined1 *)0x0) {
          puVar7 = &DAT_0064a3b4;
        }
        FUN_005ae390(local_4c,s_Er_is_een_onverwachte_fout_opget_0069784c,puVar7);
        uVar8 = 0xffffffff;
        pcVar9 = &DAT_006b3f70;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar1 != '\0');
        local_8 = CONCAT31(local_8._1_3_,0xd);
        local_3c[0] = local_17;
        pCStack_38 = (LPCSTR)0x0;
        uStack_34 = 0;
        uStack_30 = 0;
        FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
        lpCaption = pCStack_38;
        if (pCStack_38 == (LPCSTR)0x0) {
          lpCaption = "";
        }
        lpText = pCStack_48;
        if (pCStack_48 == (LPCSTR)0x0) {
          lpText = "";
        }
        MessageBoxA(*(HWND *)(*(int *)(param_1 + 0x58) + 0x54),lpText,lpCaption,0x10);
        if (pCStack_38 != (LPCSTR)0x0) {
          cVar1 = pCStack_38[-1];
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            FUN_005fe5f0(pCStack_38 + -1);
          }
          else {
            pCStack_38[-1] = cVar1 + -1;
          }
        }
        pCStack_38 = (LPCSTR)0x0;
        uStack_34 = 0;
        uStack_30 = 0;
        local_8 = local_8 & 0xffffff00;
        if (pCStack_48 != (LPCSTR)0x0) {
          cVar1 = pCStack_48[-1];
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            FUN_005fe5f0(pCStack_48 + -1);
          }
          else {
            pCStack_48[-1] = cVar1 + -1;
          }
        }
        pCStack_48 = (LPCSTR)0x0;
        uStack_44 = 0;
        uStack_40 = 0;
      }
    }
    FUN_005af920(local_24);
  }
  local_8 = 0xffffffff;
  FUN_005ae770();
  ExceptionList = pvStack_10;
  return;
}

