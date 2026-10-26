/*
 * FUN_004d5ac8 at 004d5ac8
 * undefined __register FUN_004d5ac8(void)
 * Address ranges: 004d5ac8-004d5b38
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004d5ac8(void)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  int iVar1;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  byte *local_10;
  int local_c;
  int *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (int *)0x0;
  local_c = 0;
  local_10 = (byte *)0x0;
  puStack_18 = &LAB_004d5b5b;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_24 = (undefined1 *)0x4d5af1;
  iVar1 = in_stack_00000004;
  (**(code **)(**(int **)(in_stack_00000004 + -4) + 0x5c))
            (*(int **)(in_stack_00000004 + -4),&local_10);
  puStack_24 = (undefined1 *)0x4d5afc;
  FUN_00409690(local_10,&local_c);
  puStack_24 = (undefined1 *)0x4d5b04;
  local_8 = (int *)FUN_004d56d8(local_c,extraout_EDX,extraout_ECX,iVar1);
  puStack_24 = &LAB_004d5b39;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  FUN_004d58f0(local_8,extraout_EDX_00,iVar1,in_stack_00000004);
  *in_FS_OFFSET = uStack_28;
  puStack_24 = (undefined1 *)0x4d5b38;
  FUN_00403094(local_8);
  return;
}

