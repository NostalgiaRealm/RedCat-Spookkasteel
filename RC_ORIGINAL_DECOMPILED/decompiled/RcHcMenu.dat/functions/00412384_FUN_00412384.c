/*
 * FUN_00412384 at 00412384
 * undefined4 __register FUN_00412384(undefined4 * param_1, int param_2)
 * Address ranges: 00412384-004123aa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00412384(undefined4 *param_1,int param_2)

{
  if ((param_2 < 0) || ((int)param_1[2] <= param_2)) {
    FUN_004122c0(*param_1,(undefined4 *)PTR_PTR_005724ac,param_2);
  }
  return *(undefined4 *)(param_1[1] + param_2 * 4);
}

