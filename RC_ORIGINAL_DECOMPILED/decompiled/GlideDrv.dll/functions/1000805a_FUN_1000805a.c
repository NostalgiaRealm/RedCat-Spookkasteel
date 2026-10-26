/*
 * FUN_1000805a at 1000805a
 * undefined __cdecl FUN_1000805a(uint param_1)
 * Address ranges: 1000805a-100080b8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1000805a(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_1 & 0x1f) * 0x24;
  iVar1 = (&DAT_101f5980)[(int)param_1 >> 5] + iVar2;
  if (*(int *)(iVar1 + 8) == 0) {
    FUN_10006171(0x11);
    if (*(int *)(iVar1 + 8) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0xc));
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    FUN_100061d2(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((&DAT_101f5980)[(int)param_1 >> 5] + 0xc + iVar2));
  return;
}

