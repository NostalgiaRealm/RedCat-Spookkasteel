/*
 * FUN_0055d674 at 0055d674
 * undefined __register FUN_0055d674(int * param_1)
 * Address ranges: 0055d674-0055d6f6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x55cf98 slot published:BtnNextClick for TfrmDifficulty. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x55cf98 slot
   published:BtnNextClick for TfrmDifficulty. Original bytes unchanged; names and types still
   inferred. */

void FUN_0055d674(int *param_1)

{
  char cVar1;
  
  FUN_005536f8();
  FUN_0054ffdc(*(int **)(*(int *)PTR_DAT_00572108 + 0x108));
  FUN_00569c6c(*(int *)PTR_DAT_00572108,(undefined4 *)"RCMn5");
  FUN_0056a9e4(*(int *)PTR_DAT_00572108);
  cVar1 = (**(code **)(*(int *)param_1[0xc3] + 0xb8))();
  if (cVar1 != '\x01') {
    (**(code **)(*(int *)param_1[0xc5] + 0xb8))();
  }
  (**(code **)(*param_1 + 0xe4))(param_1,&PTR_FUN_0055c204);
  return;
}

