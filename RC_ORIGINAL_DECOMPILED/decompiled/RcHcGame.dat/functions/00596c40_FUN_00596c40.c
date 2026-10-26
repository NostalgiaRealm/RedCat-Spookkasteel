/*
 * FUN_00596c40 at 00596c40
 * undefined FUN_00596c40(void)
 * Address ranges: 00596c40-00596d3c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __fastcall FUN_00596c40(int param_1)

{
  char cVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00643eb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar1 = FUN_00596610();
  if (cVar1 == '\0') {
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
    local_10 = 0;
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
                                  s_D__Work_RCHorror_AdamSource_Adam_006a6aa8,0x91,local_1c);
    (*pcVar2)();
    if (local_18 != (char *)0x0) {
      cVar1 = local_18[-1];
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        local_18[-1] = cVar1 + -1;
        ExceptionList = local_c;
        return *(undefined1 *)(param_1 + 0x20);
      }
      FUN_005fe5f0(local_18 + -1);
    }
  }
  ExceptionList = local_c;
  return *(undefined1 *)(param_1 + 0x20);
}

