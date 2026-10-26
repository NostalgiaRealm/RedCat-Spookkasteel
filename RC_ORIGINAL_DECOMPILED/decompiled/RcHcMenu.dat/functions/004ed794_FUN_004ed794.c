/*
 * FUN_004ed794 at 004ed794
 * undefined4 __register FUN_004ed794(int param_1)
 * Address ranges: 004ed794-004ed7c9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004ed794(int param_1)

{
  if (*(int *)(param_1 + 0x20) == 0) {
    FUN_00403d94("Assertion failure");
  }
  return *(undefined4 *)(param_1 + 0x20);
}

