/*
 * FUN_00409de0 at 00409de0
 * undefined __register FUN_00409de0(undefined * param_1)
 * Address ranges: 00409de0-00409df1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00409de0(undefined *param_1)

{
  LPCSTR lpFileName;
  
  lpFileName = FUN_004041f4(param_1);
  GetFileAttributesA(lpFileName);
  return;
}

