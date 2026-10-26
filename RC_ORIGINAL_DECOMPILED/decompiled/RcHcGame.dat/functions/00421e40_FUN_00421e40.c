/*
 * FUN_00421e40 at 00421e40
 * undefined FUN_00421e40(void)
 * Address ranges: 00421e40-00421e74
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64bba4 slot 22 for .?AVCRcButtonModel@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64bba4 slot 22 for
   .?AVCRcButtonModel@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_00421e40(int param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_004cb3f0(param_2);
  if (*(char *)(param_1 + 0x180) != '\0') {
    iVar1 = FUN_00421e80();
    if (*(int *)(iVar1 + 0x30) != -1) {
      FUN_004969a0(param_1);
      FUN_0042d750(param_1);
    }
  }
  return;
}

