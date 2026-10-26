/*
 * FUN_00597570 at 00597570
 * undefined FUN_00597570(void)
 * Address ranges: 00597570-005975b2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x650058 slot 2 for .?AVCAdamGMS_MoveFurther@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x650058 slot 2 for
   .?AVCAdamGMS_MoveFurther@@. Original bytes unchanged; names and types still inferred. */

undefined4 __thiscall FUN_00597570(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_c [12];
  
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  uVar1 = FUN_00595cd0(local_c);
  uVar2 = param_2;
  FUN_00595470(param_2,uVar1,uVar3);
  FUN_0059bd30();
  FUN_00599a60(uVar2,uVar1,uVar3);
  return param_2;
}

