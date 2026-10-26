/*
 * FUN_004c7f60 at 004c7f60
 * undefined __register FUN_004c7f60(int * param_1, char param_2)
 * Address ranges: 004c7f60-004c7fe9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4c5d88 slot -1 for TDaviSpeedButton. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4c5d88 slot -1 for
   TDaviSpeedButton. Original bytes unchanged; names and types still inferred. */

void FUN_004c7f60(int *param_1,char param_2)

{
  uint uVar1;
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  bool bVar2;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x4c7f6b;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_004c7fea;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  uVar1 = FUN_00403094((int *)local_8[0x4d]);
  bVar2 = SBORROW4(DAT_00571cd4,1);
  DAT_00571cd4 = DAT_00571cd4 + -1;
  if (bVar2) {
    thunk_FUN_00402874(uVar1);
  }
  FUN_00403094((int *)local_8[0x4b]);
  local_8[0x4b] = 0;
  if (DAT_00571cd4 == 0) {
    FUN_00403094(DAT_00571cd0);
    DAT_00571cd0 = (int *)0x0;
  }
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004c7ff1;
  puStack_14 = (undefined1 *)0x4c7fe9;
  FUN_00439a80(local_8,local_9 & 0xfc);
  return;
}

