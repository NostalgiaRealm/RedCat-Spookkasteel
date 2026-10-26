/*
 * FUN_004920c0 at 004920c0
 * undefined FUN_004920c0(void)
 * Address ranges: 004920c0-00492123
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_004920c0(undefined4 param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062b57b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005afe30(s_<*REDCAT*>Creating_CRCGame_00693ab4,param_1);
  pvVar1 = operator_new(0x830);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_00494cf0(pvVar1);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}

