/*
 * FUN_00541a50 at 00541a50
 * undefined __register FUN_00541a50(int * param_1, int * param_2)
 * Address ranges: 00541a50-00541b7a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00541a50(int *param_1,int *param_2)

{
  undefined1 *puVar1;
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
  int *local_c;
  int *local_8;
  
  puStack_120 = &stack0xfffffffc;
  local_118 = 0;
  local_11c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_124 = &LAB_00541b7b;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  puVar1 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if (*(int *)(param_1[0xa0] + 0x210) == 0) {
    FUN_00402fe0(*param_1,local_114);
    FUN_00403fd4(&local_14,local_114);
    pcStack_134 = "No AppObjDesc assigned.";
    FUN_004040f0(&local_10,3);
    FUN_00403d94(local_10);
    puVar1 = puStack_120;
  }
  puStack_120 = puVar1;
  if (local_8[0x8b] == 0) {
    FUN_00402fe0(*local_8,local_114);
    FUN_00403fd4(&local_11c,local_114);
    FUN_004040f0(&local_118,3);
    FUN_00403d94(local_118);
  }
  FUN_00493768((int *)local_8[0x8b],local_c);
  *in_FS_OFFSET = pcStack_134;
  FUN_00403dd4(&local_11c,2);
  FUN_00403dd4(&local_14,2);
  return;
}

