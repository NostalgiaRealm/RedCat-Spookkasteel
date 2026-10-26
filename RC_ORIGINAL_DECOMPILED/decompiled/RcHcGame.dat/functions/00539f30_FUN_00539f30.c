/*
 * FUN_00539f30 at 00539f30
 * undefined FUN_00539f30(void)
 * Address ranges: 00539f30-0053a044
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64f778 slot 2 for .?AVCAdamMenuItemSelectableList@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64f778 slot 2 for
   .?AVCAdamMenuItemSelectableList@@. Original bytes unchanged; names and types still inferred. */

void __thiscall
FUN_00539f30(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int *param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 *param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            int param_14)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  iVar1 = param_14;
  puStack_8 = &LAB_0063bd58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (((char)param_5 == '\0') && (ExceptionList = &local_c, *(char *)(param_1 + 0x68) != '\0')) {
    ExceptionList = &local_c;
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x6c);
  }
  local_18 = param_14;
  if (param_14 != 0) {
    *(int *)(param_14 + 0x14) = *(int *)(param_14 + 0x14) + 1;
  }
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  local_28 = param_10;
  local_24 = param_11;
  local_20 = param_12;
  local_1c = param_13;
  uStack_3c = param_5;
  param_10 = &uStack_40;
  uStack_40 = param_5;
  local_38 = param_6;
  local_34 = param_7;
  local_30 = param_8;
  local_2c = param_9;
  param_5 = &local_18;
  FUN_00449760(&param_4);
  local_4._0_1_ = 1;
  FUN_00539a10(param_2,param_3);
  local_4 = (uint)local_4._1_3_ << 8;
  if (param_4 != 0) {
    iVar2 = *(int *)(param_4 + 0x14) + -1;
    *(int *)(param_4 + 0x14) = iVar2;
    if (iVar2 == 0) {
      local_18 = 0;
      local_1c = 0x53a00c;
      FUN_005abfc0();
    }
    param_4 = 0;
  }
  local_4 = 0xffffffff;
  if ((iVar1 != 0) &&
     (iVar2 = *(int *)(iVar1 + 0x14) + -1, *(int *)(iVar1 + 0x14) = iVar2, iVar2 == 0)) {
    local_18 = 0;
    local_1c = 0x53a032;
    FUN_005abfc0();
  }
  ExceptionList = local_c;
  return;
}

