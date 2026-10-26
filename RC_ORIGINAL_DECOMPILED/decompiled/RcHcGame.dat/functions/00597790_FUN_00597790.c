/*
 * FUN_00597790 at 00597790
 * undefined FUN_00597790(void)
 * Address ranges: 00597790-005977c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x650068 slot 2 for .?AVCAdamGMS_MoveToWayPoint@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x650068 slot 2 for
   .?AVCAdamGMS_MoveToWayPoint@@. Original bytes unchanged; names and types still inferred. */

undefined4 __thiscall FUN_00597790(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  param_1 = param_1 + 0x18;
  uVar1 = param_2;
  FUN_00595470(param_2,param_1,uVar2);
  FUN_0059bd30();
  FUN_00599910(uVar1,param_1,uVar2);
  return param_2;
}

