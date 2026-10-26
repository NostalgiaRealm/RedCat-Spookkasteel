/*
 * FUN_004b02c4 at 004b02c4
 * undefined __register FUN_004b02c4(undefined * param_1)
 * Address ranges: 004b02c4-004b0333
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004b02c4(undefined *param_1)

{
  DWORD DVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  uint local_10;
  bool local_9;
  undefined *local_8;
  
  puStack_14 = (undefined1 *)0x4b02d5;
  local_8 = param_1;
  FUN_004041e4((int)param_1);
  puStack_18 = &LAB_004b0334;
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
  puStack_14 = &LAB_004b033b;
  puStack_18 = (undefined1 *)0x4b0333;
  FUN_00403db0((int *)&local_8);
  return;
}

