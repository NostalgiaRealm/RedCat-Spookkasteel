/*
 * FUN_00547c54 at 00547c54
 * undefined __register FUN_00547c54(int * param_1)
 * Address ranges: 00547c54-00547d84
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00547c54(int *param_1)

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
  undefined1 local_9;
  int *local_8;
  
  puStack_120 = &stack0xfffffffc;
  local_118 = 0;
  local_11c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_124 = &LAB_00547d85;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  puVar1 = &stack0xfffffffc;
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
  if (((char)local_8[0x10] != '\x02') && ((1 < *(byte *)(local_8 + 0x10) || (local_8[0x11] < 1)))) {
    FUN_00402fe0(*local_8,local_114);
    FUN_00403fd4(&local_11c,local_114);
    FUN_004040f0(&local_118,3);
    FUN_00403d94(local_118);
  }
  local_9 = (**(code **)(*local_8 + 0x18))();
  FUN_0054a2b0(local_8);
  *in_FS_OFFSET = pcStack_134;
  FUN_00403dd4(&local_11c,2);
  FUN_00403dd4(&local_14,2);
  return;
}

