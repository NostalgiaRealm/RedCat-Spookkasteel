/*
 * FUN_0049278c at 0049278c
 * undefined __register FUN_0049278c(int * param_1)
 * Address ranges: 0049278c-00492847;00492893-004928b8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0049278c(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_13c;
  undefined1 *puStack_138;
  undefined1 *puStack_134;
  undefined4 uStack_130;
  undefined1 *puStack_12c;
  undefined1 *puStack_128;
  int local_118;
  byte local_114 [256];
  int local_14;
  int local_10;
  undefined4 local_c;
  int *local_8;
  
  puStack_128 = &stack0xfffffffc;
  puStack_134 = &stack0xfffffffc;
  local_118 = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_12c = &LAB_004928b9;
  uStack_130 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_130;
  puStack_138 = &LAB_00492848;
  uStack_13c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_13c;
  local_8 = param_1;
  iVar1 = (**(code **)(*(int *)param_1[0xe] + 0x14))();
  if (iVar1 < 1) {
    FUN_00402fe0(*local_8,local_114);
    FUN_00403fd4(&local_14,local_114);
    FUN_004040f0(&local_10,4);
    FUN_00403d94(local_10);
  }
  piVar2 = (int *)(**(code **)(*(int *)local_8[0xe] + 0x18))((int *)local_8[0xe],0);
  local_c = FUN_00403224(piVar2,(int)&DAT_0048e950);
  *in_FS_OFFSET = uStack_13c;
  *in_FS_OFFSET = uStack_130;
  puStack_128 = &LAB_004928c0;
  puStack_12c = (undefined1 *)0x4928ab;
  FUN_00403db0(&local_118);
  puStack_12c = (undefined1 *)0x4928b8;
  FUN_00403dd4(&local_14,2);
  return;
}

