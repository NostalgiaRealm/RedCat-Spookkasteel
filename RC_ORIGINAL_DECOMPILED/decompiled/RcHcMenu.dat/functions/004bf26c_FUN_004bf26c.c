/*
 * FUN_004bf26c at 004bf26c
 * bool __register FUN_004bf26c(int * param_1)
 * Address ranges: 004bf26c-004bf2b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4bcd20 slot 22 for TAppDAOQuery. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4bcd20 slot 22 for
   TAppDAOQuery. Original bytes unchanged; names and types still inferred. */

bool FUN_004bf26c(int *param_1)

{
  char cVar1;
  
  if (param_1[0xd] == 0) {
    FUN_00403d94("TAppDAOQuery.FetchFirst: No recordset.");
  }
  cVar1 = (**(code **)(*param_1 + 0x3c))();
  if (cVar1 != '\0') {
    FUN_004ba5b8(param_1[0xd]);
  }
  return cVar1 != '\0';
}

