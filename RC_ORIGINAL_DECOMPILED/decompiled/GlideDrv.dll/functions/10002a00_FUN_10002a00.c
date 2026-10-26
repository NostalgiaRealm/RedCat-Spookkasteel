/*
 * FUN_10002a00 at 10002a00
 * undefined4 __cdecl FUN_10002a00(int param_1, undefined4 * param_2)
 * Address ranges: 10002a00-10002ad6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_10002a00(int param_1,undefined4 *param_2)

{
  if (param_1 == 1) {
    *param_2 = 8;
    return 1;
  }
  if (param_1 == 2) {
    *param_2 = 7;
    return 1;
  }
  if (param_1 == 4) {
    *param_2 = 6;
    return 1;
  }
  if (param_1 == 8) {
    *param_2 = 5;
    return 1;
  }
  if (param_1 == 0x10) {
    *param_2 = 4;
    return 1;
  }
  if (param_1 == 0x20) {
    *param_2 = 3;
    return 1;
  }
  if (param_1 == 0x40) {
    *param_2 = 2;
    return 1;
  }
  if (param_1 == 0x80) {
    *param_2 = 1;
    return 1;
  }
  if (param_1 == 0x100) {
    *param_2 = 0;
    return 1;
  }
  FUN_10001920(7,s_GLIDE_GetLod__Invalid_texture_wi_1000e850);
  return 0;
}

