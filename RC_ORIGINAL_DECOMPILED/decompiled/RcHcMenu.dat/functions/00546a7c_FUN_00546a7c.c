/*
 * FUN_00546a7c at 00546a7c
 * undefined __register FUN_00546a7c(void)
 * Address ranges: 00546a7c-00546aae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00546a7c(void)

{
  int *piVar1;
  undefined4 extraout_ECX;
  int in_stack_00000004;
  byte bVar2;
  
  bVar2 = *(byte *)(*(int *)(in_stack_00000004 + -4) + 0x42);
  piVar1 = (int *)FUN_00549b80(*(int *)(in_stack_00000004 + -4));
  FUN_004d2358(*(int **)(*(int *)(in_stack_00000004 + -4) + 0x34),piVar1,
               CONCAT31((int3)((uint)extraout_ECX >> 8),
                        *(undefined1 *)(*(int *)(in_stack_00000004 + -4) + 0x41)),bVar2);
  return;
}

