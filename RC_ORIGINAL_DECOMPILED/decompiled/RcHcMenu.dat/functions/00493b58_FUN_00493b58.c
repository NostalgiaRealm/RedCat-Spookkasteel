/*
 * FUN_00493b58 at 00493b58
 * undefined __register FUN_00493b58(int * param_1, undefined4 param_2)
 * Address ranges: 00493b58-00493b77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x48e834 slot 10 for TAppObj. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x48e834 slot 10 for TAppObj.
   Original bytes unchanged; names and types still inferred. */

void FUN_00493b58(int *param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00494858(param_1);
  (**(code **)(*piVar1 + 4))(piVar1,param_2);
  return;
}

