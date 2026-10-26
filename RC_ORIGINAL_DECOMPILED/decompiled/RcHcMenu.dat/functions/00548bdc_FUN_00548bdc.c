/*
 * FUN_00548bdc at 00548bdc
 * undefined __register FUN_00548bdc(int * param_1, undefined4 param_2)
 * Address ranges: 00548bdc-00548c82
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00548bdc(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  char *pcStack_12c;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte local_114 [256];
  int local_14;
  int local_10;
  undefined4 local_c;
  int *local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_10 = 0;
  local_14 = 0;
  puStack_11c = &LAB_00548c83;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  local_c = param_2;
  local_8 = param_1;
  iVar1 = FUN_0045ba40(param_1[8]);
  if (iVar1 < 1) {
    FUN_00402fe0(*local_8,local_114);
    FUN_00403fd4(&local_14,local_114);
    pcStack_12c = "Bookmarks already freed";
    FUN_004040f0(&local_10,3);
    FUN_00403d94(local_10);
  }
  (**(code **)(*(int *)local_8[8] + 0x18))((int *)local_8[8],local_c);
  *in_FS_OFFSET = pcStack_12c;
  FUN_00403dd4(&local_14,2);
  return;
}

