/*
 * FUN_0060b47d at 0060b47d
 * undefined FUN_0060b47d(void)
 * Address ranges: 0060b47d-0060b546
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

HANDLE FUN_0060b47d(LPCSTR param_1,uint *param_2)

{
  HANDLE pvVar1;
  DWORD DVar2;
  uint uVar3;
  _WIN32_FIND_DATAA local_144;
  
  pvVar1 = FindFirstFileA(param_1,&local_144);
  if (pvVar1 != (HANDLE)0xffffffff) {
    *param_2 = -(uint)(local_144.dwFileAttributes != 0x80) & local_144.dwFileAttributes;
    uVar3 = ___timet_from_ft(&local_144.ftCreationTime);
    param_2[1] = uVar3;
    uVar3 = ___timet_from_ft(&local_144.ftLastAccessTime);
    param_2[2] = uVar3;
    uVar3 = ___timet_from_ft(&local_144.ftLastWriteTime);
    param_2[3] = uVar3;
    param_2[4] = local_144.nFileSizeLow;
    FUN_00611110(param_2 + 5,local_144.cFileName);
    return pvVar1;
  }
  DVar2 = GetLastError();
  if (1 < DVar2) {
    if (DVar2 < 4) {
      DAT_0070ff98 = 2;
      return (HANDLE)0xffffffff;
    }
    if (DVar2 == 8) {
      DAT_0070ff98 = 0xc;
      return (HANDLE)0xffffffff;
    }
    if (DVar2 == 0x12) {
      DAT_0070ff98 = 2;
      return (HANDLE)0xffffffff;
    }
  }
  DAT_0070ff98 = 0x16;
  return (HANDLE)0xffffffff;
}

