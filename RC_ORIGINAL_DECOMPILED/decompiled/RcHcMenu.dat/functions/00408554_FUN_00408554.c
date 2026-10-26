/*
 * FUN_00408554 at 00408554
 * int __register FUN_00408554(uint param_1)
 * Address ranges: 00408554-00408560
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00408554(uint param_1)

{
  return -(uint)((param_1 & 0x80000000) == 0);
}

