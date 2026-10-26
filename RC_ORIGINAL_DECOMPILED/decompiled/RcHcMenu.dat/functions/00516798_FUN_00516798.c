/*
 * FUN_00516798 at 00516798
 * undefined4 __register FUN_00516798(int param_1)
 * Address ranges: 00516798-005167bd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00516798(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 1) {
    return 1;
  }
  if (param_1 == 2) {
    uVar1 = 2;
  }
  else if (param_1 == 4) {
    uVar1 = 3;
  }
  else if (param_1 == 3) {
    uVar1 = 4;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

