/*
 * FUN_004584b0 at 004584b0
 * undefined __register FUN_004584b0(undefined * param_1)
 * Address ranges: 004584b0-0045851f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004584b0(undefined *param_1)

{
  DWORD DVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  uint local_10;
  bool local_9;
  undefined *local_8;
  
  puStack_14 = (undefined1 *)0x4584c1;
  local_8 = param_1;
  FUN_004041e4((int)param_1);
  puStack_18 = &LAB_00458520;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  local_10 = FUN_00409de0(local_8);
  if (local_10 == 0xffffffff) {
    local_9 = false;
  }
  else if ((local_10 & 1) == 1) {
    local_10 = local_10 & 0xfffffffe;
    DVar1 = FUN_00409df4(local_8,local_10);
    local_9 = DVar1 == 0;
  }
  else {
    local_9 = true;
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00458527;
  puStack_18 = (undefined1 *)0x45851f;
  FUN_00403db0((int *)&local_8);
  return;
}

