/*
 * FUN_00480270 at 00480270
 * undefined __register FUN_00480270(int * param_1, char param_2)
 * Address ranges: 00480270-004802c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x47d2b0 slot -1 for EDBEngineError. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x47d2b0 slot -1 for
   EDBEngineError. Original bytes unchanged; names and types still inferred. */

void FUN_00480270(int *param_1,char param_2)

{
  int *piVar1;
  int *piVar2;
  byte extraout_DL;
  int iVar3;
  
  piVar1 = FUN_00403434(param_1,param_2);
  if (piVar1[3] != 0) {
    iVar3 = *(int *)(piVar1[3] + 8) + -1;
    if (-1 < iVar3) {
      do {
        piVar2 = (int *)FUN_00412384((undefined4 *)piVar1[3],iVar3);
        FUN_00403094(piVar2);
        iVar3 = iVar3 + -1;
      } while (iVar3 != -1);
    }
    FUN_00403094((int *)piVar1[3]);
  }
  FUN_00403084(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

