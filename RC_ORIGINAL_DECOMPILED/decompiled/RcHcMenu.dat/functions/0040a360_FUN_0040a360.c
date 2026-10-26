/*
 * FUN_0040a360 at 0040a360
 * int * __register FUN_0040a360(int param_1)
 * Address ranges: 0040a360-0040a373
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0040a360(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_004027e8(param_1 + 4);
  *piVar1 = param_1 + 4;
  return piVar1 + 1;
}

