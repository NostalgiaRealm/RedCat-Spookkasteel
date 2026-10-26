/*
 * FUN_0055ab48 at 0055ab48
 * undefined __register FUN_0055ab48(int * param_1)
 * Address ranges: 0055ab48-0055aba6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x559960 slot published:btnReqOkClick for TfrmKeyConfig. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x559960 slot
   published:btnReqOkClick for TfrmKeyConfig. Original bytes unchanged; names and types still
   inferred. */

void FUN_0055ab48(int *param_1)

{
  FUN_0054eebc((int)param_1);
  FUN_0054ffdc(*(int **)(*(int *)PTR_DAT_00572108 + 0x108));
  FUN_00569c6c(*(int *)PTR_DAT_00572108,(undefined4 *)"RCMn1");
  FUN_0056a9e4(*(int *)PTR_DAT_00572108);
  FUN_0055aac8(param_1);
  param_1[0x8d] = 1;
  return;
}

