/*
 * FUN_004a833c at 004a833c
 * undefined __register FUN_004a833c(undefined4 * param_1, int * param_2)
 * Address ranges: 004a833c-004a8398;004a83b7-004a83bd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a833c(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c [5];
  int *local_8;
  
  puStack_2c = &stack0xfffffffc;
  puVar3 = local_1c;
  for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  if (DAT_00571974 != '\0') {
    puStack_30 = &LAB_004a8399;
    uStack_34 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_34;
    local_8 = param_2;
    FUN_00406aa0(param_2);
    piVar1 = DAT_00574264;
    iVar2 = (**(code **)(*DAT_00574264 + 0xc))();
    FUN_004a825c(iVar2,0x4a83c8);
    *in_FS_OFFSET = piVar1;
  }
  return;
}

