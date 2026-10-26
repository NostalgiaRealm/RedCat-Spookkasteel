/*
 * FUN_004bee40 at 004bee40
 * undefined1 __register FUN_004bee40(int * param_1)
 * Address ranges: 004bee40-004beeb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4bcd20 slot 17 for TAppDAOQuery. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4bcd20 slot 17 for
   TAppDAOQuery. Original bytes unchanged; names and types still inferred. */

undefined1 FUN_004bee40(int *param_1)

{
  char cVar1;
  undefined1 local_9;
  
  if (param_1[0xd] == 0) {
    FUN_00403d94("TAppDAOQuery.MoveFirst: No recordset.");
  }
  local_9 = 0;
  if ((char)param_1[6] == '\0') {
    cVar1 = (**(code **)(*param_1 + 0x3c))();
    if (cVar1 != '\0') {
      FUN_004ba5b8(param_1[0xd]);
      local_9 = 1;
    }
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0x3c))();
    if (cVar1 != '\0') {
      FUN_004bacdc(param_1[0xd]);
      local_9 = 1;
    }
  }
  return local_9;
}

