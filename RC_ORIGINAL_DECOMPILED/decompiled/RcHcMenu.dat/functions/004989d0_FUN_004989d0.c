/*
 * FUN_004989d0 at 004989d0
 * int __register FUN_004989d0(int param_1, int param_2)
 * Address ranges: 004989d0-004989f8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_004989d0(int param_1,int param_2)

{
  int local_10;
  
  local_10 = param_2;
  if (param_2 <= param_1) {
    local_10 = param_1;
  }
  return local_10;
}

