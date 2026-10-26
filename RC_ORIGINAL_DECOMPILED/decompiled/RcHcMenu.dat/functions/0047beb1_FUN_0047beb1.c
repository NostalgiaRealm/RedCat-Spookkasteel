/*
 * FUN_0047beb1 at 0047beb1
 * undefined __register FUN_0047beb1(void)
 * Address ranges: 0047beb1-0047bef9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0047beb1(void)

{
  uint uVar1;
  ushort in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  if (in_stack_00000004 != 0) {
    for (uVar1 = 0;
        (*(char *)(in_stack_00000008 + (uVar1 & 0xffff)) != '\0' &&
        ((int)(uVar1 & 0xffff) < (int)(in_stack_00000004 - 1))); uVar1 = uVar1 + 1) {
      *(undefined1 *)(in_stack_0000000c + (uVar1 & 0xffff)) =
           *(undefined1 *)(in_stack_00000008 + (uVar1 & 0xffff));
    }
    *(undefined1 *)(in_stack_0000000c + (uVar1 & 0xffff)) = 0;
  }
  return;
}

