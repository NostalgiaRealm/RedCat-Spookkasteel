/*
 * FUN_005162b8 at 005162b8
 * undefined __register FUN_005162b8(int * param_1, char param_2)
 * Address ranges: 005162b8-00516310
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x5159ac slot -1 for TAppObjListSelection. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x5159ac slot -1 for
   TAppObjListSelection. Original bytes unchanged; names and types still inferred. */

void FUN_005162b8(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x5162c3;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_00516311;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  FUN_0045b8fc((undefined4 *)local_8[2]);
  FUN_00403094((int *)local_8[2]);
  local_8[2] = 0;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00516318;
  puStack_14 = (undefined1 *)0x516310;
  FUN_0045b45c(local_8,local_9 & 0xfc);
  return;
}

