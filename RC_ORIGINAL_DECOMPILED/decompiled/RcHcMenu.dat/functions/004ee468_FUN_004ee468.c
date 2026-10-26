/*
 * FUN_004ee468 at 004ee468
 * undefined __register FUN_004ee468(int * param_1)
 * Address ranges: 004ee468-004ee579
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ee468(int *param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  char *pcStack_130;
  undefined4 uStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  int local_118;
  int local_114;
  byte local_110 [256];
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_114 = 0;
  local_118 = 0;
  local_c = 0;
  local_10 = 0;
  puStack_120 = &LAB_004ee57a;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if ((char)param_1[0xd] == '\x02') {
    FUN_00402fe0(*param_1,local_110);
    FUN_00403fd4(&local_10,local_110);
    pcStack_130 = "No active query";
    FUN_004040f0(&local_c,3);
    FUN_00403d94(local_c);
    puVar1 = puStack_11c;
  }
  puStack_11c = puVar1;
  if (local_8[8] == 0) {
    FUN_00402fe0(*local_8,local_110);
    FUN_00403fd4(&local_118,local_110);
    FUN_004040f0(&local_114,3);
    FUN_00403d94(local_114);
  }
  *(undefined1 *)(local_8 + 0xd) = 0;
  *in_FS_OFFSET = pcStack_130;
  FUN_00403dd4(&local_118,2);
  FUN_00403dd4(&local_10,2);
  return;
}

