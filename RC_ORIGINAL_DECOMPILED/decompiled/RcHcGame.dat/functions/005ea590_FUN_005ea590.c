/*
 * FUN_005ea590 at 005ea590
 * undefined FUN_005ea590(void)
 * Address ranges: 005ea590-005ea77d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005ea590(undefined4 param_1,undefined1 *param_2,char *param_3,char *param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  undefined1 *puVar5;
  char *pcVar6;
  undefined1 local_60 [4];
  char *local_5c;
  uint local_58;
  undefined4 local_54;
  undefined1 local_50 [4];
  char *local_4c;
  undefined1 local_40 [48];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00646df8;
  local_c = ExceptionList;
  local_60[0] = param_4._0_1_;
  ExceptionList = &local_c;
  FUN_004040a0(0);
  pcVar4 = param_4;
  uVar2 = 0xffffffff;
  pcVar6 = param_4;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2 - 1;
  cVar1 = FUN_00401940(uVar2,1);
  if (cVar1 != '\0') {
    pcVar6 = local_5c;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar6 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar6 = pcVar6 + 1;
    }
    local_5c[uVar2] = '\0';
    local_58 = uVar2;
  }
  local_50[0] = param_4._0_1_;
  local_4 = 0;
  FUN_004040a0(0);
  uVar2 = 0xffffffff;
  pcVar4 = param_3;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2 - 1;
  cVar1 = FUN_00401940(uVar2,1);
  if (cVar1 != '\0') {
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)local_4c = *(undefined4 *)param_3;
      param_3 = param_3 + 4;
      local_4c = local_4c + 4;
    }
    for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *local_4c = *param_3;
      param_3 = param_3 + 1;
      local_4c = local_4c + 1;
    }
    FUN_00404190(uVar2);
  }
  local_4._0_1_ = 1;
  local_40[0] = *param_2;
  FUN_004040a0(0);
  FUN_0040cc00(param_2,0,0xffffffff);
  local_4._0_1_ = 2;
  FUN_00429a30(local_50);
  local_4._0_1_ = 3;
  FUN_00429a30(local_60);
  local_10 = param_1;
  local_4._0_1_ = 4;
  FUN_005ea8f0(&param_4,DAT_0070fb14,local_40);
  local_4._0_1_ = 6;
  FUN_004040a0(1);
  local_4._0_1_ = 5;
  FUN_004040a0(1);
  local_4._0_1_ = 1;
  FUN_004040a0(1);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004040a0(1);
  local_4 = 0xffffffff;
  if (local_5c != (char *)0x0) {
    cVar1 = local_5c[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_5c + -1);
    }
    else {
      local_5c[-1] = cVar1 + -1;
    }
  }
  puVar5 = *(undefined1 **)(param_2 + 4);
  local_5c = (char *)0x0;
  local_58 = 0;
  local_54 = 0;
  if (puVar5 == (undefined1 *)0x0) {
    puVar5 = &DAT_0064a3b4;
  }
  FUN_005e4140(s_Link_Error_LE_d___s_006b10d0,param_1,puVar5);
  ExceptionList = local_c;
  return;
}

