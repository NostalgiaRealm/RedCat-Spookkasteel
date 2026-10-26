/*
 * FUN_004082c0 at 004082c0
 * undefined FUN_004082c0(void)
 * Address ranges: 004082c0-0040833e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_004082c0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00620478;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004078a0(param_2);
  local_4 = 0;
  iVar1 = FUN_00429fd0();
  uVar2 = 0xffffffff;
  param_1[0xd] = *(undefined4 *)(iVar1 + 0x2c);
  param_1[0xe] = 0;
  *param_1 = &PTR_FUN_0064a878;
  FUN_004288c0(0xffffffff);
  FUN_005966a0(uVar2);
  FUN_00428b10();
  FUN_004085c0();
  ExceptionList = pvStack_c;
  return param_1;
}

