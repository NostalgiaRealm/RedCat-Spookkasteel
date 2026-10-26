/*
 * FUN_004f62dc at 004f62dc
 * undefined __register FUN_004f62dc(int * param_1, int param_2)
 * Address ranges: 004f62dc-004f6338
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f62dc(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  int iVar3;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_004f6339;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  iVar3 = param_2;
  FUN_00432714(param_2,&local_8);
  iVar1 = local_8;
  iVar2 = FUN_004f5a64(param_2);
  FUN_00413c0c((int *)param_1[0x84],iVar2,iVar1,iVar3);
  (**(code **)(*param_1 + 0xc0))();
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004f6340;
  puStack_18 = (undefined1 *)0x4f6338;
  FUN_00403db0(&local_8);
  return;
}

