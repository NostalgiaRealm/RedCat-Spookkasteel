/*
 * FUN_00483c50 at 00483c50
 * undefined __register FUN_00483c50(int param_1)
 * Address ranges: 00483c50-00483cc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00483c50(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 *local_c [2];
  
  puStack_14 = &stack0xfffffffc;
  local_c[0] = (undefined4 *)0x0;
  puStack_18 = &LAB_00483cc4;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_00482c00(param_1);
  if ((*(char *)(param_1 + 0x66) == '\0') && (*(char *)(param_1 + 0x60) != '\0')) {
    FUN_00406a48((undefined4 *)PTR_LAB_005724b8,(int *)local_c);
    FUN_00466d84(local_c[0],param_1);
  }
  uVar1 = *(undefined4 *)(param_1 + 0x70);
  uVar2 = thunk_FUN_00479435(uVar1);
  FUN_0047fe48(uVar2);
  *in_FS_OFFSET = uVar1;
  FUN_00403db0((int *)local_c);
  return;
}

