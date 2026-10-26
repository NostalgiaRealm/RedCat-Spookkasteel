/*
 * FUN_10018b80 at 10018b80
 * undefined FUN_10018b80(void)
 * Address ranges: 10018b80-10018bb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_10018b80(int param_1)

{
  uint uVar1;
  
  param_1 = param_1 + 0xf;
  if (-1 < param_1) {
    return (int)(param_1 + (param_1 >> 0x1f & 0xfU)) >> 4;
  }
  uVar1 = -param_1 & 0x8000000f;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffff0) + 1;
  }
  return ((int)(param_1 + (param_1 >> 0x1f & 0xfU)) >> 4) - (uint)(uVar1 != 0);
}

