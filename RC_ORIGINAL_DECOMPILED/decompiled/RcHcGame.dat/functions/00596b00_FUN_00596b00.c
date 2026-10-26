/*
 * FUN_00596b00 at 00596b00
 * undefined FUN_00596b00(void)
 * Address ranges: 00596b00-00596c3e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00596b00(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 unaff_retaddr;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  void *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00643e98;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  cVar1 = FUN_00596610();
  if (cVar1 == '\0') {
    local_1c[0] = (undefined1)param_3;
    uVar3 = 0xffffffff;
    pcVar5 = s_m_MoveState_is_not_initialized_006a6ad8;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    local_18 = (char *)0x0;
    local_14 = 0;
    local_10 = (void *)0x0;
    cVar1 = FUN_00401940(uVar3,1);
    if (cVar1 != '\0') {
      pcVar5 = s_m_MoveState_is_not_initialized_006a6ad8;
      pcVar6 = local_18;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar6 = pcVar6 + 4;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar6 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar6 = pcVar6 + 1;
      }
      local_18[uVar3] = '\0';
      local_14 = uVar3;
    }
    local_4 = 0;
    pcVar2 = (code *)FUN_005a07f0(s_IsInitialized___0069532c,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a6aa8,0x7e,local_1c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    if (local_18 != (char *)0x0) {
      cVar1 = local_18[-1];
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0(local_18 + -1);
      }
      else {
        local_18[-1] = cVar1 + -1;
      }
    }
    local_18 = (char *)0x0;
    local_14 = 0;
    local_10 = (void *)0x0;
  }
  (**(code **)(**(int **)(param_1 + 0x14) + 0x84))();
  cVar1 = FUN_005969b0();
  *(bool *)(param_1 + 0x21) = cVar1 == '\0';
  cVar1 = (**(code **)(**(int **)(param_1 + 0x1c) + 4))(param_3);
  *(char *)(param_1 + 0x20) = cVar1;
  if ((cVar1 == '\0') && (*(char *)(param_1 + 0x21) == '\0')) {
    FUN_00595470(unaff_retaddr);
    FUN_0059be70(unaff_retaddr);
  }
  ExceptionList = local_10;
  return;
}

