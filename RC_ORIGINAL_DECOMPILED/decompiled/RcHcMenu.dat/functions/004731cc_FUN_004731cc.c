/*
 * FUN_004731cc at 004731cc
 * bool __register FUN_004731cc(int param_1)
 * Address ranges: 004731cc-004731d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_004731cc(int param_1)

{
  return *(int *)(param_1 + 0x44) <= *(int *)(param_1 + 0x48);
}

