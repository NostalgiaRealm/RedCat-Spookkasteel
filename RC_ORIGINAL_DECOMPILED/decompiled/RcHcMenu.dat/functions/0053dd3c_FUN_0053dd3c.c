/*
 * FUN_0053dd3c at 0053dd3c
 * undefined __register FUN_0053dd3c(int * param_1, char param_2)
 * Address ranges: 0053dd3c-0053dd9c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x53b648 slot -1 for TAppObjSimpleQueryListBookMark. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x53b648 slot -1 for
   TAppObjSimpleQueryListBookMark. Original bytes unchanged; names and types still inferred. */

void FUN_0053dd3c(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x53dd47;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_0053dd9d;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  FUN_00403094((int *)local_8[3]);
  local_8[3] = 0;
  FUN_00403094((int *)local_8[4]);
  local_8[4] = 0;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0053dda4;
  puStack_14 = (undefined1 *)0x53dd9c;
  FUN_0054b738(local_8,local_9 & 0xfc);
  return;
}

