/*
 * FUN_00497014 at 00497014
 * undefined __register FUN_00497014(int * param_1, char param_2)
 * Address ranges: 00497014-0049706f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x48e950 slot -1 for TAppSortOrder. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x48e950 slot -1 for
   TAppSortOrder. Original bytes unchanged; names and types still inferred. */

void FUN_00497014(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x49701f;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_00497070;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  FUN_00403094((int *)local_8[5]);
  FUN_00403094((int *)local_8[4]);
  FUN_00403094((int *)local_8[6]);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00497077;
  puStack_14 = (undefined1 *)0x49706f;
  FUN_0045b45c(local_8,local_9 & 0xfc);
  return;
}

