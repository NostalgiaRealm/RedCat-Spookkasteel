/*
 * FUN_004e9e2c at 004e9e2c
 * undefined __register FUN_004e9e2c(int * param_1, int * param_2)
 * Address ranges: 004e9e2c-004e9f96
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004e9e2c(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
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
  puStack_124 = &LAB_004e9f97;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  puVar1 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if (param_2 == (int *)0x0) {
    FUN_00402fe0(*param_1,local_114);
    FUN_00403fd4(&local_14,local_114);
    pcStack_134 = " Parameter cannot be nil";
    FUN_004040f0(&local_10,3);
    FUN_00403d94(local_10);
    puVar1 = puStack_120;
  }
  puStack_120 = puVar1;
  uVar2 = FUN_0040320c(local_c,(int)&PTR_FUN_004e9cf4);
  if ((char)uVar2 == '\0') {
    FUN_00402fe0(*local_8,local_114);
    FUN_00403fd4(&local_11c,local_114);
    FUN_004040f0(&local_118,3);
    FUN_00403d94(local_118);
  }
  FUN_004ce3d4((int)local_8,(int)local_c);
  iVar3 = FUN_00403224(local_c,(int)&PTR_FUN_004e9cf4);
  *(undefined1 *)(local_8 + 10) = *(undefined1 *)(iVar3 + 0x28);
  iVar3 = FUN_00403224(local_c,(int)&PTR_FUN_004e9cf4);
  FUN_00403e04(local_8 + 0xb,*(undefined4 **)(iVar3 + 0x2c));
  iVar3 = FUN_00403224(local_c,(int)&PTR_FUN_004e9cf4);
  FUN_00403e04(local_8 + 0xc,*(undefined4 **)(iVar3 + 0x30));
  *in_FS_OFFSET = pcStack_134;
  FUN_00403dd4(&local_11c,2);
  FUN_00403dd4(&local_14,2);
  return;
}

