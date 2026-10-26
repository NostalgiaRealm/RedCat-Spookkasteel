/*
 * FUN_0060e761 at 0060e761
 * undefined FUN_0060e761(void)
 * Address ranges: 0060e761-0060e795
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0060e761(void)

{
  longlong lVar1;
  _FILETIME local_c;
  
  GetSystemTimeAsFileTime(&local_c);
  lVar1 = __allmul(local_c.dwHighDateTime,0,0,1);
  _DAT_0070ff90 = lVar1 + (ulonglong)local_c.dwLowDateTime;
  return;
}

