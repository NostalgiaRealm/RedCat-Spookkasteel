/*
 * FUN_0049ca38 at 0049ca38
 * undefined __register FUN_0049ca38(int * param_1, char param_2)
 * Address ranges: 0049ca38-0049ca7c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x49c868 slot -1 for TDaviTimer. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x49c868 slot -1 for
   TDaviTimer. Original bytes unchanged; names and types still inferred. */

void FUN_0049ca38(int *param_1,char param_2)

{
  undefined4 extraout_ECX;
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x49ca43;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_0049ca7d;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  FUN_0049cb24((int)local_8,'\0',extraout_ECX);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0049ca84;
  puStack_14 = (undefined1 *)0x49ca7c;
  FUN_00418f4c(local_8,local_9 & 0xfc);
  return;
}

