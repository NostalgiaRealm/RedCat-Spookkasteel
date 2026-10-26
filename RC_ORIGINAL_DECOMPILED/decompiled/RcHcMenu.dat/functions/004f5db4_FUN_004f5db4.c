/*
 * FUN_004f5db4 at 004f5db4
 * undefined __register FUN_004f5db4(int * param_1, char param_2)
 * Address ranges: 004f5db4-004f5e11
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4f304c slot -1 for TPageControl. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4f304c slot -1 for
   TPageControl. Original bytes unchanged; names and types still inferred. */

void FUN_004f5db4(int *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  byte extraout_DL;
  int iVar3;
  int iVar4;
  
  piVar1 = FUN_00403434(param_1,param_2);
  iVar3 = *(int *)(piVar1[0x90] + 8);
  if (-1 < iVar3 + -1) {
    iVar4 = 0;
    do {
      iVar2 = FUN_00412384((undefined4 *)piVar1[0x90],iVar4);
      *(undefined4 *)(iVar2 + 500) = 0;
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00403094((int *)piVar1[0x90]);
  FUN_004f4d1c(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

