/*
 * FUN_004e54bc at 004e54bc
 * undefined __register FUN_004e54bc(int * param_1)
 * Address ranges: 004e54bc-004e55f0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004e54bc(int *param_1)

{
  undefined1 *puVar1;
  int iVar2;
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
  puStack_120 = &LAB_004e55f1;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if (param_1[0xd] == 0) {
    FUN_00402fe0(*param_1,local_110);
    FUN_00403fd4(&local_10,local_110);
    pcStack_130 = " Connection is nil";
    FUN_004040f0(&local_c,3);
    FUN_00403d94(local_c);
    puVar1 = puStack_11c;
  }
  puStack_11c = puVar1;
  if ((char)local_8[6] == '\0') {
    FUN_00402fe0(*local_8,local_110);
    FUN_00403fd4(&local_118,local_110);
    FUN_004040f0(&local_114,3);
    FUN_00403d94(local_114);
  }
  (**(code **)(*local_8 + 0x88))();
  iVar2 = FUN_00549b64((int)local_8);
  iVar2 = FUN_004cecf8(*(int **)(local_8[0xd] + 4),*(int *)(iVar2 + 0x34));
  local_8[5] = iVar2;
  *in_FS_OFFSET = pcStack_130;
  FUN_00403dd4(&local_118,2);
  FUN_00403dd4(&local_10,2);
  return;
}

