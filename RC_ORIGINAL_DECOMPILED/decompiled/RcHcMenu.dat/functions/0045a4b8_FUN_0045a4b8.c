/*
 * FUN_0045a4b8 at 0045a4b8
 * undefined4 __register FUN_0045a4b8(int param_1, int param_2)
 * Address ranges: 0045a4b8-0045a4f1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0045a4b8(int param_1,int param_2)

{
  undefined4 local_10;
  
  if (param_1 < param_2) {
    local_10 = 0xffffffff;
  }
  else if (param_2 < param_1) {
    local_10 = 1;
  }
  else {
    local_10 = 0;
  }
  return local_10;
}

