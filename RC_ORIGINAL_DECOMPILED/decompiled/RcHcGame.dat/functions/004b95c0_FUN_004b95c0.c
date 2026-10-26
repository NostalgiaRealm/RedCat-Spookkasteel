/*
 * FUN_004b95c0 at 004b95c0
 * undefined FUN_004b95c0(void)
 * Address ranges: 004b95c0-004b97bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004b95c0(int param_1)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  undefined1 *local_34;
  int local_30;
  undefined1 local_2c [4];
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062f2b0;
  pvStack_c = ExceptionList;
  local_34 = &DAT_0064a3b4;
  if (*(undefined1 **)(param_1 + 0x140) != (undefined1 *)0x0) {
    local_34 = *(undefined1 **)(param_1 + 0x140);
  }
  ExceptionList = &pvStack_c;
  piVar2 = (int *)FUN_004042e0(&local_30);
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
  iVar6 = *piVar2;
  if (*(int *)(iVar6 + 0x5c) == 0) {
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
    pcVar3 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,s___AdamSource_AdamSubLevel_h_0068e1b8,
                                  0x144,local_1c);
    (*pcVar3)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  uVar4 = FUN_005ba610(*(undefined4 *)(iVar6 + 0x5c),local_34);
  *(undefined4 *)(param_1 + 0x138) = uVar4;
  local_4 = 0xffffffff;
  if ((local_30 != 0) &&
     (iVar6 = *(int *)(local_30 + 0x14) + -1, *(int *)(local_30 + 0x14) = iVar6, iVar6 == 0)) {
    FUN_005abfc0(0);
  }
  if (*(int *)(param_1 + 0x138) == 0) {
    uVar5 = 0xffffffff;
    iStack_28 = 0;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uStack_24 = 0;
    uStack_20 = 0;
    FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
    local_4 = 3;
    pcVar3 = (code *)FUN_005a07f0(s_m_TextureBitmap_006972f4,
                                  s_D__Work_RCHorror_AdamSource_Adam_006972a8,0x101,local_2c);
    (*pcVar3)();
    if (iStack_28 != 0) {
      cVar1 = *(char *)(iStack_28 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(iStack_28 + -1));
      }
      else {
        *(char *)(iStack_28 + -1) = cVar1 + -1;
      }
    }
  }
  FUN_005c3100();
  ExceptionList = pvStack_c;
  return;
}

