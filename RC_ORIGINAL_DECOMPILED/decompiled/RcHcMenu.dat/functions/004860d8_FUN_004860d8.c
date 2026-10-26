/*
 * FUN_004860d8 at 004860d8
 * undefined __register FUN_004860d8(int * param_1, char param_2)
 * Address ranges: 004860d8-00486140
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x47dcb0 slot 99 for TBDEDataSet. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x47dcb0 slot 99 for
   TBDEDataSet. Original bytes unchanged; names and types still inferred. */

void FUN_004860d8(int *param_1,char param_2)

{
  uint uVar1;
  
  uVar1 = FUN_004714b4((int)param_1);
  if ((char)uVar1 != '\0') {
    FUN_00473b1c(param_1);
    if (param_2 != (char)param_1[0x26]) {
      (**(code **)(*param_1 + 600))();
      thunk_FUN_00479cac(param_1[0x5a]);
      if (param_2 == '\0') {
        FUN_00485d28((int)param_1);
      }
      else {
        FUN_00485c6c((int)param_1);
      }
      FUN_00473a98((int)param_1,param_2);
    }
    FUN_00473334(param_1);
    return;
  }
  FUN_00473a98((int)param_1,param_2);
  return;
}

