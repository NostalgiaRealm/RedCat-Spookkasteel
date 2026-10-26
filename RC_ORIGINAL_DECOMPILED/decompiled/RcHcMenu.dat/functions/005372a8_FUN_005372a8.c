/*
 * FUN_005372a8 at 005372a8
 * undefined __register FUN_005372a8(int * param_1)
 * Address ranges: 005372a8-00537357
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005372a8(int *param_1)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  char *pcStack_12c;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte local_114 [256];
  int local_14;
  int local_10;
  undefined4 local_c;
  int *local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_10 = 0;
  local_14 = 0;
  puStack_11c = &LAB_00537358;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  local_8 = param_1;
  uVar1 = FUN_0040320c((int *)param_1[0xf],(int)&PTR_FUN_00536a28);
  if ((char)uVar1 == '\0') {
    FUN_00402fe0(*local_8,local_114);
    FUN_00403fd4(&local_14,local_114);
    pcStack_12c = "Header must be a TOAGridHeader.";
    FUN_004040f0(&local_10,3);
    FUN_00403d94(local_10);
  }
  local_c = FUN_00403224((int *)local_8[0xf],(int)&PTR_FUN_00536a28);
  *in_FS_OFFSET = pcStack_12c;
  FUN_00403dd4(&local_14,2);
  return;
}

