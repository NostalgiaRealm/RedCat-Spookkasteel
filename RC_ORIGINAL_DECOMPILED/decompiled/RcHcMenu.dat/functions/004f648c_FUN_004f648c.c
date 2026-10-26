/*
 * FUN_004f648c at 004f648c
 * undefined __register FUN_004f648c(int param_1, int param_2)
 * Address ranges: 004f648c-004f64dd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f648c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_004f64de;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_00432714(param_2,&local_8);
  iVar1 = local_8;
  iVar2 = FUN_004f5a64(param_2);
  (**(code **)(**(int **)(param_1 + 0x210) + 0x20))(*(int **)(param_1 + 0x210),iVar2,iVar1);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004f64e5;
  puStack_18 = (undefined1 *)0x4f64dd;
  FUN_00403db0(&local_8);
  return;
}

