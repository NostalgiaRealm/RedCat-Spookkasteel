/*
 * FUN_00412000 at 00412000
 * undefined FUN_00412000(void)
 * Address ranges: 00412000-00412166
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_00412000(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  char *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar1 = param_3;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00620e30;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pcVar3 = (char *)FUN_00412830(*(undefined4 *)(param_3 + 0x2c));
  param_3._0_1_ = SUB41(pcVar3,0);
  local_1c[0] = (undefined1)param_3;
  uVar5 = 0xffffffff;
  local_18 = (char *)0x0;
  local_14 = 0;
  local_10 = 0;
  pcVar4 = pcVar3;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  uVar5 = ~uVar5 - 1;
  cVar2 = FUN_00401940(uVar5,1);
  if (cVar2 != '\0') {
    pcVar4 = local_18;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar4 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
    }
    FUN_00404190(uVar5);
  }
  local_4 = 0;
  pcVar4 = (char *)FUN_00412920(*(undefined4 *)(iVar1 + 0x2c));
  local_2c[0] = (undefined1)param_3;
  uVar5 = 0xffffffff;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  pcVar3 = pcVar4;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(pcVar4,~uVar5 - 1);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00429e10(param_2,local_2c,param_4,iVar1,local_1c);
  if (local_28 != 0) {
    cVar2 = *(char *)(local_28 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005fe5f0((char *)(local_28 + -1));
    }
    else {
      *(char *)(local_28 + -1) = cVar2 + -1;
    }
  }
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  if (local_18 != (char *)0x0) {
    cVar2 = local_18[-1];
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005fe5f0(local_18 + -1);
    }
    else {
      local_18[-1] = cVar2 + -1;
    }
  }
  *param_1 = &PTR_FUN_0064b030;
  ExceptionList = local_c;
  return param_1;
}

