/*
 * FUN_004247a0 at 004247a0
 * undefined FUN_004247a0(void)
 * Address ranges: 004247a0-004247dd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64aac4 slot 43 for .?AVCRcGargoyle@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64aac4 slot 43 for
   .?AVCRcGargoyle@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_004247a0(int *param_1,float param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x9c))();
  if (*(float *)(iVar1 + 0x210) != param_2) {
    *(float *)(iVar1 + 0x210) = param_2;
    if (*(int *)(iVar1 + 0x18) != 0) {
      FUN_004247e0(param_2);
      FUN_005b3ae0(param_2);
    }
  }
  return;
}

