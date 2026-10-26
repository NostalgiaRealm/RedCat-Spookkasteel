/*
 * FUN_004d6728 at 004d6728
 * undefined __register FUN_004d6728(int * param_1, int param_2)
 * Address ranges: 004d6728-004d686d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004d6728(int *param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
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
  undefined4 local_10;
  int local_c;
  int *local_8;
  
  puStack_124 = &stack0xfffffffc;
  local_11c = 0;
  local_120 = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_128 = &LAB_004d686e;
  uStack_12c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_12c;
  puVar1 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if (-1 < param_2) {
    iVar2 = FUN_004d68f0((int)param_1);
    puVar1 = puStack_124;
    if (local_c < iVar2) goto LAB_004d67b6;
  }
  puStack_124 = puVar1;
  FUN_00402fe0(*local_8,local_118);
  FUN_00403fd4(&local_18,local_118);
  pcStack_138 = " Array out of bounds";
  FUN_004040f0(&local_14,3);
  FUN_00403d94(local_14);
LAB_004d67b6:
  piVar3 = (int *)(*(code *)**(undefined4 **)local_8[8])((undefined4 *)local_8[8],local_c);
  uVar4 = FUN_0040320c(piVar3,(int)&PTR_FUN_004ccb54);
  if ((char)uVar4 == '\0') {
    FUN_00402fe0(*local_8,local_118);
    FUN_00403fd4(&local_120,local_118);
    FUN_004040f0(&local_11c,3);
    FUN_00403d94(local_11c);
  }
  piVar3 = (int *)(*(code *)**(undefined4 **)local_8[8])((undefined4 *)local_8[8],local_c);
  local_10 = FUN_00403224(piVar3,(int)&PTR_FUN_004ccb54);
  *in_FS_OFFSET = pcStack_138;
  FUN_00403dd4(&local_120,2);
  FUN_00403dd4(&local_18,2);
  return;
}

