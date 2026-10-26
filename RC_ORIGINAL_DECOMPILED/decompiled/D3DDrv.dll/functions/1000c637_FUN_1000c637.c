/*
 * FUN_1000c637 at 1000c637
 * undefined __cdecl FUN_1000c637(uint param_1)
 * Address ranges: 1000c637-1000c695
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1000c637(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_1 & 0x1f) * 0x24;
  iVar1 = (&DAT_101c3cc0)[(int)param_1 >> 5] + iVar2;
  if (*(int *)(iVar1 + 8) == 0) {
    FUN_1000a15a(0x11);
    if (*(int *)(iVar1 + 8) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0xc));
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    FUN_1000a1bb(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((&DAT_101c3cc0)[(int)param_1 >> 5] + 0xc + iVar2));
  return;
}

