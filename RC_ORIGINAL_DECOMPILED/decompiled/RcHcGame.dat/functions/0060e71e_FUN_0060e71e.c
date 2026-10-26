/*
 * FUN_0060e71e at 0060e71e
 * undefined FUN_0060e71e(void)
 * Address ranges: 0060e71e-0060e760
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0060e71e(void)

{
  longlong lVar1;
  _FILETIME local_c;
  
  GetSystemTimeAsFileTime(&local_c);
  lVar1 = __allmul(local_c.dwHighDateTime,0,0,1);
  __aulldiv((lVar1 - CONCAT44(_DAT_0070ff94,_DAT_0070ff90)) + (ulonglong)local_c.dwLowDateTime,10000
            ,0);
  return;
}

