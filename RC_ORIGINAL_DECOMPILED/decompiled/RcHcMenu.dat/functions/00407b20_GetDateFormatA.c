/*
 * KERNEL32.DLL::GetDateFormatA at 00407b20
 * int __stdcall GetDateFormatA(LCID Locale, DWORD dwFlags, SYSTEMTIME * lpDate, LPCSTR lpFormat, LPSTR lpDateStr, int cchDate)
 * Address ranges: 00407b20-00407b25
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::GetDateFormatA
 */

int __stdcall
GetDateFormatA(LCID Locale,DWORD dwFlags,SYSTEMTIME *lpDate,LPCSTR lpFormat,LPSTR lpDateStr,
              int cchDate)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetDateFormatA(Locale,dwFlags,lpDate,lpFormat,lpDateStr,cchDate);
  return iVar1;
}

