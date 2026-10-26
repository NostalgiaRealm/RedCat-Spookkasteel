/*
 * FUN_005975c0 at 005975c0
 * undefined FUN_005975c0(void)
 * Address ranges: 005975c0-005976cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_005975c0(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

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
  puStack_8 = &LAB_00643f6b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00596e90(param_2);
  param_1[6] = *param_3;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  *param_1 = &PTR_FUN_00650068;
  cVar1 = FUN_0059b1f0();
  if (cVar1 == '\0') {
    local_1c[0] = (undefined1)param_2;
    uVar3 = 0xffffffff;
    pcVar5 = s_Can_not_move_to_invalid_way_poin_006a6c3c;
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
      pcVar5 = s_Can_not_move_to_invalid_way_poin_006a6c3c;
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
    local_4 = CONCAT31(local_4._1_3_,2);
    pcVar2 = (code *)FUN_005a07f0(s_m_DestinationWayPointId_IsValid__006a6c18,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a6aa8,0x15a,local_1c);
    (*pcVar2)();
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
  ExceptionList = local_c;
  return param_1;
}

