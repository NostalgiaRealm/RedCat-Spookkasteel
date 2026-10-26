/*
 * FUN_004c6f94 at 004c6f94
 * undefined __register FUN_004c6f94(int * param_1, char param_2)
 * Address ranges: 004c6f94-004c6fff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4c6be0 slot -1 for TButtonGlyph. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4c6be0 slot -1 for
   TButtonGlyph. Original bytes unchanged; names and types still inferred. */

void FUN_004c6f94(int *param_1,char param_2)

{
  int *piVar1;
  undefined4 uVar2;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_00403094((int *)piVar1[1]);
  FUN_004c7000((int)piVar1);
  if (DAT_00571ccc != (int *)0x0) {
    uVar2 = FUN_004c6ec4((int)DAT_00571ccc);
    if ((char)uVar2 != '\0') {
      FUN_00403094(DAT_00571ccc);
      DAT_00571ccc = (int *)0x0;
    }
  }
  FUN_00403084(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

