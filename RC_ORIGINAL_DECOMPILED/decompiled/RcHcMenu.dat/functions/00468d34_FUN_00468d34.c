/*
 * FUN_00468d34 at 00468d34
 * undefined __register FUN_00468d34(int * param_1, undefined4 * param_2, undefined4 * param_3)
 * Address ranges: 00468d34-00468d52
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x462a70 slot 27 for TField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x462a70 slot 27 for TField.
   Original bytes unchanged; names and types still inferred. */

void FUN_00468d34(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x68))();
  FUN_00402944(param_2,param_3,uVar1);
  return;
}

