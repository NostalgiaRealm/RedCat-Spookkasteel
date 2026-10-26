/*
 * FUN_0049bcf0 at 0049bcf0
 * undefined FUN_0049bcf0(void)
 * Address ranges: 0049bcf0-0049c1a5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0049bcf0(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 **extraout_ECX;
  uint uVar7;
  undefined1 **extraout_ECX_00;
  undefined1 **extraout_ECX_01;
  undefined1 **extraout_ECX_02;
  char *pcVar8;
  undefined1 **ppuVar9;
  undefined1 **ppuStack_a0;
  undefined1 local_89;
  undefined1 *local_88;
  int local_84;
  undefined1 *local_80;
  undefined1 *apuStack_7c [3];
  undefined4 uStack_70;
  undefined1 *local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined1 *apuStack_5c [5];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062c92b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (DAT_006b915c == 0) {
    ppuStack_a0 = (undefined1 **)0x49bd1f;
    ExceptionList = &pvStack_c;
    FUN_004bc480();
  }
  ppuStack_a0 = (undefined1 **)0x49bd2a;
  iVar2 = FUN_004337e0();
  ppuStack_a0 = extraout_ECX;
  if (((iVar2 != 0) && ((char)param_1[0x46] != '\0')) && (param_1[0x86] != 0)) {
    if (DAT_006c8de0 == 0) {
      ppuStack_a0 = (undefined1 **)0x49bd5c;
      FUN_0055b280();
    }
    ppuStack_a0 = &local_80;
    piVar3 = (int *)FUN_00409f20();
    local_4 = 0;
    if (*piVar3 == 0) {
      ppuStack_a0 = (undefined1 **)0x0;
      local_6c = (undefined1 *)CONCAT31(local_6c._1_3_,local_89);
      FUN_004040a0();
      uVar7 = 0xffffffff;
      pcVar8 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      ppuStack_a0 = (undefined1 **)(~uVar7 - 1);
      FUN_004040f0(&DAT_006b3f70);
      ppuStack_a0 = &local_6c;
      local_4._0_1_ = 1;
      pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
      (*pcVar4)();
      local_4 = (uint)local_4._1_3_ << 8;
      ppuStack_a0 = (undefined1 **)0x1;
      FUN_004040a0();
    }
    local_84 = *piVar3;
    ppuStack_a0 = &local_88;
    piVar3 = (int *)FUN_004042e0();
    local_4._0_1_ = 2;
    if (*piVar3 == 0) {
      ppuStack_a0 = (undefined1 **)0x0;
      FUN_004040a0();
      uVar7 = 0xffffffff;
      pcVar8 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      ppuStack_a0 = (undefined1 **)(~uVar7 - 1);
      FUN_004040f0(&DAT_006b3f70);
      ppuStack_a0 = apuStack_7c;
      local_4._0_1_ = 3;
      pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
      (*pcVar4)();
      local_4._0_1_ = 2;
      ppuStack_a0 = (undefined1 **)0x1;
      FUN_004040a0();
    }
    iVar2 = *piVar3;
    if (*(int *)(iVar2 + 0x5c) == 0) {
      ppuStack_a0 = (undefined1 **)0x0;
      FUN_004040a0();
      uVar7 = 0xffffffff;
      pcVar8 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      ppuStack_a0 = (undefined1 **)(~uVar7 - 1);
      FUN_004040f0(&DAT_006b3f70);
      ppuStack_a0 = apuStack_5c;
      local_4._0_1_ = 4;
      pcVar4 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,s___AdamSource_AdamSubLevel_h_0068e1b8
                                    ,0x144);
      (*pcVar4)();
      local_4._0_1_ = 2;
      ppuStack_a0 = (undefined1 **)0x1;
      FUN_004040a0();
    }
    ppuStack_a0 = (undefined1 **)0xff;
    FUN_005b0940(*(undefined4 *)(iVar2 + 0x5c),local_84 + 0x1e0,param_1 + 0x9d,param_1[0x86],0xff,
                 0xff,0xff,0xff,0xff);
    local_4 = (uint)local_4._1_3_ << 8;
    if (local_88 != (undefined1 *)0x0) {
      ppuStack_a0 = (undefined1 **)0x49bf3f;
      FUN_004098d0();
      local_88 = (undefined1 *)0x0;
    }
    local_4 = 0xffffffff;
    ppuStack_a0 = (undefined1 **)0x0;
    if (local_80 != (undefined1 *)0x0) {
      ppuStack_a0 = (undefined1 **)0x49bf5e;
      FUN_004098d0();
      ppuStack_a0 = extraout_ECX_00;
    }
  }
  iVar2 = DAT_006b915c;
  if (DAT_006b915c == 0) {
    ppuStack_a0 = (undefined1 **)0x49bf72;
    iVar2 = FUN_004bc480();
    ppuStack_a0 = extraout_ECX_01;
  }
  iVar5 = *(int *)(iVar2 + 0x5c0);
  if (iVar5 == -0x80000000) {
    ppuStack_a0 = *(undefined1 ***)(iVar2 + 0x574);
    if (ppuStack_a0 == (undefined1 **)0x0) {
      ppuStack_a0 = (undefined1 **)&DAT_0064a3b4;
    }
    iVar5 = FUN_0060af10();
    *(int *)(iVar2 + 0x5c0) = iVar5;
    ppuStack_a0 = extraout_ECX_02;
  }
  if ((iVar5 == 0) || ((char)param_1[0x46] == '\0')) goto LAB_0049c0ef;
  local_80 = (undefined1 *)&ppuStack_a0;
  FUN_004042e0(&ppuStack_a0);
  FUN_005545a0();
  local_4 = 5;
  local_6c = (undefined1 *)0x43340000;
  uStack_68 = 0x43340000;
  uStack_64 = 0x43340000;
  uStack_60 = 0;
  ppuStack_a0 = (undefined1 **)0x49bffd;
  iVar2 = FUN_00554250();
  if (iVar2 == 0) {
    uStack_64 = 0x435c0000;
    ppuStack_a0 = (undefined1 **)(param_1 + 0x47);
LAB_0049c04a:
    FUN_00554a30();
  }
  else {
    if (iVar2 == 1) {
      uStack_68 = 0x435c0000;
      ppuStack_a0 = (undefined1 **)(param_1 + 0x4d);
      goto LAB_0049c04a;
    }
    if (iVar2 == 2) {
      local_6c = (undefined1 *)0x435c0000;
      ppuStack_a0 = apuStack_5c;
      ppuStack_a0 = (undefined1 **)FUN_0049bc00();
      goto LAB_0049c04a;
    }
    ppuStack_a0 = (undefined1 **)s_Unknown_BoundingBox_render_mode_00694c2c;
    FUN_005afe30();
  }
  ppuStack_a0 = &local_6c;
  ppuVar9 = apuStack_7c;
  uVar6 = (**(code **)(*param_1 + 0x48))(ppuVar9);
  FUN_00554890(uVar6,ppuVar9);
  uStack_70 = 0x435c0000;
  local_6c = (undefined1 *)0x43340000;
  uStack_68 = 0x43340000;
  uStack_48 = 0xc0400000;
  uStack_44 = 0xc0400000;
  uStack_40 = 0xc0400000;
  uStack_3c = 0x40400000;
  uStack_38 = 0x40400000;
  uStack_34 = 0x40400000;
  FUN_00554a30(&uStack_48);
  uVar6 = (**(code **)(*param_1 + 0x48))(&local_80,&uStack_70);
  FUN_00554890(uVar6);
  local_4 = 0xffffffff;
  ppuStack_a0 = (undefined1 **)0x49c0ef;
  FUN_00554630();
LAB_0049c0ef:
  if ((char)param_1[0x66] != '\0') {
    if (param_1[0x45] == 0) {
      ppuStack_a0 = (undefined1 **)0x0;
      FUN_004040a0();
      uVar7 = 0xffffffff;
      pcVar8 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      ppuStack_a0 = (undefined1 **)(~uVar7 - 1);
      FUN_004040f0(&DAT_006b3f70);
      ppuStack_a0 = apuStack_5c;
      local_4 = 6;
      pcVar4 = (code *)FUN_005a07f0(s_m_Actor____0_0068e768,
                                    s_D__Work_RCHorror_AdamSource_Adam_00694bcc,0x18d);
      (*pcVar4)();
      local_4 = 0xffffffff;
      ppuStack_a0 = (undefined1 **)0x1;
      FUN_004040a0();
    }
    ppuStack_a0 = (undefined1 **)(param_1 + 0x5a);
    FUN_005b50a0();
    *(undefined1 *)(param_1 + 0x66) = 0;
  }
  ExceptionList = pvStack_c;
  return;
}

