/*
 * FUN_004204a8 at 004204a8
 * undefined __register FUN_004204a8(int * param_1, char param_2)
 * Address ranges: 004204a8-00420501
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x41ac44 slot -1 for TBitmapImage. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x41ac44 slot -1 for
   TBitmapImage. Original bytes unchanged; names and types still inferred. */

void FUN_004204a8(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  if (piVar1[5] != 0) {
    FUN_00420214(piVar1[5]);
    DeleteObject((HGDIOBJ)piVar1[5]);
    piVar1[5] = 0;
  }
  (**(code **)*piVar1)();
  if ((HANDLE)piVar1[0x19] != (HANDLE)0x0) {
    CloseHandle((HANDLE)piVar1[0x19]);
  }
  FUN_0040e4b4(piVar1 + 0x1b);
  FUN_00403084(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

