/*
 * FUN_0042d668 at 0042d668
 * undefined __register FUN_0042d668(int param_1, int param_2)
 * Address ranges: 0042d668-0042d6dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0042d668(int param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  HANDLE local_14;
  ushort local_e;
  HANDLE local_c;
  int local_8;
  
  puStack_1c = (undefined1 *)0x42d67c;
  local_8 = param_1;
  FUN_0042d304(param_1);
  puStack_20 = &LAB_0042d6dd;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  FUN_0042d2bc(local_8);
  local_14 = (HANDLE)0x0;
  FUN_0041f094(param_2,&local_e,&local_c,&local_14);
  SetClipboardData((uint)local_e,local_c);
  if (local_14 != (HANDLE)0x0) {
    SetClipboardData(9,local_14);
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0042d6e4;
  puStack_20 = (undefined1 *)0x42d6dc;
  FUN_0042d2d8(local_8);
  return;
}

