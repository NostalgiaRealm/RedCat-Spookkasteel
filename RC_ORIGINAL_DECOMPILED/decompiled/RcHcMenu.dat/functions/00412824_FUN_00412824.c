/*
 * FUN_00412824 at 00412824
 * undefined4 __register FUN_00412824(int param_1)
 * Address ranges: 00412824-00412834
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00412824(int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return *(undefined4 *)(param_1 + 4);
}

