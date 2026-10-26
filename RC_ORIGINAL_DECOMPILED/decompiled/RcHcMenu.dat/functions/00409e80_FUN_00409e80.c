/*
 * FUN_00409e80 at 00409e80
 * DWORD __register FUN_00409e80(undefined * param_1, uint param_2, LPWORD param_3)
 * Address ranges: 00409e80-00409ecc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

DWORD FUN_00409e80(undefined *param_1,uint param_2,LPWORD param_3)

{
  LPCSTR lpFileName;
  HANDLE pvVar1;
  DWORD DVar2;
  LPWIN32_FIND_DATAA lpFindFileData;
  
  *(uint *)(param_3 + 8) = ~param_2 & 0x1e;
  lpFindFileData = (LPWIN32_FIND_DATAA)(param_3 + 0xc);
  lpFileName = FUN_004041f4(param_1);
  pvVar1 = FindFirstFileA(lpFileName,lpFindFileData);
  *(HANDLE *)(param_3 + 10) = pvVar1;
  if (pvVar1 == (HANDLE)0xffffffff) {
    DVar2 = GetLastError();
  }
  else {
    DVar2 = FUN_00409e1c(param_3);
    if (DVar2 != 0) {
      FUN_00409ed0((int)param_3);
    }
  }
  return DVar2;
}

