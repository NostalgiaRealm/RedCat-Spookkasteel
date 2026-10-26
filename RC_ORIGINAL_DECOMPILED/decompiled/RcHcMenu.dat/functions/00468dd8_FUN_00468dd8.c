/*
 * FUN_00468dd8 at 00468dd8
 * bool __register FUN_00468dd8(void)
 * Address ranges: 00468dd8-00468e18
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_00468dd8(void)

{
  bool bVar1;
  bool bVar2;
  int in_stack_00000004;
  
  if (*(int *)(*(int *)(in_stack_00000004 + -4) + 0x20) != 0) {
    bVar1 = FUN_00469458(*(int *)(in_stack_00000004 + -8));
    bVar2 = FUN_00469458(*(int *)(*(int *)(in_stack_00000004 + -4) + 0x20));
    return bVar1 != bVar2;
  }
  bVar1 = FUN_00469458(*(int *)(in_stack_00000004 + -8));
  return bVar1;
}

