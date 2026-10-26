/*
 * FUN_0050a480 at 0050a480
 * undefined __register FUN_0050a480(uint * param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * Address ranges: 0050a480-0050a527
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0050a480(uint *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  uint *local_8;
  
  local_14 = 0;
  local_10 = 0;
  puStack_18 = (undefined1 *)0x50a499;
  local_8 = param_1;
  FUN_004041e4((int)param_1);
  puStack_1c = &LAB_0050a528;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  FUN_005017d8(*(int *)(param_4 + -4),&local_10);
  local_c = FUN_00404030(local_10);
  FUN_005018b8(*(int *)(param_4 + -4),local_8);
  (**(code **)(**(int **)(param_4 + -4) + 200))(*(int **)(param_4 + -4),local_c);
  FUN_005017d8(*(int *)(param_4 + -4),&local_14);
  uVar1 = FUN_00404030(local_14);
  (**(code **)(**(int **)(param_4 + -4) + 0xc4))(*(int **)(param_4 + -4),uVar1);
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0050a52f;
  puStack_1c = (undefined1 *)0x50a51f;
  FUN_00403dd4(&local_14,2);
  puStack_1c = (undefined1 *)0x50a527;
  FUN_00403db0((int *)&local_8);
  return;
}

