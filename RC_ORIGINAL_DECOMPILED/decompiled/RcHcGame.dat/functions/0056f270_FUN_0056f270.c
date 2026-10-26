/*
 * FUN_0056f270 at 0056f270
 * undefined FUN_0056f270(void)
 * Address ranges: 0056f270-0056f350
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0056f270(int *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined1 local_24 [8];
  void *pvStack_1c;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined1 *local_4;
  
  local_4 = (undefined1 *)0xffffffff;
  puStack_8 = &LAB_00640ee0;
  pvStack_c = ExceptionList;
  puStack_34 = (undefined1 *)0x56f292;
  ExceptionList = &pvStack_c;
  FUN_00502220();
  puStack_34 = param_2;
  puStack_3c = (undefined1 *)&puStack_38;
  puStack_40 = (undefined1 *)0x56f2a6;
  FUN_004042e0();
  puStack_3c = local_24;
  local_4 = (undefined1 *)0xffffffff;
  puStack_40 = (undefined1 *)0x56f2b9;
  puStack_40 = (undefined1 *)(**(code **)(*param_1 + 0x48))();
  puStack_44 = (undefined1 *)0x56f2bf;
  FUN_00587e80();
  puStack_38 = param_2;
  puStack_44 = (undefined1 *)0x56f2d2;
  puStack_40 = (undefined1 *)&puStack_3c;
  FUN_004042e0();
  puStack_40 = &stack0xffffffd8;
  puStack_8 = (undefined1 *)0xffffffff;
  puStack_44 = (undefined1 *)0x56f2e2;
  puStack_44 = (undefined1 *)(**(code **)(*param_1 + 0x48))();
  FUN_00587e80();
  puStack_3c = param_2;
  puStack_44 = (undefined1 *)&puStack_40;
  local_4 = (undefined1 *)&puStack_40;
  FUN_004042e0();
  puStack_44 = &stack0xffffffd4;
  pvStack_c = (void *)0xffffffff;
  uVar1 = (**(code **)(*param_1 + 0x48))();
  FUN_00587e80(uVar1);
  puStack_40 = param_2;
  puStack_8 = (undefined1 *)&puStack_44;
  FUN_004042e0(&puStack_44);
  uStack_10 = 0xffffffff;
  uVar1 = (**(code **)(*param_1 + 0x48))(local_24);
  FUN_00587e80(uVar1);
  ExceptionList = pvStack_1c;
  return;
}

