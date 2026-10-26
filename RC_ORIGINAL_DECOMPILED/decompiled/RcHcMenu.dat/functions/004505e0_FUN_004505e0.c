/*
 * FUN_004505e0 at 004505e0
 * undefined __register FUN_004505e0(void)
 * Address ranges: 004505e0-00450629
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004505e0(void)

{
  HDC hDC;
  HICON hIcon;
  int in_stack_00000004;
  tagPAINTSTRUCT local_44;
  
  hDC = BeginPaint(*(HWND *)(*(int *)(in_stack_00000004 + -4) + 0x24),&local_44);
  hIcon = (HICON)FUN_00450cc8(*(int *)(in_stack_00000004 + -4));
  DrawIcon(hDC,0,0,hIcon);
  EndPaint(*(HWND *)(*(int *)(in_stack_00000004 + -4) + 0x24),&local_44);
  return;
}

