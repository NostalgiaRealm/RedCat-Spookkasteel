/*
 * FUN_00492a88 at 00492a88
 * undefined4 __register FUN_00492a88(int param_1)
 * Address ranges: 00492a88-00492aa5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00492a88(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0x38) + 0x14))();
  return uVar1;
}

