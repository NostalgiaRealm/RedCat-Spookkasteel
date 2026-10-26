/*
 * FUN_0046cde0 at 0046cde0
 * undefined4 __register FUN_0046cde0(int param_1)
 * Address ranges: 0046cde0-0046cdfc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0046cde0(int param_1)

{
  if ((*(char *)(param_1 + 0xd0) != '\0') &&
     (*(int *)(*(int *)(param_1 + 0x28) + 0x48) == *(int *)(param_1 + 0xd4))) {
    return CONCAT31((int3)((uint)param_1 >> 8),1);
  }
  return 0;
}

