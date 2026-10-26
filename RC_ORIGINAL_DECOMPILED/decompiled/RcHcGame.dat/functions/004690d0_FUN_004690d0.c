/*
 * FUN_004690d0 at 004690d0
 * undefined FUN_004690d0(void)
 * Address ranges: 004690d0-00469328
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004690d0(int param_1)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  char *local_38;
  int local_34;
  undefined4 uStack_30;
  undefined1 local_2c [4];
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00627ac0;
  local_c = ExceptionList;
  if (*(char *)(param_1 + 0x7c) != '\0') {
    ExceptionList = &local_c;
    local_34 = param_1;
    piVar2 = (int *)FUN_004042e0(&local_38);
    local_4 = 0;
    if (*piVar2 == 0) {
      FUN_004040a0(0);
      uVar5 = 0xffffffff;
      pcVar7 = &DAT_006b3f70;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
      local_4._0_1_ = 1;
      pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_2c);
      (*pcVar3)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    iVar8 = *piVar2;
    if (*(int *)(iVar8 + 0x5c) == 0) {
      FUN_004040a0(0);
      uVar5 = 0xffffffff;
      pcVar7 = &DAT_006b3f70;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
      local_4._0_1_ = 2;
      pcVar3 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,s___AdamSource_AdamSubLevel_h_0068e1b8
                                    ,0x144,local_1c);
      (*pcVar3)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    uStack_30 = *(undefined4 *)(iVar8 + 0x5c);
    local_4 = 0xffffffff;
    if ((local_38 != (char *)0x0) &&
       (iVar8 = *(int *)(local_38 + 0x14), *(int *)(local_38 + 0x14) = iVar8 + -1, iVar8 + -1 == 0))
    {
      FUN_005abfc0(0);
    }
    iVar6 = 0;
    param_1 = param_1 + 0x124;
    local_38 = (char *)(local_34 + 0x460);
    iVar8 = local_34;
    do {
      if (*local_38 == '\0') {
        ExceptionList = local_c;
        return;
      }
      if (*(int *)(iVar8 + 0xf8) == 0) {
        uVar5 = 0xffffffff;
        pcVar7 = &DAT_006b3f70;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        iStack_28 = 0;
        uStack_24 = 0;
        uStack_20 = 0;
        FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
        local_4 = 3;
        pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      local_2c);
        (*pcVar3)();
        local_4 = 0xffffffff;
        if (iStack_28 != 0) {
          cVar1 = *(char *)(iStack_28 + -1);
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            FUN_005fe5f0((char *)(iStack_28 + -1));
          }
          else {
            *(char *)(iStack_28 + -1) = cVar1 + -1;
          }
        }
        iStack_28 = 0;
        uStack_24 = 0;
        uStack_20 = 0;
        iVar8 = local_34;
      }
      uVar4 = FUN_0050aa70(0,1,0);
      FUN_005b6e90(uStack_30,param_1,3,uVar4);
      iVar6 = iVar6 + 1;
      local_38 = local_38 + 0x144;
      param_1 = param_1 + 0x90;
    } while (iVar6 < 5);
    FUN_0046a390();
  }
  ExceptionList = local_c;
  return;
}

