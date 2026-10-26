/*
 * FUN_004d6cb4 at 004d6cb4
 * undefined __register FUN_004d6cb4(int * param_1, undefined4 param_2)
 * Address ranges: 004d6cb4-004d6e17;004d6f22-004d6f5c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004d6cb4(int *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  int local_158 [12];
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  int local_118;
  byte local_114 [208];
  undefined4 uStack_44;
  char *pcStack_40;
  char *pcStack_3c;
  undefined1 *puStack_38;
  char *pcStack_34;
  char *pcStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_10;
  undefined4 local_c;
  int *local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_10 = 0x2a;
  do {
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  puStack_24 = &LAB_004d6f5d;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puVar1 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if (*(char *)((int)param_1 + 9) != '\x02') {
    puStack_2c = (undefined1 *)0x4d6cf4;
    FUN_00402fe0(*param_1,local_114);
    puStack_2c = (undefined1 *)0x4d6d02;
    FUN_00403fd4((int *)&stack0xffffffec,local_114);
    pcStack_30 = ".LoadAppObj: ";
    pcStack_34 = "not a SELECT query";
    puStack_38 = (undefined1 *)0x4d6d1c;
    FUN_004040f0(&local_10,3);
    puStack_38 = (undefined1 *)0x4d6d2e;
    FUN_00403d94(local_10);
    puVar1 = puStack_20;
  }
  puStack_20 = puVar1;
  puStack_38 = (undefined1 *)0x4d6d36;
  cVar2 = (**(code **)(*local_8 + 0x38))();
  if (cVar2 == '\0') {
    puStack_38 = (undefined1 *)0x4d6d4a;
    FUN_00402fe0(*local_8,local_114);
    puStack_38 = (undefined1 *)0x4d6d5b;
    FUN_00403fd4(&local_11c,local_114);
    puStack_38 = (undefined1 *)local_11c;
    pcStack_3c = ".LoadAppObj: ";
    pcStack_40 = "Query isn\'t open.";
    uStack_44 = 0x4d6d7b;
    FUN_004040f0(&local_118,3);
    uStack_44 = 0x4d6d90;
    FUN_00403d94(local_118);
  }
  puStack_38 = (undefined1 *)0x4d6d98;
  cVar2 = (**(code **)(*local_8 + 0x3c))();
  if (cVar2 == '\0') {
    puStack_38 = (undefined1 *)0x4d6dac;
    FUN_00402fe0(*local_8,local_114);
    puStack_38 = (undefined1 *)0x4d6dbd;
    FUN_00403fd4(&local_124,local_114);
    puStack_38 = (undefined1 *)local_124;
    pcStack_3c = ".LoadAppObj: ";
    pcStack_40 = "Record does not exist";
    uStack_44 = 0x4d6ddd;
    FUN_004040f0(&local_120,3);
    uStack_44 = 0x4d6df2;
    FUN_00403d94(local_120);
  }
  pcStack_3c = &LAB_004d6e18;
  pcStack_40 = (char *)*in_FS_OFFSET;
  *in_FS_OFFSET = &pcStack_40;
  uStack_44 = 0x4d6e0b;
  puStack_38 = &stack0xfffffffc;
  (**(code **)(*local_8 + 0x30))(local_8,local_c);
  *in_FS_OFFSET = pcStack_40;
  *in_FS_OFFSET = pcStack_34;
  puStack_2c = &LAB_004d6f64;
  pcStack_30 = (char *)0x4d6f3f;
  FUN_00403dd4(local_158,6);
  pcStack_30 = (char *)0x4d6f4f;
  FUN_00403dd4(&local_128,5);
  pcStack_30 = (char *)0x4d6f5c;
  FUN_00403dd4((int *)&stack0xffffffec,2);
  return;
}

