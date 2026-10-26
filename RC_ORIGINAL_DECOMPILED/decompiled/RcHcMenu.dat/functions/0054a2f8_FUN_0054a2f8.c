/*
 * FUN_0054a2f8 at 0054a2f8
 * undefined __register FUN_0054a2f8(int * param_1, int param_2)
 * Address ranges: 0054a2f8-0054a40d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0054a2f8(int *param_1,int param_2)

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
  int local_c;
  int *local_8;
  
  puStack_120 = &stack0xfffffffc;
  local_118 = 0;
  local_11c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_124 = &LAB_0054a40e;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  puVar1 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if ((char)param_1[6] == '\0') {
    FUN_00402fe0(*param_1,local_114);
    FUN_00403fd4(&local_14,local_114);
    pcStack_134 = "AppObjList not open (active)";
    FUN_004040f0(&local_10,3);
    FUN_00403d94(local_10);
    puVar1 = puStack_120;
  }
  puStack_120 = puVar1;
  if (local_c == 0) {
    FUN_00402fe0(*local_8,local_114);
    FUN_00403fd4(&local_11c,local_114);
    FUN_004040f0(&local_118,3);
    FUN_00403d94(local_118);
  }
  (**(code **)(*local_8 + 0x68))(local_8,local_c);
  *in_FS_OFFSET = pcStack_134;
  FUN_00403dd4(&local_11c,2);
  FUN_00403dd4(&local_14,2);
  return;
}

