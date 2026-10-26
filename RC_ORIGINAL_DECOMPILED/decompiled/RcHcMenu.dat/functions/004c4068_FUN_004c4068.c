/*
 * FUN_004c4068 at 004c4068
 * undefined __register FUN_004c4068(undefined4 param_1, int * param_2)
 * Address ranges: 004c4068-004c40a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4bcac4 slot 12 for TAppDAODatabase. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4bcac4 slot 12 for
   TAppDAODatabase. Original bytes unchanged; names and types still inferred. */

void FUN_004c4068(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00403224(param_2,(int)&DAT_004bca60);
  FUN_004b89a0(*(int *)(iVar1 + 4));
  iVar1 = FUN_00403224(param_2,(int)&DAT_004bca60);
  FUN_00403094(*(int **)(iVar1 + 4));
  return;
}

