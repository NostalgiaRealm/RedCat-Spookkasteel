/*
 * FUN_004cf200 at 004cf200
 * undefined __register FUN_004cf200(int * param_1)
 * Address ranges: 004cf200-004cf318
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004cf200(int *param_1)

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
  int local_c;
  int *local_8;
  
  puStack_120 = &stack0xfffffffc;
  local_118 = 0;
  local_11c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_124 = &LAB_004cf319;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  local_8 = param_1;
  cVar1 = (**(code **)(*param_1 + 0x44))();
  if (cVar1 == '\0') {
    FUN_00402fe0(*local_8,local_114);
    FUN_00403fd4(&local_14,local_114);
    FUN_004040f0(&local_10,3);
    FUN_00403d94(local_10);
  }
  local_c = (**(code **)(*local_8 + 0xc))();
  if (*(char *)(local_c + 9) != '\x01') {
    FUN_00402fe0(*local_8,local_114);
    FUN_00403fd4(&local_11c,local_114);
    FUN_004040f0(&local_118,3);
    FUN_00403d94(local_118);
  }
  *in_FS_OFFSET = uStack_128;
  puStack_120 = &LAB_004cf320;
  puStack_124 = (undefined1 *)0x4cf30b;
  FUN_00403dd4(&local_11c,2);
  puStack_124 = (undefined1 *)0x4cf318;
  FUN_00403dd4(&local_14,2);
  return;
}

