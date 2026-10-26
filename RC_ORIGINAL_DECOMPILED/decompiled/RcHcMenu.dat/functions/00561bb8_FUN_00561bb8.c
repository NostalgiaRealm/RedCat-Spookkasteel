/*
 * FUN_00561bb8 at 00561bb8
 * undefined __register FUN_00561bb8(int * param_1, char param_2, undefined4 param_3)
 * Address ranges: 00561bb8-00561c04
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x561588 slot -1 for TMediaPlayer. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x561588 slot -1 for
   TMediaPlayer. Original bytes unchanged; names and types still inferred. */

void FUN_00561bb8(int *param_1,char param_2,undefined4 param_3)

{
  int *piVar1;
  byte extraout_DL;
  undefined4 uStack_c;
  
  uStack_c = param_3;
  piVar1 = FUN_00403434(param_1,param_2);
  if (*(ushort *)((int)piVar1 + 0x2da) != 0) {
    mciSendCommandA((uint)*(ushort *)((int)piVar1 + 0x2da),0x804,2,(DWORD_PTR)&uStack_c);
  }
  FUN_00561d9c((int)piVar1);
  FUN_0043a38c(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

