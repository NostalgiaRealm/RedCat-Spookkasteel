/*
 * FUN_0059bac0 at 0059bac0
 * undefined FUN_0059bac0(void)
 * Address ranges: 0059bac0-0059bbed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0059bac0(int param_1,undefined1 param_2)

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
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006446e0;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (*(char *)(param_1 + 0x34) == '\0') {
    local_1c[0] = param_2;
    uVar3 = 0xffffffff;
    pcVar5 = s_Cursor_can_not_change_destinatio_006a71ac;
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
    ExceptionList = &pvStack_c;
    cVar1 = FUN_00401940(uVar3,1);
    if (cVar1 != '\0') {
      pcVar5 = s_Cursor_can_not_change_destinatio_006a71ac;
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
    local_4._0_1_ = 1;
    pcVar2 = (code *)FUN_005a07f0(s_m_IsAtWayPoint_006a719c,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a70c8,0x99,local_1c);
    (*pcVar2)();
    local_4 = (uint)local_4._1_3_ << 8;
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
    local_10 = 0;
  }
  cVar1 = FUN_0059b1f0();
  if (cVar1 == '\0') {
    FUN_0059b490();
  }
  else {
    FUN_0059b730(&param_2);
  }
  local_4 = 0xffffffff;
  FUN_005630e0();
  ExceptionList = pvStack_c;
  return;
}

