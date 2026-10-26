/*
 * FUN_004ce2c0 at 004ce2c0
 * undefined FUN_004ce2c0(void)
 * Address ranges: 004ce2c0-004ce2ea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64ef1c slot 1 for .?AV?$CDaviVectorIterator@PAVCAdamWayPoint@@@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64ef1c slot 1 for
   .?AV?$CDaviVectorIterator@PAVCAdamWayPoint@@@@. Original bytes unchanged; names and types still
   inferred. */

void __fastcall FUN_004ce2c0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)(iVar1 + 4) == 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar1 + 8);
    return;
  }
  *(int *)(param_1 + 0xc) = *(int *)(iVar1 + 8) - *(int *)(iVar1 + 4) >> 2;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar1 + 8);
  return;
}

