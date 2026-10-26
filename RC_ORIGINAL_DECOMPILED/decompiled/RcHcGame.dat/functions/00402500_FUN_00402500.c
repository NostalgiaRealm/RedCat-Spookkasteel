/*
 * FUN_00402500 at 00402500
 * undefined FUN_00402500(void)
 * Address ranges: 00402500-00402526
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64a35c slot 1 for .?AVCRcDmLook@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64a35c slot 1 for
   .?AVCRcDmLook@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_00402500(int param_1,int param_2)

{
  int iVar1;
  
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + param_2;
  iVar1 = FUN_0041c800();
  if (iVar1 < *(int *)(param_1 + 0x30)) {
    FUN_00402d00();
  }
  return;
}

