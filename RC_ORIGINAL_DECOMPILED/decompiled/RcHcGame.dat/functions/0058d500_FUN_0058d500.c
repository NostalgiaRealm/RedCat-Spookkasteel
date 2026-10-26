/*
 * FUN_0058d500 at 0058d500
 * undefined FUN_0058d500(void)
 * Address ranges: 0058d500-0058d63f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_0058d500(undefined4 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 local_2c [4];
  char *local_28;
  uint local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00643170;
  local_c = ExceptionList;
  uVar3 = 0xffffffff;
  pcVar5 = s_ExplosionA_006a6218;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  local_28 = (char *)0x0;
  local_24 = 0;
  local_20 = 0;
  ExceptionList = &local_c;
  cVar1 = FUN_00401940(uVar3,1);
  if (cVar1 != '\0') {
    pcVar5 = s_ExplosionA_006a6218;
    pcVar6 = local_28;
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
    local_28[uVar3] = '\0';
    local_24 = uVar3;
  }
  local_4 = 0;
  uVar2 = FUN_005033a0(local_1c,local_2c);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004acde0(uVar2);
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(local_18 + -1));
    }
    else {
      *(char *)(local_18 + -1) = cVar1 + -1;
    }
  }
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  if (local_28 != (char *)0x0) {
    cVar1 = local_28[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_28 + -1);
    }
    else {
      local_28[-1] = cVar1 + -1;
    }
  }
  param_1[0x5e] = 0;
  param_1[0x60] = 0x41c80000;
  param_1[0x61] = 0x41c80000;
  *(undefined1 *)(param_1 + 0x5d) = 0;
  *(undefined1 *)((int)param_1 + 0x175) = 0;
  param_1[0x5f] = 1;
  *param_1 = &PTR_FUN_0064fe24;
  ExceptionList = local_c;
  return param_1;
}

