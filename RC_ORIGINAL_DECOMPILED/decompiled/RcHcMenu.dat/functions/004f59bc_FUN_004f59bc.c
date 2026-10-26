/*
 * FUN_004f59bc at 004f59bc
 * undefined __register FUN_004f59bc(int * param_1, char param_2)
 * Address ranges: 004f59bc-004f5a07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4f2a94 slot -1 for TTabSheet. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4f2a94 slot -1 for
   TTabSheet. Original bytes unchanged; names and types still inferred. */

void FUN_004f59bc(int *param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  byte extraout_DL;
  
  piVar2 = FUN_00403434(param_1,param_2);
  iVar1 = piVar2[0x7d];
  if (iVar1 != 0) {
    if (piVar2 == *(int **)(iVar1 + 0x24c)) {
      *(undefined4 *)(iVar1 + 0x24c) = 0;
    }
    FUN_004f6360((int *)piVar2[0x7d],piVar2);
  }
  FUN_004349bc(piVar2,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar2);
  }
  return;
}

