/*
 * FUN_00485370 at 00485370
 * DWORD __register FUN_00485370(int param_1, char * param_2, LPSTR param_3, char param_4)
 * Address ranges: 00485370-004853c6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x47dcb0 slot 146 for TBDEDataSet. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x47dcb0 slot 146 for
   TBDEDataSet. Original bytes unchanged; names and types still inferred. */

DWORD FUN_00485370(int param_1,char *param_2,LPSTR param_3,char param_4)

{
  DWORD DVar1;
  
  DVar1 = FUN_0040a108(param_2);
  if (param_4 == '\0') {
    FUN_0047fbc8(*(int *)(param_1 + 0x180),param_2,param_3,DVar1);
  }
  else {
    FUN_0047fb70(*(int *)(param_1 + 0x180),param_2,param_3,DVar1);
  }
  if (param_3 != param_2) {
    param_3[DVar1] = '\0';
  }
  return DVar1;
}

