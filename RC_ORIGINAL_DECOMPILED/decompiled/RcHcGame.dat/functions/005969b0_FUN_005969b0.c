/*
 * FUN_005969b0 at 005969b0
 * undefined FUN_005969b0(void)
 * Address ranges: 005969b0-00596afb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005969b0(int param_1)

{
  char cVar1;
  code *pcVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 uVar8;
  int local_20;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00643e80;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_20 = param_1;
  cVar1 = FUN_00596610();
  if (cVar1 == '\0') {
    uVar4 = 0xffffffff;
    pcVar6 = s_m_MoveState_is_not_initialized_006a6ad8;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    local_18 = (char *)0x0;
    local_14 = 0;
    local_10 = 0;
    cVar1 = FUN_00401940(uVar4,1);
    if (cVar1 != '\0') {
      pcVar6 = s_m_MoveState_is_not_initialized_006a6ad8;
      pcVar7 = local_18;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar7 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar7 + 1;
      }
      local_18[uVar4] = '\0';
      param_1 = local_20;
      local_14 = uVar4;
    }
    local_4 = 0;
    pcVar2 = (code *)FUN_005a07f0(s_IsInitialized___0069532c,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a6aa8,0x6e,local_1c);
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
  }
  FUN_00595470();
  cVar1 = FUN_0059be60();
  if (cVar1 != '\0') {
    puVar3 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x1c) + 8))(&local_20);
    uVar8 = *puVar3;
    local_4 = 1;
    FUN_00595470(uVar8);
    FUN_0059bac0(uVar8);
    local_4 = 0xffffffff;
    FUN_005630e0();
  }
  FUN_00595470();
  FUN_00556560();
  FUN_0059b1f0();
  ExceptionList = pvStack_c;
  return;
}

