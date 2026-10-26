/*
 * FUN_005015e0 at 005015e0
 * undefined __register FUN_005015e0(int * param_1)
 * Address ranges: 005015e0-0050160c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005015e0(int *param_1)

{
  if (((*(byte *)(param_1 + 0x97) & 2) != 0) && ((*(byte *)(param_1 + 0x97) & 4) != 0)) {
    (**(code **)(*param_1 + 0x128))();
  }
  return;
}

