/*
 * FUN_00548598 at 00548598
 * undefined __register FUN_00548598(int * param_1, int param_2)
 * Address ranges: 00548598-00548734
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00548598(int *param_1,int param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  char *pcStack_13c;
  undefined4 uStack_130;
  undefined1 *puStack_12c;
  undefined1 *puStack_128;
  int local_124;
  int local_120 [3];
  byte local_114 [256];
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_128 = &stack0xfffffffc;
  local_120[0] = 0;
  local_124 = 0;
  local_120[2] = 0;
  local_120[1] = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_12c = &LAB_00548735;
  uStack_130 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_130;
  puVar1 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if ((char)param_1[6] == '\0') {
    FUN_00402fe0(*param_1,local_114);
    FUN_00403fd4(&local_14,local_114);
    pcStack_13c = "AppObjList not open (active)";
    FUN_004040f0(&local_10,3);
    FUN_00403d94(local_10);
    puVar1 = puStack_128;
  }
  puStack_128 = puVar1;
  if (((char)local_8[0x10] != '\x02') && ((1 < *(byte *)(local_8 + 0x10) || (local_8[0x11] < 1)))) {
    FUN_00402fe0(*local_8,local_114);
    FUN_00403fd4(local_120 + 1,local_114);
    FUN_004040f0(local_120 + 2,3);
    FUN_00403d94(local_120[2]);
  }
  uVar2 = FUN_00548554((int)local_8,local_c);
  if ((char)uVar2 == '\0') {
    FUN_00402fe0(*local_8,local_114);
    FUN_00403fd4(&local_124,local_114);
    FUN_004040f0(local_120,3);
    FUN_00403d94(local_120[0]);
  }
  (**(code **)(*local_8 + 0x28))(local_8,local_c);
  *in_FS_OFFSET = pcStack_13c;
  FUN_00403dd4(&local_124,4);
  FUN_00403dd4(&local_14,2);
  return;
}

