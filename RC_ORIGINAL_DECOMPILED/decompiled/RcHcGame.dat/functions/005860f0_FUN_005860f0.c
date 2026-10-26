/*
 * FUN_005860f0 at 005860f0
 * undefined FUN_005860f0(void)
 * Address ranges: 005860f0-00586220
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_005860f0(undefined4 *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00642b1e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00501cb0(param_2);
  uVar2 = 0xffffffff;
  param_1[0x3e] = param_3;
  param_1[0x3f] = 0xffffffff;
  param_1[0x40] = 0xffffffff;
  param_1[0x41] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x42) = 1;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *param_1 = &PTR_FUN_0064fd40;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  if (*(int *)(param_3 + 0x18) != 1) {
    pcVar4 = s_CAdamEffectSpark__CAdamEffectSpa_006a5e50;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2 - 1;
    local_1c[0] = (undefined1)param_3;
    local_18 = (char *)0x0;
    local_14 = 0;
    local_10 = 0;
    cVar1 = FUN_00401940(uVar2,1);
    if (cVar1 != '\0') {
      pcVar4 = s_CAdamEffectSpark__CAdamEffectSpa_006a5e50;
      pcVar5 = local_18;
      for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar5 = pcVar5 + 4;
      }
      for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar5 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      }
      local_18[uVar2] = '\0';
      local_14 = uVar2;
    }
    local_4 = CONCAT31(local_4._1_3_,3);
    FUN_005035a0(local_1c);
    if (local_18 != (char *)0x0) {
      cVar1 = local_18[-1];
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0(local_18 + -1);
      }
      else {
        local_18[-1] = cVar1 + -1;
      }
    }
    *(undefined4 *)(param_3 + 0x18) = 1;
  }
  ExceptionList = local_c;
  return param_1;
}

