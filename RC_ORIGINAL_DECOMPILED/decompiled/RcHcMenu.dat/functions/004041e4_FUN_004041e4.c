/*
 * FUN_004041e4 at 004041e4
 * undefined __register FUN_004041e4(int param_1)
 * Address ranges: 004041e4-004041f2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004041e4(int param_1)

{
  if ((param_1 != 0) && (-1 < *(int *)(param_1 + -8))) {
    LOCK();
    *(int *)(param_1 + -8) = *(int *)(param_1 + -8) + 1;
    UNLOCK();
  }
  return;
}

