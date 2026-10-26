/*
 * FUN_005f5810 at 005f5810
 * undefined FUN_005f5810(void)
 * Address ranges: 005f5810-005f5969
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate routine entry from original stored code pointer 0x651290; evidence stored-pointer; prologue canonical-SEH-prologue. Original bytes unchanged; names and types still inferred.
 */

/* Recovered candidate routine entry from original stored code pointer 0x651290; evidence
   stored-pointer; prologue canonical-SEH-prologue. Original bytes unchanged; names and types still
   inferred. */

void __thiscall
FUN_005f5810(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_4c [4];
  undefined4 uStack_48;
  undefined **local_3c [6];
  undefined **local_24 [6];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00648268;
  pvStack_c = ExceptionList;
  if (*(int *)(param_1 + 0x48) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x48) >> 4;
  }
  ExceptionList = &pvStack_c;
  FUN_005ecba0(local_4c,iVar1);
  local_4 = 0;
  FUN_005f92e0(local_4c);
  if (*(char *)(param_1 + 0x34) == '\0') {
    uVar2 = (**(code **)(param_1 + 0x38))(local_3c,param_4,local_4c);
    local_4._0_1_ = 3;
    uVar2 = FUN_005f8990(local_24,param_5,uVar2,param_3);
    local_4._0_1_ = 4;
    (**(code **)(param_1 + 0x3c))(param_4,local_4c,uVar2);
    local_4._0_1_ = 3;
    local_24[0] = &PTR_FUN_00650ad4;
    FUN_005e2f00();
    local_4 = (uint)local_4._1_3_ << 8;
    local_3c[0] = &PTR_FUN_00650ad4;
    FUN_005e2f00();
  }
  else {
    uVar2 = (**(code **)(param_1 + 0x38))(local_24,param_4,param_1 + 0xc,local_4c);
    local_4._0_1_ = 1;
    uVar2 = FUN_005f8990(local_3c,param_5,uVar2,param_3);
    local_4._0_1_ = 2;
    (**(code **)(param_1 + 0x3c))(param_4,param_1 + 0xc,local_4c,uVar2);
    local_4._0_1_ = 1;
    local_3c[0] = &PTR_FUN_00650ad4;
    FUN_005e2f00();
    local_4 = (uint)local_4._1_3_ << 8;
    local_24[0] = &PTR_FUN_00650ad4;
    FUN_005e2f00();
  }
  FUN_005fe5f0(uStack_48);
  ExceptionList = pvStack_c;
  return;
}

