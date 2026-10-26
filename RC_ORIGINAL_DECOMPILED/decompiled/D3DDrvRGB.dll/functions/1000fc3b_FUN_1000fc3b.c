/*
 * FUN_1000fc3b at 1000fc3b
 * float10 __cdecl FUN_1000fc3b(undefined8 param_1, short param_2)
 * Address ranges: 1000fc3b-1000fc63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float10 __cdecl FUN_1000fc3b(undefined8 param_1,short param_2)

{
  undefined8 local_c;
  
  local_c = (double)CONCAT26((param_2 + 0x3fe) * 0x10 | param_1._6_2_ & 0x800f,(int6)param_1);
  return (float10)local_c;
}

