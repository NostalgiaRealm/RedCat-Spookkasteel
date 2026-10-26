/*
 * FUN_004a9a10 at 004a9a10
 * undefined __register FUN_004a9a10(int param_1)
 * Address ranges: 004a9a10-004a9a7e;004a9a86-004a9a89
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a9a10(int param_1)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  if (*(short *)(param_1 + 0x52) != 0) {
    puStack_10 = (undefined1 *)0x4a9a24;
    (**(code **)(param_1 + 0x50))(*(undefined4 *)(param_1 + 0x54));
    return;
  }
  puStack_10 = (undefined1 *)0x4a9a3a;
  piVar1 = FUN_0042d958((int *)&PTR_FUN_0042d8bc,'\x01',*(int **)PTR_DAT_005723fc);
  puStack_14 = &LAB_004a9a7f;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  FUN_0043ddb0(piVar1,*(uint **)(*(int *)PTR_DAT_005723fc + 0x44));
  FUN_00403270(piVar1,extraout_EDX,extraout_ECX);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = (undefined1 *)0x4a9a86;
  puStack_14 = (undefined1 *)0x4a9a7e;
  FUN_00403094(piVar1);
  return;
}

