/*
 * FUN_0040bd4d at 0040bd4d
 * uint __cdecl FUN_0040bd4d(byte * param_1, int param_2)
 * Address ranges: 0040bd4d-0040bd9a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __cdecl FUN_0040bd4d(byte *param_1,int param_2)

{
  if (param_1 == (byte *)0x0) {
    DAT_004136d8 = 0xffffffff;
  }
  else {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      DAT_004136d8 = DAT_004136d8 >> 8 ^
                     *(uint *)(DAT_004136e0 + (DAT_004136d8 & 0xff ^ (uint)*param_1) * 4);
      param_1 = param_1 + 1;
    }
  }
  return ~DAT_004136d8;
}

