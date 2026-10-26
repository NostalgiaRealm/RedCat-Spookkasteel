/*
 * FUN_004d7d54 at 004d7d54
 * undefined4 __register FUN_004d7d54(int param_1)
 * Address ranges: 004d7d54-004d7d71
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004d7d54(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0x28) + 0x70))();
  return uVar1;
}

