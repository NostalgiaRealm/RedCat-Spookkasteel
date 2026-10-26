/*
 * FUN_100167f0 at 100167f0
 * undefined FUN_100167f0(void)
 * Address ranges: 100167f0-10016879
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100167f0(int param_1)

{
  if (param_1 < 2) {
    if (2 < param_1) goto LAB_10016809;
    if (4 < param_1) goto LAB_10016819;
    if (8 < param_1) goto LAB_10016829;
    if (0x10 < param_1) goto LAB_10016839;
    if (0x20 < param_1) goto LAB_10016849;
    if (param_1 < 0x41) {
      if (param_1 < 0x81) {
        return param_1;
      }
      goto LAB_1001686d;
    }
  }
  else {
    if (param_1 < 3) {
      return 2;
    }
LAB_10016809:
    if (param_1 < 5) {
      return 4;
    }
LAB_10016819:
    if (param_1 < 9) {
      return 8;
    }
LAB_10016829:
    if (param_1 < 0x11) {
      return 0x10;
    }
LAB_10016839:
    if (param_1 < 0x21) {
      return 0x20;
    }
LAB_10016849:
    if (param_1 < 0x41) {
      return 0x40;
    }
  }
  if (param_1 < 0x81) {
    return 0x80;
  }
LAB_1001686d:
  if (param_1 < 0x101) {
    param_1 = 0x100;
  }
  return param_1;
}

