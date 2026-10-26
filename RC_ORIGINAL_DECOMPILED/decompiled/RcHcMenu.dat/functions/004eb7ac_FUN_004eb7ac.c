/*
 * FUN_004eb7ac at 004eb7ac
 * undefined __register FUN_004eb7ac(int param_1, int * param_2)
 * Address ranges: 004eb7ac-004eb7d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4ea51c slot 10 for TAppBDEQuery. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4ea51c slot 10 for
   TAppBDEQuery. Original bytes unchanged; names and types still inferred. */

void FUN_004eb7ac(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00403224(param_2,(int)&PTR_FUN_004ea4b4);
  FUN_004739fc(*(int **)(param_1 + 0x30),*(int *)(iVar1 + 0x10));
  return;
}

