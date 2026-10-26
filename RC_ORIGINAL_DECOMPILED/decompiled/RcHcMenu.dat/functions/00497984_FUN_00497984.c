/*
 * FUN_00497984 at 00497984
 * undefined __register FUN_00497984(int param_1, int param_2)
 * Address ranges: 00497984-004979eb;00497a2f-00497a49;00497aa9-00497ad3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00497984(int param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14c;
  undefined1 *puStack_148;
  undefined1 *puStack_144;
  undefined4 uStack_140;
  undefined1 *puStack_13c;
  undefined1 *puStack_138;
  undefined4 uStack_134;
  undefined1 *puStack_130;
  undefined1 *puStack_12c;
  int local_11c [66];
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  puStack_12c = &stack0xfffffffc;
  puStack_138 = &stack0xfffffffc;
  puStack_144 = &stack0xfffffffc;
  local_11c[1] = 0;
  local_11c[0] = 0;
  local_14 = 0;
  local_10 = 0;
  puStack_130 = &LAB_00497ad4;
  uStack_134 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_134;
  puStack_13c = &LAB_00497a4a;
  uStack_140 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_140;
  puStack_148 = &LAB_004979ec;
  uStack_14c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14c;
  local_c = param_2;
  local_8 = param_1;
  FUN_00403e48(&local_10,*(int *)(param_2 + 0xc));
  *in_FS_OFFSET = uStack_14c;
  puStack_144 = (undefined1 *)0x497a40;
  (**(code **)(**(int **)(local_8 + 4) + 0x38))(*(int **)(local_8 + 4),local_10,local_c);
  *in_FS_OFFSET = uStack_140;
  *in_FS_OFFSET = uStack_134;
  puStack_12c = &LAB_00497adb;
  puStack_130 = (undefined1 *)0x497ac6;
  FUN_00403dd4(local_11c,2);
  puStack_130 = (undefined1 *)0x497ad3;
  FUN_00403dd4(&local_14,2);
  return;
}

