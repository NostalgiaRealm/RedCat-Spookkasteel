/*
 * FUN_004b9ab0 at 004b9ab0
 * undefined __register FUN_004b9ab0(int * param_1, char param_2)
 * Address ranges: 004b9ab0-004b9af0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4b6a74 slot -1 for DAORecordset. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4b6a74 slot -1 for
   DAORecordset. Original bytes unchanged; names and types still inferred. */

void FUN_004b9ab0(int *param_1,char param_2)

{
  int *piVar1;
  int *piVar2;
  byte extraout_DL;
  
  piVar2 = FUN_00403434(param_1,param_2);
  piVar1 = (int *)piVar2[5];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + -4))(piVar1,1);
  }
  piVar1 = (int *)piVar2[6];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + -4))(piVar1,1);
  }
  FUN_004b7718(piVar2,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar2);
  }
  return;
}

