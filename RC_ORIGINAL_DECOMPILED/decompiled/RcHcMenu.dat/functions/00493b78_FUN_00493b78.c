/*
 * FUN_00493b78 at 00493b78
 * undefined4 __register FUN_00493b78(int * param_1)
 * Address ranges: 00493b78-00493b97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x48e834 slot 11 for TAppObj. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x48e834 slot 11 for TAppObj.
   Original bytes unchanged; names and types still inferred. */

undefined4 FUN_00493b78(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)FUN_00494858(param_1);
  uVar2 = (**(code **)(*piVar1 + 8))();
  return uVar2;
}

