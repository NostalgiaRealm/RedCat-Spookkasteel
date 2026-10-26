/*
 * FUN_004bb6c4 at 004bb6c4
 * undefined __register FUN_004bb6c4(int param_1)
 * Address ranges: 004bb6c4-004bb703;004bb752-004bb757
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004bb6c4(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)0x4bb6d5;
  FUN_004b6e60();
  puStack_1c = &DAT_004bb704;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  piVar1 = *(int **)(param_1 + 0xc);
  puStack_18 = &stack0xfffffffc;
  iVar2 = (**(code **)(*piVar1 + 0x48))();
  FUN_00406b9c(iVar2);
  FUN_004b6e4c();
  *in_FS_OFFSET = piVar1;
  return;
}

