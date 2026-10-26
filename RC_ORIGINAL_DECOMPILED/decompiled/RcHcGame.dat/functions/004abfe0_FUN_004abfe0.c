/*
 * FUN_004abfe0 at 004abfe0
 * undefined FUN_004abfe0(void)
 * Address ranges: 004abfe0-004ac012
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64e9d4 slot 6 for .?AVCAdamCommSoundCell@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64e9d4 slot 6 for
   .?AVCAdamCommSoundCell@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_004abfe0(int param_1,undefined4 param_2)

{
  if (((*(char *)(param_1 + 0x60) == '\0') && (*(int *)(param_1 + 0x50) == 4)) &&
     (*(int *)(param_1 + 0x88) == -1)) {
    *(undefined4 *)(param_1 + 0x88) = param_2;
    FUN_00511ed0(*(undefined4 *)(param_1 + 0x74),param_1 + 0x78);
  }
  return;
}

