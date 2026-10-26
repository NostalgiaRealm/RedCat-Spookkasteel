/*
 * FUN_0044af7c at 0044af7c
 * undefined __register FUN_0044af7c(void)
 * Address ranges: 0044af7c-0044afc5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0044af7c(void)

{
  LRESULT LVar1;
  int in_stack_00000004;
  
  LVar1 = CallWindowProcA(*(WNDPROC *)(*(int *)(in_stack_00000004 + -4) + 0x25c),
                          *(HWND *)(*(int *)(in_stack_00000004 + -4) + 0x23c),
                          **(UINT **)(in_stack_00000004 + -8),
                          *(WPARAM *)(*(int *)(in_stack_00000004 + -8) + 4),
                          *(LPARAM *)(*(int *)(in_stack_00000004 + -8) + 8));
  *(LRESULT *)(*(int *)(in_stack_00000004 + -8) + 0xc) = LVar1;
  return;
}

