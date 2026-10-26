/*
 * FUN_005979a0 at 005979a0
 * undefined FUN_005979a0(void)
 * Address ranges: 005979a0-005979cc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x650078 slot 2 for .?AVCAdamGMS_MoveRandom@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x650078 slot 2 for
   .?AVCAdamGMS_MoveRandom@@. Original bytes unchanged; names and types still inferred. */

undefined4 __thiscall FUN_005979a0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  uVar1 = param_2;
  FUN_00595470(param_2,uVar2);
  FUN_0059bd30();
  FUN_00599b80(uVar1,uVar2);
  return param_2;
}

