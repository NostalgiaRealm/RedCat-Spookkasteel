/*
 * FUN_004cc340 at 004cc340
 * undefined FUN_004cc340(void)
 * Address ranges: 004cc340-004cc410
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64eeb8 slot 13 for .?AVCAdamDoorModel@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64eeb8 slot 13 for
   .?AVCAdamDoorModel@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_004cc340(int param_1,int param_2,int param_3)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00630da0;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  if (param_3 != 0) {
    if (*(char *)(param_1 + 0x173) == '\0') {
      ExceptionList = &local_c;
      FUN_004d0770(*(undefined4 *)(param_1 + 0x140));
      *(undefined4 *)(param_1 + 0x16c) = 1;
      FUN_004cd2f0(0);
      FUN_004cdfe0();
    }
    else {
      ExceptionList = &local_c;
      FUN_004d0770(*(undefined4 *)(param_1 + 0x13c));
      *(undefined4 *)(param_1 + 0x16c) = 6;
      FUN_004cd2f0(1);
      FUN_004cddc0();
    }
  }
  local_4 = local_4 & 0xffffff00;
  if ((param_2 != 0) &&
     (iVar1 = *(int *)(param_2 + 0x14) + -1, *(int *)(param_2 + 0x14) = iVar1, iVar1 == 0)) {
    FUN_005abfc0(0);
  }
  local_4 = 0xffffffff;
  if ((param_3 != 0) &&
     (iVar1 = *(int *)(param_3 + 0x14) + -1, *(int *)(param_3 + 0x14) = iVar1, iVar1 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = local_c;
  return;
}

