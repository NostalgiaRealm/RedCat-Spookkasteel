/*
 * FUN_00597390 at 00597390
 * undefined FUN_00597390(void)
 * Address ranges: 00597390-005973d8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x650038 slot 2 for .?AVCAdamGMS_MoveAntiClockWise@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x650038 slot 2 for
   .?AVCAdamGMS_MoveAntiClockWise@@. Original bytes unchanged; names and types still inferred. */

undefined4 __thiscall FUN_00597390(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 local_c [12];
  
  uVar5 = *(undefined4 *)(param_1 + 0x14);
  uVar4 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = 0;
  uVar1 = FUN_00595cd0(local_c);
  uVar2 = param_2;
  FUN_00595470(param_2,uVar1,uVar3,uVar4,uVar5);
  FUN_0059bd30();
  FUN_00599c80(uVar2,uVar1,uVar3,uVar4,uVar5);
  return param_2;
}

