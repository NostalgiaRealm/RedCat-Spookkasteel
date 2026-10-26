/*
 * FUN_005665b4 at 005665b4
 * undefined __register FUN_005665b4(int param_1, int * param_2)
 * Address ranges: 005665b4-005666b8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005665b4(int param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint *in_FS_OFFSET;
  uint uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  byte local_34 [36];
  int local_10;
  int *local_c;
  int local_8;
  
  puStack_3c = &stack0xfffffffc;
  local_10 = 0;
  puStack_40 = &LAB_005666b9;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = (uint)&uStack_44;
  local_c = param_2;
  local_8 = param_1;
  FUN_00565978(param_1,local_34);
  FUN_00403fd4(&local_10,local_34);
  (**(code **)(*local_c + 4))(local_c,"General","PlayerName",local_10);
  (**(code **)(*local_c + 0xc))
            (local_c,"General","DifficultyLevel",*(undefined1 *)(*(int *)(local_8 + 0xc) + 8));
  iVar2 = *(int *)(*(int *)(*(int *)(local_8 + 0x10) + 0xc) + 0x24);
  uVar3 = iVar2 - 1;
  if (SBORROW4(iVar2,1)) {
    uVar3 = thunk_FUN_00402874(uVar3);
  }
  (**(code **)(*local_c + 0xc))(local_c,"General","ControlType",uVar3);
  (**(code **)(*local_c + 0x14))
            (local_c,"General","GameType",
             CONCAT31((int3)((uint)*(int *)PTR_DAT_00572108 >> 8),
                      *(char *)(*(int *)PTR_DAT_00572108 + 0x100) == '\x01'));
  (**(code **)(*local_c + 0xc))
            (local_c,"General","QuickPlayLevel",*(undefined4 *)(*(int *)(local_8 + 0x18) + 0xc));
  bVar1 = *(byte *)(*(int *)(local_8 + 0x18) + 8);
  (**(code **)(*local_c + 0xc))(local_c,"General","QuickPlayDifficultyLevel");
  *in_FS_OFFSET = (uint)bVar1;
  FUN_00403db0(&local_10);
  return;
}

