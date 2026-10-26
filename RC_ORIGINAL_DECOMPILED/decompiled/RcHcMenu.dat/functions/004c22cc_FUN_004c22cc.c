/*
 * FUN_004c22cc at 004c22cc
 * undefined __register FUN_004c22cc(int param_1, int * param_2)
 * Address ranges: 004c22cc-004c2302
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4bcac4 slot 15 for TAppDAODatabase. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4bcac4 slot 15 for
   TAppDAODatabase. Original bytes unchanged; names and types still inferred. */

void FUN_004c22cc(int param_1,int *param_2)

{
  int iVar1;
  
  FUN_004ce3d4(param_1,(int)param_2);
  iVar1 = FUN_00403224(param_2,(int)&PTR_FUN_004bcac4);
  FUN_00403e04((int *)(param_1 + 0x28),*(undefined4 **)(iVar1 + 0x28));
  return;
}

