/*
 * FUN_0042c090 at 0042c090
 * undefined __register FUN_0042c090(int * param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 0042c090-0042c104
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x428a30 slot 8 for TListBoxStrings. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x428a30 slot 8 for
   TListBoxStrings. Original bytes unchanged; names and types still inferred. */

void FUN_0042c090(int *param_1,undefined4 param_2,undefined4 param_3)

{
  WPARAM WVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  
  WVar1 = FUN_0042c73c((int *)param_1[3]);
  uVar2 = FUN_00403270((int *)param_1[3],param_2,extraout_ECX);
  FUN_00403270((int *)param_1[3],param_2,0);
  (**(code **)(*param_1 + 0x44))(param_1,param_2);
  FUN_00413c0c(param_1,param_2,param_3,0);
  FUN_00403270((int *)param_1[3],param_2,uVar2);
  FUN_0042c778((int *)param_1[3],WVar1);
  return;
}

