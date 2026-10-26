/*
 * FUN_100102f5 at 100102f5
 * bool __cdecl FUN_100102f5(LPVOID param_1, UINT_PTR param_2)
 * Address ranges: 100102f5-10010310
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __cdecl FUN_100102f5(LPVOID param_1,UINT_PTR param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadWritePtr(param_1,param_2);
  return BVar1 == 0;
}

