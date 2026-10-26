/*
 * FUN_0057cd90 at 0057cd90
 * undefined FUN_0057cd90(void)
 * Address ranges: 0057cd90-0057cdb4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64fbc8 slot 18 for .?AVCAdamEffectFog@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64fbc8 slot 18 for
   .?AVCAdamEffectFog@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_0057cd90(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0xfc);
  uVar2 = *(undefined4 *)(param_1 + 0x100);
  *param_2 = *(undefined4 *)(param_1 + 0xf8);
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  return;
}

