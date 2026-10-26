/*
 * FUN_0040912c at 0040912c
 * undefined __cdecl FUN_0040912c(UINT param_1)
 * Address ranges: 0040912c-004091ae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_0040912c(UINT param_1)

{
  BOOL BVar1;
  tagMSG local_20;
  
  if (param_1 == 0) {
    DAT_00413aac = 0;
  }
  else {
    DAT_00413aac = 1;
    SetTimer(DAT_00413698,0x206a,param_1,(TIMERPROC)0x0);
  }
  do {
    while (BVar1 = PeekMessageA(&local_20,(HWND)0x0,0,0,1), BVar1 != 0) {
      TranslateMessage(&local_20);
      DispatchMessageA(&local_20);
    }
  } while (DAT_00413aac != 0);
  if (param_1 != 0) {
    KillTimer(DAT_00413698,0x206a);
  }
  return;
}

