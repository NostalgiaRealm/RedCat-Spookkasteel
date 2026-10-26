/*
 * FUN_004df350 at 004df350
 * undefined FUN_004df350(void)
 * Address ranges: 004df350-004df3ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64f210 slot 13 for .?AVCAdamCommandTimer@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64f210 slot 13 for
   .?AVCAdamCommandTimer@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_004df350(int param_1,int param_2,int param_3)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_006323c0;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  if (param_2 != 0) {
    ExceptionList = &local_c;
    FUN_004df860();
  }
  if (param_3 != 0) {
    if (*(char *)(param_1 + 0x108) == '\0') {
      FUN_00502350(0);
      FUN_004df860();
    }
    else {
      FUN_004df790();
      FUN_00502350(1);
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

