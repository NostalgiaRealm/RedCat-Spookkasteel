/*
 * Ctl3dWinIniChange at 5f0020e0
 * undefined __stdcall Ctl3dWinIniChange(void)
 * Address ranges: 5f0020e0-5f00217e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void Ctl3dWinIniChange(void)

{
  int iVar1;
  WCHAR local_14 [10];
  
                    /* 0x20e0  22  Ctl3dWinIniChange */
  if (DAT_5f00a3a5 != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_5f005220);
    DAT_5f00a3a4 = 0x1e;
    GetProfileStringW(u_windows_5f00c070,u_kanjimenu_5f00c05c,u_roman_5f00c038,local_14,9);
    iVar1 = lstrcmpiW(local_14,u_kanji_5f00c01c);
    if (iVar1 == 0) {
      DAT_5f00a3a4 = 0x1f;
    }
    GetProfileStringW(u_windows_5f00c070,u_hangeulmenu_5f00c044,u_english_5f00c028,local_14,9);
    iVar1 = lstrcmpiW(local_14,u_hangeul_5f00c00c);
    if (iVar1 == 0) {
      DAT_5f00a3a4 = 0x1f;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_5f005220);
  }
  return;
}

