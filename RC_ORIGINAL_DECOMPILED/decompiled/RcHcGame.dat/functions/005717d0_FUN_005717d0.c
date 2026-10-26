/*
 * FUN_005717d0 at 005717d0
 * undefined FUN_005717d0(void)
 * Address ranges: 005717d0-0057180a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64f994 slot 19 for .?AVCAdamDecal@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64f994 slot 19 for
   .?AVCAdamDecal@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_005717d0(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_005b2ec0(0);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x198) = *param_2;
    *(undefined4 *)(param_1 + 0x19c) = param_2[1];
    *(undefined4 *)(param_1 + 0x1a0) = param_2[2];
    *(undefined1 *)(param_1 + 0x189) = 1;
  }
  return;
}

