/*
 * FUN_0047cc44 at 0047cc44
 * undefined __register FUN_0047cc44(int param_1)
 * Address ranges: 0047cc44-0047ccb4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0047cc44(int param_1)

{
  LPCSTR pCVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  LPCSTR local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = (LPCSTR)0x0;
  puStack_14 = &LAB_0047ccb5;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  FUN_00432714(*(int *)(param_1 + 0x2d4),(int *)&local_8);
  pCVar1 = local_8;
  iVar2 = FUN_00403224(*(int **)(param_1 + 0x2f0),(int)&PTR_FUN_0047d4c0);
  FUN_00481d74(iVar2,pCVar1);
  (**(code **)(**(int **)(param_1 + 0x2d4) + 0xcc))();
  (**(code **)(**(int **)(param_1 + 0x2d4) + 0xb0))();
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0047ccbc;
  puStack_14 = (undefined1 *)0x47ccb4;
  FUN_00403db0((int *)&local_8);
  return;
}

