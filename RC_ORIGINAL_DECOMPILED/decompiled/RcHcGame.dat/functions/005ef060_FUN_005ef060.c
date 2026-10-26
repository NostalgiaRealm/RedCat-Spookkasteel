/*
 * FUN_005ef060 at 005ef060
 * undefined FUN_005ef060(void)
 * Address ranges: 005ef060-005ef141
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_005ef060(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064759e;
  local_c = ExceptionList;
  uVar2 = 0xffffffff;
  ExceptionList = &local_c;
  *(undefined1 *)(param_1 + 3) = (undefined1)param_2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  pcVar3 = s__none_006b1160;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s__none_006b1160,~uVar2 - 1);
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = &PTR_FUN_00650a74;
  param_1[1] = 0x42;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 9) = 0xffff;
  local_4 = 0;
  FUN_005ecfe0();
  local_4._0_1_ = 1;
  FUN_005ecfe0();
  local_4 = CONCAT31(local_4._1_3_,2);
  *param_1 = &PTR_FUN_00650c20;
  FUN_005e9b00(param_2,param_3,param_4,param_5);
  FUN_005ed400(param_2,param_3,param_1);
  FUN_005ed400(param_2,param_3,param_1);
  ExceptionList = local_c;
  return param_1;
}

