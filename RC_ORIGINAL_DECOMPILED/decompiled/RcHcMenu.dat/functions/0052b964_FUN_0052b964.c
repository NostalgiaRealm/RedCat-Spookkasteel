/*
 * FUN_0052b964 at 0052b964
 * undefined __register FUN_0052b964(int * param_1, char param_2)
 * Address ranges: 0052b964-0052ba07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x52b7f4 slot -1 for TAppObjMemList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x52b7f4 slot -1 for
   TAppObjMemList. Original bytes unchanged; names and types still inferred. */

void FUN_0052b964(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x52b96f;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_0052ba08;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  if (local_8[0x20] != 0) {
    puStack_10 = &stack0xfffffffc;
    FUN_004e290c((int *)local_8[0x20]);
    FUN_00403094((int *)local_8[0x20]);
  }
  if (local_8[0x21] != 0) {
    FUN_004e290c((int *)local_8[0x21]);
    FUN_00403094((int *)local_8[0x21]);
  }
  FUN_00403094((int *)local_8[0x24]);
  local_8[0x24] = 0;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0052ba0f;
  puStack_14 = (undefined1 *)0x52ba07;
  FUN_005475bc(local_8,local_9 & 0xfc);
  return;
}

