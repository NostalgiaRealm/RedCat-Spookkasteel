/*
 * FUN_004aadf0 at 004aadf0
 * undefined FUN_004aadf0(void)
 * Address ranges: 004aadf0-004aae9c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004aadf0(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062df74;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (undefined1 *)0x0) {
    uVar1 = *param_2;
    ExceptionList = &local_c;
    *(undefined4 *)(param_1 + 4) = 0;
    *param_1 = uVar1;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_0040cc00(param_2,0,0xffffffff);
    local_4._0_1_ = 1;
    param_1[0x10] = param_2[0x10];
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    FUN_0040cc00(param_2 + 0x10,0,0xffffffff);
    local_4 = CONCAT31(local_4._1_3_,2);
    param_1[0x20] = param_2[0x20];
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    FUN_0040cc00(param_2 + 0x20,0,0xffffffff);
  }
  ExceptionList = local_c;
  return;
}

