/*
 * FUN_10010311 at 10010311
 * bool __cdecl FUN_10010311(FARPROC param_1)
 * Address ranges: 10010311-10010328
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __cdecl FUN_10010311(FARPROC param_1)

{
  BOOL BVar1;
  
  BVar1 = IsBadCodePtr(param_1);
  return BVar1 == 0;
}

