/*
 * FUN_00541ec0 at 00541ec0
 * undefined __register FUN_00541ec0(int * param_1, int param_2)
 * Address ranges: 00541ec0-00541f94
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00541ec0(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  byte bVar4;
  char *pcStack_150;
  undefined4 uStack_144;
  undefined1 *puStack_140;
  undefined1 *puStack_13c;
  int local_130 [7];
  byte local_114 [256];
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  bVar4 = 0;
  puStack_13c = &stack0xfffffffc;
  local_10 = 0;
  local_14 = 0;
  puStack_140 = &LAB_00541f95;
  uStack_144 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_144;
  local_c = param_2;
  local_8 = param_1;
  iVar1 = FUN_0048ec24(*(int *)(param_2 + 0x10));
  if (iVar1 < 1) {
    FUN_00402fe0(*local_8,local_114);
    FUN_00403fd4(&local_14,local_114);
    pcStack_150 = "SortOrder has no DisplayFields";
    FUN_004040f0(&local_10,3);
    FUN_00403d94(local_10);
  }
  FUN_0053f338((int *)local_8[0xa0],local_c);
  FUN_0048f02c(*(int **)(local_c + 0x10),0,local_130);
  piVar2 = local_130;
  piVar3 = local_8 + 0x90;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *piVar2;
    piVar2 = piVar2 + (uint)bVar4 * -2 + 1;
    piVar3 = piVar3 + (uint)bVar4 * -2 + 1;
  }
  *in_FS_OFFSET = pcStack_150;
  FUN_00403dd4(&local_14,2);
  return;
}

