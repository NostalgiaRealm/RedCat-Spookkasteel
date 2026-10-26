/*
 * FUN_004fae60 at 004fae60
 * undefined FUN_004fae60(void)
 * Address ranges: 004fae60-004fb070
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_004fae60(int param_1)

{
  int iVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined1 local_2c [4];
  undefined4 *local_28;
  uint local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006352e0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f3d80();
  cVar2 = FUN_004fef40();
  if (cVar2 == '\0') {
    ExceptionList = local_c;
    return 0;
  }
  if (*(int *)(param_1 + 0x3e0) == -1) {
    FUN_004f3d80();
    iVar4 = FUN_004fefb0();
    ExceptionList = local_c;
    return iVar4;
  }
  if (*(int *)(param_1 + 0x3e4) < *(int *)(param_1 + 0x3e0)) {
    uVar5 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    uVar5 = ~uVar5 - 1;
    local_28 = (undefined4 *)0x0;
    local_24 = 0;
    local_20 = 0;
    cVar2 = FUN_00401940(uVar5,1);
    if (cVar2 != '\0') {
      puVar7 = (undefined4 *)&DAT_006b3f70;
      puVar8 = local_28;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      *(undefined1 *)((int)local_28 + uVar5) = 0;
      local_24 = uVar5;
    }
    local_4 = 0;
    pcVar3 = (code *)FUN_005a07f0(s_m_FirstFrameCallTime_<__m_LastFr_0069d4a8,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069c628,0x710,local_2c);
    (*pcVar3)();
    local_4 = 0xffffffff;
    if (local_28 != (undefined4 *)0x0) {
      cVar2 = *(char *)((int)local_28 + -1);
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_005fe5f0((char *)((int)local_28 + -1));
      }
      else {
        *(char *)((int)local_28 + -1) = cVar2 + -1;
      }
    }
  }
  iVar4 = *(int *)(param_1 + 0x3e0);
  iVar1 = *(int *)(param_1 + 0x3e4);
  if ((iVar1 == -1) || (iVar4 == -1)) {
    ExceptionList = local_c;
    return 0;
  }
  if (iVar1 < iVar4) {
    uVar5 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    iStack_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0;
    FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
    local_4 = 1;
    pcVar3 = (code *)FUN_005a07f0(s_a_Now_>__a_Then_006934d0,s___AdamSource_AdamClock_h_0068e22c,
                                  0x7d,local_1c);
    (*pcVar3)();
    if (iStack_18 != 0) {
      cVar2 = *(char *)(iStack_18 + -1);
      if ((cVar2 != '\0') && (cVar2 != -1)) {
        *(char *)(iStack_18 + -1) = cVar2 + -1;
        ExceptionList = local_c;
        return iVar1 - iVar4;
      }
      FUN_005fe5f0((char *)(iStack_18 + -1));
    }
  }
  ExceptionList = local_c;
  return iVar1 - iVar4;
}

