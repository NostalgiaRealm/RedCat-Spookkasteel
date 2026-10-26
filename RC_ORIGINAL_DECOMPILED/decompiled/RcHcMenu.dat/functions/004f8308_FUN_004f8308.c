/*
 * FUN_004f8308 at 004f8308
 * undefined __register FUN_004f8308(int param_1, int param_2)
 * Address ranges: 004f8308-004f8331
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f8308(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x238)) {
    *(int *)(param_1 + 0x238) = param_2;
  }
  return;
}

