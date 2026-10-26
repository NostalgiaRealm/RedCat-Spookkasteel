/*
 * FUN_100102d9 at 100102d9
 * bool __cdecl FUN_100102d9(void * param_1, UINT_PTR param_2)
 * Address ranges: 100102d9-100102f4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __cdecl FUN_100102d9(void *param_1,UINT_PTR param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadReadPtr(param_1,param_2);
  return BVar1 == 0;
}

