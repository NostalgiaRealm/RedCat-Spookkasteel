/*
 * FUN_005327c4 at 005327c4
 * undefined __register FUN_005327c4(int * param_1, char param_2)
 * Address ranges: 005327c4-00532811
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x531904 slot -1 for TAppObjComboItem. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x531904 slot -1 for
   TAppObjComboItem. Original bytes unchanged; names and types still inferred. */

void FUN_005327c4(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x5327cf;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_00532812;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  FUN_00403094((int *)local_8[3]);
  local_8[3] = 0;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00532819;
  puStack_14 = (undefined1 *)0x532811;
  FUN_00403084(local_8,local_9 & 0xfc);
  return;
}

