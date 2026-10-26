/*
 * FUN_00569b80 at 00569b80
 * undefined FUN_00569b80(void)
 * Address ranges: 00569b80-00569bbb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64f8c8 slot 2 for .?AVCAdamInterpolatorRandom@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64f8c8 slot 2 for
   .?AVCAdamInterpolatorRandom@@. Original bytes unchanged; names and types still inferred. */

void __fastcall FUN_00569b80(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_0060a4a0();
  iVar1 = __ftol();
  uVar2 = FUN_00569bf0(*(int *)(param_1 + 0x2c) + iVar1,*(undefined4 *)(param_1 + 0x24));
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  return;
}

