/*
 * FUN_004b20b4 at 004b20b4
 * undefined __register FUN_004b20b4(int * param_1)
 * Address ranges: 004b20b4-004b21d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004b20b4(int *param_1)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_130;
  undefined1 *puStack_12c;
  undefined1 *puStack_128;
  int local_124;
  int local_120;
  byte local_11c [256];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int *local_8;
  
  puStack_128 = &stack0xfffffffc;
  local_120 = 0;
  local_124 = 0;
  local_18 = 0;
  local_1c = 0;
  puStack_12c = &LAB_004b21d4;
  uStack_130 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_130;
  local_8 = param_1;
  cVar1 = (**(code **)(*param_1 + 0x4c))();
  if (cVar1 == '\0') {
    FUN_00402fe0(*local_8,local_11c);
    FUN_00403fd4(&local_1c,local_11c);
    FUN_004040f0(&local_18,3);
    FUN_00403d94(local_18);
  }
  cVar1 = (**(code **)(*local_8 + 0x50))();
  if (cVar1 != '\0') {
    FUN_00402fe0(*local_8,local_11c);
    FUN_00403fd4(&local_124,local_11c);
    FUN_004040f0(&local_120,3);
    FUN_00403d94(local_120);
  }
  local_14 = local_8[0xe];
  local_10 = local_8[0xf];
  *in_FS_OFFSET = uStack_130;
  puStack_128 = &LAB_004b21db;
  puStack_12c = (undefined1 *)0x4b21c6;
  FUN_00403dd4(&local_124,2);
  puStack_12c = (undefined1 *)0x4b21d3;
  FUN_00403dd4(&local_1c,2);
  return;
}

