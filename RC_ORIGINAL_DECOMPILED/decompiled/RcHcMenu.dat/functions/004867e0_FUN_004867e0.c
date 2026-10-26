/*
 * FUN_004867e0 at 004867e0
 * undefined __register FUN_004867e0(void)
 * Address ranges: 004867e0-004868cc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004867e0(void)

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
  puStack_18 = &LAB_004868cd;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_00403fe0((int *)&local_8,(char *)(*(int *)(in_stack_00000004 + 0x10) + 0x127),0x20);
  iVar1 = FUN_00472108(*(int *)(in_stack_00000004 + 8),local_8);
  if ((iVar1 != 0) &&
     (((*(char *)(iVar1 + 0x39) != '\0' || (*(int *)(iVar1 + 0x78) != 0)) ||
      (*(int *)(iVar1 + 0x74) != 0)))) {
    pcVar2 = FUN_004867c8(*(undefined1 **)(iVar1 + 0x78));
    FUN_0040a170((char *)(*(int *)(in_stack_00000004 + 0x10) + 0x167),pcVar2);
    pcVar2 = FUN_004867c8(*(undefined1 **)(iVar1 + 0x74));
    FUN_0040a170((char *)(*(int *)(in_stack_00000004 + 0x10) + 0x2168),pcVar2);
    pcVar2 = FUN_004867c8(*(undefined1 **)(iVar1 + 0x7c));
    FUN_0040a170((char *)(*(int *)(in_stack_00000004 + 0x10) + 0x41e9),pcVar2);
    pcVar2 = FUN_004867c8(*(undefined1 **)(iVar1 + 0x7c));
    FUN_0040a170((char *)(*(int *)(in_stack_00000004 + 0x10) + 0x4169),pcVar2);
    *(uint *)(*(int *)(in_stack_00000004 + 0x10) + 0x4269) =
         -(uint)(*(char *)(iVar1 + 0x39) != '\0');
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004868d4;
  puStack_18 = (undefined1 *)0x4868cc;
  FUN_00403db0((int *)&local_8);
  return;
}

