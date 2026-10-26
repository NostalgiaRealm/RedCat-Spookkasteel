/*
 * FUN_004d60d0 at 004d60d0
 * undefined __register FUN_004d60d0(int * param_1)
 * Address ranges: 004d60d0-004d61fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004d60d0(int *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  char *pcStack_134;
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
  puStack_124 = &LAB_004d61fc;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if (*(char *)((int)param_1 + 9) != '\x02') {
    FUN_00402fe0(*param_1,local_114);
    FUN_00403fd4(&local_14,local_114);
    pcStack_134 = "not a SELECT query";
    FUN_004040f0(&local_10,3);
    FUN_00403d94(local_10);
    puVar1 = puStack_120;
  }
  puStack_120 = puVar1;
  cVar2 = (**(code **)(*local_8 + 0x38))();
  if (cVar2 == '\0') {
    FUN_00402fe0(*local_8,local_114);
    FUN_00403fd4(&local_11c,local_114);
    FUN_004040f0(&local_118,3);
    FUN_00403d94(local_118);
  }
  cVar2 = (**(code **)(*local_8 + 0x3c))();
  if (cVar2 == '\0') {
    local_c = 0;
  }
  else {
    local_c = (**(code **)(*local_8 + 0x1c))();
  }
  *in_FS_OFFSET = pcStack_134;
  FUN_00403dd4(&local_11c,2);
  FUN_00403dd4(&local_14,2);
  return;
}

