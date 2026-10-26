/*
 * FUN_005475bc at 005475bc
 * undefined __register FUN_005475bc(int * param_1, char param_2)
 * Address ranges: 005475bc-005477a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005475bc(int *param_1,char param_2)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  char *pcStack_13c;
  undefined4 uStack_130;
  undefined1 *puStack_12c;
  undefined1 *puStack_128;
  undefined4 uStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  byte local_114 [256];
  int local_14;
  int local_10;
  byte local_9;
  int *local_8;
  
  local_10 = 0;
  local_14 = 0;
  puStack_11c = (undefined1 *)0x5475d3;
  local_8 = FUN_00403434(param_1,param_2);
  local_9 = (byte)extraout_EDX;
  puStack_120 = &LAB_005477c6;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  puStack_12c = &LAB_005477a4;
  uStack_130 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_130;
  puStack_128 = &stack0xfffffffc;
  puStack_11c = &stack0xfffffffc;
  FUN_00403270((int *)local_8[0x1d],extraout_EDX,extraout_ECX);
  iVar1 = FUN_0045ba40(local_8[8]);
  if (iVar1 != 0) {
    FUN_00402fe0(*local_8,local_114);
    FUN_00403fd4(&local_14,local_114);
    pcStack_13c = "Still bookmarks left";
    FUN_004040f0(&local_10,3);
    FUN_00403d94(local_10);
  }
  FUN_00403094((int *)local_8[0x14]);
  local_8[0x14] = 0;
  FUN_00403094((int *)local_8[0x15]);
  local_8[0x15] = 0;
  FUN_00403094((int *)local_8[0xb]);
  FUN_00403094((int *)local_8[0xc]);
  FUN_00403094((int *)local_8[8]);
  FUN_00403094((int *)local_8[0x1f]);
  local_8[0x1f] = 0;
  FUN_00403094((int *)local_8[0x16]);
  local_8[0x16] = 0;
  FUN_00403094((int *)local_8[0x17]);
  local_8[0x17] = 0;
  FUN_00403094((int *)local_8[0x18]);
  local_8[0x18] = 0;
  FUN_00403094((int *)local_8[0x19]);
  local_8[0x19] = 0;
  FUN_00403094((int *)local_8[0x1a]);
  local_8[0x1a] = 0;
  FUN_00403094((int *)local_8[0x1b]);
  local_8[0x1b] = 0;
  FUN_00403094((int *)local_8[0x1c]);
  local_8[0x1c] = 0;
  FUN_00403094((int *)local_8[0x1d]);
  local_8[0x1d] = 0;
  FUN_00403094((int *)local_8[0xf]);
  local_8[0xf] = 0;
  FUN_00403094((int *)local_8[10]);
  local_8[10] = 0;
  FUN_00403094((int *)local_8[0x1e]);
  local_8[0x1e] = 0;
  *in_FS_OFFSET = pcStack_13c;
  FUN_0045b45c(local_8,local_9 & 0xfc);
  return;
}

