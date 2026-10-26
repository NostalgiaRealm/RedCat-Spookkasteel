/*
 * FUN_00413434 at 00413434
 * undefined4 __register FUN_00413434(int * param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 00413434-00413454
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x410b88 slot 14 for TStrings. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x410b88 slot 14 for
   TStrings. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_00413434(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x34))();
  (**(code **)(*param_1 + 0x24))(param_1,uVar1,param_3);
  return uVar1;
}

