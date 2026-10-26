/*
 * FUN_004e930c at 004e930c
 * int __register FUN_004e930c(undefined4 * param_1)
 * Address ranges: 004e930c-004e9359
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4e91bc slot 2 for TBooleanPropDesc. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4e91bc slot 2 for
   TBooleanPropDesc. Original bytes unchanged; names and types still inferred. */

int FUN_004e930c(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = FUN_00495828(param_1);
  iVar2 = FUN_00403224(piVar1,(int)&PTR_FUN_004e91bc);
  FUN_00403e04((int *)(iVar2 + 0x30),(undefined4 *)param_1[0xc]);
  FUN_00403e04((int *)(iVar2 + 0x34),(undefined4 *)param_1[0xd]);
  return iVar2;
}

