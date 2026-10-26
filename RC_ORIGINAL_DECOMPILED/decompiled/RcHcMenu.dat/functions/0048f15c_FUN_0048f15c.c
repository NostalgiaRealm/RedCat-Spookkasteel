/*
 * FUN_0048f15c at 0048f15c
 * undefined __register FUN_0048f15c(int * param_1, char param_2)
 * Address ranges: 0048f15c-0048f1a9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x48e3ec slot -1 for TAppInfoPropRefList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x48e3ec slot -1 for
   TAppInfoPropRefList. Original bytes unchanged; names and types still inferred. */

void FUN_0048f15c(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x48f167;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_0048f1aa;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  FUN_00403094((int *)local_8[8]);
  local_8[8] = 0;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0048f1b1;
  puStack_14 = (undefined1 *)0x48f1a9;
  FUN_0045d3c4(local_8,local_9 & 0xfc);
  return;
}

