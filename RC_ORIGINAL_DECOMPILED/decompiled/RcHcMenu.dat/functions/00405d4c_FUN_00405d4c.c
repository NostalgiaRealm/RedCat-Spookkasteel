/*
 * FUN_00405d4c at 00405d4c
 * undefined4 __register FUN_00405d4c(int param_1)
 * Address ranges: 00405d4c-00405d6d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00405d4c(int param_1)

{
  if ((*(byte *)(param_1 + 1) & 0x20) == 0) {
    FUN_00402874(CONCAT31((int3)((uint)param_1 >> 8),0x13));
  }
  if ((*(byte *)(param_1 + 1) & 0x40) != 0) {
    return **(undefined4 **)(param_1 + 8);
  }
  return *(undefined4 *)(param_1 + 8);
}

