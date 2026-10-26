/*
 * FUN_0040bcf0 at 0040bcf0
 * undefined __stdcall FUN_0040bcf0(void)
 * Address ranges: 0040bcf0-0040bd4c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040bcf0(void)

{
  BOOL BVar1;
  tagMSG local_20;
  
  while (DAT_00413694 != (HWND)0x0) {
    if (DAT_00413718 != 0) {
      DestroyWindow(DAT_00413694);
    }
    while (BVar1 = PeekMessageA(&local_20,(HWND)0x0,0,0,1), BVar1 != 0) {
      TranslateMessage(&local_20);
      DispatchMessageA(&local_20);
    }
  }
  return;
}

