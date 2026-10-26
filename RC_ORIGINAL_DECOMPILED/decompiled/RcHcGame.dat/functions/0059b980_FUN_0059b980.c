/*
 * FUN_0059b980 at 0059b980
 * undefined FUN_0059b980(void)
 * Address ranges: 0059b980-0059bab7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0059b980(int param_1,undefined4 param_2)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006446b8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  cVar1 = FUN_0059b1f0();
  if (cVar1 == '\0') {
    local_1c[0] = (undefined1)param_2;
    uVar4 = 0xffffffff;
    pcVar6 = s_setting_cursor_at_invalid_wayPoi_006a7178;
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
      pcVar6 = s_setting_cursor_at_invalid_wayPoi_006a7178;
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
      local_14 = uVar4;
    }
    local_4 = 0;
    pcVar2 = (code *)FUN_005a07f0(s_a_WayPointId_IsValid___006a6d1c,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a70c8,0x8a,local_1c);
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
    local_10 = 0;
  }
  FUN_0059b730(param_2);
  FUN_0059b4f0(param_2);
  *(undefined1 *)(param_1 + 0x2c) = 1;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x28);
  uVar3 = FUN_005995c0();
  *(undefined4 *)(param_1 + 0x48) = uVar3;
  ExceptionList = pvStack_c;
  return;
}

