/*
 * FUN_00430498 at 00430498
 * bool __register FUN_00430498(void)
 * Address ranges: 00430498-004304d8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_00430498(void)

{
  undefined4 uVar1;
  HWND hWnd;
  HWND hWndParent;
  BOOL BVar2;
  int in_stack_00000004;
  
  uVar1 = FUN_0040320c(*(int **)(in_stack_00000004 + -0x10),(int)&PTR_FUN_0042ebec);
  if ((char)uVar1 != '\0') {
    hWnd = (HWND)FUN_00438988(*(int **)(in_stack_00000004 + -0x14));
    hWndParent = (HWND)FUN_00438988(*(int **)(in_stack_00000004 + -0x10));
    BVar2 = IsChild(hWndParent,hWnd);
    return BVar2 != 0;
  }
  return false;
}

