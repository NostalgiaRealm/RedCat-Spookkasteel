/*
 * FUN_00409df4 at 00409df4
 * DWORD __register FUN_00409df4(undefined * param_1, DWORD param_2)
 * Address ranges: 00409df4-00409e1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

DWORD FUN_00409df4(undefined *param_1,DWORD param_2)

{
  LPCSTR lpFileName;
  BOOL BVar1;
  DWORD DVar2;
  
  DVar2 = 0;
  lpFileName = FUN_004041f4(param_1);
  BVar1 = SetFileAttributesA(lpFileName,param_2);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
  }
  return DVar2;
}

