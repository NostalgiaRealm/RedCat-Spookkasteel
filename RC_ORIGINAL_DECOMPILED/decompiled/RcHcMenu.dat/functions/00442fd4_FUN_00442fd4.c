/*
 * FUN_00442fd4 at 00442fd4
 * undefined4 __register FUN_00442fd4(int param_1)
 * Address ranges: 00442fd4-00442fe1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00442fd4(int param_1)

{
  if (*(int *)(param_1 + 0x38) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x38) + 0x10);
  }
  return 0;
}

