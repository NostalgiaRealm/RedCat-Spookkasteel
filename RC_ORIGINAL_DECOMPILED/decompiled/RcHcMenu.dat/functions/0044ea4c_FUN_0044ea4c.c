/*
 * FUN_0044ea4c at 0044ea4c
 * undefined __register FUN_0044ea4c(int * param_1, char param_2)
 * Address ranges: 0044ea4c-0044eac5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x447d68 slot -1 for TDataModule. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x447d68 slot -1 for
   TDataModule. Original bytes unchanged; names and types still inferred. */

void FUN_0044ea4c(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x44ea57;
  local_8 = FUN_00403434(param_1,param_2);
  local_9 = extraout_DL;
  if ((*(byte *)(local_8 + 8) & 8) == 0) {
    puStack_10 = (undefined1 *)0x44ea72;
    FUN_0040e444(*(int *)PTR_DAT_005725e4);
  }
  puStack_14 = &LAB_0044eac6;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  if ((char)local_8[0x12] != '\0') {
    puStack_10 = &stack0xfffffffc;
    (**(code **)(*local_8 + 0x34))();
  }
  FUN_0044f23c(DAT_005737d8,(int)local_8);
  FUN_00418f4c(local_8,local_9 & 0xfc);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0044eacd;
  puStack_14 = (undefined1 *)0x44eac5;
  FUN_0040e490(*(int *)PTR_DAT_005725e4);
  return;
}

