/*
 * FUN_004ce520 at 004ce520
 * undefined FUN_004ce520(void)
 * Address ranges: 004ce520-004ce556
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64ef1c slot 5 for .?AV?$CDaviVectorIterator@PAVCAdamWayPoint@@@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64ef1c slot 5 for
   .?AV?$CDaviVectorIterator@PAVCAdamWayPoint@@@@. Original bytes unchanged; names and types still
   inferred. */

undefined4 __fastcall FUN_004ce520(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  iVar1 = *(int *)(iVar2 + 4);
  if ((iVar1 != 0) && (0 < (int)(*(int *)(iVar2 + 8) - iVar1 & 0xfffffffcU))) {
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar2 + 8) - iVar1 >> 2;
    }
    if (*(int *)(param_1 + 0xc) == iVar2) {
      return 1;
    }
  }
  return 0;
}

