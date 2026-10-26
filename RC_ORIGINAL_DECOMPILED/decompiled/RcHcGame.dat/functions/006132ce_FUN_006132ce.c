/*
 * FUN_006132ce at 006132ce
 * undefined FUN_006132ce(void)
 * Address ranges: 006132ce-00613369
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_006132ce(undefined4 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 local_c [8];
  
  if (*DAT_00710054 == '\0') {
    uVar2 = 2;
  }
  else {
    uVar1 = (int)*DAT_00710054 - 0x41;
    DAT_00710054 = DAT_00710054 + 1;
    if (uVar1 < 0xb) {
      FUN_00614dc3();
      if ((~(byte)DAT_00710064 & 2) != 0) {
        uVar1 = uVar1 & 0xfffffffe;
        if (uVar1 == 0) {
          uVar2 = 1;
        }
        else if (uVar1 == 2) {
          uVar2 = 2;
        }
        else if (uVar1 == 4) {
          uVar2 = 4;
        }
        else if (uVar1 == 6) {
          uVar2 = 3;
        }
        else if (uVar1 == 8) {
          uVar2 = 5;
        }
        else {
          if (uVar1 != 0xc) goto LAB_00613348;
          uVar2 = 6;
        }
        uVar2 = FUN_00614cf6(uVar2);
        FUN_006154a5(uVar2);
      }
LAB_00613348:
      FUN_00614df0(local_c);
      return param_1;
    }
    uVar2 = 1;
  }
  FUN_00614fc6(uVar2);
  return param_1;
}

