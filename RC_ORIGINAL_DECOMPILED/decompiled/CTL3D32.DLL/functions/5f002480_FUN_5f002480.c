/*
 * FUN_5f002480 at 5f002480
 * undefined __stdcall FUN_5f002480(void)
 * Address ranges: 5f002480-5f002554
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_5f002480(void)

{
  int *piVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_5f005220);
  piVar1 = &DAT_5f00a2a0;
  do {
    if (*piVar1 != 0) {
      *piVar1 = 0;
    }
    piVar1 = piVar1 + 10;
  } while (piVar1 < &DAT_5f00a390);
  FUN_5f0012e0();
  if (DAT_5f005248 != 0) {
    GlobalDeleteAtom(DAT_5f005248);
  }
  if (DAT_5f00524e != 0) {
    GlobalDeleteAtom(DAT_5f00524e);
  }
  if (DAT_5f00524c != 0) {
    GlobalDeleteAtom(DAT_5f00524c);
  }
  if (DAT_5f00524a != 0) {
    GlobalDeleteAtom(DAT_5f00524a);
  }
  if (DAT_5f005252 != 0) {
    GlobalDeleteAtom(DAT_5f005252);
  }
  if (DAT_5f005250 != 0) {
    GlobalDeleteAtom(DAT_5f005250);
  }
  if (DAT_5f005254 != 0) {
    GlobalDeleteAtom(DAT_5f005254);
  }
  DAT_5f005240 = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_5f005220);
  return;
}

