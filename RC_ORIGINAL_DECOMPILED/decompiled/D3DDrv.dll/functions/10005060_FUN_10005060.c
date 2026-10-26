/*
 * FUN_10005060 at 10005060
 * undefined4 __cdecl FUN_10005060(int param_1)
 * Address ranges: 10005060-100050fc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_10005060(int param_1)

{
  if (param_1 < 1) {
    if (1 < param_1) goto LAB_10005078;
    if (2 < param_1) goto LAB_10005088;
    if (4 < param_1) goto LAB_10005098;
    if (8 < param_1) goto LAB_100050a8;
    if (0x10 < param_1) goto LAB_100050b8;
    if (0x20 < param_1) goto LAB_100050c8;
    if (param_1 < 0x41) {
      if (param_1 < 0x81) {
        return 0xffffffff;
      }
      goto LAB_100050ec;
    }
  }
  else {
    if (param_1 < 2) {
      return 1;
    }
LAB_10005078:
    if (param_1 < 3) {
      return 2;
    }
LAB_10005088:
    if (param_1 < 5) {
      return 4;
    }
LAB_10005098:
    if (param_1 < 9) {
      return 8;
    }
LAB_100050a8:
    if (param_1 < 0x11) {
      return 0x10;
    }
LAB_100050b8:
    if (param_1 < 0x21) {
      return 0x20;
    }
LAB_100050c8:
    if (param_1 < 0x41) {
      return 0x40;
    }
  }
  if (param_1 < 0x81) {
    return 0x80;
  }
LAB_100050ec:
  if (0x100 < param_1) {
    return 0xffffffff;
  }
  return 0x100;
}

