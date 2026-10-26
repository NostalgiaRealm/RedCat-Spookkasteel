/*
 * FUN_00493b98 at 00493b98
 * undefined __register FUN_00493b98(int * param_1, undefined4 param_2)
 * Address ranges: 00493b98-00493bb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x48e834 slot 12 for TAppObj. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x48e834 slot 12 for TAppObj.
   Original bytes unchanged; names and types still inferred. */

void FUN_00493b98(int *param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00494858(param_1);
  (**(code **)(*piVar1 + 0xc))(piVar1,param_2);
  return;
}

