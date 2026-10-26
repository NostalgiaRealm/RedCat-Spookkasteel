/*
 * FUN_00548cf4 at 00548cf4
 * undefined __register FUN_00548cf4(int * param_1, undefined4 param_2, undefined1 param_3)
 * Address ranges: 00548cf4-00548e31
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00548cf4(int *param_1,undefined4 param_2,undefined1 param_3)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  char *pcStack_13c;
  undefined4 uStack_130;
  undefined1 *puStack_12c;
  undefined1 *puStack_128;
  int local_120;
  int local_11c;
  byte local_118 [256];
  int local_18;
  int local_14;
  undefined1 local_e;
  undefined1 local_d;
  undefined4 local_c;
  int *local_8;
  
  puStack_128 = &stack0xfffffffc;
  local_11c = 0;
  local_120 = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_12c = &LAB_00548e32;
  uStack_130 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_130;
  puVar1 = &stack0xfffffffc;
  local_d = param_3;
  local_c = param_2;
  local_8 = param_1;
  if ((char)param_1[6] == '\0') {
    FUN_00402fe0(*param_1,local_118);
    FUN_00403fd4(&local_18,local_118);
    pcStack_13c = "AppObjList not open (active)";
    FUN_004040f0(&local_14,3);
    FUN_00403d94(local_14);
    puVar1 = puStack_128;
  }
  puStack_128 = puVar1;
  if (((char)local_8[0x10] != '\x02') && ((1 < *(byte *)(local_8 + 0x10) || (local_8[0x11] < 1)))) {
    FUN_00402fe0(*local_8,local_118);
    FUN_00403fd4(&local_120,local_118);
    FUN_004040f0(&local_11c,3);
    FUN_00403d94(local_11c);
  }
  local_e = (**(code **)(*local_8 + 0x2c))(local_8,local_c,local_d);
  FUN_0054a2b0(local_8);
  *in_FS_OFFSET = pcStack_13c;
  FUN_00403dd4(&local_120,2);
  FUN_00403dd4(&local_18,2);
  return;
}

