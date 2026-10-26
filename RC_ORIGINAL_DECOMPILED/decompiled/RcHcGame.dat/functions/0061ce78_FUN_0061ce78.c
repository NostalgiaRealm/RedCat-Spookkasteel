/*
 * FUN_0061ce78 at 0061ce78
 * undefined FUN_0061ce78(void)
 * Address ranges: 0061ce78-0061ce93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_0061ce78(void *param_1,UINT_PTR param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadReadPtr(param_1,param_2);
  return BVar1 == 0;
}

