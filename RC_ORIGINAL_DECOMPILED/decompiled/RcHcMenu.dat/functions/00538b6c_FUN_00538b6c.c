/*
 * FUN_00538b6c at 00538b6c
 * undefined __register FUN_00538b6c(int * param_1)
 * Address ranges: 00538b6c-00538db8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00538b6c(int *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  char *pcStack_144;
  undefined4 uStack_138;
  undefined1 *puStack_134;
  undefined1 *puStack_130;
  int local_12c;
  int local_128 [5];
  byte local_114 [256];
  int local_14;
  int local_10;
  undefined4 local_c;
  int *local_8;
  
  puStack_130 = &stack0xfffffffc;
  local_128[0] = 0;
  local_12c = 0;
  local_128[2] = 0;
  local_128[1] = 0;
  local_128[4] = 0;
  local_128[3] = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_134 = &LAB_00538db9;
  uStack_138 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_138;
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if (param_1[0xa4] == 0) {
    FUN_00402fe0(*param_1,local_114);
    FUN_00403fd4(&local_14,local_114);
    pcStack_144 = "AppObjList not assigned.";
    FUN_004040f0(&local_10,3);
    FUN_00403d94(local_10);
    puVar1 = puStack_130;
  }
  puStack_130 = puVar1;
  if (*(char *)(local_8[0xa4] + 0x18) == '\0') {
    FUN_00402fe0(*local_8,local_114);
    FUN_00403fd4(local_128 + 3,local_114);
    FUN_004040f0(local_128 + 4,3);
    FUN_00403d94(local_128[4]);
  }
  cVar2 = (char)local_8[0xb6];
  if (cVar2 == '\x01') {
    cVar2 = (**(code **)(*(int *)local_8[0xa4] + 100))();
    if (cVar2 != '\0') {
      FUN_00402fe0(*local_8,local_114);
      FUN_00403fd4(local_128 + 1,local_114);
      pcStack_144 = "AppObjList is empty.";
      FUN_004040f0(local_128 + 2,3);
      FUN_00403d94(local_128[2]);
    }
    local_c = FUN_00549b80(local_8[0xa4]);
  }
  else if (cVar2 == '\x02') {
    local_c = FUN_00549b80(local_8[0xa4]);
  }
  else if (cVar2 == '\x03') {
    local_c = FUN_00549b80(local_8[0xa4]);
  }
  else {
    FUN_00402fe0(*local_8,local_114);
    FUN_00403fd4(&local_12c,local_114);
    FUN_004040f0(local_128,3);
    FUN_00403d94(local_128[0]);
    local_c = 0;
  }
  *in_FS_OFFSET = pcStack_144;
  FUN_00403dd4(&local_12c,6);
  FUN_00403dd4(&local_14,2);
  return;
}

