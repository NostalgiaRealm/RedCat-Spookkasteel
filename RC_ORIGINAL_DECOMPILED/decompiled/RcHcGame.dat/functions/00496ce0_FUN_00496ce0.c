/*
 * FUN_00496ce0 at 00496ce0
 * undefined FUN_00496ce0(void)
 * Address ranges: 00496ce0-00496d42
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64e594 slot 5 for .?AVCRCGame@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64e594 slot 5 for
   .?AVCRCGame@@. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_00496ce0(undefined4 param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062bd1b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0x698);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_0049a100(param_1);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}

