/*
 * FUN_0048259c at 0048259c
 * undefined __register FUN_0048259c(int param_1)
 * Address ranges: 0048259c-0048261d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0048259c(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_1c;
  undefined1 local_18;
  int local_14;
  undefined1 local_10;
  undefined4 *local_c;
  int local_8;
  
  puStack_20 = &stack0xfffffffc;
  puStack_2c = &stack0xfffffffc;
  local_c = (undefined4 *)0x0;
  puStack_24 = &LAB_00482643;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  *(undefined1 *)(param_1 + 0x44) = 1;
  puStack_30 = &LAB_0048261e;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  local_1c = *(undefined4 *)(param_1 + 8);
  local_18 = 0xb;
  local_14 = *(int *)(param_1 + 0x4c) + 1;
  local_10 = 0;
  local_8 = param_1;
  FUN_0040a894((byte *)"%s_%d",&local_1c,1,(int *)&local_c);
  FUN_00482170(local_8,local_c);
  *in_FS_OFFSET = uStack_34;
  *(undefined1 *)(local_8 + 0x44) = 0;
  return;
}

