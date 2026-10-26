/*
 * FUN_0051d88c at 0051d88c
 * undefined __register FUN_0051d88c(int * param_1, char param_2)
 * Address ranges: 0051d88c-0051d8ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x51b73c slot -1 for TDropArrows. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x51b73c slot -1 for
   TDropArrows. Original bytes unchanged; names and types still inferred. */

void FUN_0051d88c(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x51d897;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_0051d900;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  DeleteObject((HGDIOBJ)local_8[0x7e]);
  if (local_8[0x7f] != -1) {
    DeleteObject((HGDIOBJ)local_8[0x7f]);
  }
  DeleteObject((HGDIOBJ)local_8[0x80]);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0051d907;
  puStack_14 = (undefined1 *)0x51d8ff;
  FUN_0043a38c(local_8,local_9 & 0xfc);
  return;
}

