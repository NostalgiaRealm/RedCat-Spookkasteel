/*
 * FUN_004932cc at 004932cc
 * undefined __register FUN_004932cc(int * param_1, char param_2)
 * Address ranges: 004932cc-0049331d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x48e834 slot -1 for TAppObj. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x48e834 slot -1 for TAppObj.
   Original bytes unchanged; names and types still inferred. */

void FUN_004932cc(int *param_1,char param_2)

{
  undefined4 extraout_ECX;
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x4932d7;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_0049331e;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  local_9 = extraout_DL;
  if (local_8[6] != 0) {
    puStack_10 = &stack0xfffffffc;
    FUN_00492aa8(local_8[6],local_8,extraout_ECX);
  }
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00493325;
  puStack_14 = (undefined1 *)0x49331d;
  FUN_0045f724(local_8,local_9 & 0xfc);
  return;
}

