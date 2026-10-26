/*
 * FUN_00492130 at 00492130
 * undefined FUN_00492130(void)
 * Address ranges: 00492130-0049218d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00492130(int param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062b59b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005afe30(s_<*REDCAT*>Creating_CRCInput_00693ad0);
  pvVar1 = operator_new(0x58);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004820c0();
  }
  *(undefined4 *)(param_1 + 0x6a0) = uVar2;
  ExceptionList = local_c;
  return;
}

