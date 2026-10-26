/*
 * FUN_00597170 at 00597170
 * undefined FUN_00597170(void)
 * Address ranges: 00597170-00597205
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x650028 slot 1 for .?AVCAdamGMS_MoveClockWise@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x650028 slot 1 for
   .?AVCAdamGMS_MoveClockWise@@. Original bytes unchanged; names and types still inferred. */

undefined4 __thiscall FUN_00597170(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 != -1) {
    iVar2 = *(int *)(param_1 + 0x20);
    if (iVar2 == -1) {
      *(undefined1 *)(param_1 + 0x28) = 1;
      *(int *)(param_1 + 0x20) = iVar1 + param_2;
      *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
      return 0;
    }
    if (iVar2 < param_2) {
      *(undefined1 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x24) = 0;
      return 1;
    }
    if (0 < iVar1) {
      *(undefined1 *)(param_1 + 0x28) = 1;
      *(float *)(param_1 + 0x24) = (float)(iVar2 - param_2) / (float)iVar1;
      return 0;
    }
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  *(undefined1 *)(param_1 + 0x28) = 1;
  return 0;
}

