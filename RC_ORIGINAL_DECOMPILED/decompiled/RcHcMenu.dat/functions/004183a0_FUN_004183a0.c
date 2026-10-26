/*
 * FUN_004183a0 at 004183a0
 * bool __register FUN_004183a0(void)
 * Address ranges: 004183a0-004183ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_004183a0(void)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_EDX;
  bool bVar3;
  int in_stack_00000004;
  
  uVar1 = FUN_00417f94();
  if ((char)uVar1 != '\0') {
    iVar2 = FUN_00410010(*(int **)(*(int *)(*(int *)(in_stack_00000004 + 8) + -4) + 0x20),
                         *(int *)(*(int *)(in_stack_00000004 + 8) + -0xc));
    bVar3 = false;
    if (extraout_EDX == *(int *)(in_stack_00000004 + -4)) {
      bVar3 = iVar2 == *(int *)(in_stack_00000004 + -8);
    }
    return bVar3;
  }
  bVar3 = false;
  if (*(int *)(in_stack_00000004 + -4) == 0) {
    bVar3 = *(int *)(in_stack_00000004 + -8) == 0;
  }
  return bVar3;
}

