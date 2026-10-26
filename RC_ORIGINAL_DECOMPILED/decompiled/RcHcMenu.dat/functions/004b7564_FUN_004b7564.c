/*
 * FUN_004b7564 at 004b7564
 * undefined __register FUN_004b7564(int param_1, int param_2)
 * Address ranges: 004b7564-004b75c6;004b7615-004b762a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004b7564(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined *puStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_c;
  int local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_c = 0;
  puStack_20 = &LAB_004b762b;
  puStack_24 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_24;
  puStack_28 = (undefined1 *)0x4b7590;
  local_8 = param_1;
  FUN_00406ab8(&local_c,*(int **)(param_2 + 0xc));
  puStack_28 = (undefined1 *)0x4b7595;
  FUN_004b6e60();
  puStack_2c = &DAT_004b75c7;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  piVar1 = *(int **)(local_8 + 0xc);
  puStack_28 = &stack0xfffffffc;
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  FUN_00406b9c(iVar2);
  FUN_004b6e4c();
  *in_FS_OFFSET = piVar1;
  *in_FS_OFFSET = puStack_2c;
  puStack_24 = &LAB_004b7632;
  puStack_28 = (undefined1 *)0x4b762a;
  FUN_00406aa0(&local_c);
  return;
}

