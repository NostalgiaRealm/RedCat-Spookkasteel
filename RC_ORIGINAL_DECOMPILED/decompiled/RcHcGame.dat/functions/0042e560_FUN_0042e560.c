/*
 * FUN_0042e560 at 0042e560
 * undefined FUN_0042e560(void)
 * Address ranges: 0042e560-0042e726
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0042e560(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  int local_20;
  undefined1 local_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00623678;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar3 = (int *)FUN_004042e0(&local_20);
  iVar2 = *piVar3;
  if ((local_20 != 0) &&
     (iVar6 = *(int *)(local_20 + 0x14) + -1, *(int *)(local_20 + 0x14) = iVar6, iVar6 == 0)) {
    FUN_005abfc0(0);
  }
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_004042e0(&local_20);
    local_4 = 0;
    if (*piVar3 == 0) {
      local_1c[0] = (undefined1)param_3;
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
      pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_1c);
      (*pcVar4)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    local_4 = 0xffffffff;
    iVar2 = *(int *)(*piVar3 + 0x360);
    if ((local_20 != 0) &&
       (iVar6 = *(int *)(local_20 + 0x14) + -1, *(int *)(local_20 + 0x14) = iVar6, iVar6 == 0)) {
      FUN_005abfc0(0);
    }
    if (iVar2 == 0) {
      local_1c[0] = (undefined1)param_3;
      uVar5 = 0xffffffff;
      iStack_18 = 0;
      pcVar7 = &DAT_006b3f70;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      uStack_14 = 0;
      uStack_10 = 0;
      FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
      local_4 = 2;
      pcVar4 = (code *)FUN_005a07f0(s_player____0_0068d620,
                                    s_D__Work_RCHorror_RCSource_RCActo_00690104,0xa7,local_1c);
      (*pcVar4)();
      local_4 = 0xffffffff;
      if (iStack_18 != 0) {
        cVar1 = *(char *)(iStack_18 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0((char *)(iStack_18 + -1));
        }
        else {
          *(char *)(iStack_18 + -1) = cVar1 + -1;
        }
      }
      iStack_18 = 0;
      uStack_14 = 0;
      uStack_10 = 0;
    }
    FUN_00503fc0(param_1,param_2,param_3);
  }
  ExceptionList = local_c;
  return;
}

