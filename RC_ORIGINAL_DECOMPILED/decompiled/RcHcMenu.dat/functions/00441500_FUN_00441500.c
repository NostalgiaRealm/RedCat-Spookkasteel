/*
 * FUN_00441500 at 00441500
 * undefined __register FUN_00441500(int * param_1, int param_2, uint param_3)
 * Address ranges: 00441500-00441549
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00441500(int *param_1,int param_2,uint param_3)

{
  short sVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (undefined *)0x0;
  puStack_18 = &LAB_0044154a;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_00416f68(param_2,(int *)&local_8,param_3);
  sVar1 = FUN_00440b40(local_8);
  FUN_00443020(param_1,sVar1);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00441551;
  puStack_18 = (undefined1 *)0x441549;
  FUN_00403db0((int *)&local_8);
  return;
}

