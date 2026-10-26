/*
 * FUN_0049f1ac at 0049f1ac
 * undefined __register FUN_0049f1ac(int * param_1, char param_2)
 * Address ranges: 0049f1ac-0049f1f1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x49eb10 slot -1 for TDaviAnimationLoaderFactory. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x49eb10 slot -1 for
   TDaviAnimationLoaderFactory. Original bytes unchanged; names and types still inferred. */

void FUN_0049f1ac(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x49f1b7;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_0049f1f2;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  FUN_0040e4b4(local_8 + 1);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0049f1f9;
  puStack_14 = (undefined1 *)0x49f1f1;
  FUN_0045b45c(local_8,local_9 & 0xfc);
  return;
}

