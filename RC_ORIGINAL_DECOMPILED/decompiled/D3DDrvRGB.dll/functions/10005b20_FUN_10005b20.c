/*
 * FUN_10005b20 at 10005b20
 * undefined4 __cdecl FUN_10005b20(int param_1)
 * Address ranges: 10005b20-10005bbc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_10005b20(int param_1)

{
  if (param_1 < 1) {
    if (1 < param_1) goto LAB_10005b38;
    if (2 < param_1) goto LAB_10005b48;
    if (4 < param_1) goto LAB_10005b58;
    if (8 < param_1) goto LAB_10005b68;
    if (0x10 < param_1) goto LAB_10005b78;
    if (0x20 < param_1) goto LAB_10005b88;
    if (param_1 < 0x41) {
      if (param_1 < 0x81) {
        return 0xffffffff;
      }
      goto LAB_10005bac;
    }
  }
  else {
    if (param_1 < 2) {
      return 1;
    }
LAB_10005b38:
    if (param_1 < 3) {
      return 2;
    }
LAB_10005b48:
    if (param_1 < 5) {
      return 4;
    }
LAB_10005b58:
    if (param_1 < 9) {
      return 8;
    }
LAB_10005b68:
    if (param_1 < 0x11) {
      return 0x10;
    }
LAB_10005b78:
    if (param_1 < 0x21) {
      return 0x20;
    }
LAB_10005b88:
    if (param_1 < 0x41) {
      return 0x40;
    }
  }
  if (param_1 < 0x81) {
    return 0x80;
  }
LAB_10005bac:
  if (0x100 < param_1) {
    return 0xffffffff;
  }
  return 0x100;
}

