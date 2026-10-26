/*
 * FUN_004cfb80 at 004cfb80
 * undefined FUN_004cfb80(void)
 * Address ranges: 004cfb80-004cfbf7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64efa8 slot 13 for .?AVCAdamModel@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64efa8 slot 13 for
   .?AVCAdamModel@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_004cfb80(int *param_1,int param_2,int param_3)

{
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_006311b0;
  pvStack_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &pvStack_c;
  if (param_3 != 0) {
    ExceptionList = &pvStack_c;
    (**(code **)(*param_1 + 0x54))();
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
  ExceptionList = pvStack_c;
  return;
}

