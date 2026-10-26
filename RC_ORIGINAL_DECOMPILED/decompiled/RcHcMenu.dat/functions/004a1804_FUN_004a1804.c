/*
 * FUN_004a1804 at 004a1804
 * undefined __register FUN_004a1804(int param_1, int * param_2)
 * Address ranges: 004a1804-004a18be
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a1804(int param_1,int *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  byte local_114 [256];
  int local_14;
  byte local_d;
  int local_c;
  int *local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_14 = 0;
  puStack_120 = &LAB_004a18bf;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  local_c = param_1;
  local_8 = param_2;
  FUN_00412b60();
  local_d = FUN_004a17a4();
  (**(code **)(*local_8 + 4))
            (local_8,"GraphicName",local_d,&LAB_004a171c,local_c,&DAT_004a1604,local_c);
  puVar3 = &LAB_004a14dc;
  puVar1 = &LAB_004a157c;
  iVar2 = local_c;
  iVar4 = local_c;
  FUN_00402fe0(**(int **)(local_c + 0xc),local_114);
  FUN_00403fd4(&local_14,local_114);
  (**(code **)(*local_8 + 8))
            (local_8,local_14,*(char *)(local_c + 4) == '\0' & local_d,puVar1,iVar2,puVar3,iVar4);
  *in_FS_OFFSET = puVar1;
  FUN_00403db0(&local_14);
  return;
}

