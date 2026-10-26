/*
 * FUN_004064c4 at 004064c4
 * undefined __register FUN_004064c4(int param_1)
 * Address ranges: 004064c4-004064cc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004064c4(int param_1)

{
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + -8) = *(int *)(param_1 + -8) + 1;
    UNLOCK();
  }
  return;
}

