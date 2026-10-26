/*
 * FUN_10006171 at 10006171
 * undefined __cdecl FUN_10006171(int param_1)
 * Address ranges: 10006171-100061d1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10006171(int param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = &DAT_10010bc0 + param_1;
  if ((&DAT_10010bc0)[param_1] == 0) {
    lpCriticalSection = _malloc(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_10006171(0x11);
    if (*piVar1 == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *piVar1 = (int)lpCriticalSection;
    }
    else {
      FUN_10003f4c((undefined *)lpCriticalSection);
    }
    FUN_100061d2(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*piVar1);
  return;
}

