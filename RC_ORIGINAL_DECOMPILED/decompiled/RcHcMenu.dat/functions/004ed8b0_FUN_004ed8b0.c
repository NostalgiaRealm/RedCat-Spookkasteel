/*
 * FUN_004ed8b0 at 004ed8b0
 * undefined __register FUN_004ed8b0(int * param_1, char param_2)
 * Address ranges: 004ed8b0-004ed9e4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ed8b0(int *param_1,char param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  char *pcStack_138;
  undefined4 uStack_12c;
  undefined1 *puStack_128;
  undefined1 *puStack_124;
  int local_120;
  int local_11c;
  byte local_118 [256];
  int local_18;
  int local_14;
  int local_10;
  char local_9;
  int *local_8;
  
  puStack_124 = &stack0xfffffffc;
  local_11c = 0;
  local_120 = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_128 = &LAB_004ed9e5;
  uStack_12c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_12c;
  local_10 = 0;
  local_9 = param_2;
  local_8 = param_1;
  if (param_2 == '\0') {
    puVar1 = &stack0xfffffffc;
    if (*(char *)((int)param_1 + 0x35) == '\0') {
      FUN_00402fe0(*param_1,local_118);
      FUN_00403fd4(&local_120,local_118);
      pcStack_138 = " Internal inconsistency";
      FUN_004040f0(&local_11c,3);
      FUN_00403d94(local_11c);
      puVar1 = puStack_124;
    }
    puStack_124 = puVar1;
    local_10 = local_8[8];
  }
  else if (param_2 == '\x01') {
    local_10 = param_1[9];
    puStack_124 = &stack0xfffffffc;
  }
  else {
    puStack_124 = &stack0xfffffffc;
    if (param_2 == '\x02') {
      puStack_124 = &stack0xfffffffc;
      FUN_00402fe0(*param_1,local_118);
      FUN_00403fd4(&local_18,local_118);
      pcStack_138 = "No active query";
      FUN_004040f0(&local_14,3);
      FUN_00403d94(local_14);
    }
  }
  *in_FS_OFFSET = pcStack_138;
  FUN_00403dd4(&local_120,2);
  FUN_00403dd4(&local_18,2);
  return;
}

