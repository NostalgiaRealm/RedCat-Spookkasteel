/*
 * FUN_004e21a4 at 004e21a4
 * undefined __register FUN_004e21a4(int param_1)
 * Address ranges: 004e21a4-004e21f4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4d8b80 slot published:tmrFocusTimer for TfrmBalloon. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4d8b80 slot
   published:tmrFocusTimer for TfrmBalloon. Original bytes unchanged; names and types still
   inferred. */

void FUN_004e21a4(int param_1)

{
  char cVar1;
  int *piVar2;
  
  FUN_00455648(*(int *)(param_1 + 0x2dc),'\0');
  piVar2 = (int *)FUN_004487c4(*(int **)(param_1 + 0x310));
  if (*(char *)((int)piVar2 + 0x47) != '\0') {
    cVar1 = (**(code **)(*piVar2 + 0x4c))();
    if (cVar1 != '\0') {
      (**(code **)(*piVar2 + 0xb0))();
    }
  }
  return;
}

