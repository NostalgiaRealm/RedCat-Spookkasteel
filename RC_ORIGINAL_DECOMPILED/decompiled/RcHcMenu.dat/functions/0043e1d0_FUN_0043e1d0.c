/*
 * FUN_0043e1d0 at 0043e1d0
 * int __register FUN_0043e1d0(int param_1)
 * Address ranges: 0043e1d0-0043e1ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0043e1d0(int param_1)

{
  if (param_1 == -0x1000000) {
    param_1 = 0x20000000;
  }
  else if (param_1 == -1) {
    return 0x1fffffff;
  }
  return param_1;
}

