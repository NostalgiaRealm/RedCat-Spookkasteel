/*
 * FUN_004857c8 at 004857c8
 * undefined __register FUN_004857c8(void)
 * Address ranges: 004857c8-004857f2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004857c8(void)

{
  int iVar1;
  int in_stack_00000004;
  
  iVar1 = *(int *)(*(int *)(in_stack_00000004 + -4) + 0x208);
  if (iVar1 != 0) {
    FUN_00402800(iVar1);
    *(undefined4 *)(*(int *)(in_stack_00000004 + -4) + 0x208) = 0;
  }
  return;
}

