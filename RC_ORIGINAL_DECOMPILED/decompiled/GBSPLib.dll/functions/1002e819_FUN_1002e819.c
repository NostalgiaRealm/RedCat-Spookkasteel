/*
 * FUN_1002e819 at 1002e819
 * undefined FUN_1002e819(void)
 * Address ranges: 1002e819-1002e879
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002e819(int param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = &DAT_1003f378 + param_1;
  if ((&DAT_1003f378)[param_1] == 0) {
    lpCriticalSection = _malloc(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_1002e819(0x11);
    if (*piVar1 == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *piVar1 = (int)lpCriticalSection;
    }
    else {
      FUN_100284b6();
    }
    FUN_1002e87a(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*piVar1);
  return;
}

