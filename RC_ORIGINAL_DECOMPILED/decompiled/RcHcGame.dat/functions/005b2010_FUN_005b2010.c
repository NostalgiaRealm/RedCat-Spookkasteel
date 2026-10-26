/*
 * FUN_005b2010 at 005b2010
 * undefined FUN_005b2010(void)
 * Address ranges: 005b2010-005b2050
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x650134 slot 2 for .?AVCAdamDSGameObject@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x650134 slot 2 for
   .?AVCAdamDSGameObject@@. Original bytes unchanged; names and types still inferred. */

undefined4 __thiscall FUN_005b2010(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  
  puVar1 = *(undefined1 **)(param_1 + 0x24);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = &DAT_0064a3b4;
  }
  FUN_0060a613(param_1,puVar1);
  uVar2 = FUN_0060b060();
  FUN_005ae390(param_2,s__s___s__006a92a8,uVar2);
  return param_2;
}

