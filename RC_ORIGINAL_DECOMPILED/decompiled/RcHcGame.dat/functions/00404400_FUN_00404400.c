/*
 * FUN_00404400 at 00404400
 * undefined FUN_00404400(void)
 * Address ranges: 00404400-00404468
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00404400(int param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0061fcbb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0x4c);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00405cc0(*(undefined4 *)(param_1 + 0x2c),5000);
  }
  local_4 = 0xffffffff;
  FUN_00402a10(5,uVar2);
  ExceptionList = local_c;
  return;
}

