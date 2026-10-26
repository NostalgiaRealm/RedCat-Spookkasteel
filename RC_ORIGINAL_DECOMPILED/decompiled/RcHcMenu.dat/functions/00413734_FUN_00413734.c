/*
 * FUN_00413734 at 00413734
 * undefined __register FUN_00413734(undefined4 param_1, undefined4 * param_2, undefined4 param_3)
 * Address ranges: 00413734-0041377b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00413734(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  byte *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = (byte *)0x0;
  puStack_1c = &LAB_0041377c;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_00406a48(param_2,(int *)&local_8);
  FUN_004136fc(param_1,local_8,param_3);
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00413783;
  puStack_1c = (undefined1 *)0x41377b;
  FUN_00403db0((int *)&local_8);
  return;
}

