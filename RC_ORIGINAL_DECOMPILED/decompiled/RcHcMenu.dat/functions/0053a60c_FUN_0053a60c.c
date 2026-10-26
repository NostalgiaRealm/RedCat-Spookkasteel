/*
 * FUN_0053a60c at 0053a60c
 * undefined __register FUN_0053a60c(int * param_1)
 * Address ranges: 0053a60c-0053a65d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x537000 slot 46 for TOAGrid2. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x537000 slot 46 for
   TOAGrid2. Original bytes unchanged; names and types still inferred. */

void FUN_0053a60c(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_005233ac((int *)&PTR_FUN_00536e34,'\x01',param_1);
  param_1[0x9d] = iVar1;
  piVar2 = FUN_00537430((int *)&PTR_FUN_00536a28,'\x01',param_1);
  param_1[0x9f] = (int)piVar2;
  piVar2 = FUN_005376b4((int *)&PTR_FUN_00536c1c,'\x01',param_1);
  param_1[0xa1] = (int)piVar2;
  return;
}

