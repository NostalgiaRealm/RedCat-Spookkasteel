/*
 * FUN_004922c4 at 004922c4
 * undefined __register FUN_004922c4(int param_1, int param_2)
 * Address ranges: 004922c4-0049235c;0049239d-004923b2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004922c4(int param_1,int param_2)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_17c;
  undefined1 *puStack_178;
  undefined1 *puStack_174;
  undefined4 uStack_170;
  undefined1 *puStack_16c;
  undefined1 *puStack_168;
  int local_58;
  undefined2 local_54;
  short local_52;
  undefined2 local_3e;
  int local_14;
  undefined1 local_10;
  int local_c;
  int local_8;
  
  puStack_168 = &stack0xfffffffc;
  puStack_174 = &stack0xfffffffc;
  local_58 = 0;
  puStack_16c = &LAB_004923b3;
  uStack_170 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_170;
  puStack_178 = &LAB_0049235d;
  uStack_17c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_17c;
  local_c = param_2;
  local_8 = param_1;
  (**(code **)(**(int **)(param_1 + 0x28) + 0x38))
            (*(int **)(param_1 + 0x28),*(undefined4 *)(param_2 + 0x1c),param_2);
  local_54 = 1;
  uVar1 = *(int *)(local_c + 0x2c) + 0x8000;
  if (0xffff < uVar1) {
    uVar1 = thunk_FUN_00402874(uVar1);
  }
  local_52 = (short)uVar1 + -0x8000;
  local_3e = 0xffff;
  local_14 = local_c;
  local_10 = 0;
  FUN_00496e20(*(int **)(local_8 + 0x2c),(undefined4 *)&local_54);
  *in_FS_OFFSET = uStack_17c;
  *in_FS_OFFSET = uStack_170;
  puStack_168 = &LAB_004923ba;
  puStack_16c = (undefined1 *)0x4923b2;
  FUN_00403db0(&local_58);
  return;
}

