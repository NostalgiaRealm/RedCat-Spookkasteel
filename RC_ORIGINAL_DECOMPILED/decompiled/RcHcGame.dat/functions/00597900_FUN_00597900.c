/*
 * FUN_00597900 at 00597900
 * undefined FUN_00597900(void)
 * Address ranges: 00597900-00597995
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x650018 slot 1 for .?AVCAdamGMS_MoveStandStill@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x650018 slot 1 for
   .?AVCAdamGMS_MoveStandStill@@. Original bytes unchanged; names and types still inferred. */

undefined4 __thiscall FUN_00597900(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != -1) {
    iVar2 = *(int *)(param_1 + 0x1c);
    if (iVar2 == -1) {
      *(undefined1 *)(param_1 + 0x24) = 1;
      *(int *)(param_1 + 0x1c) = iVar1 + param_2;
      *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
      return 0;
    }
    if (iVar2 < param_2) {
      *(undefined1 *)(param_1 + 0x24) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      return 1;
    }
    if (0 < iVar1) {
      *(undefined1 *)(param_1 + 0x24) = 1;
      *(float *)(param_1 + 0x20) = (float)(iVar2 - param_2) / (float)iVar1;
      return 0;
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  *(undefined1 *)(param_1 + 0x24) = 1;
  return 0;
}

