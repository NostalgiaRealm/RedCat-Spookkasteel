/*
 * FUN_005406a0 at 005406a0
 * undefined __register FUN_005406a0(int * param_1, char param_2)
 * Address ranges: 005406a0-005406f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x540184 slot -1 for TAppObjComboEdit. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x540184 slot -1 for
   TAppObjComboEdit. Original bytes unchanged; names and types still inferred. */

void FUN_005406a0(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x5406ab;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_005406f4;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  FUN_00403094((int *)local_8[0x8a]);
  local_8[0x8a] = 0;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_005406fb;
  puStack_14 = (undefined1 *)0x5406f3;
  FUN_004f99a4(local_8,local_9 & 0xfc);
  return;
}

