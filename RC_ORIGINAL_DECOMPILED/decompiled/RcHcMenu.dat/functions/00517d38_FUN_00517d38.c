/*
 * FUN_00517d38 at 00517d38
 * undefined __register FUN_00517d38(int * param_1, char param_2)
 * Address ranges: 00517d38-00517d7d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x5179fc slot -1 for TDaviKind. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x5179fc slot -1 for
   TDaviKind. Original bytes unchanged; names and types still inferred. */

void FUN_00517d38(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x517d43;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_00517d7e;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  FUN_00403094((int *)local_8[5]);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00517d85;
  puStack_14 = (undefined1 *)0x517d7d;
  FUN_00412c50(local_8,local_9 & 0xfc);
  return;
}

