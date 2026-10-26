/*
 * FUN_0061f646 at 0061f646
 * undefined FUN_0061f646(void)
 * Address ranges: 0061f646-0061f689
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0061f646(LPCSTR param_1,byte param_2)

{
  DWORD DVar1;
  
  DVar1 = GetFileAttributesA(param_1);
  if (DVar1 == 0xffffffff) {
    DVar1 = GetLastError();
    FUN_0061ba49(DVar1);
  }
  else {
    if (((DVar1 & 1) == 0) || ((param_2 & 2) == 0)) {
      return 0;
    }
    DAT_0070ff98 = 0xd;
    DAT_0070ff9c = 5;
  }
  return 0xffffffff;
}

