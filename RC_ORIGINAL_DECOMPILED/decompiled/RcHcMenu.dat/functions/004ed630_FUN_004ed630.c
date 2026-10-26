/*
 * FUN_004ed630 at 004ed630
 * undefined __register FUN_004ed630(int * param_1, char param_2)
 * Address ranges: 004ed630-004ed710
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ed630(int *param_1,char param_2)

{
  int iVar1;
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  char *pcStack_12c;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte local_114 [256];
  int local_14;
  int local_10;
  byte local_9;
  int *local_8;
  
  local_10 = 0;
  local_14 = 0;
  puStack_118 = (undefined1 *)0x4ed646;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_11c = &LAB_004ed711;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  puStack_118 = &stack0xfffffffc;
  local_9 = extraout_DL;
  iVar1 = FUN_0045ba40(local_8[5]);
  if (iVar1 != 0) {
    FUN_00402fe0(*local_8,local_114);
    FUN_00403fd4(&local_14,local_114);
    pcStack_12c = "There are still bookmarks present";
    FUN_004040f0(&local_10,3);
    FUN_00403d94(local_10);
  }
  FUN_004ee658((uint)local_8);
  FUN_004ee6d4((uint)local_8);
  FUN_00403094((int *)local_8[5]);
  *(undefined1 *)(local_8 + 2) = 0;
  FUN_00403094((int *)local_8[1]);
  local_8[1] = 0;
  FUN_0045b45c(local_8,local_9 & 0xfc);
  *in_FS_OFFSET = pcStack_12c;
  FUN_00403dd4(&local_14,2);
  return;
}

