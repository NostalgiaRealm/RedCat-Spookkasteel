/*
 * FUN_005f0580 at 005f0580
 * undefined FUN_005f0580(void)
 * Address ranges: 005f0580-005f0714
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_005f0580(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  char *pcVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064788c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(param_1 + 3) = (undefined1)param_5;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar7 = s__none_006b1160;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s__none_006b1160,~uVar4 - 1);
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = &PTR_FUN_00650a74;
  param_1[1] = 0x3b;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 9) = 0xffff;
  local_4 = 0;
  FUN_005ecfe0();
  *param_1 = &PTR_FUN_00650b8c;
  *(undefined1 *)(param_1 + 0xf) = 0;
  local_4 = 1;
  FUN_005ecfe0();
  local_4._0_1_ = 2;
  FUN_005ecfe0();
  *(undefined1 *)(param_1 + 0x1b) = (undefined1)param_5;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1a] = &PTR_FUN_00650b88;
  local_4._0_1_ = 4;
  if ((param_1[0x1c] == 0) || ((uint)((int)(param_1[0x1e] - param_1[0x1c]) >> 2) < 10)) {
    pvVar3 = operator_new(0x28);
    iVar2 = param_1[0x1d];
    pvVar6 = pvVar3;
    for (iVar5 = param_1[0x1c]; iVar5 != iVar2; iVar5 = iVar5 + 4) {
      FUN_005f0760(pvVar6,iVar5);
      pvVar6 = (void *)((int)pvVar6 + 4);
    }
    FUN_00587d50(param_1[0x1c],param_1[0x1d]);
    FUN_005fe5f0(param_1[0x1c]);
    param_1[0x1e] = (int)pvVar3 + 0x28;
    iVar5 = FUN_0044e4c0();
    param_1[0x1c] = pvVar3;
    param_1[0x1d] = (void *)((int)pvVar3 + iVar5 * 4);
  }
  local_4 = CONCAT31(local_4._1_3_,5);
  *param_1 = &PTR_FUN_00650b40;
  FUN_005ef350(param_2,param_3,param_4,param_5);
  FUN_005ed400(param_2,param_3,param_1);
  FUN_005f0a80(param_2,param_3);
  ExceptionList = local_c;
  return param_1;
}

