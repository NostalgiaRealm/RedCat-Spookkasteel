/*
 * FUN_0049d0c4 at 0049d0c4
 * undefined __register FUN_0049d0c4(int * param_1, int param_2)
 * Address ranges: 0049d0c4-0049d1b8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0049d0c4(int *param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
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
  puStack_11c = &LAB_0049d1b9;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  puVar1 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if (param_1[1] != 0) {
    iVar2 = FUN_004234ac(param_1[2],param_2);
    puVar1 = puStack_118;
    if (iVar2 != -1) goto LAB_0049d152;
  }
  puStack_118 = puVar1;
  FUN_00402fe0(*local_8,local_114);
  FUN_00403fd4(&local_14,local_114);
  pcStack_130 = "Cannot remove timer because it is not a valid timer.";
  FUN_004040f0(&local_10,4);
  FUN_00403d94(local_10);
LAB_0049d152:
  if (*(int *)(local_8[2] + 8) == 1) {
    FUN_0040e4b4(local_8 + 1);
    FUN_004234e0((int *)local_8[2],local_c);
  }
  else {
    FUN_004234e0((int *)local_8[2],local_c);
    uVar3 = FUN_0049ccbc((int)local_8);
    iVar2 = FUN_0049cd38((int)local_8);
    FUN_00455658(iVar2,uVar3);
  }
  *in_FS_OFFSET = pcStack_130;
  FUN_00403dd4(&local_14,2);
  return;
}

