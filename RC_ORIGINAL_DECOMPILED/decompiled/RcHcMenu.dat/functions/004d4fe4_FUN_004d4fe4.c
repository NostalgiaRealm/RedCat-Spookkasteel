/*
 * FUN_004d4fe4 at 004d4fe4
 * undefined __register FUN_004d4fe4(int * param_1, char param_2)
 * Address ranges: 004d4fe4-004d50d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004d4fe4(int *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  char *pcStack_138;
  undefined4 uStack_12c;
  undefined1 *puStack_128;
  undefined1 *puStack_124;
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
  puStack_118 = (undefined1 *)0x4d4ffa;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_11c = &LAB_004d50f8;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  puStack_128 = &LAB_004d50d6;
  uStack_12c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_12c;
  puStack_124 = &stack0xfffffffc;
  puStack_118 = &stack0xfffffffc;
  local_9 = extraout_DL;
  if (local_8[4] != 0) {
    puStack_124 = &stack0xfffffffc;
    puStack_118 = &stack0xfffffffc;
    FUN_00402fe0(*local_8,local_114);
    FUN_00403fd4(&local_14,local_114);
    pcStack_138 = "bookmark(s) not freed";
    FUN_004040f0(&local_10,3);
    FUN_00403d94(local_10);
  }
  uVar3 = local_8[1];
  piVar1 = (int *)(uVar3 + 0x24);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  if (SBORROW4(iVar2,1)) {
    thunk_FUN_00402874(uVar3);
  }
  if ((char)local_8[2] != '\0') {
    FUN_00403094((int *)local_8[1]);
  }
  FUN_00403094((int *)local_8[7]);
  local_8[7] = 0;
  FUN_00403094((int *)local_8[8]);
  local_8[8] = 0;
  *in_FS_OFFSET = pcStack_138;
  FUN_0045b45c(local_8,local_9 & 0xfc);
  return;
}

