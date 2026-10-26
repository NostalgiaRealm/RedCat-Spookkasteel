/*
 * FUN_00413410 at 00413410
 * undefined4 __register FUN_00413410(int * param_1, undefined4 param_2)
 * Address ranges: 00413410-00413430
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x410b88 slot 13 for TStrings. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x410b88 slot 13 for
   TStrings. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_00413410(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x14))();
  (**(code **)(*param_1 + 0x54))(param_1,uVar1,param_2);
  return uVar1;
}

