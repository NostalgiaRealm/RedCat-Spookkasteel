/*
 * FUN_00478b1c at 00478b1c
 * undefined __register FUN_00478b1c(uint param_1)
 * Address ranges: 00478b1c-00478b50
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00478b1c(uint param_1)

{
  DAT_00570840 = param_1 & 0xffff;
  DAT_00570844 = (uint)*(ushort *)(&DAT_00479cd6 + DAT_00570840 * 2);
  FUN_0047c351();
  return;
}

