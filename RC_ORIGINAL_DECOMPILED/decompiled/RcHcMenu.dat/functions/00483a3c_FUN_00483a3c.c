/*
 * FUN_00483a3c at 00483a3c
 * undefined __register FUN_00483a3c(int param_1, undefined * param_2)
 * Address ranges: 00483a3c-00483a8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00483a3c(int param_1,undefined *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  int *in_FS_OFFSET;
  int iStack_28;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_00483a8c;
  puStack_20 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_20;
  iVar1 = *(int *)(param_1 + 0x70);
  puVar2 = &stack0xfffffffc;
  if (iVar1 != 0) {
    FUN_0047faa8(param_2,&local_8);
    uVar3 = thunk_FUN_00479c47(local_8);
    FUN_0047fe48(uVar3);
    iStack_28 = iVar1;
    puVar2 = puStack_18;
  }
  puStack_18 = puVar2;
  *in_FS_OFFSET = iStack_28;
  puStack_20 = &LAB_00483a93;
  FUN_00403db0(&local_8);
  return;
}

