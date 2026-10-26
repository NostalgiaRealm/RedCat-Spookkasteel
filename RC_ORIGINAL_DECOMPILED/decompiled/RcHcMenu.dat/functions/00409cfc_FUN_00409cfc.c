/*
 * FUN_00409cfc at 00409cfc
 * DWORD __register FUN_00409cfc(HANDLE param_1, LPVOID param_2, DWORD param_3)
 * Address ranges: 00409cfc-00409d27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

DWORD FUN_00409cfc(HANDLE param_1,LPVOID param_2,DWORD param_3)

{
  BOOL BVar1;
  DWORD local_10;
  
  local_10 = param_3;
  BVar1 = ReadFile(param_1,param_2,param_3,&local_10,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    local_10 = 0xffffffff;
  }
  return local_10;
}

