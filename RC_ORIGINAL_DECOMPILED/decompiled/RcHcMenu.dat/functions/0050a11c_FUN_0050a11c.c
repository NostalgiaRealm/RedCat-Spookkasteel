/*
 * FUN_0050a11c at 0050a11c
 * undefined __register FUN_0050a11c(int * param_1)
 * Address ranges: 0050a11c-0050a1c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0050a11c(int *param_1)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  char *pcStack_130;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte local_114 [256];
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_10 = 0;
  local_14 = 0;
  puStack_11c = &LAB_0050a1c6;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  local_8 = param_1;
  uVar1 = FUN_0040320c((int *)param_1[1],(int)&PTR_FUN_00509cac);
  if ((char)uVar1 == '\0') {
    FUN_00402fe0(*local_8,local_114);
    FUN_00403fd4(&local_14,local_114);
    pcStack_130 = "Owner is geen TDaviCustomDateCombo2";
    FUN_004040f0(&local_10,4);
    FUN_00403d94(local_10);
  }
  local_c = local_8[1];
  *in_FS_OFFSET = pcStack_130;
  FUN_00403dd4(&local_14,2);
  return;
}

