/*
 * FUN_00493bb8 at 00493bb8
 * undefined __register FUN_00493bb8(int * param_1, undefined4 param_2)
 * Address ranges: 00493bb8-00493bd7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x48e834 slot 13 for TAppObj. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x48e834 slot 13 for TAppObj.
   Original bytes unchanged; names and types still inferred. */

void FUN_00493bb8(int *param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00494858(param_1);
  (**(code **)(*piVar1 + 0x10))(piVar1,param_2);
  return;
}

