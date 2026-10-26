/*
 * FUN_00455c9c at 00455c9c
 * undefined4 __register FUN_00455c9c(int * param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 00455c9c-00455cc6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4539c0 slot 13 for TCustomPanel. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4539c0 slot 13 for
   TCustomPanel. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_00455c9c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined3 extraout_var;
  
  if (((char)param_1[0x7e] == '\0') &&
     (cVar1 = FUN_004394dc(param_1,param_2,param_3), cVar1 != '\0')) {
    return CONCAT31(extraout_var,1);
  }
  return 0;
}

