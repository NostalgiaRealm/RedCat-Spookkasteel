/*
 * FUN_00446cd0 at 00446cd0
 * undefined FUN_00446cd0(void)
 * Address ranges: 00446cd0-00446dc6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 *
FUN_00446cd0(undefined4 *param_1,int param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5,int param_6)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 *local_34;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 local_24 [4];
  undefined1 *local_20;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006251f8;
  local_c = ExceptionList;
  puStack_2c = local_24;
  local_34 = &param_6;
  local_20 = (undefined1 *)&uStack_30;
  local_4 = 1;
  local_38 = 0x446d07;
  ExceptionList = &local_c;
  FUN_00449760();
  local_4._0_1_ = 2;
  local_3c = param_3;
  param_3 = &uStack_40;
  uStack_40 = param_5;
  local_38 = param_4;
  local_34 = (undefined4 *)param_5;
  FUN_00449760(&param_2);
  local_4._0_1_ = 1;
  puVar1 = (undefined4 *)FUN_00446dd0(local_1c);
  local_4 = (uint)local_4._1_3_ << 8;
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  param_1[3] = puVar1[3];
  if (param_2 != 0) {
    iVar2 = *(int *)(param_2 + 0x14) + -1;
    *(int *)(param_2 + 0x14) = iVar2;
    if (iVar2 == 0) {
      puStack_2c = (undefined1 *)0x0;
      uStack_30 = 0x446d87;
      FUN_005abfc0();
    }
    param_2 = 0;
  }
  local_4 = 0xffffffff;
  if ((param_6 != 0) &&
     (iVar2 = *(int *)(param_6 + 0x14) + -1, *(int *)(param_6 + 0x14) = iVar2, iVar2 == 0)) {
    puStack_2c = (undefined1 *)0x0;
    uStack_30 = 0x446db5;
    FUN_005abfc0();
  }
  ExceptionList = local_c;
  return param_1;
}

