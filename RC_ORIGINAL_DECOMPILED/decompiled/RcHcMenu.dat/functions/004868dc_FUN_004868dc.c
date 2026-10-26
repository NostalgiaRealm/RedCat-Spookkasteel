/*
 * FUN_004868dc at 004868dc
 * undefined __register FUN_004868dc(void)
 * Address ranges: 004868dc-00486964
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004868dc(void)

{
  int iVar1;
  char *pcVar2;
  int in_stack_00000004;
  
  iVar1 = FUN_0046f000(*(int *)(*(int *)(in_stack_00000004 + 8) + 0x74),
                       **(ushort **)(in_stack_00000004 + 0x10) - 1);
  pcVar2 = FUN_004867c8(*(undefined1 **)(iVar1 + 0xc));
  FUN_0040a170((char *)(*(int *)(in_stack_00000004 + 0x10) + 0x167),pcVar2);
  pcVar2 = FUN_004867c8(*(undefined1 **)(iVar1 + 0x10));
  FUN_0040a170((char *)(*(int *)(in_stack_00000004 + 0x10) + 0x2168),pcVar2);
  pcVar2 = FUN_004867c8(*(undefined1 **)(iVar1 + 0x14));
  FUN_0040a170((char *)(*(int *)(in_stack_00000004 + 0x10) + 0x41e9),pcVar2);
  pcVar2 = FUN_004867c8(*(undefined1 **)(iVar1 + 0x14));
  FUN_0040a170((char *)(*(int *)(in_stack_00000004 + 0x10) + 0x4169),pcVar2);
  return;
}

