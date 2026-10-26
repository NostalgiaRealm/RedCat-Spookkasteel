/*
 * FUN_00488584 at 00488584
 * uint __register FUN_00488584(void)
 * Address ranges: 00488584-004885cc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_00488584(void)

{
  uint uVar1;
  int iVar2;
  int in_stack_00000004;
  
  iVar2 = *(int *)(*(int *)(in_stack_00000004 + -4) + 0x20);
  if (iVar2 != 0) {
    uVar1 = FUN_0046f1dc(*(int *)(*(int *)(in_stack_00000004 + -8) + 0x240),*(int *)(iVar2 + 0x240))
    ;
    return uVar1 ^ 1;
  }
  iVar2 = FUN_0041300c(*(int *)(*(int *)(in_stack_00000004 + -8) + 0x240));
  return CONCAT31((int3)((uint)iVar2 >> 8),0 < iVar2);
}

