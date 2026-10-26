/*
 * FUN_00419360 at 00419360
 * undefined __register FUN_00419360(int param_1)
 * Address ranges: 00419360-00419369
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00419360(int param_1)

{
  *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & 0xfffe;
  return;
}

