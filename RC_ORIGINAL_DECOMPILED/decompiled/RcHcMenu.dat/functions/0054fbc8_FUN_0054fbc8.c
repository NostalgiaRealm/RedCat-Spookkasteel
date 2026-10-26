/*
 * FUN_0054fbc8 at 0054fbc8
 * undefined __register FUN_0054fbc8(int * param_1)
 * Address ranges: 0054fbc8-0054fcff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0054fbc8(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  int local_118;
  byte local_114 [256];
  int local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  int *local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_118 = 0;
  local_10 = (undefined4 *)0x0;
  local_14 = 0;
  local_c = (undefined4 *)0x0;
  puStack_120 = &LAB_0054fd00;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  local_8 = param_1;
  FUN_00402fe0(*param_1,local_114);
  FUN_00403fd4(&local_14,local_114);
  FUN_004040f0((int *)&local_10,3);
  puVar1 = local_10;
  uVar2 = FUN_004a418c();
  FUN_004a48b8(uVar2,puVar1,2);
  iVar3 = FUN_00404030(local_8[9]);
  if (iVar3 < 1) {
    FUN_004040f0((int *)&local_c,3);
  }
  else {
    FUN_004040f0((int *)&local_c,3);
  }
  uVar4 = FUN_00409dd0((undefined *)local_c);
  if ((char)uVar4 == '\0') {
    *(undefined1 *)(local_8 + 8) = 0;
    FUN_0040407c(&local_118,(undefined4 *)"unable to load music : ",local_c);
    iVar3 = local_118;
    iVar5 = FUN_004a418c();
    FUN_004a4ba4(iVar5,iVar3);
  }
  else {
    FUN_0049804c(local_8[4],(undefined *)local_c);
    *(undefined1 *)(local_8 + 8) = 1;
  }
  *in_FS_OFFSET = &DAT_0054fd4c;
  FUN_00403db0(&local_118);
  FUN_00403dd4(&local_14,3);
  return;
}

