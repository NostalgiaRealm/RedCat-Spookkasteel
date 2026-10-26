/*
 * ___timet_from_ft at 0060b62b
 * undefined ___timet_from_ft(void)
 * Address ranges: 0060b62b-0060b68e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  ___timet_from_ft  Library: Visual Studio 2003 Release
 */

/* Library Function - Single Match
    ___timet_from_ft
   
   Library: Visual Studio 2003 Release */

undefined4 ___timet_from_ft(FILETIME *param_1)

{
  BOOL BVar1;
  undefined4 uVar2;
  _SYSTEMTIME local_1c;
  _FILETIME local_c;
  
  if ((param_1->dwLowDateTime != 0) || (param_1->dwHighDateTime != 0)) {
    BVar1 = FileTimeToLocalFileTime(param_1,&local_c);
    if (BVar1 != 0) {
      BVar1 = FileTimeToSystemTime(&local_c,&local_1c);
      if (BVar1 != 0) {
        uVar2 = FUN_0061838c(local_1c.wYear,local_1c.wMonth,local_1c.wDay,local_1c.wHour,
                             local_1c.wMinute,local_1c.wSecond,0xffffffff);
        return uVar2;
      }
    }
  }
  return 0xffffffff;
}

