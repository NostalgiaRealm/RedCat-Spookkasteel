/*
 * FUN_0044113c at 0044113c
 * undefined __register FUN_0044113c(int * param_1, char param_2)
 * Address ranges: 0044113c-004411ee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x43fcd8 slot -1 for TMenuItem. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x43fcd8 slot -1 for
   TMenuItem. Original bytes unchanged; names and types still inferred. */

void FUN_0044113c(int *param_1,char param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_00445770(DAT_005737c8,(int)piVar1);
  if ((int *)piVar1[0x16] != (int *)0x0) {
    FUN_0044333c((int *)piVar1[0x16],(int)piVar1);
    piVar1[0x16] = 0;
  }
  while( true ) {
    iVar3 = FUN_00442fec((int)piVar1);
    if (iVar3 < 1) break;
    piVar2 = (int *)FUN_00442ffc((int)piVar1,0);
    FUN_00403094(piVar2);
  }
  if (piVar1[10] != 0) {
    FUN_00441558(piVar1,0);
    DestroyMenu((HMENU)piVar1[10]);
  }
  FUN_00403094((int *)piVar1[0x14]);
  FUN_0040e4b4(piVar1 + 0xe);
  FUN_0040e4b4(piVar1 + 0x1b);
  if (*(ushort *)(piVar1 + 0x11) != 0) {
    FUN_0041298c(DAT_005737d0,(uint)*(ushort *)(piVar1 + 0x11),'\0');
  }
  if ((int *)piVar1[0x10] != (int *)0x0) {
    FUN_00403094((int *)piVar1[0x10]);
  }
  FUN_00418f4c(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

