/*
 * FUN_004b9bb0 at 004b9bb0
 * undefined __register FUN_004b9bb0(int param_1, VARIANT * param_2)
 * Address ranges: 004b9bb0-004b9c22;004b9c71-004b9c93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004b9bb0(int param_1,VARIANT *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int local_c;
  int local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_c = 0;
  puStack_28 = &LAB_004b9c94;
  puStack_2c = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_2c;
  puStack_30 = (undefined1 *)0x4b9be4;
  local_8 = param_1;
  FUN_004b7464();
  puStack_30 = (undefined1 *)0x4b9be9;
  FUN_004b6e60();
  puStack_34 = &LAB_004b9c23;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  piVar1 = *(int **)(local_8 + 0xc);
  puStack_30 = &stack0xfffffffc;
  iVar2 = (**(code **)(*piVar1 + 0x24))();
  FUN_00406b9c(iVar2);
  FUN_004b6e4c();
  *in_FS_OFFSET = piVar1;
  uStack_38 = 0x4b9c7e;
  FUN_004b7468(param_2,&local_c);
  *in_FS_OFFSET = puStack_34;
  puStack_2c = &LAB_004b9c9b;
  puStack_30 = (undefined1 *)0x4b9c93;
  FUN_004b748c(&local_c);
  return;
}

