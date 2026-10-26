/*
 * FUN_004ceee4 at 004ceee4
 * undefined __register FUN_004ceee4(int * param_1, char param_2)
 * Address ranges: 004ceee4-004ceff0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ceee4(int *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  char *pcStack_148;
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
  puStack_118 = (undefined1 *)0x4ceefa;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_11c = &LAB_004cf013;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  puStack_128 = &LAB_004ceff1;
  uStack_12c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_12c;
  puStack_124 = &stack0xfffffffc;
  puStack_118 = &stack0xfffffffc;
  local_9 = extraout_DL;
  if (local_8[9] != 0) {
    puStack_124 = &stack0xfffffffc;
    puStack_118 = &stack0xfffffffc;
    FUN_00402fe0(*local_8,local_114);
    FUN_00403fd4(&local_14,local_114);
    pcStack_148 = "Check if all queries and appObjLists are destroyed.";
    FUN_004040f0(&local_10,7);
    FUN_00403d94(local_10);
  }
  FUN_00403094((int *)local_8[2]);
  local_8[2] = 0;
  cVar4 = (**(code **)(*local_8 + 0x44))();
  if (cVar4 != '\0') {
    FUN_004cf660(local_8);
  }
  uVar3 = local_8[1];
  piVar1 = (int *)(uVar3 + 0x1c);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  if (SBORROW4(iVar2,1)) {
    thunk_FUN_00402874(uVar3);
  }
  FUN_00403094((int *)local_8[4]);
  local_8[4] = 0;
  *in_FS_OFFSET = pcStack_148;
  FUN_0045b45c(local_8,local_9 & 0xfc);
  return;
}

