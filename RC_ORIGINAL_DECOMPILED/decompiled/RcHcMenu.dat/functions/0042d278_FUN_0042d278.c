/*
 * FUN_0042d278 at 0042d278
 * undefined __register FUN_0042d278(int param_1)
 * Address ranges: 0042d278-0042d2af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0042d278(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = (undefined1 *)0x42d287;
  local_8 = param_1;
  FUN_0042d304(param_1);
  puStack_10 = &LAB_0042d2b0;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  puStack_c = &stack0xfffffffc;
  EmptyClipboard();
  *in_FS_OFFSET = uStack_14;
  puStack_c = &LAB_0042d2b7;
  puStack_10 = (undefined1 *)0x42d2af;
  FUN_0042d2d8(local_8);
  return;
}

