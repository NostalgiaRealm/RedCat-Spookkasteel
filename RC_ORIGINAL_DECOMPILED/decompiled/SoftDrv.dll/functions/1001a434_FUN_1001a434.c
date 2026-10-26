/*
 * FUN_1001a434 at 1001a434
 * undefined FUN_1001a434(void)
 * Address ranges: 1001a434-1001a494
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001a434(int param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = &DAT_100239c8 + param_1;
  if ((&DAT_100239c8)[param_1] == 0) {
    lpCriticalSection = _malloc(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_1001a434(0x11);
    if (*piVar1 == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *piVar1 = (int)lpCriticalSection;
    }
    else {
      FUN_10018dc8();
    }
    FUN_1001a495(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*piVar1);
  return;
}

