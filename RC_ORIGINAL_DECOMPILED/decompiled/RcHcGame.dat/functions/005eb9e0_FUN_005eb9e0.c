/*
 * FUN_005eb9e0 at 005eb9e0
 * undefined FUN_005eb9e0(void)
 * Address ranges: 005eb9e0-005ebb10
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_005eb9e0(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064701e;
  local_c = ExceptionList;
  uVar2 = 0xffffffff;
  ExceptionList = &local_c;
  *(undefined1 *)(param_1 + 3) = (undefined1)param_2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  pcVar4 = s__none_006b1160;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2 - 1;
  cVar1 = FUN_00401940(uVar2,1);
  if (cVar1 != '\0') {
    pcVar4 = s__none_006b1160;
    pcVar5 = (char *)param_1[4];
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
    param_1[5] = uVar2;
    *(undefined1 *)(param_1[4] + uVar2) = 0;
  }
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = &PTR_FUN_00650a74;
  param_1[1] = 0x43;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 9) = 0xffff;
  local_4 = 0;
  FUN_005ecfe0();
  local_4._0_1_ = 1;
  FUN_005ecfe0();
  local_4._0_1_ = 2;
  FUN_005ecfe0();
  local_4._0_1_ = 3;
  FUN_005ecfe0();
  local_4._0_1_ = 4;
  FUN_005ecfe0();
  local_4._0_1_ = 5;
  FUN_005ecfe0();
  local_4._0_1_ = 6;
  FUN_005ecfe0();
  local_4 = CONCAT31(local_4._1_3_,7);
  *param_1 = &PTR_FUN_00650aa4;
  FUN_005ebb80(param_2);
  ExceptionList = local_c;
  return param_1;
}

