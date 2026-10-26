/*
 * FUN_00530c54 at 00530c54
 * undefined __register FUN_00530c54(int * param_1, char param_2)
 * Address ranges: 00530c54-00530caa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x530ab0 slot -1 for TDaviMultiEdit. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x530ab0 slot -1 for
   TDaviMultiEdit. Original bytes unchanged; names and types still inferred. */

void FUN_00530c54(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x530c5f;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_00530cab;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  FUN_00403094((int *)local_8[0x82]);
  FUN_00403094((int *)local_8[0x83]);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00530cb2;
  puStack_14 = (undefined1 *)0x530caa;
  FUN_0043a38c(local_8,local_9 & 0xfc);
  return;
}

