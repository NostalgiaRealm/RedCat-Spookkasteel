/*
 * FUN_00486968 at 00486968
 * undefined __register FUN_00486968(void)
 * Address ranges: 00486968-004869e9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00486968(void)

{
  int iVar1;
  char *pcVar2;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (undefined *)0x0;
  puStack_18 = &LAB_004869ea;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_00403fe0((int *)&local_8,(char *)(*(int *)(in_stack_00000004 + 0x10) + 0x127),0x20);
  iVar1 = FUN_00472108(*(int *)(in_stack_00000004 + 8),local_8);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x80) != 0)) {
    pcVar2 = FUN_004867c8(*(undefined1 **)(iVar1 + 0x80));
    FUN_0040a170((char *)(*(int *)(in_stack_00000004 + 0x10) + 0x167),pcVar2);
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004869f1;
  puStack_18 = (undefined1 *)0x4869e9;
  FUN_00403db0((int *)&local_8);
  return;
}

