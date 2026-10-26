/*
 * FUN_00439b40 at 00439b40
 * undefined FUN_00439b40(void)
 * Address ranges: 00439b40-00439ba5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64c5fc slot 6 for .?AVCRcPlayerProperties@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64c5fc slot 6 for
   .?AVCRcPlayerProperties@@. Original bytes unchanged; names and types still inferred. */

void FUN_00439b40(int param_1,int param_2)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00624238;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  if ((param_1 != 0) &&
     (iVar1 = *(int *)(param_1 + 0x14) + -1, ExceptionList = &local_c,
     *(int *)(param_1 + 0x14) = iVar1, iVar1 == 0)) {
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

