/*
 * FUN_00618b15 at 00618b15
 * undefined FUN_00618b15(void)
 * Address ranges: 00618b15-00618b3d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float10 FUN_00618b15(undefined8 param_1,short param_2)

{
  undefined8 local_c;
  
  local_c = (double)CONCAT26((param_2 + 0x3fe) * 0x10 | param_1._6_2_ & 0x800f,(undefined6)param_1);
  return (float10)local_c;
}

