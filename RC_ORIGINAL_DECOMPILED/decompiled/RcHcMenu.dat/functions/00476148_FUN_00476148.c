/*
 * FUN_00476148 at 00476148
 * undefined __register FUN_00476148(int param_1, int param_2)
 * Address ranges: 00476148-004761e6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00476148(int param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined4 uStack_11c;
  undefined1 *puStack_118;
  undefined1 *puStack_114;
  undefined4 local_108 [64];
  undefined *local_8;
  
  puStack_114 = &stack0xfffffffc;
  local_8 = (undefined *)0x0;
  puStack_118 = &LAB_004761e7;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  iVar1 = FUN_00404030(param_2);
  if (iVar1 < 0x100) {
    FUN_00403e48((int *)&local_8,param_2);
  }
  else {
    FUN_00404238(param_2,1,0xff,(int *)&local_8);
  }
  uVar3 = 1;
  puVar2 = FUN_004041f4(local_8);
  (**(code **)(**(int **)(param_1 + 4) + 0x248))(*(int **)(param_1 + 4),puVar2,local_108);
  iVar1 = FUN_00404030((int)local_8);
  FUN_004760d8(param_1,1,local_108,iVar1 + 1);
  *in_FS_OFFSET = uVar3;
  puStack_118 = &LAB_004761ee;
  uStack_11c = 0x4761e6;
  FUN_00403db0((int *)&local_8);
  return;
}

