/*
 * FUN_005f4f30 at 005f4f30
 * undefined FUN_005f4f30(void)
 * Address ranges: 005f4f30-005f5067
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate routine entry from original stored code pointer 0x65122c; evidence stored-pointer; prologue canonical-SEH-prologue. Original bytes unchanged; names and types still inferred.
 */

/* Recovered candidate routine entry from original stored code pointer 0x65122c; evidence
   stored-pointer; prologue canonical-SEH-prologue. Original bytes unchanged; names and types still
   inferred. */

void __thiscall
FUN_005f4f30(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined4 uVar1;
  undefined **appuStack_6c [6];
  undefined **local_54 [6];
  undefined **appuStack_3c [6];
  undefined **local_24 [6];
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_006480e0;
  pvStack_c = ExceptionList;
  if (*(char *)(param_1 + 0x34) != '\0') {
    ExceptionList = &pvStack_c;
    uVar1 = (**(code **)(param_1 + 0x2c))(local_54,param_4,param_1 + 0xc);
    iStack_4 = 0;
    uVar1 = FUN_005f8990(appuStack_6c,param_5,uVar1,param_3);
    iStack_4._0_1_ = 1;
    (**(code **)(param_1 + 0x30))(param_4,param_1 + 0xc,uVar1);
    iStack_4 = (uint)iStack_4._1_3_ << 8;
    appuStack_6c[0] = &PTR_FUN_00650ad4;
    FUN_005e2f00();
    iStack_4 = 0xffffffff;
    local_54[0] = &PTR_FUN_00650ad4;
    FUN_005e2f00();
    ExceptionList = pvStack_c;
    return;
  }
  ExceptionList = &pvStack_c;
  uVar1 = (**(code **)(param_1 + 0x2c))(local_24,param_4);
  iStack_4 = 2;
  uVar1 = FUN_005f8990(appuStack_3c,param_5,uVar1,param_3);
  iStack_4._0_1_ = 3;
  (**(code **)(param_1 + 0x30))(param_4,uVar1);
  iStack_4 = CONCAT31(iStack_4._1_3_,2);
  appuStack_3c[0] = &PTR_FUN_00650ad4;
  FUN_005e2f00();
  iStack_4 = 0xffffffff;
  local_24[0] = &PTR_FUN_00650ad4;
  FUN_005e2f00();
  ExceptionList = pvStack_c;
  return;
}

