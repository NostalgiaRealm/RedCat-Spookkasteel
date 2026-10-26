/*
 * FUN_00488e5c at 00488e5c
 * undefined __register FUN_00488e5c(int * param_1, int param_2)
 * Address ranges: 00488e5c-00488e83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x47eb28 slot 27 for TQuery. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x47eb28 slot 27 for TQuery.
   Original bytes unchanged; names and types still inferred. */

void FUN_00488e5c(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0041300c(param_2);
  if (iVar1 != 0) {
    (**(code **)(*(int *)param_1[0x90] + 8))((int *)param_1[0x90],param_2);
  }
  FUN_004713cc(param_1);
  return;
}

