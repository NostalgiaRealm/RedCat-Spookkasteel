/*
 * FUN_00409eec at 00409eec
 * bool __register FUN_00409eec(undefined * param_1)
 * Address ranges: 00409eec-00409f03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_00409eec(undefined *param_1)

{
  LPCSTR lpFileName;
  BOOL BVar1;
  
  lpFileName = FUN_004041f4(param_1);
  BVar1 = DeleteFileA(lpFileName);
  return BVar1 != 0;
}

