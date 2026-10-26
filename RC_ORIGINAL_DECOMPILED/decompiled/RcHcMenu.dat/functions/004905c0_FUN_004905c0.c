/*
 * FUN_004905c0 at 004905c0
 * undefined4 __register FUN_004905c0(int param_1)
 * Address ranges: 004905c0-004905dd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004905c0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x14))();
  return uVar1;
}

