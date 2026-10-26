/*
 * FUN_0054823c at 0054823c
 * undefined __register FUN_0054823c(int * param_1, undefined4 param_2)
 * Address ranges: 0054823c-00548372
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0054823c(int *param_1,undefined4 param_2)

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
  undefined1 local_d;
  undefined4 local_c;
  int *local_8;
  
  puStack_124 = &stack0xfffffffc;
  local_11c = 0;
  local_120 = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_128 = &LAB_00548373;
  uStack_12c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_12c;
  puVar1 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if ((char)param_1[6] == '\0') {
    FUN_00402fe0(*param_1,local_118);
    FUN_00403fd4(&local_18,local_118);
    pcStack_138 = "AppObjList not open (active)";
    FUN_004040f0(&local_14,3);
    FUN_00403d94(local_14);
    puVar1 = puStack_124;
  }
  puStack_124 = puVar1;
  if (((char)local_8[0x10] != '\x02') && ((1 < *(byte *)(local_8 + 0x10) || (local_8[0x11] < 1)))) {
    FUN_00402fe0(*local_8,local_118);
    FUN_00403fd4(&local_120,local_118);
    FUN_004040f0(&local_11c,3);
    FUN_00403d94(local_11c);
  }
  local_d = (**(code **)(*local_8 + 0x24))(local_8,local_c);
  FUN_0054a2b0(local_8);
  *in_FS_OFFSET = pcStack_138;
  FUN_00403dd4(&local_120,2);
  FUN_00403dd4(&local_18,2);
  return;
}

