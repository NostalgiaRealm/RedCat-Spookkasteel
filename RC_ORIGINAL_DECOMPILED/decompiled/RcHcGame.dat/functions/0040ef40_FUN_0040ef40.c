/*
 * FUN_0040ef40 at 0040ef40
 * undefined FUN_0040ef40(void)
 * Address ranges: 0040ef40-0040f08b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_0040ef40(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
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
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00620c60;
  local_c = ExceptionList;
  local_1c[0] = (undefined1)param_3;
  uVar2 = 0xffffffff;
  local_18 = (char *)0x0;
  local_14 = 0;
  local_10 = 0;
  pcVar4 = s_plant_0068e794;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2 - 1;
  ExceptionList = &local_c;
  cVar1 = FUN_00401940(uVar2,1);
  if (cVar1 != '\0') {
    pcVar4 = s_plant_0068e794;
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
    FUN_00404190(uVar2);
  }
  local_2c[0] = (undefined1)param_3;
  uVar2 = 0xffffffff;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_4 = 0;
  pcVar4 = s_plant_act_0068e79c;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_plant_act_0068e79c,~uVar2 - 1);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_0042b270(param_2,local_2c,param_3,local_1c);
  if (local_28 != 0) {
    cVar1 = *(char *)(local_28 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(local_28 + -1));
    }
    else {
      *(char *)(local_28 + -1) = cVar1 + -1;
    }
  }
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  if (local_18 != (char *)0x0) {
    cVar1 = local_18[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_18 + -1);
    }
    else {
      local_18[-1] = cVar1 + -1;
    }
  }
  *param_1 = &PTR_FUN_0064ad74;
  ExceptionList = local_c;
  return param_1;
}

