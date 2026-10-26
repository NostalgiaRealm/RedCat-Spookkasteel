/*
 * FUN_0046aa44 at 0046aa44
 * undefined __register FUN_0046aa44(int param_1)
 * Address ranges: 0046aa44-0046aad0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046aa44(int param_1)

{
  int *in_FS_OFFSET;
  int iVar1;
  int iStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  byte *local_2c;
  int local_28;
  undefined1 *local_24;
  undefined1 local_20;
  int local_1c;
  undefined1 local_18;
  undefined1 *local_14;
  undefined1 local_10;
  undefined1 *local_c;
  undefined1 local_8;
  
  puStack_34 = &stack0xfffffffc;
  local_28 = 0;
  local_2c = (byte *)0x0;
  puStack_38 = &LAB_0046aad1;
  iStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_3c;
  iVar1 = 0;
  local_24 = &stack0x0000001c;
  local_20 = 3;
  FUN_004692f8(param_1,&local_28);
  local_1c = local_28;
  local_18 = 0xb;
  local_14 = &stack0x00000010;
  local_10 = 3;
  local_c = &stack0x00000004;
  local_8 = 3;
  FUN_00406a48((undefined4 *)PTR_PTR_00572440,(int *)&local_2c);
  FUN_00466e30(local_2c,&local_24,3,iVar1);
  *in_FS_OFFSET = iVar1;
  puStack_38 = &LAB_0046aad8;
  iStack_3c = 0x46aad0;
  FUN_00403dd4((int *)&local_2c,2);
  return;
}

