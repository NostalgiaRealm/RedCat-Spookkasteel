/*
 * FUN_004069d8 at 004069d8
 * undefined __register FUN_004069d8(undefined4 * param_1, undefined4 param_2, undefined1 * param_3)
 * Address ranges: 004069d8-00406a3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004069d8(undefined4 *param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  undefined4 *local_8;
  
  puStack_c = &stack0xfffffffc;
  puStack_10 = &LAB_00406a3c;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  local_8 = param_1;
  FUN_0040696c(param_1[1],0,param_3);
  *in_FS_OFFSET = uStack_14;
  puVar1 = DAT_0056f01c;
  if (local_8 == DAT_0056f01c) {
    DAT_0056f01c = (undefined4 *)*local_8;
  }
  else {
    for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
      if ((undefined4 *)*puVar1 == local_8) {
        *puVar1 = *local_8;
        return;
      }
    }
  }
  return;
}

