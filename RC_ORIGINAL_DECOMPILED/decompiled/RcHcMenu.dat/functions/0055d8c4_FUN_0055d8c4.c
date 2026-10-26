/*
 * FUN_0055d8c4 at 0055d8c4
 * undefined __register FUN_0055d8c4(int * param_1)
 * Address ranges: 0055d8c4-0055d94f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x55cf98 slot published:BtnQuitClick for TfrmDifficulty. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x55cf98 slot
   published:BtnQuitClick for TfrmDifficulty. Original bytes unchanged; names and types still
   inferred. */

void FUN_0055d8c4(int *param_1)

{
  undefined4 uVar1;
  
  FUN_005534dc(param_1);
  FUN_0054ffdc(*(int **)(*(int *)PTR_DAT_00572108 + 0x108));
  FUN_00569c6c(*(int *)PTR_DAT_00572108,(undefined4 *)"Mn_red23");
  FUN_0056a9e4(*(int *)PTR_DAT_00572108);
  uVar1 = FUN_00554ca4();
  if ((char)uVar1 != '\0') {
    FUN_0056a9e4(*(int *)PTR_DAT_00572108);
    FUN_00569c6c(*(int *)PTR_DAT_00572108,(undefined4 *)"Mn_Red28");
    FUN_0056a9e4(*(int *)PTR_DAT_00572108);
    FUN_0055332c();
  }
  FUN_005535d0(param_1);
  return;
}

