/*
 * FUN_00478d42 at 00478d42
 * undefined __register FUN_00478d42(uint param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 00478d42-00478d46
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00478d42(uint param_1,undefined4 param_2,undefined4 param_3)

{
  DAT_00570840 = param_1 & 0xffff;
  DAT_00570844 = (uint)*(ushort *)(&DAT_00479cd6 + DAT_00570840 * 2);
  FUN_0047c351();
  return;
}

