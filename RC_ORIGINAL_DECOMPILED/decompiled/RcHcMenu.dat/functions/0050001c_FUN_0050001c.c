/*
 * FUN_0050001c at 0050001c
 * undefined4 __register FUN_0050001c(int param_1)
 * Address ranges: 0050001c-0050003a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0050001c(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x220) >> 8),
                  *(undefined1 *)(*(int *)(param_1 + 0x220) + 0x48));
}

