/*
 * FUN_0052e924 at 0052e924
 * undefined __register FUN_0052e924(int * param_1, char param_2)
 * Address ranges: 0052e924-0052e971
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x52b8d8 slot -1 for TAppObjMemListBookMark. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x52b8d8 slot -1 for
   TAppObjMemListBookMark. Original bytes unchanged; names and types still inferred. */

void FUN_0052e924(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x52e92f;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_0052e972;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  FUN_00403094((int *)local_8[4]);
  local_8[4] = 0;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0052e979;
  puStack_14 = (undefined1 *)0x52e971;
  FUN_0054b738(local_8,local_9 & 0xfc);
  return;
}

