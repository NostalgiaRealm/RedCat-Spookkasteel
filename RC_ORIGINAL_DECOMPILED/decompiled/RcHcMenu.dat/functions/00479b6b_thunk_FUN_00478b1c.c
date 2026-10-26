/*
 * thunk_FUN_00478b1c at 00479b6b
 * undefined __register thunk_FUN_00478b1c(uint param_1)
 * Address ranges: 00479b6b-00479b6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to FUN_00478b1c
 */

void thunk_FUN_00478b1c(uint param_1)

{
  DAT_00570840 = param_1 & 0xffff;
  DAT_00570844 = (uint)*(ushort *)(&DAT_00479cd6 + DAT_00570840 * 2);
  FUN_0047c351();
  return;
}

