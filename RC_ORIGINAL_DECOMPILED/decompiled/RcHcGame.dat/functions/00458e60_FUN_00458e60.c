/*
 * FUN_00458e60 at 00458e60
 * undefined FUN_00458e60(void)
 * Address ranges: 00458e60-00458ed7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64d5f4 slot 13 for .?AVCRcDop@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64d5f4 slot 13 for
   .?AVCRcDop@@. Original bytes unchanged; names and types still inferred. */

void FUN_00458e60(int param_1,int param_2)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00626d90;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  if (param_2 != 0) {
    ExceptionList = &local_c;
    FUN_00458b00();
  }
  local_4 = local_4 & 0xffffff00;
  if ((param_1 != 0) &&
     (iVar1 = *(int *)(param_1 + 0x14) + -1, *(int *)(param_1 + 0x14) = iVar1, iVar1 == 0)) {
    FUN_005abfc0(0);
  }
  local_4 = 0xffffffff;
  if ((param_2 != 0) &&
     (iVar1 = *(int *)(param_2 + 0x14) + -1, *(int *)(param_2 + 0x14) = iVar1, iVar1 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = local_c;
  return;
}

