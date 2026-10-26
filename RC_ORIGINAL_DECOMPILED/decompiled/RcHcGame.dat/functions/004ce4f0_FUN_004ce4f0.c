/*
 * FUN_004ce4f0 at 004ce4f0
 * undefined FUN_004ce4f0(void)
 * Address ranges: 004ce4f0-004ce515
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64ef1c slot 4 for .?AV?$CDaviVectorIterator@PAVCAdamWayPoint@@@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64ef1c slot 4 for
   .?AV?$CDaviVectorIterator@PAVCAdamWayPoint@@@@. Original bytes unchanged; names and types still
   inferred. */

undefined4 __fastcall FUN_004ce4f0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 4);
  if (((iVar1 != 0) && (0 < (int)(*(int *)(*(int *)(param_1 + 4) + 8) - iVar1 & 0xfffffffcU))) &&
     (*(int *)(param_1 + 0xc) == 0)) {
    return 1;
  }
  return 0;
}

