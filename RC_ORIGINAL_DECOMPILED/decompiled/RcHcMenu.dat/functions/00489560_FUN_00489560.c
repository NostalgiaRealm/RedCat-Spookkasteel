/*
 * FUN_00489560 at 00489560
 * undefined __register FUN_00489560(int param_1)
 * Address ranges: 00489560-004895e2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00489560(int param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_2c;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_c;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_c = 0;
  puStack_18 = &LAB_004895e3;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  local_8 = 0;
  puVar1 = &stack0xfffffffc;
  if (*(char *)(param_1 + 0x18) != '\0') {
    if (*(char *)(param_1 + 0x24) == '\0') {
      uStackY_2c = *(undefined4 *)(*(int *)(param_1 + 8) + 0x168);
      uVar2 = thunk_FUN_00479ad0(uStackY_2c);
      FUN_0047fe48(uVar2);
      puVar1 = puStack_14;
    }
    else {
      puStack_14 = &stack0xfffffffc;
      FUN_00485234(*(int *)(param_1 + 8),*(int *)(param_1 + 4),*(int *)(param_1 + 0xc),&local_c);
      local_8 = FUN_00404030(local_c);
      puVar1 = puStack_14;
    }
  }
  puStack_14 = puVar1;
  *in_FS_OFFSET = uStackY_2c;
  FUN_00403db0(&local_c);
  return;
}

