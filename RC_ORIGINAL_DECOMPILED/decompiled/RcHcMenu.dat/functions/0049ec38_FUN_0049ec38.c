/*
 * FUN_0049ec38 at 0049ec38
 * undefined __register FUN_0049ec38(int * param_1, char param_2)
 * Address ranges: 0049ec38-0049ec72
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x49e8cc slot -1 for TDaviLoopProperties. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x49e8cc slot -1 for
   TDaviLoopProperties. Original bytes unchanged; names and types still inferred. */

void FUN_0049ec38(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x49ec43;
  local_8 = FUN_00403434(param_1,param_2);
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0049ec7a;
  uStack_14 = 0x49ec72;
  FUN_00412a48(local_8,extraout_DL & 0xfc);
  return;
}

