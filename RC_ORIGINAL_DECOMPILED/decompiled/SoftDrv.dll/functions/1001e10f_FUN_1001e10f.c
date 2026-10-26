/*
 * FUN_1001e10f at 1001e10f
 * undefined FUN_1001e10f(void)
 * Address ranges: 1001e10f-1001e16d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001e10f(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_1 & 0x1f) * 0x24;
  iVar1 = (&DAT_1020fc40)[(int)param_1 >> 5] + iVar2;
  if (*(int *)(iVar1 + 8) == 0) {
    FUN_1001a434(0x11);
    if (*(int *)(iVar1 + 8) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0xc));
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    FUN_1001a495(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((&DAT_1020fc40)[(int)param_1 >> 5] + 0xc + iVar2));
  return;
}

