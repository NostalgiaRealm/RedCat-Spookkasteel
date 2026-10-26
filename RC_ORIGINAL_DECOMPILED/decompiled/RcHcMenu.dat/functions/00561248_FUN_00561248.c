/*
 * FUN_00561248 at 00561248
 * undefined __register FUN_00561248(int * param_1)
 * Address ranges: 00561248-005612d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x5601a8 slot published:BtnQuitClick for TfrmMainScreen. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x5601a8 slot
   published:BtnQuitClick for TfrmMainScreen. Original bytes unchanged; names and types still
   inferred. */

void FUN_00561248(int *param_1)

{
  undefined4 uVar1;
  
  FUN_0054ffdc(*(int **)(*(int *)PTR_DAT_00572108 + 0x108));
  FUN_00569c6c(*(int *)PTR_DAT_00572108,(undefined4 *)"Mn_red23");
  FUN_0056a9e4(*(int *)PTR_DAT_00572108);
  FUN_005534dc(param_1);
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

