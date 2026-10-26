/*
 * FUN_004ed810 at 004ed810
 * undefined4 __register FUN_004ed810(int param_1)
 * Address ranges: 004ed810-004ed845
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004ed810(int param_1)

{
  if (*(int *)(param_1 + 0x24) == 0) {
    FUN_00403d94("Assertion failure");
  }
  return *(undefined4 *)(param_1 + 0x24);
}

