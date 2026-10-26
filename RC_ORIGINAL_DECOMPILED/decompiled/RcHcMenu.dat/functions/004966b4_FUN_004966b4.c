/*
 * FUN_004966b4 at 004966b4
 * undefined __register FUN_004966b4(int * param_1, undefined4 param_2)
 * Address ranges: 004966b4-004967e8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004966b4(int *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_128;
  undefined1 *puStack_124;
  undefined1 *puStack_120;
  int local_11c;
  int local_118;
  byte local_114 [256];
  int local_14;
  int local_10;
  undefined4 local_c;
  int *local_8;
  
  puStack_120 = &stack0xfffffffc;
  local_118 = 0;
  local_11c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_124 = &LAB_004967e9;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  local_c = param_2;
  local_8 = param_1;
  cVar1 = (**(code **)(*param_1 + 0x4c))();
  if (cVar1 == '\0') {
    FUN_00402fe0(*local_8,local_114);
    FUN_00403fd4(&local_14,local_114);
    FUN_00496d84((int)local_8);
    FUN_004040f0(&local_10,4);
    FUN_00403d94(local_10);
  }
  cVar1 = (**(code **)(*local_8 + 0x50))();
  if (cVar1 != '\0') {
    FUN_00402fe0(*local_8,local_114);
    FUN_00403fd4(&local_11c,local_114);
    FUN_00496d84((int)local_8);
    FUN_004040f0(&local_118,4);
    FUN_00403d94(local_118);
  }
  (**(code **)(*local_8 + 0x14))(local_8,local_c);
  *in_FS_OFFSET = uStack_128;
  puStack_120 = &LAB_004967f0;
  puStack_124 = (undefined1 *)0x4967db;
  FUN_00403dd4(&local_11c,2);
  puStack_124 = (undefined1 *)0x4967e8;
  FUN_00403dd4(&local_14,2);
  return;
}

