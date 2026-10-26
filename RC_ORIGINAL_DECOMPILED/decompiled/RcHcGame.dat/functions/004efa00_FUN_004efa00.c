/*
 * FUN_004efa00 at 004efa00
 * undefined FUN_004efa00(void)
 * Address ranges: 004efa00-004efa1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64f3f4 slot 5 for .?AVCAdamTextCharacterNewline@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64f3f4 slot 5 for
   .?AVCAdamTextCharacterNewline@@. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_004efa00(int param_1)

{
  int iVar1;
  
  if ((param_1 != 0) &&
     (iVar1 = *(int *)(param_1 + 0x14) + -1, *(int *)(param_1 + 0x14) = iVar1, iVar1 == 0)) {
    FUN_005abfc0(0);
  }
  return 0x7fffffff;
}

