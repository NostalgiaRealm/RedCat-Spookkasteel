/*
 * FUN_00409d28 at 00409d28
 * DWORD __register FUN_00409d28(HANDLE param_1, LPCVOID param_2, DWORD param_3)
 * Address ranges: 00409d28-00409d53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

DWORD FUN_00409d28(HANDLE param_1,LPCVOID param_2,DWORD param_3)

{
  BOOL BVar1;
  DWORD local_10;
  
  local_10 = param_3;
  BVar1 = WriteFile(param_1,param_2,param_3,&local_10,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    local_10 = 0xffffffff;
  }
  return local_10;
}

