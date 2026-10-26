/*
 * FUN_0059e1b0 at 0059e1b0
 * undefined FUN_0059e1b0(void)
 * Address ranges: 0059e1b0-0059e2c8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0059e1b0(int param_1,undefined4 **param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puStack_24;
  undefined *puStack_20;
  undefined4 *puStack_1c;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00644a68;
  local_c = ExceptionList;
  puStack_1c = &local_10;
  local_4 = 0;
  local_10 = 0;
  puStack_20 = (undefined *)0x59e1e8;
  ExceptionList = &local_c;
  FUN_0059b1d0();
  iVar2 = (int)param_2;
  param_3 = (undefined4 *)0x0;
  while( true ) {
    puStack_1c = (undefined4 *)&DAT_006ba5c8;
    param_2 = (undefined4 **)&puStack_20;
    puStack_24 = &param_1;
    FUN_00449760();
    puStack_24 = (undefined4 *)0x59e20f;
    iVar1 = FUN_0041e8e0();
    if (iVar1 <= (int)param_3) {
      local_4 = 0xffffffff;
      if (param_1 != 0) {
        iVar2 = *(int *)(param_1 + 0x14) + -1;
        *(int *)(param_1 + 0x14) = iVar2;
        if (iVar2 == 0) {
          puStack_1c = (undefined4 *)0x0;
          puStack_20 = (undefined *)0x59e2b4;
          FUN_005abfc0();
        }
      }
      ExceptionList = local_c;
      return 0;
    }
    puStack_1c = param_3;
    puStack_20 = &DAT_006ba5c8;
    param_2 = &puStack_24;
    puStack_24 = param_3;
    FUN_00449760(&param_1);
    iVar1 = FUN_005a0490();
    if (iVar2 == iVar1) break;
    param_3 = (undefined4 *)((int)param_3 + 1);
  }
  puStack_1c = &param_3;
  puStack_20 = (undefined *)0x59e24f;
  FUN_0059b1d0();
  local_4 = 0xffffffff;
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + 0x14) + -1;
    *(int *)(param_1 + 0x14) = iVar2;
    if (iVar2 == 0) {
      puStack_1c = (undefined4 *)0x0;
      puStack_20 = (undefined *)0x59e277;
      FUN_005abfc0();
    }
  }
  ExceptionList = local_c;
  return 1;
}

