/*
 * FUN_0061ce94 at 0061ce94
 * undefined FUN_0061ce94(void)
 * Address ranges: 0061ce94-0061ceaf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_0061ce94(LPVOID param_1,UINT_PTR param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadWritePtr(param_1,param_2);
  return BVar1 == 0;
}

