/*
 * FUN_0047a7b0 at 0047a7b0
 * undefined FUN_0047a7b0(void)
 * Address ranges: 0047a7b0-0047ab59
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0047a7b0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  char *pcVar10;
  undefined1 local_32;
  undefined1 uStack_31;
  int local_30;
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00628cf8;
  local_c = ExceptionList;
  if (*(char *)(param_1 + 0x3f8) != '\0') {
    ExceptionList = &local_c;
    piVar3 = (int *)FUN_004042e0(&local_30);
    local_4 = 0;
    if (*piVar3 == 0) {
      local_2c[0] = local_32;
      FUN_004040a0(0);
      uVar9 = 0xffffffff;
      pcVar10 = &DAT_006b3f70;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
      local_4._0_1_ = 1;
      pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_2c);
      (*pcVar4)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    iVar5 = *piVar3;
    if (*(int *)(iVar5 + 0x5c) == 0) {
      local_1c[0] = local_32;
      FUN_004040a0(0);
      uVar9 = 0xffffffff;
      pcVar10 = &DAT_006b3f70;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
      local_4._0_1_ = 2;
      pcVar4 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,s___AdamSource_AdamSubLevel_h_0068e1b8
                                    ,0x144,local_1c);
      (*pcVar4)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    uVar2 = *(undefined4 *)(iVar5 + 0x5c);
    local_4 = 0xffffffff;
    if (local_30 != 0) {
      FUN_004098d0();
    }
    iVar5 = DAT_006b915c;
    if (DAT_006b915c == 0) {
      iVar5 = FUN_004bc480();
    }
    iVar7 = *(int *)(iVar5 + 0x4e8);
    if (iVar7 == -0x80000000) {
      puVar6 = *(undefined1 **)(iVar5 + 0x49c);
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &DAT_0064a3b4;
      }
      iVar7 = FUN_0060af10(puVar6);
      *(int *)(iVar5 + 0x4e8) = iVar7;
    }
    if (iVar7 == 0) {
      if (*(int *)(param_1 + 0x104) == 0) {
        local_1c[0] = local_32;
        FUN_004040a0(0);
        uVar9 = 0xffffffff;
        pcVar10 = &DAT_006b3f70;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
        local_4 = 3;
        pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      local_1c);
        (*pcVar4)();
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      uVar8 = FUN_0050aa70(0,1,0);
      FUN_005b6e90(uVar2,param_1 + 0x1c0,4,uVar8);
      if (*(int *)(param_1 + 0x104) == 0) {
        local_1c[0] = local_32;
        FUN_004040a0(0);
        uVar9 = 0xffffffff;
        pcVar10 = &DAT_006b3f70;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
        local_4 = 4;
        pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      local_1c);
        (*pcVar4)();
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      uVar8 = FUN_0050aa70(0,1,0);
      FUN_005b6e90(uVar2,param_1 + 0x250,4,uVar8);
    }
    if (*(int *)(param_1 + 0x100) == 0) {
      FUN_00409810(&DAT_006b3f70,&local_32);
      local_4 = 5;
      pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_1c);
      (*pcVar4)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    uVar8 = FUN_0050aa70(0,1,0);
    FUN_005b6e90(uVar2,param_1 + 0x2e0,4,uVar8);
    if (*(int *)(param_1 + 0xfc) == 0) {
      FUN_00409810(&DAT_006b3f70,&uStack_31);
      local_4 = 6;
      pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_2c);
      (*pcVar4)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    uVar8 = FUN_0050aa70(0,8,0);
    FUN_005b6e90(uVar2,param_1 + 0x130,4,uVar8);
  }
  ExceptionList = local_c;
  return;
}

