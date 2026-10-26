/*
 * FUN_004bbf00 at 004bbf00
 * undefined __register FUN_004bbf00(int param_1, undefined4 * param_2)
 * Address ranges: 004bbf00-004bbf46;004bbf95-004bbf9a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004bbf00(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)0x4bbf11;
  FUN_004b6e60();
  puStack_1c = &LAB_004bbf47;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  FUN_00404474(param_2);
  piVar1 = *(int **)(param_1 + 0xc);
  iVar2 = (**(code **)(*piVar1 + 0x20))();
  FUN_00406b9c(iVar2);
  FUN_004b6e4c();
  *in_FS_OFFSET = piVar1;
  return;
}

