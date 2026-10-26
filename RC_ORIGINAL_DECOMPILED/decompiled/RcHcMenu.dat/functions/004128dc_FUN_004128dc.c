/*
 * FUN_004128dc at 004128dc
 * int __register FUN_004128dc(int param_1, int param_2)
 * Address ranges: 004128dc-004128e6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_004128dc(int param_1,int param_2)

{
  if (param_2 < param_1) {
    param_1 = param_2;
  }
  return param_1;
}

