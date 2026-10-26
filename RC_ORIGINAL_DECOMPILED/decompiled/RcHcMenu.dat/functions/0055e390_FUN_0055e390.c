/*
 * FUN_0055e390 at 0055e390
 * undefined __register FUN_0055e390(int * param_1, undefined4 param_2)
 * Address ranges: 0055e390-0055e3ea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x55da9c slot published:BtnNextClick for TfrmQuickPlay. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x55da9c slot
   published:BtnNextClick for TfrmQuickPlay. Original bytes unchanged; names and types still
   inferred. */

void FUN_0055e390(int *param_1,undefined4 param_2)

{
  FUN_005536f8();
  FUN_0054ffdc(*(int **)(*(int *)PTR_DAT_00572108 + 0x108));
  FUN_00569c6c(*(int *)PTR_DAT_00572108,(undefined4 *)"RCMn5");
  FUN_0056a9e4(*(int *)PTR_DAT_00572108);
  (**(code **)(*param_1 + 0xe4))(param_1,&PTR_FUN_0055cf98,*param_1,param_2);
  return;
}

