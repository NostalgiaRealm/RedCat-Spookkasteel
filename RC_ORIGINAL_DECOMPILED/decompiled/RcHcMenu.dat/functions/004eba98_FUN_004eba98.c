/*
 * FUN_004eba98 at 004eba98
 * undefined __register FUN_004eba98(int * param_1, int * param_2)
 * Address ranges: 004eba98-004ebb29
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004eba98(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_11c;
  undefined1 *puStack_118;
  undefined1 *puStack_114;
  byte local_110 [256];
  int local_10;
  int *local_c;
  int *local_8;
  
  puStack_114 = &stack0xfffffffc;
  local_10 = 0;
  puStack_118 = &LAB_004ebb2a;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  puVar1 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if (param_1[0x14] == 0) {
    FUN_00402fe0(*param_1,local_110);
    FUN_00403fd4(&local_10,local_110);
    FUN_00404038(&local_10,(undefined4 *)".GetDatabaseName: no database");
    FUN_00403d94(local_10);
    puVar1 = puStack_114;
  }
  puStack_114 = puVar1;
  FUN_00403e04(local_c,*(undefined4 **)(local_8[0x14] + 0x88));
  *in_FS_OFFSET = uStack_11c;
  puStack_114 = &LAB_004ebb31;
  puStack_118 = (undefined1 *)0x4ebb29;
  FUN_00403db0(&local_10);
  return;
}

