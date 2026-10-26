/*
 * FUN_00578950 at 00578950
 * undefined FUN_00578950(void)
 * Address ranges: 00578950-00578975
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64d9e4 slot 18 for .?AVCRcParticleSystem@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64d9e4 slot 18 for
   .?AVCRcParticleSystem@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_00578950(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xf8);
  *param_2 = *(undefined4 *)(iVar1 + 8);
  param_2[1] = *(undefined4 *)(iVar1 + 0xc);
  param_2[2] = *(undefined4 *)(iVar1 + 0x10);
  return;
}

