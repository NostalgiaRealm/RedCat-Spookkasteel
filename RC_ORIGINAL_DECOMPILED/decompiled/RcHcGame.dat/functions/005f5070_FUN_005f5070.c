/*
 * FUN_005f5070 at 005f5070
 * undefined FUN_005f5070(void)
 * Address ranges: 005f5070-005f51a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate routine entry from original stored code pointer 0x651204; evidence stored-pointer; prologue canonical-SEH-prologue. Original bytes unchanged; names and types still inferred.
 */

/* Recovered candidate routine entry from original stored code pointer 0x651204; evidence
   stored-pointer; prologue canonical-SEH-prologue. Original bytes unchanged; names and types still
   inferred. */

void __thiscall FUN_005f5070(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined **appuStack_6c [6];
  undefined **local_54 [6];
  undefined **appuStack_3c [6];
  undefined **local_24 [6];
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_00648110;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar1 = FUN_005ec380();
  if (*(char *)(param_1 + 0x34) != '\0') {
    uVar2 = (**(code **)(param_1 + 0x2c))(local_54,uVar1,param_1 + 0xc);
    iStack_4 = 0;
    uVar2 = FUN_005f8990(appuStack_6c,param_4,uVar2,param_3);
    iStack_4._0_1_ = 1;
    (**(code **)(param_1 + 0x30))(uVar1,param_1 + 0xc,uVar2);
    iStack_4 = (uint)iStack_4._1_3_ << 8;
    appuStack_6c[0] = &PTR_FUN_00650ad4;
    FUN_005e2f00();
    iStack_4 = 0xffffffff;
    local_54[0] = &PTR_FUN_00650ad4;
    FUN_005e2f00();
    ExceptionList = pvStack_c;
    return;
  }
  uVar2 = (**(code **)(param_1 + 0x2c))(local_24,uVar1);
  iStack_4 = 2;
  uVar2 = FUN_005f8990(appuStack_3c,param_4,uVar2,param_3);
  iStack_4._0_1_ = 3;
  (**(code **)(param_1 + 0x30))(uVar1,uVar2);
  iStack_4 = CONCAT31(iStack_4._1_3_,2);
  appuStack_3c[0] = &PTR_FUN_00650ad4;
  FUN_005e2f00();
  iStack_4 = 0xffffffff;
  local_24[0] = &PTR_FUN_00650ad4;
  FUN_005e2f00();
  ExceptionList = pvStack_c;
  return;
}

