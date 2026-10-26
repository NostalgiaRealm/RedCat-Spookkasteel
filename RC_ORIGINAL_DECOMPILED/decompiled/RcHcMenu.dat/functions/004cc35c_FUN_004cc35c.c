/*
 * FUN_004cc35c at 004cc35c
 * undefined __register FUN_004cc35c(int param_1, undefined4 param_2)
 * Address ranges: 004cc35c-004cc3db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4cbf0c slot published:btnOkClick for TfrmLoginPrompt. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4cbf0c slot
   published:btnOkClick for TfrmLoginPrompt. Original bytes unchanged; names and types still
   inferred. */

void FUN_004cc35c(int param_1,undefined4 param_2)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_10 = 0;
  puStack_18 = &LAB_004cc3dc;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  local_c = param_2;
  local_8 = param_1;
  FUN_00432714(*(int *)(param_1 + 0x2d4),&local_10);
  if (local_10 == 0) {
    FUN_00459bf4("U dient een gebruikersnaam in te voeren.");
    FUN_00432bf4(*(int **)(local_8 + 0x2d4),extraout_EDX,extraout_ECX);
    (**(code **)(**(int **)(local_8 + 0x2d4) + 0xb0))();
    *(undefined4 *)(local_8 + 0x234) = 0;
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004cc3e3;
  puStack_18 = (undefined1 *)0x4cc3db;
  FUN_00403db0(&local_10);
  return;
}

