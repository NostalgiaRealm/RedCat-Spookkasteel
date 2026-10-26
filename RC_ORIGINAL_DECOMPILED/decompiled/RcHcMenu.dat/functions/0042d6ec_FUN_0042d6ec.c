/*
 * FUN_0042d6ec at 0042d6ec
 * undefined __register FUN_0042d6ec(int param_1, int * param_2)
 * Address ranges: 0042d6ec-0042d760
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0042d6ec(int param_1,int *param_2)

{
  int *in_FS_OFFSET;
  int iStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  HANDLE local_14;
  ushort local_e;
  HANDLE local_c;
  int local_8;
  
  puStack_1c = (undefined1 *)0x42d700;
  local_8 = param_1;
  FUN_0042d304(param_1);
  puStack_20 = &LAB_0042d761;
  iStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_24;
  puStack_1c = &stack0xfffffffc;
  FUN_0042d2bc(local_8);
  local_14 = (HANDLE)0x0;
  (**(code **)(*param_2 + 0x5c))(param_2,&local_e,&local_c);
  SetClipboardData((uint)local_e,local_c);
  if (local_14 != (HANDLE)0x0) {
    SetClipboardData(9,local_14);
  }
  *in_FS_OFFSET = (int)&local_14;
  puStack_20 = &LAB_0042d768;
  iStack_24 = 0x42d760;
  FUN_0042d2d8(local_8);
  return;
}

