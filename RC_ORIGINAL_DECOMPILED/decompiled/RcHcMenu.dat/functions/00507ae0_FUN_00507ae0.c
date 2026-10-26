/*
 * FUN_00507ae0 at 00507ae0
 * undefined __register FUN_00507ae0(int * param_1, char param_2)
 * Address ranges: 00507ae0-00507b4c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x5073b8 slot -1 for TDaviCalendar. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x5073b8 slot -1 for
   TDaviCalendar. Original bytes unchanged; names and types still inferred. */

void FUN_00507ae0(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x507aeb;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_00507b4d;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  FUN_00403094((int *)local_8[0x7e]);
  local_8[0x7e] = 0;
  FUN_00403094((int *)local_8[0x7f]);
  local_8[0x7f] = 0;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00507b54;
  puStack_14 = (undefined1 *)0x507b4c;
  FUN_0043a38c(local_8,local_9 & 0xfc);
  return;
}

